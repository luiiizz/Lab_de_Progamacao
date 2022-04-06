#include <allegro.h>
#include <math.h>

#define TELA_LARGURA 640
#define TELA_ALTURA 480
#define N_DISCOS 3
#define FUNDO makecol(255, 255, 255)
#define ESTRUTURA makecol(128, 76, 25)
#define TRANSPARENTE makecol(255, 0, 255)
#define COR_DISCO makecol(255, 165, 0)
#define BLACK makecol(0, 0, 0)

BITMAP *planoDiscos, *fundo, *buffer, *buttonUp, *buttonDown, *buttonDisabled,
    *spriteDisco[N_DISCOS];
int xa, ya, xButton, yButton;

void reposicionar(BITMAP *planoDiscos, int x, int y, int n)
{
    BITMAP *sprite;
    int x0;
    sprite = spriteDisco[n - 1];
    x0 = xa - sprite->w / 2;
    rectfill(planoDiscos, x0, ya, x0 + sprite->w - 1, ya + 19, TRANSPARENTE);
    draw_sprite(planoDiscos, sprite, x - sprite->w / 2, y);
    xa = x;
    ya = y;
    blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    draw_sprite(buffer, planoDiscos, 0, 0);
    blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    show_mouse(screen);
    rest(5);
}

void mover(int origem, int destino, int n, int discos[])
{
    int i1, i2, xOrigem, yOrigem, xDestino, yDestino,
        altMax, opMover = FALSE;
    while(!key[KEY_ESC] && !opMover)
    {
        if (mouse_b & 1)
            if (mouse_x >= xButton && mouse_x <= xButton + buttonUp->w &&
                mouse_y >= yButton && mouse_y <= yButton + buttonUp->h)
            {
                draw_sprite(fundo, buttonDown, xButton, yButton);
                blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
                draw_sprite(buffer, planoDiscos, 0, 0);
               blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
                show_mouse(screen);
                rest(200);
                draw_sprite(fundo, buttonDisabled, xButton, yButton);
                blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
                draw_sprite(buffer, planoDiscos, 0, 0);
                blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
                show_mouse(screen);
                opMover = TRUE;
            }
            rest(10); // liberar processador durante 10 milissegundos
    }
    if (key[KEY_ESC])
    {
        allegro_exit();
        exit(EXIT_SUCCESS);
    }
    if (origem < destino)
    {
        i1 = origem;
        i2 = destino;
    }
    else
    {
        i1 = destino;
        i2 = origem;
    }
    xa = xOrigem = 180 + 140 * origem;
    ya = yOrigem = 300 - 20 * discos[origem];
    xDestino = 180 + 140 * destino;
    yDestino = 300 - 20 * (discos[destino] + 1);
    altMax = 130 - 30 * (i2 - i1);
    do_line(planoDiscos, xOrigem, yOrigem, xOrigem, 130, n, reposicionar);
    do_line(planoDiscos, xOrigem, 130, xDestino, altMax, n, reposicionar);
    do_line(planoDiscos, xDestino, altMax, xDestino, yDestino, n, reposicionar);
    discos[origem]--;
    discos[destino]++;
    draw_sprite(fundo, buttonUp, xButton, yButton);
    blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    draw_sprite(buffer, planoDiscos, 0, 0);
    blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    show_mouse(screen);
}
void hanoi(int origem, int intermediario, int destino, int n, int discos[])
{
    if (n == 1) mover(origem, destino, n, discos);
    else
    {
        hanoi(origem, destino, intermediario, n - 1, discos);
        mover(origem, destino, n, discos);
        hanoi(intermediario, origem, destino, n - 1, discos);
    }
}

