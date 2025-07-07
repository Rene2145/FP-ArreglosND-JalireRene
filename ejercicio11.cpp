#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	cout << "Ejercicio 11:  Simulación de Propagación de Fuego en una Matriz(10x10)\n";
    srand(time(0));
    int m1[10][10];
    int m2[10][10];
    int p[][2] = {{0,-1}, {0,1}, {1,-1}, {1,0}, {1,1}, {-1,-1}, {-1,0}, {-1,1} };


    for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            int r = rand()%10;
            if (r < 7) m1[i][j]=0;         
            else if (r<9) m1[i][j] = 1;   
            else m1[i][j]=2;              
        }
    }
   for (int i=0; i<10; i++) {
        for (int j=0; j<10; j++) {
            if (m1[i][j]==0){
            bool se_quema=false;
            for (int k=0; k<8; k++) {
                int ni=i+p[k][0];
                int nj=j+p[k][1];
                if (ni>=0 and ni<10 and nj>=0 and nj<10) {
                    if (m1[ni][nj]==1) {
                    	se_quema=true;
                    }
                }
            }
            if (se_quema) {
            m2[i][j]=1;
            } else {
                m2[i][j]=0;
            }	
        } else { 
                m2[i][j]=2; 
            }
        }
        }
    cout << "\nBosque inicial:\t\t\t\tBosque despues de la propagacion del fuego:\n";
    for (int i=0; i< 10; i++) {
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

