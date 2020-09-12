//
//  hxq1073_Movie.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Music_Album_h
#define hxq1073_Music_Album_h

#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include "hxq1073_Media.h"

using namespace std;

class Music_Album : public Media
{
private:
    int release_year;
    string artist;
    vector<string> tracks;
    string type = "Music_Album";
public:
    Music_Album(int ry, string art, vector<string> t,int iid, string call, string ti, string gen): release_year(ry), artist(art), tracks (t), Media(iid,call,ti,gen){};
    int get_year(){return release_year;}
    string get_artist(){return artist;}
    vector <string> get_track(){return tracks;}
    string get_type (){return type;}
    string to_string() const;
    friend ostream& operator << (ostream& ost, const Music_Album tv);
    
};

#endif /* hxq1073_Movie_hpp */
