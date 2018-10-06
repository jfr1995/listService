//
//  Admin.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 4/10/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Admin_hpp
#define Admin_hpp

#include <iostream>
#include <map>
#include "Icommand.h"

class Admin{
public:
    void mapping();
    void getResponse();
    
private:
    std::map<std::string, Icommand*> hash;
};

#endif /* Admin_hpp */
