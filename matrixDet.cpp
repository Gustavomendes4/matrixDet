#include <stdio.h>

int main(){


	int n;
	printf("Informe a ordem:\nn = ");
	scanf("%d",&n);
	float matriz[n][n];
	float det = 1;
	
	//Solicita valores para matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\nInfrome M(%d,%d):",i+1,j+1);
			scanf("%f",&matriz[i][j]);
		}
	}
	
	//Escreve matriz
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %.2f ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	//Caso o fato [0,0] seja igual a 0
		if(matriz[0][0] == 0){
			float matrizAux[n][n];
			int m = 1;
			
			//procura uma linha com pivo diferente de 0
			for(int i=1; i < n;i++){
				if(matriz[m][0] != 0){
					i = n; //break
				}
				else{
					m++;
				}
			}
			//caso nao encontre, det = 0
			if(m == 0){
				det = 0;
			}
			else{
				//Copia matriz em matrizAux
				for(int i = 0; i < n; i++){
					for(int j = 0; j < n; j++){
						matrizAux[i][j] = matriz[i][j];
					}
				}
				
				//Salva na linha 0 os valores da linha M
				for(int i = 0; i < n; i++){
					matrizAux[0][i] = matrizAux[m][i];
				}
				
				//Salva na linha M os valores da linha 0
				for(int i = 0; i < n; i++){
					matrizAux[m][i] = matriz[0][i];
				}	
				
				
				//Copia a nova matriz na original
				for(int i = 0; i < n; i++){
					for(int j = 0; j < n; j++){
						matriz[i][j] = matrizAux[i][j];
					}
				}
				
				//Inverte as ultimas colunas, para manter o sinal
				for(int i = 0; i < n; i++){
					matrizAux[i][n-1] = matrizAux[i][n-2];
				}
				for(int i = 0; i < n; i++){
					matrizAux[i][n-2] = matriz[i][n-1];
				}
				
				//Copia a nova matriz na original
				for(int i = 0; i < n; i++){
					for(int j = 0; j < n; j++){
						matriz[i][j] = matrizAux[i][j];
					}
				}
			}
		}
	//Escreve matriz
	printf("\nMatriz ajustada:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %.2f ",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	//Transforma matriz em diagonal inferior
	for(int h = 0; h < n; h++){
		for(int i = h; i < n; i++){
			float div = matriz[i+1][h] / matriz[h][h];
			for(int j = h; j < n; j++){
				matriz[i+1][j] = matriz[i+1][j] - matriz[h][j]*div;
			}
		}
	}
	
	//Calcula determinante
	for(int i; i < n; i++){
		det = det * matriz[i][i];
	}
	if(n ==0)det = 0;
	
	//Imprime matriz nova
	printf("\nMatriz novamente:\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %.2f ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("det: %.3f",det);
}
