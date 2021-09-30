#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	float nota1 = 0, nota2 = 0, media = 0;
	
	cout << "Este programa solicita duas notas, calcula a media, exibe a media e informa o resulta do semestre\n\n";
	
	cout << "Insira a primeira nota: ";
	cin >> nota1;
	cout << "Insira a segunda nota: ";
	cin >> nota2;
	
	media = (nota1 + nota2)/2;
	
	if (media >= 6){
		cout << "\nSua media eh: "<< media;
		cout << "\nVoce foi aprovado";
	}
	else{
		cout << "\nSua media eh: "<< media;
		cout << "\nVoce foi reprovado";
		}
	
	return 0;
}