void construaSpriteDisco(int i, BITMAP *spriteDisco[])
{
    int comprimento = (i + 2) * 20;
    spriteDisco[i] = create_bitmap(comprimento, 20);
    rectfill(spriteDisco[i], 0, 0, comprimento, 20, TRANSPARENTE);
    circlefill(spriteDisco[i], 10, 10, 10, COR_DISCO);
    circle(spriteDisco[i], 10, 10, 10, BLACK);
    circlefill(spriteDisco[i], comprimento - 10, 10, 10, COR_DISCO);
    circle(spriteDisco[i], comprimento - 11, 10, 10, BLACK);
    rectfill(spriteDisco[i], 10, 0, comprimento - 10, 20, COR_DISCO);
    hline(spriteDisco[i], 10, 0, comprimento - 10, BLACK);
    hline(spriteDisco[i], 7, 19, comprimento - 8, BLACK);
}

int main(void)
{
    int retorno, k, n, comp, alt, discos[3] = {N_DISCOS, 0, 0};

    // verificar se número de discos é tratável pelo programa
    if (N_DISCOS < 1 || N_DISCOS > 6)
    {
        allegro_message("N_DISCOS fora dos limites de 1 a 6: %d", N_DISCOS);
        allegro_exit();
        exit(EXIT_FAILURE);
    }

    allegro_init();
    install_keyboard();
    install_mouse();
    install_timer();
    set_color_depth(desktop_color_depth());
    retorno = set_gfx_mode(GFX_AUTODETECT_WINDOWED, TELA_LARGURA, TELA_ALTURA, 0, 0);
    if (retorno != 0) {
        allegro_message(allegro_error);
        return 1;
    }

    set_window_title("Hanoi [1 a 6 discos] - pressione Esc para sair do programa");
    // acionar cursor "nativo"
    enable_hardware_cursor();
    select_mouse_cursor(MOUSE_CURSOR_ARROW);
    show_mouse(screen);

    // desenhar fundo
    // a) desenhar a estrutura de pinos
    fundo = create_bitmap(TELA_LARGURA, TELA_ALTURA);
    rectfill(fundo, 0, 0, TELA_LARGURA, TELA_ALTURA, FUNDO);
    rectfill(fundo, 100, 300, 540, 310, ESTRUTURA);
    rectfill(fundo, 175, 160, 185, 300, ESTRUTURA);
    rectfill(fundo, 315, 160, 325, 300, ESTRUTURA);
    rectfill(fundo, 455, 160, 465, 300, ESTRUTURA);
    // b) desenhar botão
    //    http://www.makebutton.com/
    buttonUp = load_bmp("buttonUp.bmp", NULL);
    buttonDown = load_bmp("buttonDown.bmp", NULL);
    buttonDisabled = load_bmp("buttonDisabled.bmp", NULL);
    xButton = 320 - buttonUp->w / 2;
    yButton = 340;
    draw_sprite(fundo, buttonUp, xButton, yButton);

    // construir sprites dos discos e posicionar N_DISCOS discos
    planoDiscos = create_bitmap(TELA_LARGURA, TELA_ALTURA);
    rectfill(planoDiscos, 0, 0, TELA_LARGURA, TELA_ALTURA, TRANSPARENTE);
    n = N_DISCOS;
    for (k = 0; k < N_DISCOS; k++)
    {
        n--;
        construaSpriteDisco(n, spriteDisco);
        comp = spriteDisco[n]->w;
        alt = spriteDisco[n]->h;
        draw_sprite(planoDiscos, spriteDisco[n], 180 - comp / 2,
            300 - (k + 1) * 20);
    }

    buffer = create_bitmap(TELA_LARGURA, TELA_ALTURA);
    blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    draw_sprite(buffer, planoDiscos, 0, 0);
    blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    show_mouse(screen);
    rest(500);

    hanoi(0, 1, 2, N_DISCOS, discos);

    // mostrar imagem do botão desabilitado
    draw_sprite(fundo, buttonDisabled, xButton, yButton);
    blit(fundo, buffer, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    draw_sprite(buffer, planoDiscos, 0, 0);
    blit(buffer, screen, 0, 0, 0, 0, TELA_LARGURA, TELA_ALTURA);
    show_mouse(screen);
 
    while(!key[KEY_ESC]) rest(200);

    allegro_exit();
    return 0;
}
END_OF_MAIN()
