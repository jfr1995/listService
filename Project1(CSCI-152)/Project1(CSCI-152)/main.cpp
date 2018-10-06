//
//  main.cpp
//  Project1(CSCI-152)
//
//  Created by Juan Ramirez on 3/27/18.
//  Copyright © 2018 Juan Ramirez. All rights reserved.
//

#include <iostream>
#include "Menu.hpp"
#include "Component.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"
#include "Subject.h"
#include "List.hpp"
#include <sstream>


int main(int argc, const char * argv[]) {
    

    
    std::string command;
    bool done = true;
    // create the organizations 
    Composite* FS = new Composite("Fresno State", NULL);
    Composite* CSM = new Composite("College of Science and Mathematics", FS);
    Composite* Lyles = new Composite("Lyles College of Engineering", FS);
    Composite* CSCI = new Composite("Computer Science", CSM);
    Composite* Math = new Composite("Mathematics", CSM);
    Composite* ECE = new Composite("Electrical & Computer Engineering", Lyles);
    
    //build the heirachy
    FS->add(CSM);
    FS->add(Lyles);
    CSM->add(CSCI);
    CSM->add(Math);
    Lyles->add(ECE);
    List* list = new List("listserv");
    
    // create the menu and set directory at Fresno State(Root)
    MenuC* menu = new MenuC(FS);
    
    
    
    
    
//    while (done)
//{
//        menu->displayDirectory();
//        std::cout << ">";
//        std::cin >> command;
//        std::istringstream iss(command);
//    
//        while (iss)
//        {
//            std::string s;
//            iss >> s;
//            if (s == "buildlist")
//            {
//                iss>> s;
//                list->build_list(s);
//            }
//
//            else if (s == "cd")
//            {
//                iss >> s;
//                menu->cd(s);
//            }
//
//            else if (s== "quit")
//            {
//                done = false;
//            }
//        }
//}
    

    
    return 0;
}
