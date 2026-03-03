#include <iostream>
using namespace std;
int main(){
    double a,b,result=1;
    cout<<"Enter base : ";
    cin>>a;
    cout<<"Enter exponent : ";
    cin>>b;
    for(int i=0;i<(b>0?b:-b);i++){
        result*=a;
    }
    cout<<result<<endl;
    return 0;
}
