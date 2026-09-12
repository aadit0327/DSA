#include <iostream>
using namespace std;
int main(){
    int arr[5]={5, 2, 8, 1, 9};
    int maximum = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    // cout<<maximum;
    int minimum = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    // cout<<minimum;
    cout<<"Difference of maximum and minimum elements of array is "<< maximum - minimum <<endl;
    return 0;
}