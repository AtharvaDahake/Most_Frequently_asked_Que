#include<iostream>
using namespace std;
int eo(int n){
    if(n&1){
        return 0;
    }else{
        return 1;
    }
}
int main(){
    int n;
    cin>>n;
    // if(n % 2 == 0)
        // cout<<"Even";
    // else
        // cout<<"Odd";
    if(eo(n)){
        cout<<"even";
    }else{
        cout<<"odd";
    }return 0;
}
