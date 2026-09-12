#include <iostream>
using namespace std;
int greaterThanTarget(int arr[], int n, int target){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]>target){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[8] = {4, 8, 2, 8, 10, 8, 3, 8};
    int target;
    cout<<"Enter the value of target : ";
    cin>>target;
    int result = greaterThanTarget(arr, 8, target);
    cout<<"There are total "<<result<<" number of elements greater than "<<target<<endl;
    return 0;
}