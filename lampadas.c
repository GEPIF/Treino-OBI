#include <stdio.h>

void main() {
  int N;
  scanf("%d", &N);
  
  int i, A = 0, B = 0;
  
  for(i = 1; i <= N; i++) { // MAXIMO = 10 ^ 6
    int X;
    scanf("%d", &X);
    
    // Caso X seja 1
    if(X == 1) {
      // Inverte a ordem de A
      if(A == 0) {
        A = 1;
      } else {
        A = 0;
      }
      //
    } else { // Caso X seja 2
      // Inverte a ordem de A
      if(A == 0) {
        A = 1;
      } else {
        A = 0;
      }
      //

      // Inverte a ordem de B
      if(B == 0) {
        B = 1;
      } else {
        B = 0;
      }
      //	
	}
  }
  
  printf("%d\n", A);
  printf("%d\n", B);
}
