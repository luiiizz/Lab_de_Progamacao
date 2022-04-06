
def movimentos(n_disco, orig, dest, aux):
    if n_                   disco == 1:
        print("Disco %i, %i ---> %i" %(n_disco, orig, dest))
       # count += 1
    else:
        movimentos(n_disco - 1, orig, aux, dest)
        print("Disco %i, %i ---> %i" %(n_disco, orig, dest))
        #count += 1
        movimentos(n_disco - 1, aux, dest, orig)
    #return count

#count = 0
print(movimentos(3,1,2,3))
