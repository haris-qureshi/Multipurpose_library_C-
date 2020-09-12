//
//  Bundle.cpp
//  
//
//  Created by Haris Qureshi on 4/11/18.
//

#include "hxq1073_Bundle.h"


void Bundle:: add_media(Media thing)
{
    if(thing.get_status() == true)
    {
        cout<< "item is already checked out" <<endl;
    }
    for(auto it: medias)
    {
        if(it.get_id() == thing.get_id())
        {
            cout<< "item is already in the bundle" <<endl;
        }
    }
    medias.push_back(thing);
}

void Bundle:: remove(int id)
{
    for(int it =0; it < medias.size(); it++)
    {
        if(medias[it].get_id() == id)
        {
            
            cout<< medias[it].get_title() << " was removed from the bundle" <<endl;
            medias.erase(medias.begin() +it);
            return;
        }
    }
    
    cout<< "The media is not in bundle" <<endl;
    return;
}


 void Bundle:: print()
{
    for(auto it: medias)
    {
        cout << it << endl;
    }
    
}





bool Bundle:: checking_in()
{
    if(check_out == false)
    {
        cout<< "The bundle is checked in" <<endl;
        return false;
    }
    else
    {
        for(auto it: medias)
        {
           if( it.set_status(false))
               cout<< it.get_title()<< " was properly check in" <<endl;
        }
    }
    return true;
}

bool Bundle:: checking_out()
{
    if(check_out)
    {
        cout<< "The bundle was already checked out" <<endl;
        return false;
    }
    else
    {
        for(auto it: medias)
        {
            if(it.set_status(true))
                cout<< it.get_title() << " was properly checked out" <<endl;
            
        }
        return true;
    }
}


string Bundle::to_string()
{
    stringstream ss;
    
    for(auto it: medias)
    {
        ss << it.to_string() <<endl;
    }
    return ss.str();
}
