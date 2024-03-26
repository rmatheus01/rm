#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	char nomedamateria[3][200];
	float notas[4][3];
	float media[4];
	float soma = 0;
	int i,j;
	
	for (i = 0; i < 4; i++) {
    	printf("Digite o nome do %i aluno: ", i+1);
        scanf("%s",&alunos[i]);
        
        for (j = 0;j < 3; j++) {
        	printf("Digite a %iª nota: ",j+1);
        	scanf("%f",&notas[i][j]);
        	
        	soma += notas[i][j];
		}
		
		media[i] = soma / 3;
		soma = 0;
		
		printf("\n"); // Somente para pular uma linha.
    }
    printf("\n=== Exibindo resultados ===\n");
    for (i = 0; i < 4; i++) {
    	printf("%iª aluno: %s \n", i+1, alunos[i]);
    	
    	
    	for (j = 0; j < 3; j++) {
    		printf("%iª nota: %.1f \n", j+1, notas[i][j]);
    	}
    	
    	printf("Media: %.1f \n", media[i]);
    	
    	printf("\n"); // Somente para pular uma linha.
    }
    
    return 0;
}

