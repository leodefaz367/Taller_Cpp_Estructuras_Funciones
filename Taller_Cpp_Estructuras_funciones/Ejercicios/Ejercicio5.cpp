#include <iostream>

using namespace std;

int main(){
	int num;
	cout<<"Ingrese un numero entero"<<endl;
	cin>>num;
	int sum=0;
	for (int i=1; i<=10;i++){
		int temp=i*num;
		cout<<num <<"*"<< i<<" = "<<temp<<endl;
		sum+=temp;
	}
	cout<<"La suma es de "<<sum;
	return 0;
}