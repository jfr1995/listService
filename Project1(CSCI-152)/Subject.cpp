
//  Subject.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 4/4/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.



#include "Subject.h"


void Subject::attatch(Observer* o){
    obs.push_back(o);
    o->addChildren(obs);
}


void Subject::detach(Observer* o){
    int count = (int)obs.size();
    int i;
    
    for (i = 0; i < count; i++) {
        if(obs[i] == o)
            break;
    }
    if(i < count)
        std::cout <<"found";
        obs.erase(obs.begin() + i);
}

void Subject::notify(){
    
        obs.at(0)->Update(this);
    
}

void Subject::print(){
    for(int i = 0; i < obs.size(); i++){
        std::cout << obs.at(i) << std::endl;
    }
}
