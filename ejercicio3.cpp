#include <iostream>
using namespace std;
int main(){
	int m1[4][4];
	int sd1=0;
	int sd2=0;
	
	cout << "1) Matriz A" << endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << "  [" << i << "][" << j << "] = ";
            cin >>m1[i][j];
		}
	}
	
	
	cout << "\n2) Matriz A\n\n";
	for(int i=0;i<4;i++){
		cout << "  ";
		for(int j=0;j<4;j++){
		cout<<" "<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	
	for(int i=0;i<4;i++){
	sd1+=m1[i][i];
	sd2+=m1[i][3-i];
	}


	cout<<"\nResultado:\n";
	cout<<"La suma de las dos diagonales es "<<sd1+sd2;

	return 0;
}
