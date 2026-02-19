#include<iostream>
using namespace std;
int main() {
    int n;
    int sum = 0;
    cout << "Enter any number n: ";
    cin >> n;          

    while (n != 0) {
        int digit = n % 10;          
        sum +=digit; 
        n = n / 10;  
    }
    cout<<sum;            
    
    
    return 0;
}
