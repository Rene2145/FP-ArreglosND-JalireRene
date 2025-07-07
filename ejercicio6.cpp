#include <iostream>
using namespace std;
int main() {
	cout << "Ejercicio 6: Intercambio de filas de una matriz(6x6)\n\n";
    int m1[6][6];
    int m2[6][6];
	int f1=0;
	int f2=0;

	cout << "Ingresa los datos de la matriz:\n\n";
	cout << "1) Matriz A" << endl;
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout <<"  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            m2[i][j] = m1[i][j];
        }
    }
	
	    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 3; j++) {  
            int m3 = m1[i][j];
            m1[i][j] = m1[i][5 - j];
            m1[i][5 - j] = m3;
        }
    }

    cout<<"\nResultado:\n\n";
	cout<<"  	Matriz A\t\tMatriz A reflejada\n";
	
	for(int i=0;i<6;i++){
		cout << "  ";
		for(int j=0;j<6;j++){
			cout<<" "<<m2[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<6;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\t\t"<<endl;
	}

	return 0;
}
