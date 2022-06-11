#include <stdio.h>
#include <vector>

using namespace std;

int main() {
	
	vector<int> vetor;
	
	vetor.push_back(1);
	vetor.push_back(2);
	vetor.push_back(3);
	
	vetor.pop_back();
	
	const int TAMANHO = vetor.size();
	
	for (int i = 0; i < TAMANHO; i++) {
		printf("%d, ", vetor[i]);
	}
	printf("\n\n");
}

