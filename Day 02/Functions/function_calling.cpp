#include <iostream>
using namespace std;
int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"Enter any number : ";
    cin>> n;
    cout<<"Square of "<<n <<" is "<<square(n)<<endl;
    return 0;

}