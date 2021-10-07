#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n = 0, primo = 0;
	
	cout << "Exibe se o valor inserido eh primo ou nao.\n\n";
	
	do {
		
	cout << "insira um valor: ";
	cin >> n;
	
	} while(n <= 1);
	
	for (int cont = 1; n >= cont; cont++){
		if ((n % cont) == 0){
			primo++;
		}
	}
	if (primo > 2){
		cout << "Nao e primo.";
	}
	else{
		cout << "Eh primo.";
	}
	
	return 0;
}
