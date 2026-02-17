#include<iostream>
using namespace std ;
int reverse(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n=n/10;
    }return rev;
}
int main(){
    int n;
    cin >>  n;
    int ans = reverse(n);
    cout<<ans;
    return 0;
}
