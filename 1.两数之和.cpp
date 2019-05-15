#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i!=nums.size();i++){
            for(int j=i+1;j!=nums.size();j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
    }
};

int main()
{
    Solution test;
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(6);
    nums.push_back(5);
    int target = 8;
    vector<int> ans = test.twoSum(nums, target);
    for (int i = 0; i != ans.size(); i++)
    cout<< ans[i] <<endl;
    return 0;
}