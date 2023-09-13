#include <stdio.h>
int main(){
	int nota1, nota2;
	int media = 6;
	media = (nota1 + nota2)/2;

	printf("Digite as duas notas:");
	scanf("%d %d", &nota1, &nota2);	
	
	
	if(nota1 >= nota2 && nota1 >= media){
		printf("%d e maior e %d e media", nota1, media);
	}
	if(nota1 <= nota2 && nota1 <= media){
		printf("%d e maior e menor e %d e media", nota2, media);
	}
	else if printf("Voce foi aprovado!\n"){
		
	}else{
		printf("Voce foi reprovado!");
	}
	
	return 0;
	
}
