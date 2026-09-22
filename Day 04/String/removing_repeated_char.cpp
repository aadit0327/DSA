#include <iostream>
using namespace std;
int main(){
    string s = "programming";
    
  
    for(int i=0; i<s.length(); i++){
        char key=s[i];
        bool isRepeated = false;
        for(int j=i-1; j>=0; j--){
            if(key==s[j]){
                isRepeated = true;
                break;
            }
            
        }
        if(isRepeated == false){
            cout<<s[i];
        }
        
    }
    cout<<endl;
    return 0;
    }
