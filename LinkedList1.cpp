// https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1/
// Remove loop in Linked List

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node *head, Node *tail, int position)
{
    if (position == 0)
        return;

    Node *walk = head;
    for (int i = 1; i < position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node *head)
{
    if (!head)
        return false;

    Node *fast = head->next;
    Node *slow = head;

    while (fast != slow)
    {
        if (!fast || !fast->next)
            return false;
        fast = fast->next->next;
        slow = slow->next;
    }

    return true;
}

int length(Node *head)
{
    int ret = 0;
    while (head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

void removeLoop(Node *head);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, num;
        cin >> n;

        Node *head, *tail;
        cin >> num;
        head = tail = new Node(num);

        for (int i = 0; i < n - 1; i++)
        {
            cin >> num;
            tail->next = new Node(num);
            tail = tail->next;
        }

        int pos;
        cin >> pos;
        loopHere(head, tail, pos);

        removeLoop(head);

        if (isLoop(head) || length(head) != n)
            cout << "0\n";
        else
            cout << "1\n";
    }
    return 0;
}

void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *fast, *slow, *prev;
    fast = slow = head;
    bool flag = false;
    while (fast != NULL)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
        if (fast == NULL)
            break;
        fast = fast->next;
        if (fast == slow)
        {
            if (slow == head)
            {
                prev->next = NULL;
                return;
            }
            fast = head;
            flag = true;
            break;
        }
    }
    if (!flag)
        return;
    while (1)
    {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
        if (slow == fast)
        {
            prev->next = NULL;
            return;
        }
    }
}