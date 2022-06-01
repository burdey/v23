//
// Created by Satori on 2022/5/31.
//

#ifndef ANIMAL_HUNTER_H
#define ANIMAL_HUNTER_H

#include <iostream>
#include <string>
#include "animal.h"

using namespace std;

class hunter:public animal {

private:
    int kills;
    static int nextID;
public:
    hunter(string n, int v);
    string get_name();
    int get_kills();
    void set_kills(int k);

};


#endif //ANIMAL_HUNTER_H
