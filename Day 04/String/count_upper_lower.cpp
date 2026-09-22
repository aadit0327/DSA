#include <iostream>
using namespace std;
int main(){
    string s = "AdItYa";
    int upperCase=0, lowerCase=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='A' && s[i]<='Z'){
            upperCase++;
        } else if( s[i]>='a' && s[i]<='z'){
            lowerCase++;
        }
    }
    cout<<"There are total "<<upperCase<<" Uppercase elements in given string"<<endl;
    cout<<"There are total "<<lowerCase<<" Lowercase elements in given string"<<endl;
    return 0;
}