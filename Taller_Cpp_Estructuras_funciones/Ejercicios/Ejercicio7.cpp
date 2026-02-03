#include <iostream>

using namespace std;

int main(){
	int mul=0;
	int nmul=0;
	for (int i=1; i<=50;i++){
		if(i%3==0){
			mul++;
		}
		else{
			nmul++;		
		}
	}
	cout<<"Multiplos de 3: "<<mul<<endl;
	cout<<"No son multiplos de 3: "<<nmul<<endl;

	return 0;
}