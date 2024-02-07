#include <iostream>
#include <string>
#include <vector>

class InventoryManager {
private:
    struct Item {
        std::string name;
        int quantity;

        Item(const std::string& n, int q) : name(n), quantity(q) {}
    };

    std::vector<Item> items;

public:
    void addItem(const std::string& name, int quantity) {
        items.push_back(Item(name, quantity));
        std::cout << "Item added successfully." << std::endl;
    }

    void displayInventory() const {
        std::cout << "Inventory Items:" << std::endl;
        for (const auto& item : items) {
            std::cout << "Name: " << item.name << ", Quantity: " << item.quantity << std::endl;
        }
    }
};

int main() {
    InventoryManager inventory;

    // Adding items to the inventory
    inventory.addItem("Item1", 10);
    inventory.addItem("Item2", 5);

    // Displaying the inventory
    inventory.displayInventory();

    return 0;
}
