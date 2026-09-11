#include <iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter the marks of student : ";
    cin>>marks;
    if(marks>=90){
         cout<<"Grade A"<<endl;
    } else if(marks<=89 && marks>=75){
        cout<<"Grade B"<<endl;
    } else if(marks<=74 && marks>=60){
        cout<<"Grade C"<<endl;
    } else{
        cout<<"Grade D"<<endl;
    }
    return 0;
}