#include <iostream>
using namespace std;
int main(){
    string s= "banana";
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='a'){
            count++;
        }

    }
    cout<<count<<endl;
    return 0;
}