#ifndef MAGICCREATURE_H
#define MAGICCREATURE_H

#include "creature.h"

class MagicCreature: public Creature {
public:
    void restoreHPwithMP(int h);
    
    void setMana(int m = 5);
    int getMana() const;

protected:
    int mana;
    int manaMax;
};


#endif /* MAGICCREATURE_H */

