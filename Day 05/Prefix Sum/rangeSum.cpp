// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {2, 4, 6, 8, 10};
//     int prefixSum=0, result;
//     int prefix[5];
   
//     for(int i=0; i<5; i++){
//         prefixSum += arr[i];
//         prefix[i] = prefixSum;
//     }
//     for(int i=0; i<5; i++){
//         cout<<prefix[i]<<" ";
//     }
//      int R, L;
//     cout<<"\nEnter the range of sum : \n";
//     cin>> L >>R;
//     if(L==0){
//         result = prefix[R];
//     } else{
//         result = prefix[R]-prefix[L-1];
//     }
//     cout<<"\nSum of elements from "<<L <<" to "<<R<<" = "<<result<<endl;
//     return 0;
// }

#include <iostream>
using namespace std;
int main(){
    int arr[6] = {2, 4, 1, 5, 3, 6};
    int prefixSum=0;
    int prefix[6];
    for(int i=0; i<6; i++){
        prefixSum += arr[i];
        prefix[i]= prefixSum;
    }
    int R, L, result;
    cout<<"Enter the range of sum : \n";
    cin>>L>>R;
    if(L==0){
        result=prefix[R];
    } else{
        result = prefix[R]-prefix[L-1];
    }
    cout<<"Sum of elements of array from "<<L<<" to "<<R<<" = "<<result<<endl;
    return 0;
}