#include <stdio.h>
#include <string.h>
int main(){

	char n1, n2, n3, status[6];
	int i1, i2, i3;
	char s1, s2, s3;
	int dias;
	
	printf("Insira seu nome:");
	scanf("%s", &n1);
	printf("Insira sua idade:");
	scanf("%d", &i1);
	printf("Digite o sexo (F ou M):");
	scanf("%s", &s1);
	
	printf("Insira seu nome:");
	scanf("%s", &n2);
	printf("Insira sua idade:");
	scanf("%d", &i2);
	printf("Digite o sexo (F ou M):");
	scanf("%s", &s2);
	
	printf("Insira seu nome:");
	scanf("%s", &n3);
	printf("Insira sua idade:");
	scanf("%d", &i3);
	printf("Digite o sexo (F ou M):");
	scanf("%s", &s3);
	
	if(s1 == 'F' && i1 >= 16 && i1 <= 69 && dias > 90)
		strcpy(status,"apto");
	else if(s2 == 'F' && i2 >= 16 && i2 <= 69 && dias > 90)
		strcpy(status,"apto");
	else if(s3 == 'F' && i3 >= 16 && i3 <= 69 && dias > 90)
		strcpy(status,"apto");
	else if(s1 == 'M' && i1 >= 16 && i1 <= 69 && dias > 60)
		strcpy(status,"apto");
	else if(s2 == 'M' && i2 >= 16 && i2 <= 69 && dias > 60)
		strcpy(status,"apto");
	else if(s3 == 'M' && i3 >= 16 && i3 <= 69 && dias > 60)
		strcpy(status,"apto");
	else
		strcpy(status,"inapto");
		
	printf("Nome\tDias\tStatus:\n");
	scanf("%s\t%d\t%s",n1, dias, status);
	printf("Nome\tDias\tStatus:\n");
	scanf("%s\t%d\t%s",n2, dias, status);
	printf("Nome\tDias\tStatus:\n");
	scanf("%s\t%d\t%s",n3, dias, status);
	
	
	return 0;
}
