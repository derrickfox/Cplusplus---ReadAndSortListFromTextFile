/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

#include "List.h"
#include <iomanip>
using namespace std;

// List constructor
List::List():head(0),size(0)
{}

// Method to print the entire list of Books in the library system.
void List::printList()
{
    Item* current = head;
    
    while (current !=0)
    {
        cout << left << setw(4) << current->QTY
        << left << setw(12) << current->itemName
        << endl;
        
        current = current->next;
    }
}

 
// Method to create and insert books into the list.
void List::insert(const string& name, int quant)
{
    Item* newNode = new Item(name, quant);
    
    // Case 1 - Empty List
    if (head == 0)
    {
        head = newNode;
    }
    else
    {
        Item* current = head;
        Item* trail = 0;
        
        // Traverse list to find insert location.
        while (current !=0)
        {
            if (current->itemName >= newNode->itemName)
            {
                break;
            }
            else
            {
                trail = current;
                current = current->next;
            }
        }
        // Case 2 - Insert at the head of list
        if (current == head)
        {
            newNode->next = head;
            head = newNode;
        }
        else
        {
            // Case 3 - Insert after the head of list
            newNode->next = current;
            trail->next = newNode;
        }
    }
    size++;
}