#include<iostream>
using namespace std;
int linearSearch(int array[],int n , int key){
    for(int i=0;i<n;i++){
          if(array[i]==key){
              return i;
          }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int key;
    cout<<"enter non what you want to search from array ";
    cin>>key;
    cout<<linearSearch(array, n, key);
    int ans = linearSearch(array ,n,key);
    if(ans==-1){
        cout<<"there is no such no exist in this array ";
    }else{
         cout<<array[ans];
    }

    return 0;
}
