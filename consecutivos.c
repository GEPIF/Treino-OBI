#include <stdio.h>

void main() {
	int N;
	scanf("%d", &N);
	
	int i, vetor[N];
	
	for(i = 0; i < N; i++) {
		int X;
		scanf("%d", &X);
		vetor[i] = X;
	}
	
	int contador = 1;
	int maior = 0;
	for(i = 1; i < N; i++) {
		// se o atual elemento for igual ao anterior
		if (vetor[i] == vetor[i-1]) {
			contador++;
		} else {
			contador = 1;
		}
		
		if (contador > maior) {
			maior = contador;
		}
	}
	printf("%d\n", maior);
}

// 30 30 30 40 40 40 40 40 30 30 30 30 30 30

