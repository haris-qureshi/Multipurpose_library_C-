//
//  Bundle.hpp
//  
//
//  Created by Haris Qureshi on 4/11/18.
//

#ifndef Bundle_h
#define Bundle_h

#include <stdio.h>
#include "hxq1073_Media.h"
#include<vector>

class Bundle
{
private:
    string name;
    vector<Media> medias;
    bool check_out = false;
public:
    Bundle(string n): name(n) {};
    string get_name(){return name;}
    bool get_status(){return check_out;}
    void add_media(Media thing);
    void remove(int id);
    bool checking_in();
    bool checking_out();
    void print();
    string to_string();
    
};



#endif /* Bundle_hpp */
