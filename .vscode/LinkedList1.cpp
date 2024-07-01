#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *next;
};
 class LinkedList
{
public:
    node *head;
    LinkedList()
    {

        head = NULL;
    }

    node *createNewNode(int value)
    {

        node *newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void insertAtHead(int value)
    {

        node *temp = createNewNode(value);
        if (head == NULL)
        {
            head = temp;
            return;
        }
        else
        {
            temp->next = head;
            head = temp;
        }
    }

    void addLast(int value)
    {
        node *last = createNewNode(value);
        if (head == NULL)
        {
            head = last;
            return;
        }
        else
        {
            node *temp = head;
            
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = last;
        }
    }
    void searchDistinceValue(int value){

        node* temp = head;

        int index=0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout<<temp->data<<" Found at index: "<<index;
            }
            temp = temp->next;
            index++;
            
        }
        
    }

    void PrintLL()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int
main()
{
    LinkedList l;
    l.insertAtHead(10);
    l.PrintLL();
    l.insertAtHead(20);
    l.PrintLL();
    l.insertAtHead(30);
    l.PrintLL();
    l.insertAtHead(40);
    l.PrintLL();

    l.addLast(50);
    l.PrintLL();

    l.addLast(60);
    l.PrintLL();

    l.addLast(70);
    l.PrintLL();

    l.addLast(800);
    l.PrintLL();
    l.searchDistinceValue(70);
    l.PrintLL();

    return 0;
}
