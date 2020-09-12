//
//  hxq1073_Date.cpp
//  hxq1073_hw8
//
//  Created by Haris Qureshi on 3/21/18.
//  Copyright © 2018 Haris Qureshi. All rights reserved.
//

#include "hxq1073_Date.h"


/*ostream& operator << (ostream& ost, const Date tv)
{
 ost << tv.to_string() << endl;
    return ost;
    
}*/


string Date:: to_string() const
{
    stringstream ss;
    
    ss<< month<<"/"<<day<<"/"<<year;
    
    return ss.str();
}

void Date:: GTJ()
{
    julian =  (1461 * (year + 4800 + (month - 14)/12))/4 +(367 * (month -2 - 12 * ((month - 14)/12)))/12 - (3 * ((year + 4900 + (month - 14)/12)/100))/4 + day - 32075;
    
}
