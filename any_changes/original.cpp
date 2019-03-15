#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <unistd.h>
using namespace std;
class Children;
string names[20] = {"Antoan", "Anton", "Andrei", "Ivan", "Stefan", "Aleksander", "Boris", "Stanislav", "Nikola", "Nikolai", "Boqn", "Manoel", "Luchezar", "Georgi", "Krum", "Qsen", "Simeon", "Toma", "Mihail", "Iosif"};
int a = 1 + rand() % (( 20 + 1 ) - 1);
int b = 1 + rand() % (( 20 + 1 ) - 1);
string childName = names[a];
string kingName = names[b];
class Ruler
{
public:
    int age_;
    string name_;
	string father_name_; 
	public: //added some Mani
    Ruler(int age, string name,string father):
	age_(age),
	name_(name),
	father_name_(father)    
	{}
	void set_age(int age){
			age_=age;
	}
	void set_name(string name){
			name_=name;
	}
	void set_FatherName(string name){
			father_name_=name;
	}
    void die(Children*,int);//and here added Mani
    void get_older(int age)
    {
        int chanceToDie = 20;
        age_ = 20;
            while(true)
            {
                age++;
                chanceToDie++;
                cout << age << endl;
                srand (time(0));
                int a = 1 + (rand() % 100);
                if (a <= chanceToDie)
                {
                   //die(asdf);
                    break;
                }
                sleep(1000);
            }
    }
    void get_children()
    {
        int chanceToGetChild = 75;
        srand (time(0));
        int a = 1 + (rand() % 100);
        while(a <= chanceToGetChild)
        {
            chanceToGetChild = chanceToGetChild - 20;
            cout << "I just got a child" << endl;//ot Mani nadolu
			//if(pol_of_children()==1)
        }
    }
	char pol_of_children(){
		srand (time(NULL));
		int number=rand()%2;
		char letter;
		number==1?letter= 'm': letter= 'f';	
		return letter;
		//if case =0 girl
	}
};



class Children
{
//Children constructor

    string name_;
    int age_;
    string father_name_;
	char pol_;
	bool alive_;
	public:
	Children(){}
	Children(string name,int age,string father_name,char pol,bool alive=1):
		name_(name),
		age_(age),
		father_name_(father_name),
		pol_(pol)
	{}
	char get_pol(){
		return pol_;	
	}
	bool get_alive(){
		return alive_;
	}
	string get_name(){
		return name_;	
	}
	int get_age(){
		return age_;	
	}
	string get_father_name(){
		return father_name_;	
	}
    void death()
    {
 
    }
    void killed()
    {
        int chanceToGetKilled = 25;
        int a = 1 + (rand() % 100);
        if(a <= chanceToGetKilled)
        {
            death();
        }
    }
    void get_older()
    {
       int chanceToDie = 20;
       while(true)
       {
       		age_++;
                chanceToDie++;
                srand (time(0));
                int a = 1 + (rand() % 100);
                if (a <= chanceToDie)
                {
                    death();
                    break;
                }
                sleep(1000);
            }
   	}
};
void Ruler::die(Children* array,int count_boyses)//and here added Mani
{

	for(int i=0;i<count_boyses;i++){
			if(array[i].get_alive()==true){
					set_name(array[i].get_name());	
					set_age(array[i].get_age());
					set_FatherName(array[i].get_father_name());
					return;	
			}
	}
	//case if we don`t have child to become ruler
}
class Relationships{
    bool relationGood_people;
    bool relationGood_countries;
    //class Resourses resources;
public:
    int money;
    int food;
    long people;
    long army;
    void relations_with_people(){
        //resourses.food;
        if (relationGood_people == false){
            //Chastta na Stefan;
        }else if (relationGood_people == true){
            food = food + 300;
            money = money + 10000;
            army = army + 200;
        }
    }
    void relation_whit_other_countries(){
        if(relationGood_countries == true){
            food = food + 800;
            money = money + 50000;
        }else if(relationGood_countries == false){
            food = food - 1000;
            money = money - 80000;
            army = army - 5000;
        }
    }
};
 
class Resourses{
 
    class Relationships relation;
    public:
    void change_money(){
        bool ifTrue;
        int seconds = 0;
        int year = 0;
        while (ifTrue == false){
        year++;
        sleep(1000);
        relation.money = relation.money + 1000;
      }
    }
    void change_people(){
        bool ifTrue;
        int seconds = 0;
        int year = 0;
        while (ifTrue == false){
        year++;
        sleep(1000);
        relation.people = relation.people + 5000;
      }
    }
 
    void change_army(){
        bool ifTrue;
        int seconds = 0;
        int year = 0;
        while (ifTrue == false){
        year++;
        sleep(1000);
        if(relation.money > 500000){
                relation.army = relation.army + 500;
        }
      }
    }
    void change_food(){
        bool ifTrue;
        int seconds = 0;
        int year = 0;
        while (ifTrue == false){
        year++;
        sleep(1000);
        if(relation.money > 800000){
            relation.food = 2*relation.money;
        }else{
            relation.food = 3*relation.money;
        }
      }
    }
    void outOfWar(){
        bool ifTrue = false;
        if(ifTrue == true){
            relation.food = relation.food - 600;
            relation.money = relation.money - 200000;
        }
    }
};
//input da wuwedem %ot zemyata e obrabotwaema?
Children* resize_array(Children* array,int size_of_array,Children c){//adding new child
	Children* helping = new Children[size_of_array+1];
	for(int i=0;i<size_of_array+1;i++){
		if(i==size_of_array)
			helping[i]=c;
		else{helping[i]=array[i];}
	}
	delete [] array;
	array=helping;
	return array;
}
Children* add_new_prince(Children* array,Children child,int size_of_array,int number){
	
		Children* helping=new Children[size_of_array+1];
		for(int i=0;i<size_of_array;i++){
			if(i==number-1)
				break;
			helping[i]=array[i];			
		}
		helping[number-1]=child;
		for(int i=number;i<size_of_array+1;i++)
			helping[i]=array[i-1];
		delete[] array;
		array=helping;
	
}
int main()
{
    Ruler ruler1(10, "Ivan","asdf");
    ruler1.get_children();
	Children* children;
	children=new Children[0];
	Children* list_of_mens;
	list_of_mens=new Children[0];
	int age;
	string name;
	string fName;
	char pol;
	for(int i=0;i<3;i++)
	{
		cin>>age;
		cin>>name;
		cin>>fName;	
		cin>>pol;
		Children c(name,age,fName,pol);
		children=resize_array(children,i,c);
		
	}
	
	//Children c=next_ruler(children,3);
	//cout<<c.get_age()<<endl;
	//cout<<c.get_name()<<endl;
	//cout<<c.get_father_name()<<endl;
}
