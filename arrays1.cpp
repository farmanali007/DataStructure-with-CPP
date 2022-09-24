#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int aray[n];
    for(int i=0;i<n;i++){
        cin>>aray[i];
    }
    int max=INT_MIN;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
       if(aray[i]>max){
           max=aray[i];
       }
       if(aray[i]<min){
           min=aray[i];
       }
    }
        cout<<max<<" "<<min;
    return 0;
}