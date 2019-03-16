#include <ctime>
#include <iostream>
#include <windows.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

using namespace std;
Ruler::Ruler()
{
    count_children = 0;
    age = 20;
    name = "Mani";
    Ruler::rulers.push_back(*this);
    chance_to_get_child = 75;
}
void Ruler::ruler_death()
{
        cout << Ruler::rulers.back().name << "Has Died" << endl;
        rulers.erase(rulers.end());
        if (rulers.size() > 0)
        {
            Ruler obj1 = children.take_throne();
            rulers.push_back(obj1);
        }
}

void Ruler::game_loop()
{
    int random_int;
    while (Ruler::rulers.size() != 0)
        {
        random_int = rand() % 100 + 1;
        age++;
        if (random_int <= chance_to_get_child)
        {
            cout << Ruler::rulers.back().name << "has a new child" << endl;
            chance_to_get_child = chance_to_get_child - 15;
        }
        if (random_int <= age - 15)
        {
            ruler_death();

        }

    }
}
void Ruler::ruler_actions()
{

}

vector<Ruler> Ruler::rulers;
