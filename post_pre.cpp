#include<iostream>
using namespace std;
int main(){
    int i=1;
    int a=i++ + ++i;
    cout<<a<<endl;
    int b=2,c=1,d=3;
    int e=b++ + ++c + ++d + ++b + c++ + d++;
    cout<<e;
    return 0; 
}