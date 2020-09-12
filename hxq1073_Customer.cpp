//
//  hxq1073_Customer.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Customer.h"
string Customer::to_string() const
{
    stringstream ss;
    
    ss <<"customer name : "<< name <<endl << "id number: " << iid <<endl << "phone number : "<< phone <<endl<< "email: "<< email<< endl<< "balance: "<< balance <<endl;
    
    return ss.str();
}


ostream& operator << (ostream& ost, const Customer tv)
{
    ost << tv.to_string();
    return ost;
}
