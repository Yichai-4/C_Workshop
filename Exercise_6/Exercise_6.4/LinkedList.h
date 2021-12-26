#pragma once
#include <stdio.h>

/** @file LinkedList.h
 *  Linked List utilities.
 * 
 *  @author Yichaï Hazan
 */


typedef int ListDataType;
typedef struct Node_t Node;
typedef struct List_t List;

List* CreateList();

void FreeList(List* list);

/** @brief get the size of a linked list
 *
 *  @params a linked list
 *  @returns the size of the list
 */
size_t GetListSize(List* list);

/** @brief get the head of a linked list
 *
 *  @params a linked list
 *  @returns the head of the list
 */
Node* GetListHead(List* list);

/** @brief get a pointer to the next node of a linked list
 *
 *  @params the current node in the list
 *  @returns pointer to the next node
 */
Node* GetNextNode(Node* currentNode);

/** @brief get the value of a node in a linked list
 *
 *  @params a pointer to the node
 *  @returns the value of the node
 */
ListDataType GetValue(Node* node);

/** @brief insert a value in a linked list
 *
 *  @params a node where to insert the value, and the value itself
 *  @returns a pointer to the node with the new value
 */
Node* Insert(Node* after, ListDataType newValue);

Node* PushFront(List* list, ListDataType newValue);
Node* PushBack(List* list, ListDataType newValue);

ListDataType PopFront(List* list);
ListDataType PopBack(List* list);

void DeleteListNode(List* list, Node* target);
Node* DeleteListValue(List* list, ListDataType value);

Node* FindInList(List* list, ListDataType value);
