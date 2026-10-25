// Minh Nguyen
// array.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Loops and lists!\n";

    // Creating an array of favorite video games.
    // Variable type is 'string'. size is 5
    string favGames[5];

    // Assign a value to the first game in the array
    favGames[0] = "Ace Combat 8: Wings of Theve";

    cout << "My top fav game is " << favGames[0] << ".\n";

    return 0;
}