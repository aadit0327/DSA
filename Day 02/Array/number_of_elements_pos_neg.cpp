#include <iostream>
using namespace std;
int main(){
    int arr[7] = {-2, 5, 0, -7, 3, 0, 8};
    int positiveCount=0, negativeCount=0, zeroCount=0;
    for(int i=0; i<7; i++){
        if(arr[i]>0){
            positiveCount++;        
    } 
    else if(arr[i]<0){
        negativeCount++;
    }
    else{
        zeroCount++;
    }
}
cout<<"There are "<<positiveCount<<" positive elements"<<endl;
cout<<"There are "<<negativeCount<<" negative elements"<<endl;
cout<<"There is "<<zeroCount<<" zero element"<<endl;
return 0;

}