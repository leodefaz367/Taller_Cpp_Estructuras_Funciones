#include <iostream>
#include <vector>
using namespace std;


struct Cliente{
	string nombre; 
	int edad;
};

int main(){
    vector<Cliente> v;
    int n; 
	cout<<"Ingrese la cantidad de nombres que desea registrar"<<endl;
	cin>>n;
    for(int i=0;i<n;i++){
        Cliente c; 
		cout<<"Ingrese el nombre: "<<endl;
		cin>>c.nombre;
		cout<<"Ingrese la edad"<<endl;
		cin>>c.edad;
        v.push_back(c);
    }
	for(int i=0;i<v.size();i++){
		cout<<"Nombre: "<<v[i].nombre<<" Edad: "<<v[i].edad<<endl;
	}	
	return 0;
}