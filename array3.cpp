#include<iostream>
using namespace std;
int BinarySearch(int array[], int n , int key){
    int s=0;
    int e=n;
    while (s<=e)
    {
        int mid=s+e/2;
        if(array[mid]==key){
             return mid;
        }else if(array[mid]>key){
            e=mid-1;
        }else{
            s=mid+1;
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
    cout<<"enter no which you want to search from an array ";
    cin>>key;
    cout<<BinarySearch(array, n, key);
    return 0;
}