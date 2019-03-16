#include <ctime>
#include <iostream>
#include <windows.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

using namespace std;
vector<string> Rulers;
    Ruler::Ruler()
    {
        age = 20;
        name = "Mani";
        Rulers.push_back(name);
    }
    void Ruler::ruler_death()
    {
        int random_int;
        int get_older;
        get_older = age;
        while (true)
        {
            srand(time(0));
            random_int = rand() % 100 + 1;
            get_older++;
            ruler_children();
            if (random_int <= get_older)
            {
                cout << Rulers.back() << "Has Died" << endl;
                Rulers.erase(Rulers.end());
                break;
            }
        }
    }
    void Ruler::ruler_children()
    {
        int random_int;
        int chance_to_get_1child = 75;
        while (true)
        {
            cout << chance_to_get_child << endl;
            this->new_child = false;
            srand(time(0));
            random_int = rand() % 100 + 1;
            if (random_int <= chance_to_get_child)
            {
                this->new_child = true;
                cout << Rulers.back() << "has a new child" << endl;
                chance_to_get_child = chance_to_get_child - 25;
            }
            if (chance_to_get_child <= 1)
            {
                break;
            }
            ruler_death();

        }

    }
    void Ruler::ruler_actions()
    {

    }

int main()
{
    Ruler Stefko;
    Stefko.ruler_children();
}
