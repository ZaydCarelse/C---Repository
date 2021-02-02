#include<iostream>

using namespace std;

int main()
{
    cout << "Welcome to Ray's Cleaning services!" << endl;
    cout << "================================================" << endl;
    cout << "We aim to clean your home as if it were our own!" << endl;
    cout << "\nHow many rooms do you have to clean? ";

    int rooms_to_clean {0};
    cin >> rooms_to_clean;

    const double price_per_room {25};
    cout << "\nPrice per room: $" << price_per_room << endl;

    const double tax_rate {0.06};
    int validity {30};
    cout << "Total Cost: $" << price_per_room * rooms_to_clean << endl;
    cout << "Tax: $" << price_per_room * rooms_to_clean * tax_rate << endl;
    cout << "================================================" << endl;
    cout << "Total Estimate: $" << (price_per_room * rooms_to_clean * tax_rate) + (price_per_room * rooms_to_clean) << endl;
    cout << "This estimate is valid for " << validity << " days." << endl;

    return 0;
}