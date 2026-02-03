#include <iostream>
using namespace std;

int main(){
    int mat[2][4], mayor, fila=0, col=0;
    cout<<"Ingrese los numeros de las matrices"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cin>>mat[i][j];
            if(i==0 && j==0){
            	mayor=mat[i][j];
			}
            if(mat[i][j]>mayor){
				mayor=mat[i][j]; 
				fila=i; 
				col=j;}
        }
    }
    cout<<"Mayor: "<<mayor<<endl;
	cout<<"Fila: "<<fila<<endl;
	cout<<"Columna"<<col<<endl;
}
