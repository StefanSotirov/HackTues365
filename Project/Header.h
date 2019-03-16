#include <iostream>
#include <iosfwd>
using namespace std;
class Ruler
{
public:
    int age;
    string name;
    Ruler();
    void ruler_death();
    bool new_child;
    void ruler_children();
    void ruler_actions();
};
class Children
{
public:
    int child_age;
    string child_name;
    string father_name;
    void create_children(Ruler new_child);
};
