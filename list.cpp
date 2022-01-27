#include "list.h"
#include <time.h>

void build(node * & head) {
  srand((unsigned)time(0));
  node* current = new node();
  current->data = (rand()%10 + 1);
  head = current;
  node* previous = current;
  int additionalValues = (rand()&5);
  for (int a = 0; a < 15+additionalValues; a++) {
    current = new node();
    previous->next = current;
    current->data = (rand()%10 + 1);
    previous = current;
  }

  current->next = NULL;
}

node* deleteSpecificNode(node* head, int n) {
  // Store head node
    node* tmp = head;
     
    while (head->data == n)
    {
        head = head->next;
    }
    while (tmp->next != NULL)
    {
        if (tmp->next->data == n)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return head;
}
 

void display_all(node * head) {
  while (head != NULL) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

node* delHead(node* head) {
    if(head == NULL)
        return NULL;
    else {
        node* temp = head; 
        head = temp->next;
        delete(temp); 
        return head;  
    }
}

void delTail(node* head) {
  node* current = new node();
  current = head;  
  while(current->next->next != NULL)
    current = current->next; 
  node* temp = current->next->next;
  current->next = NULL; 
  delete(temp); 

}

void getLength(node* head, int &length) {
  while(head != NULL) {
    head = head->next; 
    length++; 
  } 
}

void deleteNode(node* head, int choice) {

  node* temp1 = new node();
  temp1 = head; //stores in heap 
  if (choice == 1) {
    delHead(head);
  }
  for (int i = 0; i < choice-2; ++i) {
    //we travel to the choice - 2 place 
   temp1 = temp1->next;  // then point to n-1th node
  }
  node* temp2 = new node();
  temp2 = temp1->next; // this points to the nth node
  temp1->next = temp2->next; //this points to 1 right of nth nodei
  delete(temp2);  

  // 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7
  // if choice = 3
  // we go back to 1, so temp 1 = 1 
  // make a temp2
  // temp2 will equal to the choice exactly or the nth node
}

void add2NodesEnd(node* head, int n) {
  node* current = new node();
  current = head; 
  while(current->next != NULL) {
      current = current->next; 
  }
  current->next = new node(); 
  current->next->data = n;
  current = current->next;   
  //current->next = new node(); 
 //current->next->data = 5; 
  current->next = NULL; 
}

void add2NodesFront(node*& head, int num) {
 node* first = new node(); 
 first->data = num; 

 first->next = head;
 head = first; 
}

node* getTail(node* head) {
  node* current = head; 
  while (current->next != NULL) {
    current = current->next; 
  }
  return current; 
}

void addHeadToTail(node* head, int n) {
  node* current = new node(); 
  current = head;
  while (current != NULL) {
    current = current->next; 
  }
  current->next = new node(); 
  current->next->data = n; 
  current->next->next = NULL; 

}






