//Minh Nguyen
//Adventure 2 Assignment
//Objective: recreate adv2 but with functions

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Global variables
int health = 10;
int totalTreasure = 1;

// Function declarations
int DieRoll(int max);
bool AskYN(string question);
void Encounter();
void Ending();

int main() {
    srand(time(0));     //Seed random number generator.

    cout << "Lets go on an adventure!\n";   //Initial message.

    while (health > 0) {    //As long as health doesn't reach 0 then continue to ask to take risk.
        if (AskYN("Would you like to take a risk?") == false) {
            break;  //if "no" then get out of the loop entirely. straight to ending
        }

        Encounter();    //Call Encounter, the main gameplay loop.
    }

    Ending();   //Call ending.

    return 0;   //Exit program.
}

// Rolls a die with sides from 1 to some specified 'max'
int DieRoll(int max) {
    return rand() % max + 1;
}

//This function will prompt to ask if the user wants to go or no.
bool AskYN(string question) {
    string input;

    cout << question << endl;
    cin >> input;

    if(input == "no") {
        return false;
    }
    else if (input == "yes") {
        cout << "Like a true adventurer! Lets do this!\n";
        return true;
    }
    else {
        cout << "I'm going to take that as a yes. Lets go!\n";
        return true;
    }
}

// The main rng loop
void Encounter() {
    int playerDiceRoll = DieRoll(6);
    int enemyDiceRoll = DieRoll(6);

    if (playerDiceRoll >= enemyDiceRoll) {
        totalTreasure += DieRoll(6);

        cout << "You Won! You acquired " << totalTreasure << " gold!\n";
    }
    else {
        health -= enemyDiceRoll;

        cout << "Encounter lost! You only have " << health << " health remaining!\n";
    }
}


void Ending() {
    if (health > 5) {
        cout << "Congratulations on returning home with " << totalTreasure << " gold.\n";
    }
    else if (health > 0) {
        cout << "You survived with " << totalTreasure << " gold. You should probably see a doc though.\n";
    }
    else {
        cout << "You have died. " << totalTreasure << " gold has been lost...\n";
    }
}