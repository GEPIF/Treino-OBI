#include <stdio.h>

void main() {
	// vetor de 3 valores
	// come�ando a partir do 0 e indo ate 2, [0..2]
  	int vetor[3];
  	// [][][]
  	// vetor[0] = 1
  	// [1][][]
  	// vetor[1] = 2
  	// [1][2][]
  	// vetor[2] = 3
  	// [1][2][3]
  	// vetor[0] = 10
  	// [10][2][3]
  	// vetor[2] = 100
  	// [10][2][100]

	// leitura de valores
	// origem ate um limite
	// 1� passagem = "i = 0", i++
	// 2� passagem = "i = 1", i++
	// 3� passagem = "i = 2", i++
	// 4� passagem = "i = 3"
  	for(int i = 0; i < 3; i++) {
  		// declara variavel x
    	int x;
    	// le a variavel x
    	scanf("%d", &x);
    	// i = [0, 3]
    	vetor[i] = x;
  	}
  	
  	// imprime os valores lidos
  	for(int i = 0; i < 3; i++) {
  		// imprime na tela o valor da posicao "i" do vetor
		printf("%d, ", vetor[i]);
  	}
}

