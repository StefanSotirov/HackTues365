#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <stdio.h>
#include <time.h>
#include "Header.h"
using namespace std;

string names[20] = {"Antoan", "Anton", "Andrei", "Ivan", "Stefan", "Aleksander", "Boris", "Stanislav", "Nikola", "Nikolai", "Boqn", "Manoel", "Luchezar", "Georgi", "Krum", "Qsen", "Simeon", "Toma", "Mihail", "Iosif"};

void Children::add_child()
{
    child_name = names[rand() % 20];
    child_age = 0;
    childrenvector.push_back(*this);
}
Ruler Children::take_throne()
{
    Ruler obj1;
    obj1.age = child_age;
    obj1.name = child_name;
    return obj1;
}
