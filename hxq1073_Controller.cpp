//
//  hxq1073_Controller.cpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Controller.h"
void Controller:: cli()
{
  int user =-1;
  while(user != 0)
  {
      user = view.Menu();
    execute(user);
  }
}

void Controller ::execute(int user)
{
  switch (user) {
    case 1:
        view.print_meida(library);
    break;
    case 2:
    media_stuff();
    break;
    case 3:
    Transaction_stuff();
    break;
    default:
    Dialogs::message("not the correct choice","Default screen");
    break;
  }
}

void Controller:: media_stuff()
{
    int user = view.media_things();
  switch (user) {
    case 1:
    library.create_new_media();
    break;
    case 2:
    library.create_new_bundle();
    break;
    case 3:
    library.create_new_customer();
    break;
    case 4:
    library.create_new_librarian();
    break;
  }
}



void Controller:: Transaction_stuff()
{

int user = view.Transaction_things();

switch(user)
{
case 1:
//library.create_new_transaction();
break;
case 2:
break;

}



}
