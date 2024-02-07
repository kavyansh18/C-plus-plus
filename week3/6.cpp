#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    int id;
    double price;
    int quantity;

public:
    Product(const std::string& n, int i, double p, int q) : name(n), id(i), price(p), quantity(q) {}

    void displayDetails() const {
        std::cout << "Product Name: " << name << std::endl;
        std::cout << "Product ID: " << id << std::endl;
        std::cout << "Price: $" << price << std::endl;
        std::cout << "Quantity: " << quantity << std::endl;
    }
};

int main() {
    Product product("Laptop", 1001, 1200.50, 5);
    product.displayDetails();

    return 0;
}
