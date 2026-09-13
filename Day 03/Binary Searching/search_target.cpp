#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
    int start=0;
    int end=n-1;
    while( start <= end){
        int mid = (start+end)/2;

        if(arr[mid]== target){
        return mid;
        } else if( target > arr[mid]){
            start = mid+1;
        } else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[7]={2, 5, 8, 12, 15, 20, 25};
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    int result = binarySearch(arr, 7, target);
    if(result!=-1){
        cout<<target<<" is found at index "<<result<<endl;
    } else{
        cout<<target<<" is not found"<<endl;
    }

    return 0;
}

