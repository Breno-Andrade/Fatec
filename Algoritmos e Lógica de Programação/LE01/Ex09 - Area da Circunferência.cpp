#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float dia = 0, res = 0, pi = 3.14;
cout << "Este programa calcula a area da circunferencia com base no diametro\n\n";
	
cout << "Insira o diametro: ";
cin >> dia;
	
res = dia * pi;
	
cout << "O resultado da circunferencia e de: "<< res;
return 0;
}
