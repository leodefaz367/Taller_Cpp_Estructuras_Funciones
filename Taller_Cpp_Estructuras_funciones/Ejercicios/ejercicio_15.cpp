#include <iostream>
using namespace std;

int main(){
    int arr[15], sumaP=0, sumaN=0, contP=0, contN=0;
    cout<<"Ingrese 15 numeros: "<<endl;
	for(int i=0;i<15;i++){
        cin>>arr[i];
        if(arr[i]>0){
			sumaP+=arr[i];
			contP++;
		}
        if(arr[i]<0){
		sumaN+=arr[i]; 
		contN++;
		}
    }
	cout<<"Promedio Positivo: "<<sumaP/contP<<endl;
	cout<<"Promedio Negativo: "<<sumaN/contN<<endl;
			
	return 0;
	
}