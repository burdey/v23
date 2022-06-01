//
// Created by Satori on 2022/5/31.
//

#include "hunter.h"

int hunter::nextID = 1000;

hunter::hunter(string n, int v):animal(n,v){
    nextID++;
    kills = 0;
    animalID = nextID;
}

string hunter::get_name(){
    return "Hunter: " + name;
}

int hunter::get_kills(){
    return kills;
}

void hunter::set_kills(int k){
    kills = k;
}
