#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int sumMax= INT16_MIN;
    for(int i=0;i<n;i++){
       
        for(int j=i;j<n;j++){
             int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+a[k];
                 cout<<a[k]<<" ";
            }
                 sumMax=max(sumMax,sum);
            cout<<"sum =>"<<sum;
           cout<<"\n";
        }
        cout<<"\n";
    }
    cout<<"Max Sum of an sub array is: "<<sumMax;
    return 0;
}