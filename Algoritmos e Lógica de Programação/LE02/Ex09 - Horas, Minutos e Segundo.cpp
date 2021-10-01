#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int h = 0, m = 0, s = 0;
	
	cout << "Este programa solicita o valor de segundos e exibi a quantidade de horas, minutos e segundos correspondentes.\n\n";
	
	cout << "Insira o segundos: ";
	cin >> s;
	
	if (s >= 3600) {
		h = s / 3600;
		s = s - (h * 3600);
	}
	if (s >= 60) {
		m = s / 60;
		s = s - (m * 60);
	}
	
	cout << "O valor inserido correponde a...\n";
	cout << "Formato h/m/s: " << h << ":" << m << ":" << s;	
	
	return 0;
}
