#include <iostream>

using namespace std;
int main(){
    int arr[10], aprob=0, repro=0;
    double suma=0;
    cout<< "Ingrese 10 notas"<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        suma+=arr[i];
        if(arr[i]>=7){
        	aprob++;
		} 
        else{
        	repro++;
		}
    }
    cout<<"Promedio: "<<suma/10<<endl;
	cout<<"Aprobados: "<<aprob<<endl;
	cout<<"Reprobados: "<<repro<<endl;
	
	return 0;
}
