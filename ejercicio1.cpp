#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 1: Multiplicacion de dos matrices(3x3)\n\n";
	int m1[3][3];
	int m2[3][3];
	int p[3][3];
	
	cout << "Matriz - Multiplicando:" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "[" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	
	cout << "\nMatriz - Multiplicador:" << endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "[" << i << "][" << j << "] = ";
            cin >>m2[i][j];
		}
	}

		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
            p[i][j] = m1[i][j] + m2[i][j];
		}
	}
	
	cout<<"\nRESULTADO:\n\n";
	cout<<"Multiplicando\t\tMultiplicador\t\t  Producto\n\n";
	for(int i=0;i<3;i++){
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
