#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 9: Cuadrado latino de orden N\n\n";
	int m1[60][60];
	int N;
	cout <<"1) Ingresa el orden de la matriz:\n\n";
	cout<<"  ";
	cin>>N;
	
   for (int j=0; j<N; j++) {
        m1[0][j] = j+1;
    }
    
   for (int i=1; i<N; i++) {
        for (int j=0; j<N; j++) {
            m1[i][j]=m1[i-1][(j+N-1)%N];  
        }
    }

    cout <<"\n2) Cuadrado latino de orden "<< N <<":\n"<<endl;
    for (int i=0; i<N; i++) {
    	cout<<"  ";
        for (int j=0; j<N; j++) {
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
