#include <iostream>
#include "bunnies.h"
#ifndef MANAGER_H
#define MANAGER_H

using namespace std;

class Manager: public bunnies
{
    public:
        Manager(string);
        void mnoise();
};

#endif // MANAGER_H
