#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter rows: ";
    cin>>n;
    cout<<"Enter Col: ";
    cin>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" row elements ";
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<" The order of Matrix is "<<n<<"*"<<m<<"\n";
    for(int i=0;i<n;i++){
        cout<<"|";
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }                    


    cout<<" The order of tranpose => Matrix is "<<m<<"*"<<n<<"\n";
    for(int i=0;i<m;i++){
        cout<<"|";
        for(int j=0;j<n;j++){
            cout<<a[j][i]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }                  

    return 0;
}