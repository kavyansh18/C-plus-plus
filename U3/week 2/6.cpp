#include <iostream>
#include <stdexcept>

class ShoppingCart {
private:
    int availableStock = 10;
public:
    void addItem(int quantity) {
        if (quantity < 0) {
            throw std::invalid_argument("Invalid quantity. Quantity cannot be negative.");
        } else if (quantity > availableStock) {
            throw std::runtime_error("Insufficient stock. Requested quantity exceeds available stock.");
        } else {
            availableStock -= quantity;

            std::cout << quantity << " item(s) added to cart." << std::endl;
        }
    }
};

int main() {
    ShoppingCart cart;
    try {
        cart.addItem(5); // Valid quantity
        cart.addItem(-2); // Invalid quantity
        cart.addItem(10); // Exceeds available stock
    } catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
