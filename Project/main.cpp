#include <iostream>
#include<stdlib.h>
#include <time.h>
#include "Header.h"
using namespace std;

int main()
{
    srand(time(0));
    Ruler Stefko;
    Children Nikola;
    Stefko.game_loop();
}
