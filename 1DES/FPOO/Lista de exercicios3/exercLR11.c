#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	int i;
	int j;
	
	printf("Insira um numero:");
	scanf("%d", &a);
	
	printf("Insira um numero:");
	scanf("%d", &b);
	
	printf("Insira um numero:");
	scanf("%d", &c);
	
	printf("Insira um numero:");
	scanf("%d", &d);
	
	printf("Insira um numero:");
	scanf("%d", &e);
	
	printf("Insira um numero:");
	scanf("%d", &f);
	
	printf("Insira um numero:");
	scanf("%d", &g);
	
	printf("Insira um numero:");
	scanf("%d", &h);
	
	printf("Insira um numero:");
	scanf("%d", &i);
	
	printf("Insira um numero:");
	scanf("%d", &j);
	
	
	if(a > b && a > c && a > d && a > e && a > f && a > g && a > h && a > i && a > j){
		printf("%d e o maior numero", a);
	
	}else if(b > c && b > d && b > e && b > f && b > g && b > h && b > i && b > j){
		printf("%d e o maior numero", b);
	
	}else if(c > d && c > e && c > f && c > g && c > h && c > i && c > j){
		printf("%d e o maior numero", c);
	
	}else if(d > e && d > f && d > g && d > h && d > i && d > j){
		printf("%d e o maior numero", d);
	
	}else if(e > f && e > g && e > h && e > i && e > j){
		printf("%d e o maior numero", e);
	
	}else if(f > g && f > h && f > i && f > j){
		printf("%d e o maior numero", f);
	
	}else if(g > h && g > i && g > j){
		printf("%d e o maior numero", g);
	
	}else if(h > i && h > j){
		printf("%d e o maior numero",h);
	
	}else if(i > j){
		printf("%d e o maior numero",i);
	
	}else{
		printf("%d e o maior numero",j);
	}
	
	return 0;
}
