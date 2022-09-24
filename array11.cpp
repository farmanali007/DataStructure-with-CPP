#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int mx=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            mx=max(mx,array[j]);
        }
        if(array[i]>mx && array[i]>array[i+1] || i==n-1 && array[i]>mx){
              cout<<array[i]<<" ";
        }
        
      
    }
    return 0;
}