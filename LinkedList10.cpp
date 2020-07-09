// Check if Linked List is Palindrome
// https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1/
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
    int T, i, n, l, firstdata;
    cin >> T;
    while (T--)
    {

        struct Node *head = NULL, *tail = NULL;
        cin >> n;
        // taking first data of LL
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for (i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        cout << isPalindrome(head) << endl;
    }
    return 0;
}


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

*/
Node *checkpalindrome(Node *node, Node *head, bool &flag)
{
    if (node == NULL)
    {
        return head;
    }
    int d1 = node->data;
    Node *p = checkpalindrome(node->next, head, flag);
    int d2 = p->data;
    if (d1 != d2)
        flag = false;
    return p->next;
}

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    //Your code here
    bool flag = true;
    checkpalindrome(head, head, flag);
    return flag;
}
