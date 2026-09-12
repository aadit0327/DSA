// 5 2 8 1 9
#include <iostream>
using namespace std;
int main(){
    int arr[5]={5, 2, 8, 1, 9};
    int minimum = arr[0];
    for(int i=1; i<5; i++){
        if(arr[i]< minimum){
            minimum = arr[i];
        }
    }
        cout<<minimum<<" is the smallest element"<<endl;
        return 0; 
    }
    
    
