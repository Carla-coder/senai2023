#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int x;
	printf("digite tres numeros inteiros:");
	scanf("%d %d %d", &a, &b, &c);
	x = ( a + b ) / c;
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);
	printf(" O resultado da expressão (a + b) / c = %d", x);
	return 0;
}
