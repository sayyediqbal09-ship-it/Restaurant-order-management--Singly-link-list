1. Problem Statement
Design and implement a Restaurant Order Management System using a singly linked list in C++.
The system should allow the user to:
Add a new restaurant order.
Display all orders.
Search for an order by order ID.
Exit the program.
Each order contains an Order ID and customer name. The linked list is used to dynamically store and manage restaurant orders.
2. Algorithm
Step 1: Start
Initialize the head pointer of the linked list to NULL.
Step 2: Display Menu
Display the following options:
Add Order
Display Orders
Search Order
Exit
Step 3: Add Order
Create a new node dynamically.
Read the Order ID and customer name.
Store the order details in the new node.
Set the next pointer to NULL.
Add the new node to the end of the linked list.
Step 4: Display Orders
Check whether the linked list is empty.
If empty, display "No orders available."
Otherwise, traverse the linked list from the head.
Display the Order ID and customer name of each order.
Step 5: Search Order
Ask the user to enter an Order ID.
Traverse the linked list.
Compare the entered ID with each order ID.
If a match is found, display the order details.
Otherwise, display "Order not found."
Step 6: Exit
Stop the program when the user selects Exit.
Step 7: End
3. Data Structure Used
Singly Linked List
A singly linked list is a linear data structure in which each node contains data and a pointer to the next node.
Each node in our project contains:
Order ID
Customer Name
Pointer to the next node
Node Structure
struct Node
{
    int orderId;
    string customerName;
    Node *next;
};
4. Conclusion
The Restaurant Order Management System using a Singly Linked List is implemented in C++. It allows users to add, display, and search restaurant orders. The linked list provides dynamic memory allocation and makes order management easier.
