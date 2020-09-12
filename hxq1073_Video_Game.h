//
//  hxq1073_Video_Game.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Video_Game_h
#define hxq1073_Video_Game_h

#include <stdio.h>
#include <string>
#include <sstream>
#include "hxq1073_Media.h"

using namespace std;


class Video_Game : public Media
{
private:
    int release_year;
    string studio;
    string type = "Video_Game";
public:
    Video_Game(int year, string st, int iid, string call, string ti, string gen) : release_year(year), studio(st), Media(iid, call, ti,gen){};
    int get_year(){return release_year;}
    string get_studio(){return studio;}
    string get_type (){return type;}
    string to_string() const;
    friend ostream& operator << (ostream& ost, const Video_Game tv);
    
};

#endif /* hxq1073_Video_Game_hpp */
