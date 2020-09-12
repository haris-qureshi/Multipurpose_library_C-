//
//  hxq1073_Book.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Book_h
#define hxq1073_Book_h

#include <stdio.h>
#include <string>
#include <sstream>
#include "hxq1073_Media.h"

using namespace std;

class Book : public Media
{
private:
    string author;
    int copyright_year;
    string type = "Book";
public:
    Book( string a, int cpr,int iid, string call, string ti, string gen) : author(a) , copyright_year(cpr) , Media(iid, call, ti, gen) {};
    string get_author(){return author;}
    string get_type(){return type;}
    int get_year(){return copyright_year;}
    string to_string() const;
    friend ostream& operator << (ostream& ost, const Book tv);
    

};
#endif /* hxq1073_Book_hpp */
