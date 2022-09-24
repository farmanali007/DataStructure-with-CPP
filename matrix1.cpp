#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter rows: ";
    cin>>row;
    cout<<"Enter Col: ";
    cin>>col;
    int a[row][col];

    for(int i=0;i<row;i++){
        cout<<"enter "<<i+1<<" row elements ";
        for(int j=0;j<col;j++){
            cin>>a[i][j];
        }
    }
    cout<<" The Matrix is\n";
    for(int i=0;i<row;i++){
        cout<<"|";
        for(int j=0;j<col;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }
      int n;
      int y=0,count=0;
      cout<<"\n Enter Element which you want to search from matrix : ";
      cin>>n;
      for(int i=0;i<row;i++){
          for(int j=0; j<col;j++){
              if(a[i][j]==n){
                 y=1;
                 count++;
              }
          }
      }
      if(y==1){
                cout<<" Yes " <<n<<" is exist in matrix ";
                cout<<count<<" times ";
      }else{
          cout<<"NO "<<n<<" is not exist in  matrix ";
      }
 

    return 0;
}