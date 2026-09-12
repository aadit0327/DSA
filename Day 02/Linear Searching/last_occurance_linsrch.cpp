#include <iostream>
using namespace std;
int lastOccurence(int arr[], int n, int target){
     int lastFound=-1;
       for(int i=0; i<n; i++){
        if(arr[i] == target){
            lastFound = i;
        }
       }
       return lastFound;;
};

int main(){
    int arr[7] = {4, 8, 2, 8, 10, 8, 3};
    int target;
   
    cout<<"Enter the target value : ";
    cin >> target;

    int result = lastOccurence(arr, 7, target);
    cout << result<<endl;
    return 0;
}