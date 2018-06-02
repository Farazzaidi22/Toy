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

    cout<<"\n\n";

    cuddlytoys *t2= new Clown("medium");
    t2->cnoise();

    cout<<"\n\n";

    cuddlytoys *t3= new Manager("big");
    t3->mnoise();

    cout<<"\n\n";

    cuddlytoys *t4= new Gardner("huge");
    t4->gnoise();
}
