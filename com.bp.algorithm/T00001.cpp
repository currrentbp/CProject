//
// Created by bao on 2018/12/23.
//
#include<vector>
#include <map>
#include<list>
#include <set>
#include <iostream>

using namespace std;

/*
 * 给定 nums = [2, 7, 11, 15], target = 9
因为 nums[0] + nums[1] = 2 + 7 = 9
所以返回 [0, 1]
 */
//https://leetcode-cn.com/problems/two-sum/solution/
class T00001 {
public:
    vector<int> twoSum1(vector<int> &nums, int target) {
        map<int, int> numMaps;
        for (int i = 0; i < nums.size(); ++i) {
            numMaps.insert(make_pair(nums[i], i));
        }

        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            int value = target - nums[i];
            map<int, int>::iterator it = numMaps.find(value);
            if (it == numMaps.end()) {

            } else {
                result = {i, it->second};
                break;
            }
        }
        return result;
    }

    vector<int> twoSum2(vector<int> &nums, int target) {
        map<int, int> numMaps;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            map<int, int>::iterator it = numMaps.find(target - nums[i]);
            if (it == numMaps.end()) {
                numMaps.insert(pair<int, int>(nums[i], i));
            } else {
                result = { it->second,i};
                break;
            }
        }
        return result;
    }
};

int main1() {
    T00001 solution;
    vector<int> vector1 = {2, 7, 11, 15};
    vector<int> value = solution.twoSum2(vector1, 9);
    cout << value[0] << "," << value[1] << endl;
}