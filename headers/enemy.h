#include <vector>
#include <string>
#include <dice.h>

enum creatureType {humanoid, beast, celestial, elemental, demon, undead};

class enemy
{
private:
    int initiative;
    int hp;
    std :: string enemyName;
    creatureType enemyType;
public:
    enemy(int, int, std:: string, creatureType);
    void setInitiative(int);
    ~enemy();
};

enemy::enemy(int initiative, int hp, std :: string enemyName, creatureType enemyType)
{
    this->initiative = initiative;
    this->hp = hp;
    this->enemyName = enemyName;
    this->enemyType = enemyType;
}

void enemy::setInitiative(int roll)
{
    this->initiative = roll;

    
}

enemy::~enemy()
{
}
