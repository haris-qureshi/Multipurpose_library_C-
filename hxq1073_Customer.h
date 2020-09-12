//
//  hxq1073_Customer.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Customer_h
#define hxq1073_Customer_h

#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

class Customer
{
private:
    string name;
    string email;
    int iid;
    int phone;
    double balance =0.0;
public:
    Customer(string n, string e, int i, int p): name(n), email(e), iid(i), phone(p), balance(0.0) {};
    Customer():name(""), email(""), iid(0), phone(0), balance(0){};
    string get_name(){return name;}
    string get_email(){return email;}
    int get_iid(){return iid;}
    int get_phone(){return phone;}
    double get_balance(){return balance;}
    friend ostream operator<< (ostream& ost, const Customer& tv);
    void set_balance(double bal){balance = bal;}
    string to_string() const;
};

#endif /* hxq1073_Customer_hpp */
