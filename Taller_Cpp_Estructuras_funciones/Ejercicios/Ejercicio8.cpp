#include <iostream>

using namespace std;

int main(){
 	int num[10];
 	for(int i=0;i<10;i++){
 		cout<<"Ingrese un numero"<<endl;
 		cin>>num[i];
 		if(num[i]>0){
 			cout<<"Positivo"<<endl;
		 }
		else if(num[i]==0){
			cout<<"Es cero"<<endl;
		} 
		else {
			cout<<"Negativo"<<endl;
		}
	 }
	return 0;
}