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
	struct Node* current = list->head;  // Initialize current
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

Node* PushBack(List* list, ListDataType newValue);

ListDataType PopFront(List* list);

ListDataType PopBack(List* list);

void DeleteListNode(List* list, Node* target);

Node* DeleteListValue(List* list, ListDataType value);

Node* FindInList(List* list, ListDataType value);
