//
//  hxq1073_Date.hpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#ifndef hxq1073_Date_h
#define hxq1073_Date_h

#include <stdio.h>
#include <string>
#include <sstream>

using namespace std;

class Date
{
private:
    int year;
    int month;
    int day;
    int julian;
public:
    Date(int m, int d, int y) : day(d), month(m), year(y) {GTJ();}
    Date():month(0), day(0), year(0){};
    void GTJ();
    int get_julian(){return julian;}
    int get_year(){return year;}
    int get_mon(){return month;}
    int get_day(){return day;}
    void set_month(int mon){month = mon;}
    void set_day(int da){day = da;}
    void set_year(int y){year =y;}
    //friend ostream& operator << (ostream& ost, const Date& tv);
    string to_string() const;
    Date& operator = (const Date& rhs)
    {
        if (this != &rhs)
        {
            year =rhs.year;
            month =rhs.month;
            day =rhs.day;
        }
        return *this;
    }
    
};


#endif /* hxq1073_Date_hpp */
