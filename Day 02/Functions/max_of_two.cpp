#include <iostream>
using namespace std;
int maxOfTwo(int a, int b){
    if(a>b)
    return a;
    if(b==a)
    return b;
    else 
    return b;
};
int main(){
    int a, b;
    cout<<"Enter any two numbers : ";
    cin>>a>>b;
    cout<<"Max among these two numbers is "<<maxOfTwo(a, b)<<endl;
    return 0;
}