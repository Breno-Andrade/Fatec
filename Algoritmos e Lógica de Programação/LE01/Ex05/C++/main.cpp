#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int a = 0, b = 0,aux = 0;

cout << "Esse programa faz a inversao de valores nas variaveis";

cout << "Insira um numero inteiro: ";
cin >> a;
cout << "Insira outro numero inteiro: ";
cin >> b;
cout << "\nNessa etapa, a variavel A esta com o valor: " <<a<< " e a variavel B esta com o valor: " <<b;

aux = a;
a = b;
b = aux;

cout << "\n\nApos a inversao, a variavel A esta com o valor: " <<a<< " e a variavel B esta com o valor de: " <<b;

	return 0;
}
