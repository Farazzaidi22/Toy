#include <iostream>
#include "bunnies.h"
#include "cuddlytoys.h"
#ifndef GARDNER_H
#define GARDNER_H

using namespace std;

class Gardner: public bunnies
{
    public:
        Gardner(string);
        void gnoise();

    private:
};

#endif // GARDNER_H
