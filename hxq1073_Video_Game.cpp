//
//  hxq1073_Video_Game.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Video_Game.h"
ostream& operator << (ostream& ost, const Video_Game tv)
{
    ost << tv.to_string();
    return ost;
    
}

string Video_Game::to_string() const
{
    stringstream ss;
    ss<<"type:" << type<<endl <<" id : "<<  Media::id_number <<endl<< "call number:"<< Media::call_number<<endl << "title : "<< Media::title <<endl << "genre : "<< Media::genre <<endl <<"release: "<<release_year << endl << endl;
    
    
    return ss.str();
    
}
