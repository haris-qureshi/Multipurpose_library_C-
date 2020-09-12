//
//  hxq1073_Movie.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Movie.h"


string Movie:: to_string() const
{
    stringstream ss;
    
    ss <<"type: "<<type <<endl<<" id : "<<  Media::id_number <<endl<< "call number:"<< Media::call_number<<endl << "title : "<< Media::title <<endl << "genre : "<< Media::genre <<endl << "release year: "<< release_year <<endl << "producer: " << producer << endl << "direcotrs: " << director <<endl;
    
    ss<<"lead Actors:";
    
    for (string s : lead_actors)
    {
        ss<< ", "<< s;
    }
    
    return ss.str();
    
    
}


ostream& operator << (ostream& ost, const Movie tv)
{
    ost << tv.to_string();
    return ost;
    
}
