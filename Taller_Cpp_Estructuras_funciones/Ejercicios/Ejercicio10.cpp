#include <iostream>

using namespace std;

int main(){
 	int sumpar=0;
 	int sumimpar=0;
 	for(int i=1; i<=100; i++){
 		cout<<i<<endl;
 		if(i%2==0){
 			sumpar+=i;
		 }
		else{
			sumimpar+=i;
		}
	 }
	if(sumpar>sumimpar){
		cout<<"La suma de numeros pares es mayor: "<<sumpar<<endl;
	}
	else{
		cout<<"La suma de numeros impares es mayor: "<<sumimpar<<endl;
	}	 
	return 0;
}