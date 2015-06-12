//
//  Item.h
//  DFox_Exercise5
//
//  Created by Derrick Fox on 11/22/14.
//  Copyright (c) 2014 Derrick Fox. All rights reserved.
//

#ifndef __DFox_Exercise5__Item__
#define __DFox_Exercise5__Item__


//#include <stdio.h>
#include <iostream>
#include <string>

class Item
{
friend class List;
public:
    Item(std::string itemName, int QTY);
    
private:
    std::string itemName;
    int QTY;
    Item* next;
};

#endif /* defined(__DFox_Exercise5__Item__) */
