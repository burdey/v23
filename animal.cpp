//
// Created by Satori on 2022/5/31.
//

#include "animal.h"

animal::animal(string n, int v){
    animalID++;
    name=n;
    volume=v;
}

void animal::set_name(string n){
    name = n;
}

void animal::set_volume(int v){
    volume = v;
}

int animal::get_volume(){
    return volume;
}

int animal::get_animalID(){
    return animalID;
}


