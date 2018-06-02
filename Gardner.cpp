#include <iostream>
#include "Gardner.h"

using namespace std;


Gardner::Gardner(string s) : bunnies(s)
{

}

void Gardner::gnoise()
{
    bunnies::bnoise();
    cout<<"my color is BLACK and i am a gardner";
}
