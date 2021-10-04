#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int i = 0, a = 0, b = 0, c = 0;
		
	
	cout << "Este organiza os valores inseridos do modo escolhido pelo usuário.\n\n";
	
	cout << "Insira o valor de A: ";
	cin >> a;
	cout << "Insira o valor de B: ";
	cin >> b;
	cout << "Insira o valor de C: ";
	cin >> c;
	
	cout << "\n===================== ESCOLHAS =====================";
	cout << "\nDigite 1 para exibir os valores em ordem crescente.";
	cout << "\nDigite 2 para exibir os valores em ordem decrescente.";
	cout << "\nDigite 3 e o maior ficara entre os demais valores.\n";
	cout << "====================================================\n";
	
	cout << "\nInsira o valor que representa sua escolha: ";
	cin >> i;
	
	if (i == 1) {													// Se I for igual a 1 então...
		cout << "\nOrdem crescente: ";								// Exibir em ordem crescente
		if (a > b) {												// Se A for maior que B...
			if (a > c) {											// A for maior que C...
				if (b > c) {										// e B for maior que C então...
					cout << c << " / " << b << " / " <<  a;		 	// C sera o menor valor e A o maior.
				}	
				else {												// B n�o for maior que c ent�o...
					cout << b << " / " << c << " / " <<  a;			// B sera o menor valor e A o maior.
				}		
			}
			else{													// A n�o for maior que C ent�o...
				cout << b << " / " << a << " / " <<  c;				// B sera o menor valor e C o maior.
			}
		} 
		else{														// A n�o for maior que B
			if (b > c) {											// Se B for maior que C...
				if(c > a){											// e C for maior que A ent�o...
					cout << a << " / " << c << " / " <<  b;			// A sera o menor valor e B sera o maior.
				}
				else{												// C n�o for maior que A ent�o...
					cout << c << " / " << a << " / " <<  b;			// C sera o menor valor e B o maior.
				}
			}
			else {													// B n�o for maior que C ent�o...
				cout << a << " / " << b << " / " <<  c;				// A sera o menor valor e C o maior.
			}
		}	
	}
	else {															
		if (i == 2) {												// Se I for igual a 2 ent�o...
			cout << "\nOrdem decrescente: ";						// Exibir em ordem decrescente
			if (a > b) {											// Repetir a logica anterior porem...
				if (a > c) {										// inverter a ordem de exibi��o das variaveis.	
					if (b > c) {									
						cout << a << " / " << b << " / " << c;		
					}	
					else {											
						cout << a << " / " << c << " / " <<  b;	
					}
				}
				else {
					cout << c << " / " << a << " / " << b;
				}
			}
			else {
				if (a > c) {
					cout << b << " / " << a << " / " << c;
				}
				else {
				 	if (b > c) {
				 		cout << b << " / " << c << " / " << a;
					 }
					 else {
					 	cout << c << " / " << b << " / " << a;
					 }
				 }
			}
		}
		else {
			if (i == 3) {
				cout << " \nOrdem na qual o maior fica entre os demais: ";	//Exibindo de forma que o maior fique entre os dois
				if (a > b) {												// Repetir a logica anterior porem...
					if (a > c) {											// alterar a ordem de exibi��o das variaveis.	
						if (b > c) {									
							cout << c << " / " << a << " / " << b;		
						}	
						else {
							cout << b << " / " << a << " / " << c;		
						}
					}
					else {
						cout << b << " / " << c << " / " << a;
					}
				}
				else {
					if (a > c) {
						cout << c << " / " << b << " / " << a;
					}
					else {
				 		if (b > c) {
				 			cout << a << " / " << b << " / " << c;
					 	}
					 	else {
					 		cout << a << " / " << c << " / " << b;
						 }
				 	}
				}
			}	
		}
	}
	return 0;
}
