#include <iostream>
#include <string>
#include <string.h>

using namespace std;

#ifndef CUDDLYTOYS_H
#define CUDDLYTOYS_H


class cuddlytoys
{
    public:
        cuddlytoys(string);
        ~cuddlytoys();
        void show();
        void virtual noise()
        {

        }

        void virtual bnoise()
        {

        }

         void virtual mnoise()
        {

        }

        void virtual gnoise()
        {

        }

        void virtual dnoise()
        {

        }

        void virtual cnoise()
        {

        }
        /*friend ostream &operator << (ostream& out, cuddlytoys& ct)
        {
            out<<"I am a " <<ct;
            return out;
        }*/

    protected:
        string sizee;
};

#endif // CUDDLYTOYS_H
