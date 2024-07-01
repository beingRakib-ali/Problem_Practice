#include <bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node *next;
};

class Linkedlist{
public:
node* head;
    Linkedlist()
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

    void inserInHead(int value)
    {

        node *a = createNewNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        else
        {

            a->next = head;
            head = a;
        }
    }

    void addLast(int value){

        node *last = createNewNode(value);
        if (head == NULL)
        {
            head = last;
        }
        else{
            node* temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
        
            }
            temp->next = last;
            // last->next = NULL;
          // cout<<last->next<<" ";
            
        }
        
    }

    int searchDistinctValue(int value){

        node* temp = head;

        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return index+1;
            }
           
             temp = temp->next;
            index++;
        }

        return -1;
        
    }

    //search all value occurence
    void searchAllValue(int value){

        node* temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                cout<<value<<" Found at index: "<<index<<"\n";
            }
            temp = temp->next;
            index++;
        }
        
    }

    void traverse()
    {

        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data<< " ";
            temp = temp->next;
        }
        cout << "\n";
    }


    
};

int main()
{
    Linkedlist l;
    l.traverse();
    l.inserInHead(10);
    l.traverse();

    l.inserInHead(20);
    l.traverse();

    l.inserInHead(10);
    l.traverse();

    l.inserInHead(40);
    l.traverse();
    l.addLast(50);
    l.traverse();
    // cout<<"10 found at position: "<<l.searchDistinctValue(10)<<"\n";
  
    // cout<<"50 found at position: "<<l.searchDistinctValue(50)<<"\n";
    // cout<<"10 found at position: "<<l.searchDistinctValue(10)<<"\n";
    l.searchAllValue(10);



    return 0;
}