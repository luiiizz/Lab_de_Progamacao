#include<iostream>


main(){
	
	int a, *b;
	a = 10;
	b = &a;
	
	printf("%p %p", &*b,*&b);
}
