#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cont = 1, mp = 0, aux = 0, mf = 0, n1 = 0, n2 = 0, n3 = 0;
	
	cout << "Solicita a nota de 50 alunos e calcula a media de cada um, no final, exibe a media geral da turma.";
	
	cout << "\n\n=================================";
	while (cont <= 50) {
		cout << "\n\nInsira a primeira nota: ";
		cin >> n1;
		cout << "Insira a segunda nota: ";
		cin >> n2;
		cout << "Insira a terceira nota: ";
		cin >> n3;
		
		mp = (n1 * 2 + n2 * 4 + n3 * 4) / 10;
		
		cout << "\nMedia final do aluno: " << mp;
		
		if (mp >= 7) {
			cout << "\nResultado: Aprovado.";
		}
		else{
			cout << "\nResultado: Reprovado.";
		}
		aux = aux + mp;
		
		cout << "\n\n=================================";
		cont = cont + 1;
	}	
	
	mf = aux / 50;
	
	cout << "\n\nMedia final da turma: "<< mf;
	return 0;
}
