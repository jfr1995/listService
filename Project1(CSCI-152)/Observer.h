//
//  Observer.h
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 4/4/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Observer_h
#define Observer_h
#include <vector>

class Subject;
//class Component;
class Observer {
public:
    virtual void Update(Subject*) = 0;
    virtual void addChildren(std::vector<Observer*> &bar) = 0 ;
    virtual void removeChildren(std::vector<Observer*> &bar) = 0;
    virtual void setSubject(Subject*) = 0;
};


#endif /* Observer_h */
