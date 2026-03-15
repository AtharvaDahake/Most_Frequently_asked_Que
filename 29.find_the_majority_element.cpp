#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums) {
        int n = nums.size();

    for(int i=0;i<n;i++){
        int count = 0;

        for(int j=0;j<n;j++){
            if(nums[i] == nums[j])
                count++;
        }

        if(count > n/2)
            return nums[i];
    }

    return -1;
    }
int MajorityElement(vector<int>& nums) {

    int count = 0;
    int candidate = 0;
    for(int i = 0; i < nums.size(); i++){
    int num = nums[i];

        if(count == 0)
            candidate = num;

        if(num == candidate)
            count++;
        else
            count--;
    }

    return candidate;
}
