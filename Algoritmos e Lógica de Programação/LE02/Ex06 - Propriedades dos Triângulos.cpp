#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {	
	int x = 0, y = 0, z = 0;
	
	cout << "Este programa verifica se os tres valores inseridos correspondem a um triagulo, se sim, informa qual a forma do triangulo.\n\n";
	
	cout << "Insira o valor de X: ";
	cin >> x;
	
	cout << "Insira o valor de Y: ";
	cin >> y;
	
	cout << "Insira o valor de Z: ";
	cin >> z;
	
	if (x + y > z && x + z > y && y + z > x) {
		cout << "\nOs valores inseridos correspondem a um triangulo: ";
		if (x == y && x == z){
			cout << "Equilatero.";
		}
		else {
			if (x == y || x == z || y == z) {
				cout << "Isosceles.";
			}
			else {
				cout << "Escaleno. ";
			}
		}
	}
	else {
		cout << "\nOs valores inseridos nao correspondem a um triangulo.";
	}
	return 0;
}
