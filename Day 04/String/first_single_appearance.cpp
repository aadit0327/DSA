#include <iostream>
using namespace std;
int main(){
    string s = "programming";
    for(int i=0; i<s.length(); i++){
        int freq=0;
        for(int j=0; j<s.length(); j++){
            if(s[i]==s[j]){
                freq++;
            }
        }
        if(freq==1){
    cout<<s[i];
    break;
    }
    }
    cout<<endl;
    
    return 0;
}