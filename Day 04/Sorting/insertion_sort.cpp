#include <iostream>
using namespace std;
int main(){
    int arr[5] = {7, 4, 9, 2, 5}; 
    int n=5;
    for(int i=1; i<n; i++){
        int key=arr[i]; 
        int j=i-1; 
            while(arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]= key;
        
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}