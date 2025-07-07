#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	cout << "Ejercicio 12: Juego de la Vida de Conwayen en una Matriz(10x10)\n";
    srand(time(0));
    int m1[10][10];
    int m2[10][10];
    int p[][2] = {{0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}, {-1,-1}, {-1,0}, {-1,1} };
	
srand(time(0));
    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            m1[i][j]=rand()%2;
        }
    }

    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            int cv=0;
	            for (int k=0; k<8; k++) {
	                int ni=i+p[k][0];
	                int nj=j+p[k][1];
	                if (ni>=0 and ni<10 and nj>=0 and nj<10) {
	                    if (m1[ni][nj]==1) {
	                    	cv++;
	                	}
	                }
	            }
            if (m1[i][j]==1) {
                if (cv<2 or cv>3)
                    m2[i][j] = 0;
                else
                    m2[i][j] = 1;
            } else {
                if (cv==3)
	                m2[i][j]=1;
	        	else  
	                m2[i][j]=0; 
	        }
	    }
	}
    cout <<"\n1) Tableros Generados:\n"<< endl;
    cout <<"\n\t\t   -- Proxima generacion  -->\n";
    cout <<"\n     Tablero Inicial:\t\t\tSegunda Gneracion:\n\n";
    for (int i=0; i< 10; i++) {
    	cout << "   ";
    	for (int j=0; j<10; j++) {
        cout << m1[i][j] <<" ";
        }
    	cout << "\t\t\t";
        for (int j=0; j<10; j++) {
            cout <<m2[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}

