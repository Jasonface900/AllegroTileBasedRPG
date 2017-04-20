/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   launchermain.cpp
 * Author: Jorge
 * Currently being used as a testing ground.
 * Created on April 16, 2017, 11:10 AM
 */

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <map>
#include <utility>
/*
 * 
 */
int main(int argc, char** argv) {
    // MAP CREATION
    std::map <int, std::pair <int, std::string> > effects;
    std::map <int, std::pair <int, std::string> >::iterator effectsIt;

    for(int i = 0; i != 10; i++){
        std::string e = "NULL";
	//std::srand(std::time(NULL));
        switch(std::rand() % 10){
            case 0:
                e = "water_cold";
                break;
            case 1:
                e = "fire_magic";
                break;
            case 2:
                e = "blood_losing";
                break;
            case 3:
                e = "fire_lava";
                break;
            case 4:
                e = "ice_magic";
                break;
            case 5:
                e = "poison_animal";
                break;
            case 6:
                e = "water_hot";
                break;
            case 7:
                e = "ice_nature";
                break;
            case 8:
                e = "healing_magic";
                break;
            case 9:
                e = "healing_potion";
                break;
        }
        effects[i] = std::make_pair((std::rand() % 100)/10, e);
    }
   /*
    effects[0]= std::make_pair(5, "poison");
    effects[1]= std::make_pair(2, "fire");
    effects[2]= std::make_pair(2, "frozen");
    effects[3]= std::make_pair(6, "heal");
    
    
    effectsIt = effects.find(1);
    if (effectsIt != effects.end())
      effects.erase (effectsIt);
    */
    
  // print content:
    std::cout << "Status Effect List: " << "\n";
    for(int i = 0; i != (signed int)effects.size(); i++){
        std::cout << "\tTurns  : " << effects.find(i)->second.first << "\n";
        std::cout << "\tEffect : " << effects.find(i)->second.second << "\n\n";
    }
    
    /*
    std::cout << "Status effects:" << '\n';
    std::cout << "0 => " << effects.find(0)->second.first << ": " << effects.find(0)->second.second << "\n";
    std::cout << "2 => " << effects.find(2)->second.first << ": " << effects.find(2)->second.second << "\n";
    std::cout << "3 => " << effects.find(3)->second.first << ": " << effects.find(3)->second.second << "\n";
    */
    
    std::string input = "NULL";
    while(input == "NULL"){
        std::cin >> input;
    }
    return 0;
}

