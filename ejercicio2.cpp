#include <iostream>
using namespace std;
int main(){
	int m1[3][3];
	int v;
	cout << "Ingresa los datos de la matriz(3x3):\n\n";
	cout << "1) Matriz (3x3)" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	for(int i=0;i<3;i++){
		cout << "  ";
		for(int j=0;j<3;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
	}
	cout << "\nValor a buscar: ";
    cin >> v;
    
    cout << "\nEl valor " << v << " se encuentra en:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (m1[i][j] == v) {
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
	if(!v){
	cout << "El valor no se encuentra en la matriz.\n";
	}
    
    return 0;
}
