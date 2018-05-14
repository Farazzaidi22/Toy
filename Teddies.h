#include <iostream>
#include "cuddlytoys.h"

#ifndef TEDDIES_H
#define TEDDIES_H

using namespace std;

class teddies: public cuddlytoys
{
    public:
        teddies(string);
        void noise();
};

#endif // TEDDIES_H
