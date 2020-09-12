//
//  Library.hpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef Library_h
#define Library_h

#include <stdio.h>
#include "hxq1073_Transaction.h"
#include "hxq1073_Customer.h"
#include "hxq1073_Librarian.h"

class Library
{
    private:
    vector<Media> medias;
    vector<Bundle> bundles;
    vector<Customer> customers;
    vector<Librarian> librarian;
    vector<Transaction> transaction;
    public:
    void create_new_bundle();
    void create_new_media();
    void create_new_librarian();
    void create_new_customer();
    void create_new_transaciton();
    string print_bundle();
    string print_media();
    string print_librarians();
    string print_customers();
};
#endif /* Library_hpp */
