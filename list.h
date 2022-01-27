//list.h
#include <iostream>
#include <cctype>
#include <cstdlib>
using namespace std;

struct node
{
    int data;
    node* next;
};

/* *****************YOUR TURN! ******************************** */
/* PLACE YOUR PROTOTYPE HERE */
node* delHead(node* head);
void deleteNode(node* head, int choice);
void getLength(node* head, int &length); 
void delTail(node* head);
node* deleteSpecificNode(node* head, int n);
void add2NodesEnd(node* head, int n);
void add2NodesFront(node*& head, int num); 
node* getTail(node* head);
void addHeadToTail(node* head, int n); 



/* These functions are already written and can be called to test out your code */
void build(node * & head);      //supplied
void display_all(node * head);  //supplied