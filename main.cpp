#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <windows.h>

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

int main()
{

}
