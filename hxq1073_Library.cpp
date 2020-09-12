//
//  Library.cpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Library.h"
void Library:: create_new_librarian()
{
    string n;
    int d =0;
    cout<< "Enter the name of the new Librarian" <<endl;
    cin>> n;

    d = librarian.size();

    Librarian newbie(n, d);
    librarian.push_back(newbie);
}

void Library:: create_new_customer()
{
    string n, e;
    int i = customers.size();
    int p =0;

    cout<< "Enter the name of the customer" <<endl;
    cin>>n;
    cout<< "Enter the email" <<endl;
    cin>>e;
    cout<< "Enter the phone number" <<endl;
    cin>>p;

    Customer boi(n, e, i, p);
    customers.push_back(boi);
}

void Library:: create_new_media()
{
    int iid = medias.size();
    string call;
    string ti;
    string gen;

    cout<< "Enter the title of the media" <<endl;
    cin>>ti;
    cout<< "Enter the call number" <<endl;
    cin>>call;
    cout<< "Enter the genre of the media" <<endl;
    cin>>gen;

    Media thing (iid, call, ti, gen);
    medias.push_back(thing);

}


void Library:: create_new_bundle()
{
    string name;
    cout<< "Enter the name of the bundle" <<endl;
    cin>> name;

    Bundle thing(name);
    bundles.push_back(thing);
}


string Library:: print_media()
{
    string things;

    if(medias.size() == 0)
    {
      return "there no media";
    }

    for(auto it: medias)
    {
        things += it.to_string();
    }
    return things;
}

string Library:: print_bundle()
{

    string things;

    if(bundles.size() == 0)
    {
      return"there is no bundle";
    }

    for(auto it: bundles)
    {
        things += it.to_string();
    }
    return things;

}
string Library:: print_librarians()
{

    string things;

    if(librarian.size() == 0)
    {
      return "there are no librarians";
    }

    for(auto it: librarian)
    {
        things += it.to_string();
    }
    return things;
}
string Library:: print_customers()
{

    string things;

    if(customers.size() == 0)
    {
      return "no customers";
    }

    for(auto it: customers)
    {
        things += it.to_string();
    }
    return things;

}
