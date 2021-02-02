#include<iostream>

using namespace std;

int main(){
    int areaOfRoom {0};
    int room_width {0};
    int room_length {0};

    cout << "This application will calculate the area of your room:\n\n";
    cout << "What is the width of the room? ";
    cin >> room_width;
    cout << "\nWhat is the length of the room? ";
    cin >> room_length;
    cout << "\nCalculating...\n\n";
    areaOfRoom = room_length * room_width;
    cout << "The area of your room is " << areaOfRoom << " square metres!";

    return 0;
}