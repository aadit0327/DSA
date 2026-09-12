#include <iostream>
using namespace std;
int main(){
   int arr[5]={5, 2, 8, 1, 9};
   int sum=0;
   for(int i=0; i<5; i++){
    sum+=arr[i];
   }
   cout<<"Sum of the elements of array is "<<sum<<endl;
   return 0;
}