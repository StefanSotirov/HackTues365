#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <stdio.h>
#include "Header.h"
using namespace std;

void Children::add_child()
{
    child_name = "Stefko";
    child_age = 0;
    childrenvector.push_back(child_name);
}
Ruler Children::take_throne()
{
    Ruler obj1;
    obj1.age = child_age;
    obj1.name = child_name;
    return obj1;
}
