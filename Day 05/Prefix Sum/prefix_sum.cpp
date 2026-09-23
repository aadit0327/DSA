#include <iostream>
using namespace std;
int main(){
    int arr[4] = {3, 5, 2, 6};
    int prefixSum=0;
    for(int i=0; i<4; i++){
         prefixSum+=arr[i];
         cout<<prefixSum<<" ";
     }
     cout<<endl;
     return 0;

}