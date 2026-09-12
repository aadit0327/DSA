#include <iostream>
using namespace std;
int main(){
    int arr[5]={10, 25, 7, 42, 18};
    int target;
    cout<<"Enter the target value : ";
    cin>>target;
    bool found = false;
    for(int i=0; i<5; i++){
        if( arr[i]==target ){
            cout<<"Target found at "<<i<<" index"<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout<<"Target not found!"<<endl;
    }
    return 0;

    }
