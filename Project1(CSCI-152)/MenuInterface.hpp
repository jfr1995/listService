//
//  MenuInterface.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/28/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef MenuInterface_hpp
#define MenuInterface_hpp

#include <iostream>
#include <string>

class MenuI{
public:
    virtual void make_org(std::string) = 0;
    virtual void create_user(std::string) = 0;
    virtual void cd(std::string) = 0;
    virtual void del() = 0;
};


#endif /* MenuInterface_hpp */
