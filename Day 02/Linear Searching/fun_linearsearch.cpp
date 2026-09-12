#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
       for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
       }
       return -1;
};

int main(){
    int arr[5] = {10, 25, 7, 42, 18};
    int target;
    cout<<"Enter the target value : ";
    cin >> target;

    int result = linearSearch(arr, 5, target);
    if(result != -1){
        cout<< "Found at index "<<result<<endl;
    } else {
        cout<< "Not found "<<endl;
    }
    return 0;
}