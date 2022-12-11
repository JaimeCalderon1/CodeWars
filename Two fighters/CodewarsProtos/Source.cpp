#include <iostream>
#include <stdlib.h>

//using namespace std;


class Fighter
{
private:
    std::string name;

    int health;

    int damagePerAttack;

public:
    Fighter(std::string name, int health, int damagePerAttack)
    {
        this->name = name;
        this->health = health;
        this->damagePerAttack = damagePerAttack;
    }

    ~Fighter() { };

    std::string getName()
    {
        return name;
    }

    int getHealth()
    {
        return health;
    }

    int getDamagePerAttack()
    {
        return damagePerAttack;
    }

    void setHealth(int value)
    {
        health -= value;
    }
};


std::string declareWinner(Fighter* fighter1, Fighter* fighter2, std::string firstAttacker)
{
    // condition check for first attacker
    if (firstAttacker == fighter1->getName())
    {
        do
        {
            // attack and subtract health
            std::cout << fighter1->getName() << " is attacking!\n";
            fighter2->setHealth(fighter1->getDamagePerAttack());
            std::cout << fighter2->getName() << " is attacking!\n";
            fighter1->setHealth(fighter2->getDamagePerAttack());
        } while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0);
    }
    else 
    {
        do
        {
            std::cout << fighter2->getName() << " is attacking!\n";
            fighter1->setHealth(fighter2->getDamagePerAttack());
            std::cout << fighter1->getName() << " is attacking!\n";
            fighter2->setHealth(fighter1->getDamagePerAttack());
        } while (fighter1->getHealth() > 0 && fighter2->getHealth() > 0);
    }
    
    if (fighter1->getHealth() <= 0)
    {
        std::cout << fighter2->getName() << " has WON the fight!\n";
        return fighter2->getName();
    }
    else
    {
        std::cout << fighter1->getName() << " has WON the fight!\n";
        return fighter1->getName();
    }

    
}

int main()
{
    // create pointers for objects
    Fighter* fighter1 = nullptr; 
    Fighter* fighter2 = nullptr;
    // pointers
    fighter1 = new Fighter("Lew", 10, 2);
    fighter2 = new Fighter("Harry", 5, 4);
    declareWinner(fighter1,fighter2,"Lew");
    // delete objects
    delete(fighter1);
    delete(fighter2);
    
}

