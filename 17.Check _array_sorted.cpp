#include<iostream>
using namespace std;
bool sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            return 0;
        }
    }return 1;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    if(sort(arr,n)){
        cout<<"yes";
    }else{
        cout<<"no";
    }return 0;
}
