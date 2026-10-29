//Minh Nguyen
//Classes

#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

//Class are custome variables
//they have thier own variables and functions
    //named data members
    //and member functions
    //they also have constructors and deconstructors
        //which run when the object is created
        // or destroyed

//The class
class Robot {
public:
    string name;
    float charge;   //0 to 1, as a percent

    //Creating constructor
    //Default constructor if given nothing
    Robot() {   //Must be named just like the class
        cout << "\tA new robot appears!\n";
    }


    Robot(string givenName, float givenCharge) {
        cout << "\tA new robot appears!\n";

        name = givenName;
        charge = givenCharge;
        status();
    }

    void status() {
        cout << "Hello, my name is " << name << ".\n";
        cout << "I have " << charge * 100 << "% battery left.\n";
    }

    void sleep() {
        charge += 0.2f;

        //clamp to ceiling
        if(charge > 1) charge = 1;

        this_thread::sleep_for(1s); //Cool delay effect

        cout << "After some recharging,\n my battery level is now at ";
        cout << charge * 100 << "%\n";
    }

}; //Don't forget about this semi-colon at the end of the class


int main() {
    cout << "Let's learn about Classes!\n";

    Robot rob;  //creating an instance of our class
    // use dot syntax to access the data on the robot
    rob.name = "RB-1";
    rob.charge = .78f;  //f means its a float, not a double

    //using the dot syntax to get the data on the robot.
    cout << "We've just met " << rob.name << ".\n";
    rob.status();

    cout << "Let's make another robot!\n";
    Robot baymax("Baymax", 0.2f);

    baymax.sleep();

    cout << "Charging...\n";

    while (baymax.charge < 1) {
        baymax.sleep();
    }

    return 0;
}