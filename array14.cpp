#include<iostream>
using namespace std;
int main(){
    int num,y=0; 
    int count=0; 
    int array[10]={10,34,23,54,34,76,34,45,42,63};
    cout<<"Enter Number which you want to search from arrays of number : ";
    cin>>num;
    for(int i=0;i<10;i++){
        if(num==array[i]){
             count++;
            y=1;
           
        }
    }
      
    if(y==1){
      cout<<num<<" is exist in array "<<count<<" times ";
    }else{
          cout<<num<<" is not exist in array ";
    }
    return 0;
}