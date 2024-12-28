#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<int> twoSum(vector<int>& nums, int target){
            for(int i=0; i< nums.size(); i++){
                for(int j=i+1; j< nums.size(); j++){
                    if(nums[i]+nums[j] == target){
                        return {i, j};
                    }
                }
            }
            return {};
        }
};

int main(){
    Solution S;
    // test 1:
    // vector<int> nums = {2, 7, 11, 15};
    // int target = 9;
    // test 2:
    vector<int> nums = {3, 2, 4};
    int target = 6;
    // test 3:
    // vector<int> nums = {3, 3};
    // int target = 6;
    vector<int> result = S.twoSum(nums, target);
    cout<<"result is: ["<<result[0]<<", "<<result[1]<<"]"<<endl;
    
    return 0;
}

