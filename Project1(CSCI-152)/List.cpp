//
//  List.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include "List.hpp"

void List::build_list(std::string str){
    mp.insert(std::pair<std::string, List*>(str, new List(str)));
}

void List::subscribe(List * l, Observer * o){
    l->attatch(o);
}

void List::unsubscribe(List * l, Observer * o){
    l->detach(o);
}

List* List::getList(std::string str){
    return mp[str];
}
