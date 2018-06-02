#include <iostream>
#include "cuddlytoys.h"
#include "teddies.h"

#ifndef DRIVER_H
#define DRIVER_H

using namespace std;


class Driver: public teddies
{
    public:
        Driver(string);
        void dshow();
};

#endif // DRIVER_H
