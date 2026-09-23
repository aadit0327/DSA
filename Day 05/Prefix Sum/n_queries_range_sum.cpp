#include <iostream>
using namespace std;
int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6}; 
    int prefixSum=0;
    int prefix[6];
    for(int i=0; i<6; i++){
        prefixSum += arr[i];
        prefix[i]= prefixSum;
    }
    int L, R, result, queries;
    cout<<"Enter number of queries : ";
    cin >> queries;
    for(int q=1; q<=queries; q++){
        cout<<"Enter the range of sum" <<q<<"  : \n";
        cin >> L>>R;
            if(L==0){
                result = prefix[R];
            } else {
                result = prefix[R]-prefix[L-1];
            }
        cout<<"Sum of elements of array from "<<L<<" to "<<R<<" = "<<result<<endl;
    }
    return 0;
}