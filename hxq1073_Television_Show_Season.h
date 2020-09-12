//
//  hxq1073_Television_Show_Season.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Television_Show_Season_h
#define hxq1073_Television_Show_Season_h

#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include "hxq1073_Media.h"

using namespace std;

class Television_Show_Season : public Media
{
private:
    int release_year;
    int season;
    string producer;
    vector <string> director;
    vector <string> leading_actor;
    string type = "Tv Season";
public:
    Television_Show_Season(int ry, int sea, string pro, vector<string> dir, vector<string> la, int iid, string call, string ti, string gen ): release_year(ry), season(sea), producer(pro), director(dir), leading_actor(la), Media(iid, call, ti, gen){};
    int Get_Year(){return release_year;}
    int Get_Season(){return season;}
    string get_producer(){return producer;}
    vector <string> get_directors(){return director;}
    vector<string> get_leads(){return leading_actor;}
    string get_type(){return type;}
    friend ostream operator << (ostream& ost, const Television_Show_Season& tv);
    string to_string() const;
    
    
    
    
};
#endif /* hxq1073_Television_Show_Season_hpp */
