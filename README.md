# EXP-13 Constructor overloading




🎯 AIM:

    To study constructor overloading in C++ using a practical example and 
    highlight its role in object-oriented programming.

🛠 APPARATUS / SOFTWARE USED:

    - Visual Studio Code (VS Code)
   

📌 OBJECTIVES:

    - To understand how multiple constructors in a class increase usability.
    - To implement different types of constructors in a class.
    - To explain how constructor overloading helps in real-world applications.


📖 THEORY:


    Constructor Overloading allows multiple constructors with different argument
    lists inside the same class. The compiler decides which constructor to call
    depending on the arguments provided.

    🔹 Key Points:
        - Default constructors are useful for assigning general values.
        - Parameterized constructors allow flexibility in object creation.
        - Copy constructors enable cloning of objects.

    🔹 Example:
        In a "Rectangle" class:
        - A default constructor can assign length and breadth as 0.
        - A parameterized constructor can set custom dimensions.
        - A copy constructor can create an identical rectangle object.

    This makes code more robust and easier to maintain.

================================================================================
*/

#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Default Constructor
    Rectangle() {
        length = 0;
        breadth = 0;
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterized Constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
        cout << "Parameterized Constructor Called!" << endl;
    }

    // Copy Constructor
    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
        cout << "Copy Constructor Called!" << endl;
    }

    void area() {
        cout << "Rectangle Area: " << (length * breadth) << endl;
    }
};

int main() {
    cout << "Experiment 13: Constructor Overloading (Rectangle Example)\n\n";

    Rectangle r1;            // Default Constructor
    Rectangle r2(10, 5);     // Parameterized Constructor
    Rectangle r3(r2);        // Copy Constructor

    cout << "\nCalculating Areas:\n";
    r1.area();
    r2.area();
    r3.area();
        return 0;
}

 
  ✅ CONCLUSION:
  
        - Constructor overloading makes it possible to initialize objects in 
          multiple ways.
        - It simplifies object creation and provides more control to the programmer.
        - In this program, Rectangle objects were initialized with default, 
          parameterized, and copied values, proving the usefulness of constructor 
          overloading.
   
