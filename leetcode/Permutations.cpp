//leetcode problem 46 - Permutations

#include <iostream>
#include <vector>
using namespace std;

void backtrack(vector<vector<int>> &res, vector<int> nums, size_t start){
    if(start == nums.size()){
        res.push_back(nums);
        return;
    }
    for(size_t i = start; i < nums.size(); i++){
        swap(nums[start],nums[i]);
        backtrack(res,nums, start + 1);
        swap(nums[start],nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> res;
    backtrack(res, nums, 0);
    return res;
}

int main(){
    int n = 3;
    vector<int> nums;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    vector<vector<int>> res = permute(nums);
    
    for(const auto& perm : res){
        for(int num :  perm){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    
}



