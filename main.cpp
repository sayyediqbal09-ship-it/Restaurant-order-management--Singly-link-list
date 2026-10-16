#include <iostream>
#include <string>
using namespace std;

struct Node
{
    string foodName;
    int quantity;
    float price;
    Node *next;
};

Node *head = NULL;

void addOrder()
{
    Node *newnode = new Node;

    cout << "Enter Food Name: ";
    cin >> newnode->foodName;

    cout << "Enter Quantity: ";
    cin >> newnode->quantity;

    cout << "Enter Price: ";
    cin >> newnode->price;

    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        Node *temp = head;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newnode;
    }

    cout << "Order Added Successfully!\n";
}

void displayOrders()
{
    Node *temp = head;
    float totalBill = 0;

    if (temp == NULL)
    {
        cout << "No Orders Available!\n";
        return;
    }

    cout << "\n--- Restaurant Orders ---\n";

    while (temp != NULL)
    {
        cout << "Food Name: " << temp->foodName << endl;
        cout << "Quantity: " << temp->quantity << endl;
        cout << "Price per item: Rs. " << temp->price << endl;
        cout << "Item Total: Rs. "
      
 << temp->quantity * temp->price << endl;
        cout << "----------------------\n";

        totalBill += temp->quantity * temp->price;

        temp = temp->next;
    }

    cout << "Total Bill: Rs. " << totalBill << endl;
}

int main()
{
    int choice;

    do
    {
        cout << "\n=== Restaurant Order Management ===\n";
        cout << "1. Add Order\n";
        cout << "2. Display Orders and Total Bill\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addOrder();
                break;

            case 2:
                displayOrders();
                break;

            case 3:
                cout << "Thank You!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 3);

    return 0;
}