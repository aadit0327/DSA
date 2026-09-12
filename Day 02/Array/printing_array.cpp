#include <iostream>
using namespace std;
int main(){
    int i, n;
    cout<<"Enter the number of elements of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of  array : \n";
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Entered array is - ";
    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
