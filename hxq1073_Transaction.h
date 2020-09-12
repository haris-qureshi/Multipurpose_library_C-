//
//  Transaction.hpp
//  Library
//
//  Created by Haris Qureshi on 4/16/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef Transaction_h
#define Transaction_h

#include <stdio.h>
#include "hxq1073_Customer.h"
#include "hxq1073_Librarian.h"
#include "hxq1073_Date.h"

class Transaction
{
    private:
    int transaction_number;
    Date check_out_date;
    Date check_in_date;
    Date due_date;
    Librarian librarians;
    Customer customer;
    vector <Media> medias;
    vector <Bundle> bundles;
    
    public:
    Transaction(int trans, Librarian worker, Customer consumer): transaction_number(trans), librarians(worker), customer(consumer){};
    double calculate_fee(Date current);
    int get_transaction_number(){return transaction_number;}
    void check_out();
    void check_in();
    void add_media(Media thing);
    void add_bundle(Bundle things);
    void remove_media(Media thing);
    void remove_bundle(Bundle things);
};

#endif /* Transaction_hpp */
