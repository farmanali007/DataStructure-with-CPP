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

    int row_start=0,row_end=n-1, col_start=0, col_end=m-1;
    while (row_start<=row_end && col_start<=col_end)
    {

        for(int col= row_start; col<=col_end; col++){
        cout<<a[row_start][col]<<" ";
    }
    row_start++;
    for(int row=row_start; row<=row_end; row++){
        cout<<a[row][col_end]<<" ";
    }
        col_end--;
        for(int col=col_end; col>=col_start; col-- ){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        for(int row=row_end; row>=row_start; row--){
            cout<<a[row][col_start]<<" ";
        }
        col_start++;

    }

    return 0;
}