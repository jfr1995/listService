//
//  Composite.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include "Composite.hpp"



Composite::Composite(std::string name, Composite* p){
    org_name = name;
    parent = p;
}


void Composite::display(){
    std::cout << org_name << std::endl;
}


void Composite::traverse(){
    for(int i = 0; i < children.size(); i++)
    {
        children.at(i)->traverse();
        
    }
}


void Composite::add(Component* item){
    children.push_back(item);
}

void Composite::remove(Component* item){
    for (int offset = 0; offset < children.size(); offset++)
    {
        if (item == children.at(offset))
        {
            std::cout << "deleted" << std::endl;
            children.erase(children.begin()+offset);
            break;
        }
    }

}

Composite* Composite::getParent(){
    return parent;
}

std::vector<Component*> Composite::getChildren(){
    return children;
}

std::string Composite::getName(){
    return org_name;
}

void Composite::Update(Subject* s){
    for (int i = 0 ; i < children.size(); i++){
    children.at(i)->Update(s);
    }
}

void Composite::addChildren(std::vector<Observer *> &bar){
    for(int i = 0; i < children.size(); i++){
        bar.push_back(children.at(i));
        children.at(i)->addChildren(bar);
    }
}


void Composite::setSubject(Subject * s){
    _subject = s;
}

void Composite::removeChildren(std::vector<Observer *> &bar){
    for(int i = 0; i < children.size(); i++){
        children.at(i)->removeChildren(bar);
    }
}
