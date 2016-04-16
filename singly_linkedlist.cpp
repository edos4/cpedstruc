#include <iostream>
using namespace std;

struct Node {
    int data;       // data in node
    Node *next;     // Pointer to next node
};

void addNode(){
    Node *p, *q;

    p = new Node;
    p -> data = 10;
    p -> next = NULL;

    cout << p->data <<endl; //10

    q = new Node;
    q -> data = 6;
    q -> next = NULL;

    p -> next = q; //connects q to p
    cout << p->next->data <<endl; //6
}

void insertToMid(){
    Node *p, *q, *r;

    p = new Node;
    p -> data = 1;
    p -> next = NULL;

    r = new Node;
    r -> data = 3;
    r -> next = NULL;

    p -> next = r; // 1 -> 3 (3 is after 1)

    q = new Node;
    q -> data = 2;
    q -> next = NULL;

    q -> next = r; //second's next is third
    p -> next = q; // first's next is second

    cout << p->data; //first (1)
    cout << p->next->data; //second (2)
    cout << p->next->next->data; //third (3)
}

void deleteNode(){
    Node *p, *q, *r;
    //Delete two

    p = new Node;
    p -> data = 1;
    p -> next = NULL;

    q = new Node;
    q -> data = 2;
    q -> next = NULL;

    p -> next = q; 

    r = new Node;
    r -> data = 3;
    r -> next = NULL;

    q -> next = r;

    //Display linked list (for proof, so no daya here)
    cout << "Before deletion:" <<endl;
    cout << p->data; //first (1)
    cout << p->next->data; //second (2)
    cout << p->next->next->data<<endl; //third (3)

    //Current linked list is p->q->r
    //To delete q, we make do the following:
    p->next = r; //p->r
    q->next = NULL; //nuke(q) or delete q

    //Display linked list (for proof, so no daya here)
    cout << "After deletion:" <<endl;
    cout << p->data; //first (1)
    cout << p->next->data<<endl; //second (2)
}

void searchNode(int n){
    Node *p, *q, *r, *temp;
    //Search for n, in this case - 2

    p = new Node;
    p -> data = 1;
    p -> next = NULL;

    q = new Node;
    q -> data = 2;
    q -> next = NULL;

    p -> next = q; 

    r = new Node;
    r -> data = 3;
    r -> next = NULL;

    q -> next = r; //q connects to r

    temp=p; //copy p to temp

    while(temp != NULL){ //traverse linked list
        cout << temp->data;  //output current data
        if(temp->data == n){ //check data
            cout<<"RockNRoll to the World"<<endl; //yay
            break; //exit loop
        }
        temp = temp->next; //move to the next node
    }
}

int main(){
    //addNode();
    //insertToMid();
    //deleteNode();
    searchNode(4);
}



