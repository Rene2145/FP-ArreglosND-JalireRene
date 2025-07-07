#include <iostream>
using namespace std;
int main() {
	cout << "Ejercicio 4: Intercambio de filas de una matriz(4x4)\n\n";
    int m1[4][4];
    int m2[4][4];
	int f1=0;
	int f2=0;

	cout << "Ingresa los datos de la matriz:\n\n";
	cout << "1) Matriz A" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout <<"  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            m2[i][j] = m1[i][j];
        }
    }
	cout << "\n2) Filas de 0 a 3 que desees intercambiar:\n";    
	cout << "\n  i. Fila -> ";
    cin >> f1;
    cout << "  ii. Fila -> ";
    cin >> f2;

    if ( f1 == f2 < f1 < 0 and f1 > 3 and f2 < 0 and f2 > 3 ) {
        cout << "\nError, no esta en las filas del 0 al 3" << endl;
        return 1;
    }
    
    if ( f1 == f2 ) {
        cout << "\nError, las filas son las mismas" << endl;
        return 1;
    }
    
    for (int j = 0; j < 4; j++) {
        int m3 = m1[f1][j];
        m1[f1][j] = m1[f2][j];
        m1[f2][j] = m3;
    }
    cout<<"\nResultado:\n\n";
	cout<<"    Matriz A\t\t  Matriz A'\n";
	
	for(int i=0;i<4;i++){
		cout << "  ";
		for(int j=0;j<4;j++){
			cout<<" "<<m2[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<4;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\t\t"<<endl;
	}

	return 0;
}
