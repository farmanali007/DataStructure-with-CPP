#include<iostream>
using namespace std;
int main(){
   int array[11]={34,23,12,54,65,76,86,67,99,87,100};
    // cin>>n;
    // int array[n];
    // for(int i=0;i<n;i++){
    //     cin>>array[i];
    // }
    int mx=0;
    int count=0;
    for(int i=0;i<11;i++){
        for(int j=0;j<i;j++){
            mx=max(mx,array[j]);
        }
        if(array[i]>mx && array[i]>array[i+1] || i==10 && array[i]>mx){
            cout<<endl<<array[i]<<" at index: "<<i;
             count++;
        }
        
      
    }
    cout<<endl<<"there are " << count<< " record breaking days " <<endl;
    return 0;
}