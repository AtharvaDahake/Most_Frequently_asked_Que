#include<iostream>
using namespace std;
bool pali(string str){
    int s=0;
    int e=str.length()-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }return 1;
} 
int main(){
    string str="AthhtA";
    if(pali(str)){
        cout<<"yes";
    }else{
        cout<<"no";
    }return 0;
}
