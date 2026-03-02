#include <iostream>
using namespace std;

int missingNumber(int arr[], int n) {
    int totalSum = n * (n + 1) / 2;  // expected sum
    int actualSum = 0;

    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }

    return totalSum - actualSum;
}

int main() {
    int arr[] = {3, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing Number: " << missingNumber(arr, n) << endl;

    return 0;
}
