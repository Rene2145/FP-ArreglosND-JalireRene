#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	cout << "Ejercicio 10: Generador de Tablero de Buscaminas en una Matriz(10x10)\n";
    srand(time(0));
    int m1[10][10];
    int m2[10][10];
    int p[][2] = {{0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}, {-1,-1}, {-1,0}, {-1,1} };

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (rand()%5== 0) {
                m1[i][j]=1; 
            } else {
                m1[i][j]=0; 
            }
        }
    }

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            int cont=0;
            for (int k=0; k<8; k++) {
                int ni=i+p[k][0];
                int nj=j+p[k][1];
                if (ni>=0 and ni<10 and nj>=0 and nj<10) {
                    if (m1[ni][nj] == 1) {
                        cont++;
                    }
                }
            }
            m2[i][j] = cont;
        }
    }

    cout << "\n1) Tableros Generados:\n"<< endl;
    cout << "  Original con minas:\t\t\tNumeros lado a lado:\n\n";
    for (int i = 0; i < 10; i++) {
    	cout << "  ";
        for (int j = 0; j < 10; j++) {
            if (m1[i][j] == 1) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << "\t\t\t";
        for (int j=0; j<10; j++) {
            cout << m2[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}

