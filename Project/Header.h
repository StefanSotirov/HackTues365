#pragma once
#include <iostream>
#include <iosfwd>
#include <vector>
using namespace std;
class Ruler;

class Relationships
{
public:
    int population;
    int money;
    static vector <Relationships> resourcesvector;
    int relationship_people = 0;
    int relationship_country = 0;
    bool is_it_trading = false;
    bool revolution = false;
    bool war = false;
    string people;
    string countries;
    void relationship_with_other_countries();
    void trading();
    void rebellion();
    void relationship_with_my_people();
    void infection();
    void reputation();
    void resources();
};

class Children
{
public:
    vector <Children> childrenvector;
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
    Relationships relationships;
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

