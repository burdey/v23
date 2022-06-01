//
// Created by Satori on 2022/5/31.
//

#include "zoo.h"

zoo(string n,int cows,int lions){
    name = n;
    int numbers_of_animals = cows+lions;

    animals = new animal* [numbers_of_animals];
    for(int i=0; i<numbers_of_animals; i++){
        if(i<cows){
            vegie* ani = new vegie("Daisy",100);
            animals[i] = ani;
        }
        else{
            hunter* ani - new hunter("Clarence",50);
            animals[i] = ani;
        }
    }
}

string zoo::get_name(){
    return name;
}

int zoo::get_numbers_of_animals(){
    return numbers_of_animals;
}

animal** zoo::get_animal(){
    return animal;
}