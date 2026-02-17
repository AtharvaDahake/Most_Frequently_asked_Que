#include<iostream>
using namespace std ;
int main(){
    int a=0;
    int b=1;
    int n;
    cin>> n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<n;i++){
        int nextnum=a+b;
        a=b;
        b=nextnum;
        cout<<nextnum<<" ";
    }
}
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    // Create a vector (dynamic array) of size n
    vector<int> fib(n);

    // Hardcode the first two terms
    fib[0] = 0;
    fib[1] = 1;

    // Fill the array using the formula: f[i] = f[i-1] + f[i-2]
    for(int i = 2; i < n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }

    // Print the array
    for(int i = 0; i < n; i++) {
        cout << fib[i] << " ";
    }
    return 0;
}
