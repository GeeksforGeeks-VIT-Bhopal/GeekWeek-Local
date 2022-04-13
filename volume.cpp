#include <iostream>
using namespace std;
class Room {

   public:
    int length;
    int breadth;
    int height;

    int calculateArea() {
        return length * breadth;
    }

    int calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    // create object of Room class
    Room room1;

    // assign values to data members
    room1.length = 42;
    room1.breadth = 30;
    room1.height = 35;

    // calculate and display the area and volume of the room
    cout << "Area of Room =  " << room1.calculateArea() << endl;
    cout << "Volume of Room =  " << room1.calculateVolume() << endl;

    return 0;
}
