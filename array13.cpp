#include<iostream>
using namespace std;
int main(){
    int sum=0,j,i;
    int a[9]={3,4,5,12,13,37,78,9,71};
     for( i=0;i<9;i++){
       sum=sum+a[i];
         if(sum==a[i+1] && a[i+1>a[i+2]]){
             cout<<a[i+1]<<" is Lucky Number\n";
         }
     }
         return 0;
}