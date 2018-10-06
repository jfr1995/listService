//
//  Leaf.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.


#ifndef Leaf_hpp
#define Leaf_hpp

#include <iostream>
#include "List.hpp"
#include "Component.hpp"
#include <vector>



class Leaf : public Component{
public:
    Leaf(std::string, Subject*);
    ~Leaf();
    void traverse();
    void Update(Subject*);
    void addChildren(std::vector<Observer*> &bar);
    void removeChildren(std::vector<Observer*> &bar);
    void setSubject(Subject*);
    
    
private:
    Subject* _subject;
    std::vector<std::string> messages;
    std::string name;
    
};

#endif /* Leaf_hpp */
