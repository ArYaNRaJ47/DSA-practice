//leetcode problem 78 - Subsets

#include <iostream>
#include <vector>
using namespace std;

void backtrack(int start, vector<int> &nums, vector<int> &path, vector<vector<int>> &result){
    result.push_back(path);
    
    for(size_t i = start; i<nums.size(); i++){
        path.push_back(nums[i]);
        backtrack(i + 1, nums, path, result);
        path.pop_back();
    }
}
vector<vector<int>> subsets(vector<int> nums){
    vector<vector<int>> result;
    vector<int> path;
    backtrack(0, nums, path, result);
    return result;
}



int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for(int i = 0; i<n; i++){
        int temp;
        cin>>temp;
        nums.push_back(temp);
    }
    vector<vector<int>> yo = subsets(nums);
    
    for(const auto& sub : yo){
        cout<<"[ ";
        for(int num : sub){
        cout<<num<<" ";
        }
        cout<<" ]"<<endl;
    }
}



