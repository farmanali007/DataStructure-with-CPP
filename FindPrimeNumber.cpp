#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0){
            cout<<"  not prime"<<endl;
            break;
        }else{
              cout<<"   prime"<<endl;
        }
    }
  
    return 0;
}