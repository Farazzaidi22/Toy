#include <iostream>
#include "cuddlytoys.h"
#include "bunnies.h"

using namespace std;

bunnies::bunnies(string si) :cuddlytoys(si)
{

}

void bunnies::bnoise()
{
    cuddlytoys::show();
    cout<<" bunny rabbit";
    cout<< " Squeee Squueee!!!!" << endl;
}
