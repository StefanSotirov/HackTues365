#include <iostream>
#include<stdlib.h>
#include <time.h>
#include "Header.h"
using namespace std;

int main()
{
    Ruler Stefko;
    Children Nikola;
    Relationships obj2;
    obj2.money = 200000000 + rand() % ((550000000 + 1) - 200000000);
    obj2.population = 150000 + rand() % (( 300000 + 1 ) - 150000);
    Relationships::resourcesvector.push_back(obj2);
    Nikola.child_name = "Nikola";
    Stefko.children.childrenvector.push_back(Nikola);
    Ruler::rulers.push_back(Stefko);
    Stefko.game_loop();
}
