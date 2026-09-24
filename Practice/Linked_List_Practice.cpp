/*
    Topic: Linked List Practice

    Topics:
    1. Create a linked list
    2. Insert node at beginning
    3. Insert node in middle
    4. Insert node at end
    5. Delete first node
    6. Delete middle node
    7. Delete last node
    8. Find middle node
    9. Reverse linked list
    10. Find nth node

    Approach: Singly Linked List
    Time Complexity: O(n)
    Space Complexity: O(1)
*/
//code
#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
};
int main(){
	
	node* first = new node();
	first->data = 10;
	first->next = NULL;
	
	node* second = new node();
	second->data = 20;
	second->next = NULL;
	first->next = second;
	
	node* third = new node();
	third->data = 30;
	third->next = NULL;
	second->next = third;
	
	node* fourth = new node();
	fourth->data = 40;
	fourth->next = NULL;
	third->next = fourth;
	
	node* fifth = new node();
	fifth->data = 50;
	fifth->next = NULL;
	fourth->next = fifth;
	//added node at starting
	node* starting = new node();
	starting->data = 5;
	starting->next = first;
	first = starting;
	//adding node in btw 20 and 30
	node* temp1 = second;
	node* middle = new node();
	middle->data = 25;
	middle->next = NULL;
	middle->next = temp1->next;
	temp1->next = middle;
	//add 60 at end
	node* temp2 = first;
	node* end = new node();
	end->data = 60;
	end->next = NULL;
	while(temp2->next != NULL){
		temp2 = temp2->next ;
	}
	temp2->next = end;
	//delete the first node
	first = first->next;
	//delete 30
	node* temp3 = second;
	temp3->next = temp3->next->next;
	//delete last node
	node* temp4 = first;
	while(temp4->next->next != NULL){
		temp4 = temp4->next;
		
	}
	temp4->next = NULL;
	//find mid point 
	node* slow=first;
	node* fast=first;
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->data <<endl;
	
	//reverse the linked list;
	node* prev = NULL;
	node* current = first;
	while(current != NULL){
		node* next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	    first = prev;
		
	node* traversal = first;
	while(traversal != NULL){
		cout<<traversal->data << "->" ;
		traversal=traversal->next;
	}
	
	  //finding nth number of node;
	node* lame = first;
	node* quick = first;
	    int n = 3;
		for(int i = 0 ; i < n ; i++){
			quick = quick->next;
		} 
		while(fast != NULL){
			lame = lame->next;
			quick = quick->next;
		}
}
