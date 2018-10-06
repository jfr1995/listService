//  List.hpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.

#ifndef List_hpp
#define List_hpp
#include "Subject.h"

#include <iostream>
#include <string>
#include <map>



class List : public Subject{
public:

    List(std::string s){list_name = s;};
    ~List(){};
    void build_list(std::string);
    void subscribe(List*, Observer*);
    void unsubscribe(List*, Observer*);
    List* getList(std::string);

    
    
private:
    List* current;
    std::map<std::string, List*> mp;
    std::string message;
    std::string list_name;
    
    
    
    
};


#endif /* List_hpp */
