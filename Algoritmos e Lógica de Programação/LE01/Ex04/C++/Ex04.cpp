#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
float altura = 0, raio = 0, volume = 0;

cout << "Este programa calcula o volume que uma lata pode receber\n\n";
	
cout << "Insira a altura da lata: ";
cin >> altura;
cout << "Insira raio da lata: ";	
cin >> raio;	
	
volume = 3.14159 * (raio * raio) * altura;

cout << "O volume que a lata pode suportar e de: " <<volume;
	
	return 0;
}
