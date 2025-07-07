#include <iostream>
using namespace std;
int main(){
	cout << "Ejercicio 8: Espiral de m1 de una Matriz(5x5)\n\n";
	int m1[5][5];
    int f0 = 0, f4 = 4, c0 = 0, c4 = 4;

	cout << "1) Ingresa los datos de la matriz:\n\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout <<"  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}

	cout<<"\n2) Matriz:\n"<<endl;
	
	for(int i=0;i<5;i++){
		cout << " ";
		for(int j=0;j<5;j++){
			cout<<" "<<m1[i][j]<<" ";
		}
		cout<<endl;
	}

    cout << "\n3) Recorrido en espiral:\n"<< endl;
    cout<<"  ";
    while (f0 <= f4 and c0 <= c4) {
        for (int i =c0; i<=c4; i++) {
            cout<<m1[f0][i]<<" ";
        }
        f0++;
        for (int i=f0; i<=f4; i++) {
            cout<<m1[i][c4]<<" ";
        }
        c4--;
        if (f0 <= f4) {
            for (int i=c4; i>=c0; i--) {
                cout<<m1[f4][i]<<" ";
            }
            f4--;
        }
        if (c0 <= c4) {
            for (int i=f4; i>=f0; i--) {
                cout<<m1[i][c0]<<" ";
            }
            c0++;
        }
    }

    cout << endl;
    return 0;
}
