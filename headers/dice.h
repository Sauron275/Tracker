#include <stdlib.h>
#include <time.h>


class dice
{
private:
    int roll;
public:
    dice(/* args */);
    int rollD4();
    int rollD6();
    int rollD8();
    int rollD10();
    int rollD12();
    int rollD20();
    int rollD100();
    int rollDn(int);
    ~dice();
};

dice::dice(/* args */)
{
    srand(time(NULL));
}

int dice :: rollD4()
{
    this->roll = rand() % 4 + 1;
    return this->roll;
}

int dice :: rollD6()
{
    this->roll = rand() % 6 + 1;
    return this->roll;
}

int dice :: rollD8()
{
    this->roll = rand() % 8 + 1;
    return this->roll;
}

int dice :: rollD10()
{
    this->roll = rand() % 10 + 1;
    return this->roll;   
}

int dice :: rollD12()
{
    this->roll = rand() % 12 + 1;
    return this->roll;  
}

int dice :: rollD20()
{
    this->roll = rand() % 20 + 1;
    return this->roll;
}

int dice :: rollD100()
{
    this->roll = rand() % 100 + 1;
    return this->roll;
}

int dice :: rollDn(int n)
{
    this->roll = rand() % n + 1;
    return this->roll;
}

dice::~dice()
{
}
