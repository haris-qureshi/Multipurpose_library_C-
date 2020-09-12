//
//  hxq1073_Movie.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Movie_h
#define hxq1073_Movie_h

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "hxq1073_Media.h"

using namespace std;

class Movie : public Media
{
private:
    int release_year;
    string producer;
    string director;
    vector<string> lead_actors;
    string type = "Movie";
public:
    Movie(int ry, string pro, string dir, vector<string>act, int iid, string call, string ti, string gen): release_year(ry), producer(pro), director(dir), lead_actors(act), Media(iid, call, ti, gen){};
    int get_year();
    string get_producer(){return producer;}
    string get_directors(){return director;}
    vector<string> get_leads(){return lead_actors;}
    string get_type(){return type;}
    friend ostream operator << (ostream& ost, const Movie& tv);
    string to_string() const;
    
    
    
};



#endif /* hxq1073_Movie_hpp */
