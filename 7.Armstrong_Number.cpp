#include<iostream>
using namespace std;
#include<math.h>
int main() {
    int n;
    int sum = 0;
    cout << "Enter any number n: ";
    cin >> n;      
    int temp = n;     

    while (n != 0) {
        int reminder = n % 10;          
        sum+=pow(reminder,3);
        // sum = sum + reminder * reminder * reminder; 
        n = n / 10;              
    }
    
    if (temp == sum)
        cout << "Armstrong number";
    else
        cout << "Not an Armstrong number";
    return 0;
}
