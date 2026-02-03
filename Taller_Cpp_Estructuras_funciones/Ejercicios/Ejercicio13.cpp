#include <iostream>

using namespace std;
int main(){
    int arr[12], sumaP=0, sumaI=0;
    cout<< "Ingrese 12 numeros"<<endl;
    for(int i=0;i<12;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
        	sumaP+=arr[i];	
		} 
        else{
        	sumaI+=arr[i];	
		}
    }
    cout<<"Suma pares"<<sumaP<<endl;
	cout<<"Suma Impares"<<sumaI<<endl;
    if(sumaP>sumaI){
    	cout<< sumaP<<"Pares mayor"<<endl;
	}
	else{
    	cout<< sumaI<<"Impares mayor"<<endl;		
	}
	
	return 0;
}
