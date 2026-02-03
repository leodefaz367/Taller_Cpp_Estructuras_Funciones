#include <iostream>

using namespace std;

int main(){
    int arr[10], suma=0, positivos=0, negativos=0;
    for(int i=0;i<10;i++){
        cin>>arr[i];
        suma+=arr[i];
        if(arr[i]>0) positivos++;
        if(arr[i]<0) negativos++;
    }
    cout<<suma<<endl;
	cout<<suma/10.0<<endl;
	cout<<(positivos*100.0)/10<<endl;
	cout<<(negativos*100.0)/10<<endl;	
	
	return 0;
}