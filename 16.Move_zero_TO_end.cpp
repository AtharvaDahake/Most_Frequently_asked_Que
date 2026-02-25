#include<iostream>
using namespace std;
void movezeor(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
void movzer(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            arr[i++]=arr[j];
        }
    }
    while(i<n){
        arr[i++]=0;
    }
}
int main(){
    int arr[5]={0,1,0,2,3};
    int n=5;
    movezeor(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    movzer(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
