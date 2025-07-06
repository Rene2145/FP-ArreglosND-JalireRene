#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 1: Producto de dos matrices(3x3)\n\n";
	int m1[3][3];
	int m2[3][3];
	int p[3][3];
	
	cout << "Ingresa los datos para cada matriz:\n\n";
	cout << "1) Matriz - Multiplicando" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
            p[i][j] = 0;
        }
    }
	cout << "\n2) Matriz - Multiplicador" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "  [" << i << "][" << j << "] = ";
            cin >>m2[i][j];
		}
	}

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k = 0; k < 3; k++) {
        		p[i][j] += m1[i][k] * m2[k][j];
        	}
		}
	}
	
	cout<<"\nResultado:\n\n";
	cout<<"  Multiplicando\t\tMultiplicador\t\t  Producto\n";
	
	for(int i=0;i<3;i++){
		cout << "  ";
		for(int j=0;j<3;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<" "<<m2[i][j]<<" ";
		}
		cout<<"\t\t";
		for(int j=0;j<3;j++){
			cout<<" "<<p[i][j]<<" ";
		}
		cout<<"\t\t"<<endl;
	}

	return 0;
}
