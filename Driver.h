#include <iostream>
#include "teddies.h"

#ifndef DRIVER_H
#define DRIVER_H

using namespace std;


class Driver: public teddies
{
    public:
        void dshow();
};

#endif // DRIVER_H
