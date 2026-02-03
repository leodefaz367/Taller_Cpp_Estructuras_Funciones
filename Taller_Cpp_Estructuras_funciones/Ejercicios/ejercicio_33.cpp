#include <iostream>
using namespace std;

struct Cliente{
	string nombre;
	int edad;
};

int main(){
    Cliente arr[3];
    for(int i=0;i<3;i++){
    	cout<<"Ingrese el nombre"<<endl;
    	cin>>arr[i].nombre;
    	cout<<"Ingrese la edad"<<endl;
		cin>>arr[i].edad;
	} 
    for(int i=0;i<3;i++){
    	if(arr[i].edad>=18){
    		cout<<arr[i].nombre<<" "<<arr[i].edad<<endl;
		}
	}
	return 0;
}
