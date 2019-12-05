#include<iostream>
#include <stddef.h>
#include "link.h"
using namespace std;
Linkedlist::Linkedlist()
{
	HEAD=NULL;
	TAIL=NULL;
}

Linkedlist::~Linkedlist(){}


void Linkedlist::addToHead(int data){
	Node* newNode= new Node();
	newNode->info = data;
	newNode->next = HEAD;
	HEAD = newNode;
}

void Linkedlist::traverse(){
	Node* temp= HEAD;
	
	while(temp!= NULL){
		cout<<temp->info<<" ";
		temp= temp->next;
	}
}

void Linkedlist::removeFromHead(){
	Node* nodetodelete;
	nodetodelete =HEAD;
	HEAD = nodetodelete->next;
}

void Linkedlist::remove(int data){
	if(HEAD==NULL && TAIL==NULL)
		return;
	if(HEAD->info==data){
		Linkedlist::removeFromHead();
			HEAD=NULL;
			TAIL=NULL;
				}		
	else{
			Node *temp;
			Node *prev;
			temp=HEAD->next;
			prev=HEAD;
			while(temp!=NULL){
				if(temp->info==data){
					prev->next=temp->next;
					delete temp;
					break;
				}
				if(prev->next==NULL){
					TAIL=prev;
				}
				else{
					prev=prev->next;
					temp=temp->next;
				}
				
			}
	}			
}
int main()
{
	Linkedlist l;
	l.addToHead(45);
	l.addToHead(55);
	l.addToHead(100);
	l.addToHead(1);
	l.traverse();
	cout<<endl;
	l.removeFromHead();
	l.traverse();
	l.remove(45);
	cout<<endl;
	l.traverse();
	l.remove(55);
	l.traverse();
}
