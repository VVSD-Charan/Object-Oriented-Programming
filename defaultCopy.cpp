#include <iostream>
#include <string>
#include <cstring>  
#include <string>
using namespace std;

class Hero
{
    int health;
    
    public:
    
    char *name;
    char level;
    
    Hero(){
        cout<<"Constructor called\n";
        name = new char[100];
    }
    
    Hero(int health){
        this->health = health;
    }
    
    Hero(int health,char level){
        this->level = level;
        this->health = health;
    }
    
    int getHealth(){
        return health;
    }
    
    char getLevel(){
        return level;
    }
    
    void setHealth(int h){
        health = h;
    }
    
    void setLevel(char ch){
        level = ch;
    }
    
    void setName(char name[]){
        strcpy(this->name,name);
    }
    
    void print(){
        cout<<health<<" "<<level<<" "<<name<<"\n\n";
    }
};

int main()
{
    Hero h1;
    h1.setHealth(12);
    h1.setLevel('D');
    
    char name[7] = "Charan";
    h1.setName(name);
    
    h1.print();
    
    Hero h2(h1);
    h2.print();
    
    h1.name[0] = 'G';
    h1.print();
    h2.print();

    cout<<h2.name<<"\n";
}