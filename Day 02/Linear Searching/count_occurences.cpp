#include <iostream>
using namespace std;
int countOccurrence(int arr[], int n, int target){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            count++;
        }
    }
    return count;
}

int main(){
    int arr[8] = {4, 8, 2, 8, 10, 8, 3, 8};
    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    int result = countOccurrence(arr, 8, target);
    cout<<"Total count of "<<target<<" in given array is "<<result<<endl;
    return 0;
    
}