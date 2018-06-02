#include <iostream>
#include "Manager.h"

using namespace std;

Manager::Manager(string s) : bunnies(s)
{

}


void Manager::mnoise()
{
    bunnies::bnoise();
    cout<<" my color is white and i am a bank manager";
}


