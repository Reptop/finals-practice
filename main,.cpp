#include "list.h"
#include <iostream> 
using namespace std;

int main() {
    node* head = NULL;
    int input; 
    build(head);
    display_all(head);

    //PLEASE PUT YOUR CODE HERE to call the function assigned
    node* tail = getTail(head);
    int headVal = head->data;
    cout << headVal << endl; 

    cin >> input; 
    head = deleteSpecificNode(head, input);    
    //add2NodesFront(head, tail->data);
    //delTail(head); 
    //add2NodesEnd(head, headVal);  

    display_all(head);

    
    return 0;
}

