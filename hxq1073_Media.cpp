//
//  hxq1073_Media.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Media.h"



string Media::to_string() const
{
    stringstream ss;
    ss << "id number: "<< id_number <<endl << "call number: " << call_number<<endl<< "title: " << title << endl<< "genre:" << genre << endl;
    //ss << "id number: "<< id_number<<endl << "call number: " << call_number<<endl<< "title: " << title << endl<< "genre:" << genre << endl;
    
    return ss.str();
}


bool Media:: set_status(bool stat)
{
    if ((stat == checked_out) && checked_out == true)
    {
        cout << "the item is already checked out" << endl;
        return false;
    }
    if ((stat == checked_out) && checked_out == false)
    {
        cout << "the item was already checked in" <<endl;
        return false;
    }
    else
        checked_out = stat;
    return true;
}



ostream& operator << (ostream& ost, const Media tv)
{
    ost << tv.to_string();
    return ost;
    
}
