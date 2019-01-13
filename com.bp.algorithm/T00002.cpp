//
// Created by bao on 2018/12/23.
//
#include "common.h"

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
        int remain = 0;
        int toNext = 0;
        do {
            int value = (NULL == l1 ? 0 : l1->val) + (NULL == l2 ? 0 : l2->val);
            remain = value % 10;
            ListNode temp = ListNode(remain + toNext);
            toNext = value / 10;
            next->next = &temp;
        } while (l1->next != NULL || l2->next != NULL || toNext != 0);
        return result;
    }

    void p1() {
        cout << endl << "ssss" << endl;
        T00002 t00002;
        ListNode *l1, *l1_1, *l1_2, *l2, *l2_1, *l2_2;
        l1->val = 2;
        l1_1->val = 4;
        l1_2->val = 3;
        l1->next = l1_1->next = l1_2;
        l2->val = 5;
        l2_1->val = 6;
        l2_2->val = 4;
        l2->next = l2_1->next = l2_2;
        ListNode *listNode = t00002.addTwoNumbers1(l1, l2);

        do{
            cout<<listNode->val;
            listNode = listNode->next;
        }while(listNode->next != NULL);
    }
};

TEST(test, c1
) {
    T00002 t00002;
    t00002.p1();
}

GTEST_API_ int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}