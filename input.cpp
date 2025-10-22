#include <iostream>

class Input {
    public:
        virtual std::string getInput()=0;
};

class Keyboard: public Input {
public:
    std::string getInput () override{
        return "User input from keyboard";
    }
};

class Mouse: public Input {
public:
    std::string getInput() override{
        return "User input from mouse";
    }
};

// Right now this code assumes that input will come from the keyboard, 
// but we would like to be able to create an InputProcessor that 
// accepts input from the mouse (and potentially other input devices
// in the future). Note that each InputProcessor only needs to deal
// with one device.
class InputProcessor {
public:
    void processInput(Input* input) {

        std::string inputText = input->getInput();
        std::cout << "Processing: " << inputText << "\n";
    }
};

// For demonstration
int main() {
    Keyboard keyboard;
    Mouse mouse;
    InputProcessor processor;

    processor.processInput(&mouse);
    processor.processInput(&keyboard);
}
