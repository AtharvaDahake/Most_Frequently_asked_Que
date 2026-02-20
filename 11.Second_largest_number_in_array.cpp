#include <iostream>
#include <climits>
using namespace std;

int getsecondlargest(int arr[],int n){
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == INT_MIN)
        return -1;

    return secondLargest;
}
int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int arr1[] = {10, 10, 10, 10, 10};

    int n = 5;
    int ans=getsecondlargest(arr,n);
    int ans1=getsecondlargest(arr1,n);
    cout<<ans<<endl;
    cout<<ans1<<endl;
    return 0;
    
}
