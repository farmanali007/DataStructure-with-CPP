#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int a[n1];
    int b[n2];
    cout<<endl<<" enter your first array "<<endl;
    for(int i=0;i<n1;i++){
        cin>>a[n1];
    }
    cout<<endl<<" enter your second array "<<endl;
    for(int j=0;j<n2;j++){
        cin>>b[n2];
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(a[i]==b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    return 0;
}