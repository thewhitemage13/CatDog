#include <iostream>
using namespace std;

class Dog; 

class Cat {
public:
    string name;

    Cat()
    {
    }

    Cat(const Dog& dog); 

    void Meow() {
        cout << "MEOW\n";
    }
};

class Dog {
public:
    string name;

    Dog()
    {
    }

    Dog(const Cat& cat);
   
    void Bark() {
        cout << "BARK\n";
    }
};

Cat::Cat(const Dog& dog) {
    name = dog.name;
}

Dog::Dog(const Cat& cat) {
    name = cat.name;
}

int main() 
{
    Cat c;
    c.name = "Barsik";
    cout << c.name << "\n";
    c.Meow();
    cout << "\n\n\n";
    Dog d = c; 
    d.Bark();
    cout << d.name << "\n";
    //Cat x = d;
    //x.Meow();
    //cout << x.name << "\n"; 
}