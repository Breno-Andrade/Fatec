#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
int anos = 0, meses = 0, dias = 0;

cout << "Este programa pedira sua idade em dias e mostrara o total de anos, meses e dias que voce ja viveu.\n";

cout << "insira quantos dias de vida que voce tem: ";
cin >> dias;

meses = dias / 30;
anos = dias / 365;

cout << "Voce ja viveu: " << anos << " anos, isso equivale a: " << meses << " meses e a : " << dias << " dias.";

	return 0;
}
