#include <iostream>
using namespace std;
int main(){
    int arr[7] = {5, 2, 8, 1, 9, 6, 4};
    int count=0;
    for(int i=0; i<7; i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    cout<<"There are "<<count<<" even elements in given array"<<endl;
    return 0;
}