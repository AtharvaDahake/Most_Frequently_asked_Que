#include<iostream>
using namespace std; 
bool linear(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }return 0;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int key;
    cin>>key ;
    if(linear(arr,n,key)){
        cout<<"key is present ";
    }else{
        cout<<"key is absent ";
    }return 0 ;
}
