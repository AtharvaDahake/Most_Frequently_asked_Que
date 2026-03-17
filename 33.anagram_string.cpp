#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool anagram(string &s , string &t){
    if(s.length()!=t.length()){
        return 0;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    return s==t;
}
int main(){
    string s="atharva";
    string t="aaarvth";
    if(anagram(s, t))
        cout << "Anagram";
    else
        cout << "Not Anagram";

    return 0;
}
