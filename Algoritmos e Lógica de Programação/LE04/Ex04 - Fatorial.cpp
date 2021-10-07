#include <iostream>
#include <math.h>

using namespace std;
 
int main(int argc, char** argv){
	int fat = 1, n = 0, aux = 1;
	
	cout << "Exibe o fatorial de um valor.\n\n";
	
	do {
		cout << "Insira um valor natural menor que 14: ";
		cin >> n;
	} while (n < 0 || n > 14);

	
	while (aux <= n) {
		fat *= aux;
		aux++;
	}

	cout << "O fatorial eh: " << fat;
    return 0;
}
