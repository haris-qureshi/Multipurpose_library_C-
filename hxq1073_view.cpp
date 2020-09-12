//
//  hxq1073_view.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 4/10/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_view.h"

int View:: Menu()
{
    string thing = R"(
    //////////////////
        Options
    \\\\\\\\\\\\\\\\\\

    (1) Print All Media
    (2) Create Stuff
    (3) Transaction Actions
    (4)
    (5)
    (6)
    )";
    //return thing;
    string result = Dialogs::input(thing, "Main menu");
    int temp = stoi(result);
    return temp;
}

int View::media_things()
{
    string thing = R"(
    --------------------
    I      Create      I
    --------------------

    (1) Create Media
    (2) Create Bundle
    (3) Create Librarian
    (4) Create Customer
    (5) Transaction Actions
    )";
    //return  thing;
    string result = Dialogs::input(thing,"Media_things");
    int temp = stoi(result);
    return temp;

}


int View:: Transaction_things()
{

    string thing = R"(

    =====================
     Transaction Actions
    =====================

    (1) Create New Transaction
    (2) Transaction Add Media
    (3) Transaction Add Bundle
    (4) Transaction Check Out
    (5) Transaction Check In
    (6) Print Cart

    )";

    //return thing;
    string result = Dialogs::input(thing, "Transaction_things");
    int temp = stoi(result);
    return temp;
}



void View:: print_meida(Library thing)
{
    string msg = R"(
    +++++++++++++++++++
        All Media
    +++++++++++++++++++
    )";
    
    msg+=thing.print_media();
    Dialogs::message(msg,"All Media");
    
    
}
