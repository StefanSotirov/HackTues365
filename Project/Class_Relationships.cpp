#include <ctime>
#include <iostream>
#include <windows.h>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include "Header.h"

using namespace std;

void Relationships::relationship_with_my_people()
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

void Relationships::reputation()
{
    relationship_people--;
    relationship_country--;
}

void Relationships::rebellion()
{
    int random_int = rand() % 100 + 1;
    if (random_int > 50)
    {
        cout << "The people of your country killed you and your dynasty" << endl;
    }
    else
    {
        cout << "You survived the rebellion" << endl;
    }
}

void Relationships::infection()
{
    int random_int = rand() % 100 + 1;
    if (random_int <= 60)
    {
        cout << "The plague killed you and your dynasty." << endl;
    }
    else
    {
        cout << "You survived the rebellion, but at great cost." << endl;
    }
}

void Relationships::relationship_with_other_countries()
{
    relationship_country = 50;
    if (relationship_country >= 80)
    {
        money = money + (100000000 + rand() % ((200000000  + 1 ) - 100000000));
        countries = "Good";
    }
    if (relationship_country <= 50 && relationship_country >= 79)
    {
        countries = "Neutral";
    }
    if (relationship_country <= 49 && relationship_country >= 25)
    {
        countries = "Bad";
    }
    if (relationship_country < 25)
    {
        countries = "War";
    }
}

void Relationships::resources()
{
    population = 150000 + rand() % (( 300000 + 1 ) - 150000);
    money = 200000000 + rand() % ((550000000 + 1) - 200000000);
}
