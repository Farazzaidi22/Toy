#include <iostream>
#include "teddies.h"
#ifndef CLOWN_H
#define CLOWN_H

using namespace std;

class Clown: public teddies
{
    public:
        Clown(string);
       void cnoise();
};

#endif // CLOWN_H
