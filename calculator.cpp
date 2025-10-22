#include <string>
#include <iostream>



class Customer {
    public:
        double discountValue = 1;
        std::string customerType = "N/A";

        Customer() : customerType("N/A"), discountValue(1) {}


};

class VIP : public Customer {
    public:
        VIP() {
            discountValue = 0.90;
        }
};

class Loyal : public Customer {
    public:
        Loyal() {
            discountValue = 0.95;
        }
};


class DiscountCalculator {
public:
    double calculate(Customer * customer, double amount) {

        return amount * (customer->discountValue);
    
    }
};

// Included for demonstration
int main() {
    DiscountCalculator calc;
    VIP vip;
    Loyal loyal;
    Customer other;
    double price = 1000;

    std::cout << "VIP Customer Price: " << calc.calculate(&vip, price) << "\n";
    std::cout << "Loyal Customer Price: " << calc.calculate(&loyal, price) << "\n";
    std::cout << "Other Customer Price: " << calc.calculate(&other, price) << "\n";
}
