#include <iostream>
using namespace std;
int main() {
	cout << "Ejercicio 7: Rotación de una Imagen Representada por una Matriz(4x4)\n\n";
    int m1[4][4];
    int r1[4][4];

	cout << "Ingresa los datos de la matriz:\n\n";
	cout << "1) Matriz\n" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout <<"  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
            r1[j][3-i]=m1[i][j];
        }
    }

    cout<<"\n2) Resultado:\n\n";
	cout<<"   Matriz: \t\t Matriz rotada 90 grados en sentido horario:\n";
	
	for(int i=0;i<4;i++){
		cout << "  ";
		for(int j=0;j<4;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<4;j++){
			cout<<" "<<r1[i][j]<<" ";
		}
		cout<<"\t\t"<<endl;
	}

	return 0;
}
