//
//  hxq1073_Librarian.cpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Librarian.h"

void Librarian:: check_in(Media thing)
{
    thing.set_status(false);
}

void Librarian::check_out(Media thing)
{
    thing.set_status(true);
}

void Librarian::check_in(Bundle things)
{
    things.checking_in();
}

void Librarian::check_out(Bundle things)
{
    things.checking_out();
}


string Librarian:: to_string()
{
    stringstream ss;
    
    ss<< "name" << name <<endl<< "id "<< id <<endl;
    
    return ss.str();
    
}
