#include <iostream>

class Box {
private:
    double length;
    double width;
    double height;

public:
    // 1. Default Constructor
    Box() {
        length = 1.0;
        width = 1.0;
        height = 1.0;
        std::cout << "Default constructor called. Box initialized to 1x1x1.\n";
    }

    // 2. Parameterized Constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        std::cout << "Parameterized constructor called for Box (" << length << "x" << width << "x" << height << ").\n";
    }

    // 3. Copy Constructor
    Box(const Box &obj) {
        length = obj.length;
        width = obj.width;
        height = obj.height;
        std::cout << "Copy constructor called. Cloned a Box of size (" << length << "x" << width << "x" << height << ").\n";
    }

    // 4. Destructor
    ~Box() {
        std::cout << "Destructor called. Cleaning up Box (" << length << "x" << width << "x" << height << ").\n";
    }

    // Method to calculate the volume of the box
    double calculateVolume() const {
        return length * width * height;
    }

    // Method to display object information
    void displayInfo() const {
        std::cout << "Box Dimensions: " << length << " x " << width << " x " << height << "\n";
        std::cout << "Box Volume: " << calculateVolume() << "\n\n";
    }
};

int main() {
    std::cout << "--- Creating box1 using Default Constructor ---\n";
    Box box1;
    box1.displayInfo();

    std::cout << "--- Creating box2 using Parameterized Constructor ---\n";
    Box box2(5.5, 3.0, 2.0);
    box2.displayInfo();

    std::cout << "--- Creating box3 using Copy Constructor (copy of box2) ---\n";
    Box box3 = box2; // Invokes the copy constructor
    box3.displayInfo();

    std::cout << "--- Exiting program (Destructors will be invoked automatically) ---\n";
    return 0;
}