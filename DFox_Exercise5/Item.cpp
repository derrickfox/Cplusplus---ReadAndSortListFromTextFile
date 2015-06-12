//
//  Item.cpp
//  DFox_Exercise5
//
//  Created by Derrick Fox on 11/22/14.
//  Copyright (c) 2014 Derrick Fox. All rights reserved.
//

#include "Item.h"
using namespace std;

Item::Item(string n, int quant):next(NULL)
{
    itemName = n;
    QTY = quant;
}