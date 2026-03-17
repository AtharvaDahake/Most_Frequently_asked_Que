#include<iostream>
#include<string>
#include<cctype>
using namespace std;
void countCV(string &str){
    int v = 0;
    int c = 0;

    for(int i = 0; i < str.length(); i++ ){

        char ch = tolower(str[i]);

        if(isalpha(ch)){

            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }else{
                c++;
            }
        }
    }cout<<"v"<<v<<endl;
    cout<<"c"<<c<<endl;
}

int main(){
    string str= "Atharva Dahake";
    countCV(str);
    return 0;
}
