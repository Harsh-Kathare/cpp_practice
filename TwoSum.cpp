//LEETCODE 1 Two Sum

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int> res;
        int sum;
        
        while(i<j){
            sum = nums[i] + nums[j];
            if(sum > target){
                j--;
                //continue;
            }
            else if(sum < target){
                i++;
                //continue;
            }
            else{
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
        return res;
    }

    int main(){
        vector <int> nums = {2,7,11,15};
        int target = 13;
        //cout << twoSum();
        for(int i : twoSum(nums,target)){
            cout << i <<" ";
        }
    }