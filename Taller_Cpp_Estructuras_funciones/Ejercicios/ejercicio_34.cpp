#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
	string nombre;
	int edad;
};

int main(){
    vector<Cliente> v;
    int n; 
	cout<<"Ingrese el tamanio"<<endl;
	cin>>n;
	Cliente c;
    for(int i=0;i<n;i++){
		cout<<"Nombre: ";
		cin>>c.nombre;
		cout<<"Edad: ";
		cin>>c.edad;
        v.push_back(c);
    }
    ofstream archivo("clientes.txt");
    for(int i=0; i<v.size();i++){
    	archivo<<v[i].nombre<<" "<<v[i].edad<<"\n";
	}
    archivo.close();
    
    string buscar; 
	cout<<"Ingrese nombre a buscar: "<<endl;
	cin>>buscar;
    ifstream archLeer("clientes.txt"); 
	string nom; 
	int edad;
    while(archLeer>>nom>>edad){
        if(nom==buscar){
		cout<<edad<<"\n"; 
		break;
		}
    }
    archLeer.close();
    
    return 0;
}
