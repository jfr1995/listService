//
//  Menu.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/28/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp
#include <iostream>
#include "MenuInterface.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"

class MenuC : public MenuI{
public:
    MenuC(Composite*);
    void make_org(std::string);
    void create_user(std::string);
    void displayDirectory();
    void cd(std::string);
    void del(){};
    
    
private:
    Composite* current;
};

#endif /* Menu_hpp */
