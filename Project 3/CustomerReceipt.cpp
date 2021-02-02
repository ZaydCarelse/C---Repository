#include<iostream>

using namespace std;

int main()
{
    cout << "Welcome to Ray's Cleaning services!" << endl;
    cout << "================================================" << endl;
    cout << "We aim to clean your home as if it were our own!" << endl;
    
    cout << "\nHow many large rooms do you have to clean? ";
    int l_rooms_to_clean {0};
    cin >> l_rooms_to_clean;
    
    cout << "\nHow many small rooms do you have to clean? ";
    int s_rooms_to_clean {0};
    cin >> s_rooms_to_clean;

    const double s_price_per_room {25};
    const double l_price_per_room {40};
    cout << "\nPrice per large room: $" << l_price_per_room << endl;
    cout << "Price per small room: $" << s_price_per_room << endl;

    double total_cost = (s_price_per_room * s_rooms_to_clean) + (l_price_per_room * l_rooms_to_clean);

    const double tax_rate {0.06};
    double cost_with_tax = (total_cost * tax_rate);

    int validity {30};
    cout << "Total Cost: $" << total_cost << endl;
    cout << "Tax: $" << total_cost * tax_rate << endl;
    cout << "================================================" << endl;
    cout << "Total Estimate: $" << total_cost + (total_cost * tax_rate) << endl;
    cout << "This estimate is valid for " << validity << " days." << endl;

    return 0;
}