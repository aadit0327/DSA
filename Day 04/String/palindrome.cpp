#include <iostream>
using namespace std;
int main(){
    string s;
    cout<<"Enter any string : ";
    cin>>s;
    string originalString = s;
    string reversedString = "";
    for(int i=s.length()-1; i>=0; i--){
        reversedString += s[i];
    }
        if(originalString == reversedString){
        cout<<originalString<<" is a palindrome"<<endl;
    } else{
        cout<<originalString<<" is not a palindrome"<<endl;
    }

    return 0;
}