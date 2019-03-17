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
    Ruler::resources();
}
void Ruler::ruler_death()
{
        cout << "\t\t\t\t\t" << Ruler::rulers.back().name << " Has Died\t\t\t\t"  << "money : " << money << "; " << "population : " << population << endl;
        Sleep(2000);
        rulers.erase(rulers.end());
        if (children.childrenvector.size() > 0)
        {
            Ruler obj1 = children.childrenvector[0].take_throne();
            rulers.push_back(obj1);
            children.childrenvector.erase(children.childrenvector.begin());
        }
        cout << "\t\t\t\t\tGame Over" << endl;
}

int Ruler::game_loop()
{
    int rand_int;
    while (Ruler::rulers.size() != 0)
        {
            rand_int = rand() % 100 + 1;
            age++;
            Ruler::reputation();
            Ruler::relationship_with_my_people();
            if (rand_int <= chance_to_get_child)
            {
                children.add_child();
                cout << "\t\t\t\t\t" << Ruler::rulers.back().name << " Has a new child named " << children.child_name << endl;
                Sleep(2000);
            }
            if (rand_int <= age)
            {
                ruler_death();
                break;
            }

        }
    return 0;
}

void Ruler::resources()
{
    population = 18000;
    money = 200000000 + rand() % ((550000000 + 1) - 200000000);
}
void Ruler::relationship_with_my_people()
{
     srand(time(0));
     relationship_people = 50;
     if (relationship_people >= 80)
     {
         people = "Good";
         money = money + (500000000 + rand() % (( 1000000000 + 1 ) - 500000000));
         population = population +  (500000 + rand() % (( 1000000 + 1 ) - 500000));
     }
     if (relationship_people >= 50 && relationship_people <= 79)
     {
         people = "Neutral";
         money = money + (-5000000 + rand() % (( 10000000 + 1 ) - 5000000));
         population = population +  (-50000 + rand() % (( 100000 + 1 ) - 50000));
         Ruler::trading();
         Ruler::infection();
     }
     if (relationship_people <= 49 && relationship_people >= 25)
     {
         people = "Bad";
         money = money + (-10000000 + rand() % (( -20000000 + 1 ) - 1000000));
         population = population + (-100000 + rand() % ((-200000 + 1) - 100000));
     }
     if (relationship_people <= 25)
     {
         money = money - 10000000;
         rebellion();
     }
}

void Ruler::rebellion()
{
    int ran_int = rand() % 100 + 1;
    if (ran_int > 50)
    {
        cout << "The people of your country killed you and your dynasty" << endl;
        ruler_death();
    }
    else
    {
        cout << "You survived the rebellion" << endl;
        money = money / 2;
        relationship_people = 50;
    }
}
void Ruler::infection()
{
    int random_integer = rand() % 100 + 1;
    if (random_integer <= 60)
    {
        cout << "The plague killed you and your dynasty." << endl;
        money = money / 2;
        ruler_death();
    }
    else
    {
        cout << "You survived the infection, but at great cost." << endl;
        population = population / 2;
        money = money / 2;
    }
}
void Ruler::War()
{
    int r_int = rand() % 100 + 1;
    int random_int2 = rand() % 100 + 1;
    if (r_int <= 40)
    {
        cout << "There is a war" << endl;
        money = money / 2;
        population = population / 2;
        if (random_int2 <= 30)
        {
            cout << "Your people have lost the war" << endl;
            ruler_death();
        }
    }
    else
    {
        cout << "You won the war" << endl;
        money = money + money;
        population = population / 2;
    }
}
void Ruler::reputation()
{
    relationship_people = relationship_people - 5;
}
void Ruler::trading()
{
    int random_in = rand() % 100 + 1;
    string decision;
    if (random_in <= 45)
    {
            cout << "Another nation wishes to do trading in your land.Do you wish to let them? : (Y/N)" << endl;
            cin >> decision;
            while (decision != "Y" && decision != "N")
        {
            cout << "Not a valid answer";
            cin >> decision;
        }
        if (decision == "Y")
        {
            money = money + (money/2);
            infection();
        }
        else
        {
            Ruler::War();
        }
    }
}


vector<Ruler> Ruler::rulers;
