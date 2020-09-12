//
//  hxq1073_Media.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Media_h
#define hxq1073_Media_h

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <stdlib.h>


using namespace std;

class Media
{
protected:
    int id_number;
    string call_number;
    string title;
    string genre;
public:
    Media(int iid, string call, string ti, string gen) : id_number(iid), call_number(call), title(ti), genre(gen) {};
    int get_id(){return id_number;}
    string get_call(){return call_number;}
    string get_title(){return title;}
    string get_genre(){return genre;}
    bool get_status(){return checked_out;}
    bool set_status(bool stat);
    string to_string() const;
    friend ostream& operator << (ostream& ost, const Media tv);
private:
    bool checked_out = false;
};

#endif /* hxq1073_Media_hpp */
