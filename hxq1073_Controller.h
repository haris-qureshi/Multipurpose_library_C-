//
//  hxq1073_Controller.hpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Controller_h
#define hxq1073_Controller_h

#include <stdio.h>
#include "hxq1073_Library.h"
#include "hxq1073_view.h"

class Controller
{
private:
  Library library;
  View view;
public:
  void cli();
  void execute(int user);
  void media_stuff();
  void Transaction_stuff();
};


#endif /* hxq1073_Controller_hpp */
