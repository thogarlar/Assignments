#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    // Getter for width
    double getWidth() const {
        return width;
    }

    // Setter for width
    void setWidth(double newWidth) {
        // Validate that the width is non-negative
        if (newWidth >= 0) {
            width = newWidth;
        } else {
            std::cout << "Invalid width value. Width must be non-negative." << std::endl;
        }
    }

    // Getter for height
    double getHeight() const {
        return height;
    }

    // Setter for height
    void setHeight(double newHeight) {
        // Validate that the height is non-negative
        if (newHeight >= 0) {
            height = newHeight;
        } else {
            std::cout << "Invalid height value. Height must be non-negative." << std::endl;
        }
    }

    // Getter for area
    double getArea() const {
        return width * height;
    }
};

int main() {
    Rectangle rectangle;

    // Using setters to assign values
    rectangle.setWidth(5.0);
    rectangle.setHeight(10.0);

    // Using getters to retrieve values
    std::cout << "Width: " << rectangle.getWidth() << std::endl;
    std::cout << "Height: " << rectangle.getHeight() << std::endl;
    std::cout << "Area: " << rectangle.getArea() << std::endl;
    
    // Try setting invalid values
    rectangle.setWidth(-3.0);   
    rectangle.setHeight(-7.0);

    return 0;
}

