//
// Created by bao on 2018/12/23.
//
#include<vector>
#include <map>
#include<list>
#include <set>
#include <iostream>
#include <gtest/gtest.h>

using namespace std;

//todo not work
/*
 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。
如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
示例：
输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807
 */
//https://leetcode-cn.com/problems/add-two-numbers/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class T00002 {
public:
    ListNode *addTwoNumbers1(ListNode *l1, ListNode *l2) {
        ListNode *result;
        ListNode *next = result;
        do{
            int value = l1->val+l2->val;
            ListNode temp = ListNode(value);
            next->next = &temp;
        }while(l1->next != NULL);
        return result;
    }

    void p1() {
        cout << "print baopan" << endl;
    }

    int add(int a, int b) {
        cout << "print baopan" << endl;
        return a + b;
    }
};

TEST(test, c1
) {
    T00002 t00002;
    EXPECT_EQ(3, t00002.add(1, 2));
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}