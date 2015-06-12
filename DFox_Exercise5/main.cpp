/*
 Program: Project 3
 Description: Library Records System using Pointers
 Course: CMSC230 CRN 23267
 Student:  Derrick Fox
 Professor: Greg Grinberg
 Original Due Date: 11/02/14
 */

//#include <stdio.h>

#include "List.h"
#include <iostream>
#include <fstream>
using namespace std;

void CommandIt();

int main()
{
    ifstream inFile;
    inFile.open("Input.txt");
    
    List* list = new List();
    
    string anItem;
    int quantity;
    
    while (!inFile.eof())
    {
        inFile >> quantity >> anItem;
        list->insert(anItem, quantity);
    }
    list->printList();
    return 0;
}



