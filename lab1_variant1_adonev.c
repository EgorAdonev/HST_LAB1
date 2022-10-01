#include <stdio.h>

int main(){
	int** matA;
    int** matB;
    int** res_matrix;	
	for(i = 0;i < M;i++){
		for(j = 0;j < K;j++){
			res_matrix[i][j] = 0;
			for(k = 0; k < N ;k++){
				res_matrix[i][j] += matA[i][k]*matB[k][j];
			}
		}
    }
}