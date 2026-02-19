// for counting number
#include<iostream>
using namespace std;
bool prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int countPrime(int n){
    int cnt = 0;
    for(int i = 2; i < n; i++){
        if(prime(i)){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    cin >> n;
    if(prime(n)){
        cout << "is a prime\n";
    } else {
        cout << "not a prime\n";
    }
    int ans = countPrime(n);
    cout << "Number of primes less than " << n << " is: " << ans;
    return 0;
}
// for printing the number 
//Sieve of Eratosthenes
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2; i * i <= n; i++){
        if(isPrime[i]){
            for(int j = i * i; j <= n; j += i){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }
    return 0;
}
