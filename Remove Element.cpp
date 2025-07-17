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




