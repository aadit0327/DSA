#include <iostream>
using namespace std;
int main(){
    string s = "madam";
    bool isPalindrome = true;
    int i=0, j=s.length()-1;
    while(i<j){
        if(s[i]!=s[j]){
           isPalindrome = false;
        } 
        i++;
        j--;
    }
    if(isPalindrome){
        cout<<s<<" is a palindrome"<<endl;
    } else{
        cout<<s<<" is not a palindrome"<<endl;
    }
    
    return 0;
}