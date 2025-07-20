//leetcode problem 26 - Remove Dulicates from sorted array.

#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int> &nums){
    if(nums.empty()) return 0;
    
    int i = 0;
    for(int j = 1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int i = 0; i <n ; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int newSize = removeDuplicates(nums);
    
    for(int i =0; i<newSize; i++){
        cout<<nums[i]<<" ";
    }
}