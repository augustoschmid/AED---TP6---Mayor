/* TP # 6 - Dados un conjunto de valores enteros y positivos determinar e informar el mayor
TOMAS AUGUSTO SCHMID
Última modificación: 25/05/2015

*/


#include <iostream>
using namespace std;

int main() {
int numero, maximo;
numero = 0;
cout << "Ingrese un numero entero mayor que cero." << endl;
cout << "Si ingresa 0 finalizara el programa informando el mayor numero" << endl << endl;
cin >> numero;
	
		while (numero>=0){
			if (numero != 0){
				if (numero > maximo){
					maximo = numero;			
					cin >> numero;
				}
				else{
					cin >> numero;
				}
		
			}
			else
			{
				cout << "El maximo es: " << maximo << endl;
				return 0;
			}
		}		
}
