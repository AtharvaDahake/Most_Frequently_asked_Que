#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original = n;
    int rev = 0;

    while (n > 0) {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }

    if (original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
// for array ans string 
#include<iostream>
using  namespace std ;
bool palindrome(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return 0;
        }else{
            start++;
            end--;
        }
    }return 1;
}
int main(){
    int arr[5]={1,2,3,2,1};
    if(palindrome(arr,5)){
        cout<<"is p";
    }else{
        cout<<"not p";
    }return 0;
}
