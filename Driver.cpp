#include <iostream>
#include "cuddlytoys.h"
#include "Driver.h"

using namespace std;

Driver::Driver(string s) : teddies(s)
{

}


void Driver::dshow()
{
    teddies::noise();
    cout<<" and my color is Red and i am an engine driver";
}
