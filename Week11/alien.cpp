//Minh Nguyen
//Alien class

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

vector<string> planets = {"Earth", "Alderaan", "Sol", "Mars"};

//Alien
class alien {
    public:
    //limbcount
    int limbCount;
    //canFly
    bool canFly;
    //threatLevel
    int threatLevel;
    //homePlanet
    string homePlanet;

    //Constructor (will randomize all data members)
    alien() {
        limbCount = rand() % 20 + 2; //2 to 19
        homePlanet = planets[rand() % planets.size()];
        canFly = rand() % 2;
        threatLevel = rand() % 10 + 1;
    }

    //Constructor (will accept custom values)
    alien(int limbs, bool flying, int threat, string planet) {
        limbCount = limbs;
        canFly = flying;
        threatLevel = threat;
        homePlanet = planet;

    }

    //Contact() (Do they come in peace? Where are they from?)
    void Contact(){
        cout << "Greetings! I am from " << homePlanet << ".\n";
        cout << "I have " << limbCount << " limbs.\n";
        cout << boolalpha << "Flight: " << canFly << ".\n";
        cout << "My threat level is " << threatLevel << ".\n";
    }

    //Depart() (how do they leave - walking or flying?)
    void Depart() {
        if (canFly) {
            cout << "I will be flying.\n";
        }
        else {
            cout << "I can walk.\n";
        }
    }
};


int main() {
    srand(time(0));
    cout << "let's meet some aliens!\n";

    alien jimbo;
    jimbo.Contact();
    jimbo.Depart();

    cout << endl;   //just to space out

    alien bob(1, true, 3, "Sol");
    bob.Contact();
    bob.Depart();
}