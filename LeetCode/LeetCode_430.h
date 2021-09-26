//
// Created by 李啸 on 24/09/2021.
//

#ifndef DAILY_ONE_PROBLEM_LEETCODE_430_H
#define DAILY_ONE_PROBLEM_LEETCODE_430_H

//扁平化多级双向链表
class Node {
public:
    int val;
    Node *prev;
    Node *next;
    Node *child;
};

class LeetCode_430 {
public:
    Node *flatten(Node *head) {
       /* function < Node * (Node *) > dfs = [&](Node *node) {
            //cur 作 head
            Node *cur = node;
            //记录链表的最后一个节点
            Node *last = nullptr;

            while (cur) {
                Node *next = cur->next;
                //如果有子节点，首先处理子节点
                if (cur->child) {
                    //递归处理子节点
                    Node *child_last = dfs(cur->child);

                    next = cur->next;//next 指向cur.next，为后面断开做准备
                    //完成第二步，将node link to child
                    cur->next = cur->child;
                    cur->child->prev = cur;

                    //if next not null,last link to next
                    if (next) {
                        child_last->next = last;
                        next->prev = child_last;
                    }
                    //cur->child mast be null
                    cur->child = nullptr;
                    last = child_last;
                }
                    //我觉得没有意义
                else {
                    last = cur;
                }
                cur = next;//进入下一步迭代
            }
            return last;
        };*/
       // dfs(head);
        return head;
    }
};


#endif //DAILY_ONE_PROBLEM_LEETCODE_430_H
