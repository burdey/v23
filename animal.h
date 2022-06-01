//
// Created by Satori on 2022/5/31.
//

#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H

#include <iostream>
using namespace std;

class animal {
protected:
    string name ;              // the animal's name
    int animalID ;             // the animal's unique ID
    int volume ;               // the volume of the animal's body

public:

    animal(string n, int v);
    virtual string get_name() = 0;
    void set_name(string n);
    int get_volume();
    void set_volume(int v);
    int get_animalID();

};


#endif //ANIMAL_ANIMAL_H
