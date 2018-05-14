#include <iostream>
#include "cuddlytoys.h"
#include "teddies.h"
#include "bunnies.h"
#include "driver.h"
#include "clown.h"
#include "manager.h"
#include "gardner.h"

using namespace std;

int main()
{
    cuddlytoys *t1= new Driver("small");
    t1->dnoise();
}
