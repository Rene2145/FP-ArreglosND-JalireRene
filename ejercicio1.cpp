#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 1: Multiplicacion de dos matrices\n\n";
	int m1[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	int m2[3][3]={
		{9,8,7},
		{6,5,4},
		{3,2,1}
	};
	int p[3][3]={
		{0,0,0},
		{0,0,0},
		{0,0,0}
	};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for (int k=0;k<3;k++){ 
                p[i][j]+=m1[i][k]*m2[k][j];
            }
		}
	}
	
	cout<<"Multplicando\t\tMultiplicador\t\t  Producto\n\n";
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
		cout<<"\t\t";
		cout<<endl;
	}
	
	return 0;
}
