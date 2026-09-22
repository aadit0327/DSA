#include <iostream>
using namespace std;
int main(){
    string s = "hello world";
    int i=0;
    while(i<s.length()){
        if(s[i] != ' '){
            cout<<s[i];
           
        } else{
        
        }
        i++;
        
    }
    cout<<endl;
    return 0;
}