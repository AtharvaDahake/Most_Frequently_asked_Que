#include<iostream>
#include<string>
#include<cctype>
using namespace std;

bool checkp(string &str,int n){
    int s = 0;
    int e = n - 1;

    while(s <= e){

        if(!isalnum(str[s])){
            s++;
            continue;
        }

        if(!isalnum(str[e])){
            e--;
            continue;
        }

        if(tolower(str[s]) != tolower(str[e])){
            return false;
        }

        s++;
        e--;
    }

    return true;
}

int main(){

    string str = "A man a plan a canal Panama";
    int n = str.length();

    if(checkp(str,n)){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}
