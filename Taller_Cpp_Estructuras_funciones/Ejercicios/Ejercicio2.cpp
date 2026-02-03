#include <iostream>

using namespace std;

int main(){

	int num;
	
	cout<<"Ingrese un numero dentro de 10-50"<<endl;
	cin>>num;
	if(num>=10 && num<=50){
		cout<<"El numero esta dentro del rango"<<endl;
	}
	
	else if (num<10){
		cout<<"El numero es menor que 10"<<endl;
	}
	else {
		cout<<"El numero es mayor que 50"<<endl;		
	}
	return 0;
}