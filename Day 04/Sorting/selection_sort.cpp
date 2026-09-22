#include <iostream>
using namespace std;
int main(){
    int arr[5]={7, 4, 9, 2, 5};
    int n=5, temp;
    for(int i=0; i<n; i++){
        int minIndex=i;
    
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
            
        }
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;

    }
    
    for(int i=0; i<n; i++){
            cout<<arr[i];
    }
        cout<<endl;
        return 0;
}