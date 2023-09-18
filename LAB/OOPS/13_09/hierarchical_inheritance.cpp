#include<iostream>
using namespace std;
class Animal{
    public:
    int legs;
    void sound(){
        cout << "Default Sound\n";
    }
};
class Dog: public Animal{
    public:
    Dog(){
        legs = 4;
    }
    void sound(){
        cout << "Bark\n\n";
    }
    void disp(){
        cout << "Animal : Dog\n";
        cout << "No of legs = " << legs << endl;
        cout << "Sound\n";
        sound();
    }

};
class Cat: public Animal{
    public:
    Cat(){
        legs = 4;
    }
    void sound(){
        cout << "Meow\n\n";
    }
    void disp(){
        cout << "Animal : Cat\n";
        cout << "No of legs = " << legs << endl;
        cout << "Sound\n";
        sound();
    }

};

int main(){
    Dog d;
    Cat c;
    d.disp();
    c.disp();
    
    return 0;
}
/*
Animal : Dog
No of legs = 4
Sound
Bark

Animal : Cat
No of legs = 4
Sound
Meow
*/