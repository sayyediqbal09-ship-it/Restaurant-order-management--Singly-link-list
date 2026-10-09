#include <iostream>
using namespace std;

struct Node
{
    int order;
    Node *next;
};

int main()
{
    Node *head = NULL, *newnode, *temp;
    int n, i;

    cout << "Enter number of orders: ";
    cin >> n;

    for(i = 1; i <= n; i++)
    {
        newnode = new Node;

        cout << "Enter order number: ";
        cin >> newnode->order;

        newnode->next = NULL;

        if(head == NULL)
            head = newnode;
        else
        {
            temp = head;

            while(temp->next != NULL)
                temp = temp->next;

            temp->next = newnode;
        }
    }

    cout << "\nRestaurant Orders:\n";

    temp = head;

    while(temp != NULL)
    {
        cout << temp->order << " ";
        temp = temp->next;
    }

    return 0;
}