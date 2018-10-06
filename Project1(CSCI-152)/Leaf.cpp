//
//  Leaf.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include "Leaf.hpp"

Leaf::Leaf(std::string n, Subject* s){
    _subject = s;
    name =  n;
}

void Leaf::traverse(){
    std::cout << name << std::endl;
}

void Leaf::Update(Subject* s){
    if (s == _subject){
    std::cout << "New massage for " << name << std::endl;
    
    }
}

void Leaf::addChildren(std::vector<Observer*> &bar){
  //  bar.push_back(this);
    
}


void Leaf::removeChildren(std::vector<Observer*> &bar){

}
void Leaf::setSubject(Subject* s)
{
    _subject = s;
}



