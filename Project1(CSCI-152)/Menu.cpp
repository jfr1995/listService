//
//  Menu.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/28/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include "Menu.hpp"


void MenuC::make_org(std::string name){
    current->add(new Composite(name,current));
}

void MenuC::create_user(std::string name){
    current->add(new Leaf(name, NULL));
}

MenuC::MenuC(Composite* c){
    current = c;
}

void MenuC::displayDirectory(){
    current->display();
}

void MenuC::cd(std::string dir){
    if(dir == "..")
    {
        if(current->getParent() == NULL)
        {
            std::cout << "Directory does not exist" << std::endl;
            return;
        }
        current = current->getParent();
        return;
    }
    std::vector<Component*> temp = current->getChildren();
    for(int i = 0; i < temp.size(); i++){
    
        if(dir == temp.at(i)->getName())
        {
            
            current = (Composite*) temp.at(i);
            return;
            
            
        }
    }
    
    std::cout << "Directory does not exist" << std::endl;
    return;
}
