//
//  hxq1073_Television_Show_Season.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Television_Show_Season.h"

ostream& operator << (ostream& ost, const Television_Show_Season tv)
{
    ost << tv.to_string();
    return ost;
    
}

string Television_Show_Season:: to_string() const
{
    stringstream ss;
    ss<<"type: "<< type << endl<<" id : "<<  Media::id_number <<endl<< "call number:"<< Media::call_number<<endl << "title : "<< Media::title <<endl << "genre : "<< Media::genre <<endl << "Release year: "<<release_year<< endl << "Season number: " << season<< endl << "Producer: "<< producer<<endl<<"Directors:";
    for (string s : director)
    {
        ss << ", " << s;
    }
    ss<< endl;
    ss<< "lead actors: ";
    for (string s : leading_actor )
    {
        ss<<", "<<s;
    }
    ss<< endl<<endl;
    
    return ss.str();
}
