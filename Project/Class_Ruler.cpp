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
    srand(time(0));
    name = "Manoel";
    chance_to_get_child = 100;
}
void Ruler::ruler_death(relationships)
{
        cout << "\t\t\t\t\t" << Ruler::rulers.back().name << " Has Died\t\t\t\t"  << "money : " << relationships.resourcesvector.back().money << "; " << "population : " << relationships.resourcesvector.back().population << endl;
        Sleep(2000);
        rulers.erase(rulers.end());
        if (children.childrenvector.size() > 0)
        {
            Ruler obj1 = children.childrenvector[0].take_throne();
            rulers.push_back(obj1);
            children.childrenvector.erase(children.childrenvector.begin());
        }
}

void Ruler::game_loop()
{
    relationships.resources();
    int random_int;
    while (Ruler::rulers.size() != 0)
        {
        random_int = rand() % 100 + 1;
        age++;
        if (random_int <= chance_to_get_child)
        {
            children.add_child();
            cout << "\t\t\t\t\t" << Ruler::rulers.back().name << " Has a new child named " << children.child_name << endl;
            Sleep(2000);
        }
        if (random_int <= age)
        {
            ruler_death();
        }
    }
}

void Ruler::ruler_actions()
{

}

vector<Ruler> Ruler::rulers;
