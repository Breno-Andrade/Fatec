#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int num = 0, res = 0;
	
	cout << "Este programa mostra o resto da divisao de um numero por 6\n\n";
	
	cout << "insira o numero no qual deseja saber o resto da divisao por 6: ";
	cin >> num;
		
	res = num % 6 ;
		
	cout << "O resto da divisao por 6 eh: "<< res;	
return 0;
}
