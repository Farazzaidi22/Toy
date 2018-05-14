#include <iostream>
#include "cuddlytoys.h"

using namespace std;


cuddlytoys::cuddlytoys(string s)
{
    this->sizee=s;
}

cuddlytoys::~cuddlytoys()
{
    void show();
}

void cuddlytoys::show()
{
    cout<<"I am a " <<this->sizee;
}

