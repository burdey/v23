//
// Created by Satori on 2022/5/31.
//

#ifndef ANIMAL_VEGIE_H
#define ANIMAL_VEGIE_H

#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class vegie:public animal {

private:
    string favourite_food;     // the vegie's favourite food, initialise to "grass"
    static int nextID;

public:
    vegie(string n,int v);
    std::string get_name();
    std::string get_favourite_food();
    void set_favourite_food(string n);

};


#endif //ANIMAL_VEGIE_H
