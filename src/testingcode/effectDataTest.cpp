// BASIC DATA STRUCTURE HOLDING EFFECTS.
//// TODO: IMPLEMENT DATA STRUCTURE.

#include <iostream>
#include <string>
#include <map>
#include <utility>

int EffectsTest() {
   // MAP CREATION
   std::map<int, std::pair<int, std::string>> effects;
   std::map<int, std::pair<int, std::string>>::iterator effectsIt;

   effects[0]= std::make_pair(5, "poison");
   effects[1]= std::make_pair(2, "fire");
   effects[2]= std::make_pair(2, "frozen");
   effects[3]= std::make_pair(6, "heal");

   effectIt = mymap.find(1);
   if (effectsIt != effects.end())
     mymap.erase (effectsIt);

  // print content:
   std::cout << "Status effects:" << '\n';
   std::cout << "0 => " << effects.find(0)->second.first << ": " << effects.find(0)->second.second << "\n";
   std::cout << "2 => " << effects.find(2)->second.first << ": " << effects.find(2)->second.second << "\n";
   std::cout << "3 => " << effects.find(3)->second.first << ": " << effects.find(3)->second.second << "\n";

   return 0;
}
