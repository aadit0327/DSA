
#include <iostream>
using namespace std;
int main(){
  int arr[8] = {1, 3, 5, 7, 9, 11, 13, 15};
  int target = 18;
  int i=0, j=7;
  while(i<j){
    if(arr[i]+arr[j]==target){
      cout<<i <<" & "<< j<<endl;
      break;
    } else if(arr[i]+arr[j]<target){
      i++;
    } else{
      j--;
    }
  }
  cout<<endl;
  return 0;
}
