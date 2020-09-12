//
//  hxq1073_Librarian.hpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Librarian_h
#define hxq1073_Librarian_h

#include <stdio.h>
#include "hxq1073_Bundle.h"

class Librarian
{
private:
    string name;
    int id;
    
public:
    Librarian(string n, int d): name(n), id(d) {};
    void check_in(Media thing);
    void check_out(Media thing);
    void check_in(Bundle things);
    void check_out(Bundle things);
    int get_id(){return id;}
    string get_name(){return name;}
    string to_string();
    
};

#endif /* hxq1073_Librarian_hpp */
