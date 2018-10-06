//
//  Subject.h
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 4/4/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#ifndef Subject_h
#define Subject_h
#include "Observer.h"


#include <iostream>
#include <vector>

class Subject{
public:
    Subject(){};
    virtual void attatch(Observer*);
    virtual void detach(Observer*);
    virtual void notify();
    virtual void print();
//private:
    std::vector<Observer*> obs;
};


#endif /* Subject_h */
