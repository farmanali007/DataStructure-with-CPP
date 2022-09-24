#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            int c=i+j;
            int a=c%2;
            if(a==0){
                cout<<1;
            }else{
                cout<<0;
            }


        }
        cout<<endl;
    }
    return 0;
}