#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int ano = 0, mes = 0, dia = 0, totaldias= 0;

cout << "Esse programa pedira o total de anos, meses e dias no qual voce viveu e exibira o total em dias.\n\n";

cout << "Isira os anos de vida que vc ja viveu: ";
cin >> ano;
cout << "Insira os meses que voce ja viveu: ";
cin >> mes;
cout << "insira os dias que voce ja viveu: ";
cin >> dia;

totaldias = dia + ( ano * 365 )	+ ( mes * 30 );

cout << "O total de dias que voce ja viveu eh de: " << totaldias;
	return 0;
}
