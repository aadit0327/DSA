#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numbers = {1, 2, 3, 4, 6, 8, 9};
    int target = 10;
    int i=0, j=6;
    while(i<j){
        if(numbers[i]+numbers[j]==target){
            cout<<i<<", "<<j<<endl;
            i++;
            j--;        
        } else if(numbers[i]+numbers[j]<target){
            i++;
        } else {
            j--;
        }  
    }
    return 0;
}