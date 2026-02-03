#include <iostream>

using namespace std;

int main(){
 	int num[15];
 	int sum=0;
 	int nsum=0;
 	for(int i=0;i<15;i++){
 		cout<<"Ingrese un numero"<<endl;
 		cin>>num[i];
 		if(num[i]>=20&&num[i]<=80){
 			sum++;
		 }
		else {
			nsum++;
		}
		
	 }
	cout<<"Hay "<<sum<<" numeros dentro del rango y "<<nsum<<" fuera del rango"<<endl; 
	return 0;
}