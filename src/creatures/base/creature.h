#ifndef CREATURE_H
#define CREATURE_H
#include <string>

class Creature {
public:
    //BASIC FUCTIONS
    int takeDamage(int damageTaken = 413);
    int restoreHP(int h);
    int attack(int id = NULL, int damageGiven = 413);

    //SETTERS AND GETTERS WEW
    void setHealth(int h = 100);
    int getHealth() const;
    void setArmor(int a = 0);
    int getArmor() const; ////TODO: ADD ACTUAL FUNCTIONS
    void setEnergy(int e = 10);
    int getEnergy() const;
    void setX(int x = 0);
    int getX() const;
    void setY(int y = 0);
    int getY() const;
    int getID() const; ////TODO: IMPLEMENT ID FUNCTION.

protected:
    int health;
    int armor;
    int energy;
    int xAxis, yAxis;
    int idNum;
};
#endif /* CREATURE_H */