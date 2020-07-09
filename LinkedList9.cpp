// Add two numbers represented by linked lists
// https://practice.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
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

struct Node *buildList(int size)
{
    int val;
    cin >> val;

    Node *head = new Node(val);
    Node *tail = head;

    for (int i = 0; i < size - 1; i++)
    {
        cin >> val;
        tail->next = new Node(val);
        tail = tail->next;
    }

    return head;
}

void printList(Node *n)
{
    while (n)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

struct Node *addTwoLists(struct Node *first, struct Node *second);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;

        cin >> n;
        Node *first = buildList(n);

        cin >> m;
        Node *second = buildList(m);

        Node *res = addTwoLists(first, second);
        printList(res);
    }
    return 0;
}
struct Node *reverse(Node *root)
{
    Node *prev, *curr;
    prev = NULL;
    curr = root;
    while (curr)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    root = prev;
    return root;
}

struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    // code here

    Node *p1 = reverse(first);
    Node *root = p1;
    Node *p2 = reverse(second);
    int rem = 0;
    Node *prev1, *prev2;
    while (p1 && p2)
    {
        prev1 = p1;
        prev2 = p2;
        int d = p1->data + p2->data + rem;
        p1->data = d % 10;
        rem = d / 10;

        p1 = p1->next;
        p2 = p2->next;
    }

    if (p1 == NULL)
    {
        prev1->next = prev2->next;
        p1 = prev1->next;
    }
    while (rem)
    {
        if (p1 == NULL)
        {
            prev1->next = new Node(0);
            p1 = prev1->next;
        }
        prev1 = p1;
        int d = p1->data + rem;
        p1->data = d % 10;
        rem = d / 10;
        p1 = p1->next;
    }

    return reverse(root);
}
