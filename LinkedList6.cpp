// Remove duplicates from an unsorted linked list
// https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1/

// { Driver Code Starts
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

void print(Node *root)
{
    Node *temp = root;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *removeDuplicates(Node *root);

int main()
{
    // your code goes here
    int T;
    cin >> T;

    while (T--)
    {
        int K;
        cin >> K;
        struct Node *head = NULL;
        struct Node *temp = head;

        for (int i = 0; i < K; i++)
        {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else
            {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Node *result = removeDuplicates(head);
        print(result);
        cout << endl;
    }
    return 0;
} // } Driver Code Ends

/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to remove duplicates from the linked list
// root: root of the linked list
Node *removeDuplicates(Node *head)
{
    // your code goes here
    unordered_map<int, int> umap;
    Node *prev, *curr;
    umap[head->data] = 1;
    prev = head;
    curr = head->next;
    while (curr && prev)
    {
        if (umap[curr->data])
        {
            prev->next = curr->next;
            curr = curr->next;
            continue;
        }
        umap[curr->data] = 1;
        prev = prev->next;
        curr = curr->next;
    }
    return head;
}
