//
//  main.cpp
//  Library
//
//  Created by Haris Qureshi on 4/11/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include <iostream>
#include "hxq1073_Bundle.h"
#include "hxq1073_Date.h"
#include "hxq1073_Controller.h"
#include <gtkmm.h>

int main(int argc,  char * argv[]) {

    Gtk::Main kit(argc, argv,true);
    
    Library library;
    Controller controller();
    return 0;
}
