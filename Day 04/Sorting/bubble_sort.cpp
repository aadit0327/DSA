#include <iostream>
using namespace std;
int main(){
    int arr[5]={7, 3, 9, 2, 5};
    int i, j, temp;
     for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            if(arr[j]>arr[j+1]){
               temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
        
    }
    cout<<" "<<endl;
    
    
 return 0;  
}