// https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1
// Rotate a Linked List
#include <bits/stdc++.h>
using namespace std;

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

Node *rotate(struct Node *head, int k);

void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, val, k;
        cin >> n;

        cin >> val;
        Node *head = new Node(val);
        Node *tail = head;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> val;
            tail->next = new Node(val);
            tail = tail->next;
        }

        cin >> k;

        head = rotate(head, k);
        printList(head);
    }
    return 1;
}

Node *rotate(Node *head, int k)
{
    // Your code here
    Node *walk = head;
    for (int i = 0; i < k - 1; i++)
    {
        walk = walk->next;
    }
    if (walk->next == NULL)
        return head; //if k == n then do nothing
    Node *temp;
    temp = walk->next; //new head;
    walk->next = NULL;
    walk = temp;
    while (walk->next != NULL)
    {
        walk = walk->next;
    }
    walk->next = head;
    return temp;
}
