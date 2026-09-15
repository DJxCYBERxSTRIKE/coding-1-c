// Minh Nguyen Coding 1 Fall 2026
// Adventure 1.0

// setup toolbox/ libraries
#include <iostream>
#include <string>
#include <cstdlib>  //
#include <ctime>    // These two are for randomization

using namespace std;

// start of program
int main() {
    // seed the random number generator
    srand(time(0));

    cout << "Let's go adventuring!\n";

    cout << "Here is a random number: ";
    cout << rand();
    cout << "\n";

    cout << "Here are ten random numbers:\n";
    int counter = 0;
    while(counter < 10) {
        //Mass select and do () to put things into parentheses
        cout << rand() % 10 + 1 << "\n";
        counter++;
    }


    // Pseudocode
    // Pick a number between 1 and 10 and store it.
    // Ask the player: "Guess my number 1-10 number please."
    // They answer, then we store it as an int variable
    // Check if the guess is correct, is input == theNumber
    // If true, they win and stop asking.
        // If false they can try again
            // Give hint
            // If too high, hint too high
                //else too low.
    // Ask again

    //This is a way to brainstorm on how to approach



    int theNumber = 0;  //This is the variable to store the number
                        // Do not assume a declared variable is 0, initialize it.
    theNumber = rand() % 10 + 1;    //Assign a value between 1-10
    cout << "Guess my number! it will be between 1 and 10.\n"; //Prompt question
    int guess = 0;  //Creating variable to store the guess
                //Put it here so its not in the loop
                //Everything that should be defined and not changed should be out of the loop


    do{
        //int guess; If that was put here it will continue to initialize
        cin >> guess;   //Getting the guess input


        if(guess == theNumber){
            cout << "HEY YOU GOT IT!\n";
        }
        else{
            if(guess > theNumber){
                cout << "The number is a bit lower.\n Guess again!\n";
                cout << "Hint... its " << theNumber << "\n"; //using this to debug, comment out if you don't want to see this
            }
            else{
                cout << "The number is a bit higher than that.\n";
                cout << "Hint... its " << theNumber << "\n"; //using this to debug, comment out if you don't want to see this
            }
        }
    } while(guess != theNumber);    //! = is the not operator

//    while(true){
        //While loop
        //This will keep looping
//    }

//    do{

//    }while(true);


    return 0;
}




// Reminder: EHsc adv.cpp to recompile through Developer Command Prompt

// Inclusive and Exclusive number parameters matter.