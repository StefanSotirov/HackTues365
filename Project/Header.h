#pragma once
#include <iostream>
#include <iosfwd>
#include <vector>
using namespace std;
class Ruler;

class Children
{
public:
    vector<string> childrenvector;
    int child_age;
    string child_name;
    string father_name;
    void add_child();
    Ruler take_throne();
};

class Ruler
{
public:
    static vector <Ruler> rulers;
    Children children;
    int age;
    bool ifDead;
    int count_children;
    int chance_to_get_child;
    string name;
    Ruler();
    void ruler_death();
    bool new_child;
    void game_loop();
    void ruler_actions();
};
