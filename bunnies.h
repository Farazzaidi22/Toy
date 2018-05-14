#include <iostream>
#include "cuddlytoys.h"

#ifndef BUNNIES_H
#define BUNNIES_H

using namespace std;


class bunnies: public cuddlytoys
{
    public:
        bunnies(string);
        void bnoise();

};

#endif // BUNNIES_H
