#include "MyLinkedList.h"
#include <stdio.h>
#include <stdlib.h>


void MyLinkedList_test()
{
	MyNode *node1, *node2;
	node1 = (struct MyNode *)malloc(sizeof(struct MyNode));
	node2 = (struct MyNode *)malloc(sizeof(struct MyNode));
	node1->data = 1;
	node1->next = node2;
	node2->data =2;
	node2->next = 0;
}