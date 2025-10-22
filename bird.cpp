#include <iostream>

class Bird {
public:
    virtual void lay_egg() {
        std::cout << "Egg\n";
    }
};

class FlyingBird : public Bird {
    public:
        void fly() {
            std::cout << "Bird is flying\n";
        }
};

class Ostrich : public Bird {
public:
    void run()  {
        std::cout << "Ostrich is running!\n";
    }
};

class Eagle: public FlyingBird {
    public:
        void fly() {
        std::cout << "Bird is flying\n";
    };
};

// For demonstration
int main() {
    Eagle eagle;
    Ostrich ostrich;
    
    eagle.lay_egg();
    eagle.fly();

    ostrich.lay_egg();
    ostrich.run();
}

//The bird class implies that all birds should be able to fly, but the ostrich class removes that functionality
//Based on the Liscov Substitution Principle, a subclass should be able to act as a stand-in for a parent class
//A better formulation might to extend bird class with FlyingBird and make an eagle a sublcass of that 