//
//  Composite.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Composite_hpp
#define Composite_hpp

#include <iostream>
#include "Component.hpp"
#include "Observer.h"
#include <vector>

class Composite : public Component{
public:
    Composite(std::string, Composite*);
    void add(Component*);
    void remove(Component*);
    void display();
    void traverse();
    Composite* getParent();
    std::vector<Component*> getChildren();
    std::string getName();
    void Update(Subject*);
    void addChildren(std::vector<Observer*> &bar);
    void removeChildren(std::vector<Observer*> &bar);
    void setSubject(Subject*);
    
    
    
private:
    Subject* _subject;
    Composite* parent;
    std::string org_name;
    std::vector<Component*> children;
    
};

#endif /* Composite_hpp */
