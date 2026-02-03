#include <iostream>

using namespace std;

int main(){
	int sum=0;
	for (int i=0; i<=10;i++){
		int temp=i*2;
		cout<<temp<<endl;
		sum+=temp;
	}
	cout<<"La suma es de "<<sum;
	return 0;
}