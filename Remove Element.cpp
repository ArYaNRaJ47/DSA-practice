//Side note - If you are locally attemting this question just add a -1 at the ed of the array value inputs, on leetcode platform just the "removeElement" function is
//needed as there u don't have to deal with inputs.

#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &nums, int val){
    int k = 0;
    for(int i = 0; i<nums.size(); i++){
        if(nums[i] != val){
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main(){
    vector<int> nums;
    int x;
    
    while(cin >> x && x != -1){
        nums.push_back(x);
    }
    
    int val;
    cin>>val;
    
    // for(int i = 0; i<nums.size(); i++){
    //     cout<<nums[i]<<" ";
    // }
    
    int k = removeElement(nums,val);
    for(int i = 0; i<k; i++){
        cout<<nums[i]<<" ";
    }
    
}




