#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,j,sum=0;
    cin>>n;
    j=n;
    while (n>0)
    {
        int lastdigit=n%10;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    if(sum==j){
        cout<<" Armstrong Number ";
    }else{
        cout<<" Not-Armstrong Number ";
    }
    


}