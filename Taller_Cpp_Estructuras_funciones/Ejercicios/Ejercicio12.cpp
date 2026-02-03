#include <iostream>

using namespace std;

int main(){
    int arr[8], mayor, menor;
    for(int i=0;i<8;i++){
    	cout<<"Ingrese 1 numero"<<endl;
        cin>>arr[i];
        if(i==0) mayor=menor=arr[i];
        if(arr[i]>mayor) mayor=arr[i];
        if(arr[i]<menor) menor=arr[i];
    }
    cout<<mayor<<endl;
	cout<<menor<<endl;
	cout<<mayor-menor<<endl;
	return 0;
}