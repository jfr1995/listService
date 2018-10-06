//
//  Admin.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 4/10/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include "Admin.hpp"

void Admin::mapping(){
    hash.insert(std::pair<std::string, Icommand*>("buildlist", NULL));
}

void Admin::getResponse(){
    hash["buildlist"];
}
