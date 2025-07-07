#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 5: Buscar el Máximo y Mínimo de una matriz(4x4)\n\n";
	int m1[4][4];
    int vMax, vMin;
    int fMax = 0, fMin = 0, cMax= 0, cMin = 0;
    
	cout << "Ingresa los datos de la matriz:\n\n";
	cout << "1) Matriz A" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
            
            if (i == 0 and j == 0) {
                vMax = vMin =	 m1[i][j];
            }

            if (m1[i][j] > vMax) {
                vMax = m1[i][j];
                fMax = i;
                cMax = j;
            }

            if (m1[i][j] < vMin) {
                vMin = m1[i][j];
                fMin = i;
                cMin = j;
            }
        }
    }

	cout<<"\n2) Matriz A"<<endl;
	
	for(int i=0;i<4;i++){
		cout << "  ";
		for(int j=0;j<4;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Resultado:\n\n";
    cout<<"  \na) Valor maximo: " << vMax;
	cout<<"\n  i)  Fila:" << fMax;
	cout<<"\n ii)  Columna: " << cMax << endl;
    cout<<"  \nb) Valor minimo: " << vMin;
    cout<<"\n  i) Fila: " << fMin;
	cout<<"\n  ii) Columna: " << cMin << endl;
	return 0;
}
