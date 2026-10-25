// Minh Nguyen
// Coding 1
// Functions
// fx.cpp

#include <iostream>
#include <string>
#include <vector>   //The more modular arrays.

using namespace std;

//declaring and defining a function
void SayHello() {
    cout << "Hello!\n";
}

// declaring and defining a function
// this time with input parameters

void Say(string something){
    cout << something << endl;  // end line
}

void CoolSay (string something) {
    for(int i = 0; i < something.size(); i++){
        cout << something [i] << " ";
    }
}

int Add(int numA, int numB){
    // this function has two inputs
    // returns sum
    return numA + numB;
}

bool AskYN(string question = "Keep playing?") {

    string input;

        while(true){
            cout << question << " (y/n)\n";
            getline(cin, input);

            if(input == "y"){
                return true;
            }
            else if(input == "n"){
                return false;
            }
            else{
                cout << "Invalid input. please type 'y' or 'n'\n";
            }
        }
}

//lets do dice roll
//display vectors function

//display vectors
    // input parameter = vector
    // return nothing = void
    // display all names with a loop

void DisplayVector(vector<string> vec) {
    //cout << "The first element in the vec is " << vec[0] << ".\n";

    for(int i = 0; vec.size(); i++) {
        cout << vec[i] << endl;
    }
}

//Need something that triples a number

int TripleThis(int numA) {
    numA = numA * 3;
    return numA;
}

int main() {
    cout << "Finally functions!!\n";

    cout << "5 tripled is " << TripleThis(5) << endl;

    // Call function
    SayHello();
    Say("Whats up buddy?");
    Say("Not much, you?");
    CoolSay ("USA");

    cout << "2 + 5 = " << Add(2, 5) << endl;
    cout << "345 + 334 = " << Add(245, 334) << endl;

    if(AskYN()){
        cout << "Let's start another round of the game!\n";
    }
    else{
        cout << "Thanks for playing!\n";
    }

    if(AskYN("Do you like green eggs and ham?\n")){
        cout << "Weirdo...\n";
    }
    else{
        cout << "Hmm...\n";
    }


    vector<string> names = {"Finn", "Jake", "Marceline", "Simon"};
    DisplayVector(names);

    //how to condense the above
    //if(AskYN())     cout << "Let's start another round of the game!\n";
    return 0;
}