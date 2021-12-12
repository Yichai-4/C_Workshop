#include "LinkedList.h"

typedef struct Node_t
{
	int value;
	struct Node_t *next;
}
Node;

typedef struct List_t
{
	Node *head;
	Node *current;
}
List;

List* CreateList()
{
	Node *head = NULL;
	head = (Node*)malloc(sizeof(Node));
	if (head == NULL)
	{
		return 1;
	}

	head->value = 1;
	head->next = NULL;
}

void FreeList(List* list)
{
	while (list->head != NULL)
	{
		Node *tmp = list->head;
		list->head = list->head->next;
		free(tmp);
	}
}

size_t GetListSize(List* list)
{
	int size = 0;  // Initialize count
	Node *current = list->head;  // Initialize current
	while (current != NULL)
	{
		++size;
		current = list->current->next;
	}

	return size;
}

Node* GetListHead(List* list)
{
	return list->head;
}

Node* GetNextNode(Node* currentNode)
{
	return currentNode->next;
}

ListDataType GetValue(Node* node)
{
	return node->value;
}

Node* Insert(Node* after, ListDataType newValue)
{
	/*1. check if the given prev_node is NULL */
	if (after == NULL)
	{
		printf("the given previous node cannot be NULL");
		return;
	}

	/* 2. allocate new node */
	Node *newNode = (Node*)malloc(sizeof(Node));

	/* 3. put in the data */
	newNode->value = newValue;

	/* 4. Make next of new node as next of prev_node */
	newNode->next = after->next;

	/* 5. move the next of prev_node as new_node */
	after->next = newNode;
}

Node* PushFront(List* list, ListDataType newValue)
{
	/* 1. allocate node */
	Node *newNode = (struct Node*)malloc(sizeof(Node));

	/* 2. put in the data  */
	newNode->value = newValue;

	/* 3. Make next of new node as head */
	newNode->next = (list->head);

	/* 4. move the head to point to the new node */
	(list->head) = newNode;

	return newNode;
}

Node* PushBack(List* list, ListDataType newValue)
{
	//create a new node
	Node *newNode = malloc(sizeof(Node));
	newNode->value = newValue;
	newNode->next = NULL;

	//if head is NULL, it is an empty list
	if (list->head == NULL)
		list->head = newNode;

	return newNode;
}

ListDataType PopFront(List* list)
{
	// underflow condition
	if (list->head == NULL) {
		return -1;
	}

	Node *head = list->head;
	int result = head->value;        // pull out data before the node is deleted

	(list->head) = (list->head)->next;  

	free(head);             // free the head node

	return result;
}

ListDataType PopBack(List* list)
{
	if (list->head == NULL)
		return NULL;

	if (list->head->next == NULL) {
		return list->head;
	}

	// Find the second last node
	Node* second_last = list->head;
	while (second_last->next->next != NULL)
		second_last = second_last->next;

	// Delete last node
	delete (second_last->next);

	// Change next of second last
	second_last->next = NULL;

	return list->head;
}

void DeleteListNode(List* list, Node* target)
{

	// If linked list is empty
	if (list->head == NULL)
		return;

	// Store head node
	Node *temp = list->head;

	// If head needs to be removed
	if (target == 0)
	{
		list->head = temp->next;   // Change head
		free(temp);               // free old head
		return;
	}

	// Find previous node of the node to be deleted
	for (int i = 0; temp != NULL && i < target - 1; i++)
		temp = temp->next;

	// If position is more than number of nodes
	if (temp == NULL || temp->next == NULL)
		return;

	// Node temp->next is the node to be deleted
	// Store pointer to the next of node to be deleted
	Node *next = temp->next->next;

	// Unlink the node from linked list
	free(temp->next);  // Free memory

	temp->next = next;
}

Node* DeleteListValue(List* list, ListDataType value)
{
	for (size_t i = 0; i < GetListSize; ++i)
	{
		if (list->current->value == value)
		{
			DeleteListNode(list, list->current);
		}
	}

	return list->current;
}

Node* FindInList(List* list, ListDataType value)
{
	Node *current = list->head;  // Initialize current
	while (current != NULL)
	{
		if (current->value == value)
			return current;
		current = current->next;
	}
	return NULL;
}
