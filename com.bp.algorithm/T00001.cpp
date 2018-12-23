//
// Created by bao on 2018/12/23.
//
#include<vector>
#include <map>
#include<list>
#include <set>
#include <iostream>

using namespace std;

//todo not work
/*
 * 给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
 */
//https://leetcode-cn.com/problems/two-sum/solution/
class Solution {
public:
    vector<int> twoSum1(vector<int> &nums, int target) {
        map<int, int> numMaps;
        for (int i = 0; i < nums.size(); ++i) {
            numMaps.insert(pair<int, int>(nums[i], i));
        }

        for (int i = 0; i < nums.size(); ++i) {
            int value = target - nums[i];
            int x = numMaps[value];
            cout << "key:" << value << " value:" << x<<"\n";
        }
    }
};

int main() {
    Solution solution;
    vector<int> vector1 = {2,7,11,15};
    solution.twoSum1(vector1, 9);
}