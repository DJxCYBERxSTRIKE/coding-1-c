//This is a comment
//Minh Nguyen Coding 1 Fall 2026

#include <iostream>  //for the cout
#include <string>    //for String variable

using namespace std;    //This is also for cout

//Start of program
int main() { // start of main() function
    cout << "FOR LIBERTY!\n"; //the \n is for new line it needs to be in the quotations
    cout << "Prosperity!\n";


    //Prompt user to type
    cout << "Greetings Helldiver! What is your designation?\n";
    //Part we use for getting user input
    //Store the input as a string variable
    string input;   //Create the variable named "input"
    //cin >> input;   //This is where user types in
    getline(cin, input);
    cout << "You said " << input << ".\n"; //Display the input

    //declaring the int variable for whole numbers
    //[variable] [name] then [value]
    int count = 10;

    cout << "The count is " << count << " .\n";

    //This is a while loop. It will keep going until condition is false
    //while(true){
    //    cout << "Hello!\n";
    //}
    //This will loop forever, dont do this
    //use ctrl + c to get out of the loop in developer command prompt

    //while (end condition) so it doesn't loop forever
    while(count > 0){
        //cout << "YAAA\n";
        //cout << count << " .\n";

        if(count % 2 == 0){
            cout << "Even!\n";
        }
        else{
            cout << "NAH " << count << " .\n";
        }

        count = count - 1;
    } // End of while() loop

    int totalKeys = 0;
    cout << "type 'key' to get a key!\n";
    cin >> input;

    if(input == "key") {
        cout << "You found a key!\n";
        totalKeys++;
        cout << "Number of keys:" << totalKeys << ".\n";
    }
    else {
        cout << "Sorry, YOU DIDN'T TYPE KEY!!!\n";
    }

    return 0;
} // end of main() function

//cl /EHsc [whateverfilename].cpp
//That is the recompile command line for developer command prompt
//that is also needed everytime we make a change in the code

//Helpful tip ctrl + / to comment a section