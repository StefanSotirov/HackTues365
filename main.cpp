#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <windows.h>
#include <iostream>

using namespace std;

void percentChance(int outcome1Chance, int outcome2Chance, void (*outcome1)(), void (*outcome2)())
{
    srand (time(0));
    int a = 1 + (rand() % 100);
    if (a <= outcome1Chance)
    {
        outcome1();
    }
    else
    {
        outcome2();
    }
}

void Time(bool ifTrue)
{
    int seconds = 0;
    int year = 0;
    while (ifTrue == false)
    {
        year++;
        Sleep(1000);
    }
}

class Ruler
{

};

class Children
{

};

class Relationships
{

};

class Resourses
{
    public:
    int money;
    long people;
    long army;
    int food;
    void change_money();
    void change_people();
    void change_army();
    void change_food();
};

int main(){
    Resourses money_time,people_time,army_time,food_time;
    srand(time(NULL));
    people_time.people = 1000000+(rand() % 1500000);
    cout<<people_time.people<<endl;
    money_time.money = 150000000+(rand() % 200000000);
    cout<<money_time.money<<endl;
    army_time.army = 2000+(rand() % 50000);
    cout<<army_time.army<<endl;
    food_time.food = 300+(rand() % 4000);
    cout<<food_time.food<<endl;
    return 0;
}
