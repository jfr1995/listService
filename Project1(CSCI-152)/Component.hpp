//
//  Component.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Component_hpp
#define Component_hpp
#include "Observer.h"
#include <iostream>
#include <string>

class Component : public Observer{
public:
    virtual void traverse(){};
    virtual std::string getName(){return "Component function called";};
    virtual void addChildren(std::vector<Observer*> &bar) = 0 ;

private:
    
};
#endif /* Component_hpp */
