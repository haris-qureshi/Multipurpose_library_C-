//
//  hxq1073_view.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 4/10/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_view_h
#define hxq1073_view_h

#include <stdio.h>
#include "hxq1073_Library.h"
#include "dialog.h"

using namespace std;

class View{
public:
    int Menu();
    int view_all();
    //string view_bundles();
    
    void print_meida(Library thing);
    int media_things();
    int Transaction_things();
    
    
};




#endif /* hxq1073_view_hpp */
