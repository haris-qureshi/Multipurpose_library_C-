//
//  hxq1073_Book.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Book.h"
ostream& operator << (ostream& ost, const Book tv)
{
    ost << tv.to_string();
    return ost;
    
}



string Book::to_string() const
{
    stringstream ss;
    ss <<"type: "<<type <<endl << " id : "<<  Media::id_number <<endl<< "call number:"<< Media::call_number<<endl << "title : "<< Media::title <<endl << "genre : "<< Media::genre <<endl <<"author: "<< author <<endl << "copy right year : " << copyright_year << endl;
    ss <<endl;
    return ss.str();
    
}
