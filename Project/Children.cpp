#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <vector>
#include <stdio.h>
#include "Header.h"
using namespace std;

vector<string> childrenvector;
void Children::create_children(Ruler child)
    {
        if (child.new_child == true)
        {
            child_name = "Stefko";
            child_age = 0;
            childrenvector.push_back(child_name);
        }
    }
