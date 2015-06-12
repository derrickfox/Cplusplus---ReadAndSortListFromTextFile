//
//  List.h
//  DFox_Exercise5
//
//  Created by Derrick Fox on 11/22/14.
//  Copyright (c) 2014 Derrick Fox. All rights reserved.
//

#ifndef __DFox_Exercise5__List__
#define __DFox_Exercise5__List__

#include <stdio.h>
#include <fstream> 
#include "item.h"

class List
{
public:
    List();
    void insert(const std::string&, int quant);
    void printList();
    
private:
    Item* head;
    int size;
};

#endif /* defined(__DFox_Exercise5__List__) */
