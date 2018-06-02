#include <iostream>
#include "Clown.h"

using namespace std;

Clown::Clown(string s) : teddies(s)
{

}


void Clown::cnoise()
{
    teddies::noise();
    cout<<" and my color is blue and i am a clown";
}
