#include<iostream>
using namespace std;
int main(){
    int n,m,x,y;
    cout<<"Enter rows of martix A : ";
    cin>>n;
    cout<<"Enter Col of Matrix A : ";
    cin>>m;
    cout<<"Enter rows of martix B : ";
    cin>>x;
    cout<<"Enter Col of Matrix B : ";
    cin>>y;
    int a[n][m];
    int b[x][y];
           cout<<" Enter elements of Matrix A: ";
    for(int i=0;i<n;i++){
        cout<<"enter "<<i+1<<" row elements ";
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cout<<" The order of Matrix A is "<<n<<"*"<<m<<"\n";
    for(int i=0;i<n;i++){
        cout<<"|";
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }    

    //////Matrix B//////////
       cout<<"enter Elemnts of Matrix B : ";
    for(int i=0;i<x;i++){
        cout<<"enter "<<i+1<<" row elements ";
        for(int j=0;j<y;j++){
            cin>>b[i][j];
        }
    }
    cout<<" The order of Matrix B is "<<x<<"*"<<y<<"\n";
    for(int i=0;i<x;i++){
        cout<<"|";
        for(int j=0;j<y;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<"|";
        cout<<endl;
    }                    
    
    

    if(m==x){
        int c[n][y];
        int i,j;
        for(int i=0; i<n;i++){
            for(int j=0; j<y; j++){
                c[i][j]=0;
            }
        }
     
        for(int i=0; i<n; i++){
               for(int j=0; j<y; j++){
                   for(int k=0; k<m; k++){
                       c[i][j]+=a[i][k]*b[k][j];
                   }   
            }
        }   
        cout<<" product is "<<endl;
          for(int i=0; i<n;i++){
            cout<<"|";
            for(int j=0; j<y; j++){
               cout<<c[i][j]<<" ";
            }
             cout<<"|"<<endl;
        }
        ///////////////scalar multiplication ////////////
       cout<<"Enter scalar number : ";
       int num;
       cin>>num;
         for(int i=0; i<n;i++){
            for(int j=0; j<y; j++){
                c[i][j]=c[i][j]*num;
            }
        }
                      //////////////print result after scalar multiplication////////////
        cout<<endl<<"After multiplication with scalar "<<num<<" matrix is "<<endl;
          for(int i=0; i<n;i++){
            cout<<"|";
            for(int j=0; j<y; j++){
               cout<<c[i][j]<<" ";
            }
             cout<<"|"<<endl;
        }


        }else{//////////if condition is not satisfiy for multiplication///////
        cout<<" multiplication is not possible because "<<m<<" Is not equal to "<<x;
    }

                 

    return 0;
}