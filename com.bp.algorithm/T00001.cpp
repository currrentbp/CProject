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
给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
 */
//https://leetcode-cn.com/problems/two-sum/solution/
class Solution {
public:
    vector<int> twoSum1(vector<int> &nums, int target) {
        map<int, int> numMaps;
        for (int i = 0; i < nums.size(); ++i) {
            numMaps.insert(make_pair(nums[i], i));
        }

        vector<int> vector2;
        for (int i = 0; i < nums.size(); ++i) {
            int value = target - nums[i];
            map<int, int>::iterator it = numMaps.find(value);
            if (it == numMaps.end()) {

            } else {
                cout << "key:" << it->first << " value:" << it->second << endl;
                vector2={i,it->second};
                break;
            }
        }
        return vector2;
    }
};

int main() {
    Solution solution;
    vector<int> vector1 = {2, 7, 11, 15};
    vector<int> result = solution.twoSum1(vector1, 9);
}