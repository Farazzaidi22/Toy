#include <iostream>
#include "cuddlytoys.h"
#include "teddies.h"

using namespace std;

teddies::teddies(string s): cuddlytoys(s)
{

}

void teddies::noise()
{
    cuddlytoys::show();
    cout<<" teddy bear";
    cout<<" AWwwwahoooooo!!!!!!!" << endl;
}
