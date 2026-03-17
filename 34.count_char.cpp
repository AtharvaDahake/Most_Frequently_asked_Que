
#include<iostream>
#include<string>
using namespace std;

void countChar(string str){

    int freq[26] = {0};

    for(int i = 0; i < str.length(); i++){
        char ch = str[i];

        if(ch >= 'a' && ch <= 'z'){
            freq[ch - 'a']++;
        }
        else if(ch >= 'A' && ch <= 'Z'){
            freq[ch - 'A']++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
}

int main(){

    string str = "Atharva";

    countChar(str);

    return 0;
}
