//
//  Transaction.cpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Transaction.h"

void Transaction:: check_out()
{
    int d,m,y;
    cout<< "What is the current date mm/dd/yyyy"<<endl;
    cin>>m>>d>>y;
    Date current(m, d, y);
    check_out_date = current;
    
    for(auto it: medias)
    {
        librarians.check_out(it);
    }
    
    for(auto it: bundles)
    {
        librarians.check_out(it);
    }
    cout<< "every thing was checked out on "<< current.to_string() <<endl;
}

void Transaction:: check_in()
{
    int d,m,y;
    cout<< "What is the current date mm/dd/yyyy"<<endl;
    cin>>m>>d>>y;
    Date current(m, d, y);
    check_in_date = current;
    customer.set_balance(calculate_fee(current));
    for(auto it: medias)
    {
        librarians.check_in(it);
    }
    
    for(auto it: bundles)
    {
        librarians.check_in(it);
    }
    cout<< "everything was checked in" <<endl;
    
}

double Transaction:: calculate_fee(Date current)
{
    double amount = 0.0;
    
    double fee = 0.5;
    
    current.GTJ();
    due_date.GTJ();
    int days = current.get_julian() - due_date.get_julian();
    
    if(medias.size() && bundles.size())
    {
        amount += days * medias.size() * bundles.size() * fee;
    }
    
    if(medias.size() && !bundles.size())
    {
        amount += days * medias.size()  * fee;
    }
    
    
    if(!medias.size() && bundles.size())
    {
        amount += days * bundles.size()  * fee;
    }
    
    return amount;
}



void Transaction:: add_media(Media thing)
{
    if(thing.get_status())
    {
        cout<< "the media is checked out" <<endl;
        return;
    }
    
    
    for(auto it: medias)
    {
        if(thing.get_id() == it.get_id())
        {
            cout<< "this media is already in the bundle" <<endl;
            return;
        }
    }
    
    medias.push_back(thing);
    
}


void Transaction:: add_bundle(Bundle things)
{
    if(things.get_status())
    {
        cout<<"the bundle is checked out"<<endl;
        return;
    }
    
    for(auto it: bundles)
    {
        if(it.get_name() == things.get_name())
        {
            cout<<"bundle is already in cart"<< endl;
            return;
        }
    }
    
    bundles.push_back(things);
}

void Transaction:: remove_media(Media thing)
{
    if(thing.get_status() == true)
    {
        cout<< "Can not remove something thats checked out" <<endl;
        return;
    }
    for (int i = 0; i <= medias.size(); i++)
    {
        if( medias[i].get_id() == thing.get_id())
        {
            medias.erase(medias.begin() +i);
            cout << "the media was successfully taken out" <<endl;
            return;
        }
    }
    cout<< "the media was not found in the list" <<endl;
    
}




void Transaction:: remove_bundle(Bundle things)
{
    if(things.get_status() == true)
    {
        cout<< "Can not remove something thats checked out" <<endl;
        return;
    }
    for(int i = 0; i <= bundles.size(); i++)
    {
        if (bundles[i].get_name() == things.get_name())
        {
            bundles.erase(bundles.begin() + i);
            cout<< "bundle was successfully removed" <<endl;
            return;
        }
    }
    
    cout<< "bundle was not found in the list" <<endl;
    return;
}



