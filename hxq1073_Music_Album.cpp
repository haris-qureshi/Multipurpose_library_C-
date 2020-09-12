//
//  hxq1073_Movie.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Music_Album.h"
ostream& operator << (ostream& ost, const Music_Album tv)
{
    ost << tv.to_string();
    return ost;
    
}

string Music_Album::to_string() const
{
    stringstream ss;
    ss<<"type:"<<type <<endl <<" id : "<<  Media::id_number <<endl<< "call number:"<< Media::call_number<<endl << "title : "<< Media::title <<endl << "genre : "<< Media::genre <<endl <<"artist: "<<artist <<endl<<"release year: "<<release_year << endl << "tracks: ";
    
    for(string s : tracks)
    {
        ss<< ", " <<s;
    }
    ss<< endl <<endl;
    
    return ss.str();
    
}
