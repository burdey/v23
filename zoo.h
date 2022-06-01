//
// Created by Satori on 2022/5/31.
//

#ifndef ANIMAL_ZOO_H
#define ANIMAL_ZOO_H

#include <iostream>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"

using namespace std;

class zoo {
private:
    string name ;                          // the zoo's name
    int number_of_animals ;                // the number of animals in the zoo
    animal **animals ;
public:
    zoo(string n,int cows,int lions);
    string get_name();
    int get_number_of_animals();
    animal** get_animals();

};


#endif //ANIMAL_ZOO_H
