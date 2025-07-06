#include <iostream>
using namespace std;

int main() {
    int m1[4][4];
	int f1=0;
	int f2=0;

	cout << "Ingresa los datos de la m1:\n\n";
	cout << "1) m1 A" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout <<"  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
    cout << "\f1: ";
    cin >> f1;
    cout << "\f2: ";
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
        int m2 = m1[f1][j];
        m1[f1][j] = m1[f2][j];
        m1[f2][j] = m2;
    }

	cout << "\n2) m1 A\n\n";
	for(int i=0;i<4;i++){
		cout << " ";
		for(int j=0;j<4;j++){
		cout<<" "<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	
    return 0;
}

