#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target){
       for(int i=n-1; i>=0; i--){
        if(arr[i] == target){
            return i;
        }
       }
       return -1;
};

int main(){
    int arr[7] = {4, 8, 2, 8, 10, 8, 3};
    int target;
    cout<<"Enter the target value : ";
    cin >> target;

    int result = linearSearch(arr, 7, target);
    cout << result<<endl;
    return 0;
}