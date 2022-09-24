#include<iostream>
using namespace std;
int main(){
     int a;
     for(int i=0;i<=100;i++){
         if(i%3==0){
             continue;
         }
         cout<<i<<" ";
     }
    
  return 0;
}