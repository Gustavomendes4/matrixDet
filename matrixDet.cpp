#include <stdio.h>

int main(){


	int n;
	printf("Informe a ordem:\nn = ");
	scanf("%d",&n);
	
	float matriz[n][n];
	float in;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("\nInfrome M(%d,%d):",i+1,j+1);
			scanf("%f",&in);
			matriz[i][j] = in;
		}
	}
	
	//*/Escreve matriz-------------------------------
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %f ",matriz[i][j]);
		}
		printf("\n");
	} 
	//*/
	
	
	//Transforma matriz em diagonal inferior---------------------
	for(int h = 0; h < n; h++){
		for(int i = h; i < n; i++){
			float div = matriz[i+1][h] / matriz[h][h];
			for(int j = h; j < n; j++){
				matriz[i+1][j] = matriz[i+1][j] - matriz[h][j]*div;
			}
		}
	}
	
	//Calcula determinante----------------------------
	float det = 1;
	for(int i; i < n; i++){
		det = det * matriz[i][i];
	}
	
	//return det;
	
	//*/Imprime matriz nova------------------------------
	printf("\nMatriz novamente:\n");
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf(" %f ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("det: %f",det);
	//*/
	
}
