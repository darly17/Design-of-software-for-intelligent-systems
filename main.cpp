
#include "C:\Users\User\Desktop\Vectors\Vector.h"
#include <iostream>
using namespace std;


void Menu() {
    cout << "Menu Options:" << endl;
    cout << "1. Create a new vector" << endl;
    cout << "2. Calculate length of iput vector" << endl;
    cout << "3. Add vectors" << endl;
    cout << "4. Subtract from vector" << endl;
    cout << "5. Multiply vectors" << endl;
    cout << "6. Multiply vector by number" << endl;
    cout << "7. Divide vectors" << endl;
    cout << "8. Cosine between vectors" <<endl;
    cout << "9. Compare vectors" << endl;
    cout << "0. Exit" << endl;
}

void makeVector(Vector& vector) {
    double x1, y1, z1, x2, y2, z2;
    cout << "Enter coordinates of vector (x_begin y_begin z_begin x_end y_end z_end): ";
    std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    vector = Vector(x1, y1, z1, x2, y2, z2);
}




int main() {
    Vector a, b, c;
    double number,cosine,res;
    int choice;

    while (true) {
        Menu();
        cout << " Please enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            makeVector(a);
            cout << a << endl;
            break;
        case 2:
            cout << "Length: " << a.length_of_vector() << endl;
            break;
        case 3:
            makeVector(b);
            c = a + b;
            cout << c << endl;
            break;
        case 4:
            makeVector(b);
            c = a - b;
            cout << c << endl;
            break;
        case 5:
            makeVector(b);
            res = a * b;
            cout << res << endl;
            break;
        case 6:
            cout << "Enter number: ";
            cin >> number;
            c = a * number;
            cout << c << endl;
            break;
        case 7:
            makeVector(b);
            res = a / b;
            cout << res << endl;
            break;
        case 8:
            makeVector(b);
            cosine = a ^ b;
            cout << cosine<<endl;
            break;
        case 9:
            makeVector(b);
            if (a == b) {
                cout << "Vectors are equal" << endl;
            }
            else  if (a > b) {
                cout << "a > b" << endl;
            }
            else  if (a < b) {
                cout << "a < b" << endl;
            }
            break;
        
        case 0:
            return 0;
        default:
            
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
    
    return 0;
    
}