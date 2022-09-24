#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
            for(int k=1;k<=n-i;k++){
                cout<<"  ";
            }
            for(int p=1;p<=n;p++){
                cout<<"* ";
            }
        cout<<endl;
    }
////////////////Another Logic/////////////////////

           cout<<endl<<endl;

     for(i=1;i<=n;i++){
            for(int k=i;k<=n;k++){
                cout<<"  ";
            }
            for(int p=1;p<=n;p++){
                cout<<"* ";
            }
        cout<<endl;
    }
    return 0;
}