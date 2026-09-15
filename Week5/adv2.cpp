//Minh Nguyen
//Coding 1

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    srand(time(0));
    


    //pseudocode
    //what do we want to do?
    //setup
        //player health
        int health = 10;
        //total treasure;
        int totalTreasure = 1;
        //player dice roll
        int playerDiceRoll = 0;
        //enemy dice roll
        int enemyDiceRoll = 0;
        //player input
        string input;
    //greet the player
    cout << "Lets go on another adventure!\n";
    //start the game loop
    while(health > 0) {
        //ask if they want to go adventuring
        cout << "Would you like to go adventuring?\n";
        //get input
        cin >> input;

        //ask if they want to go adventuring
        //if they don't, end the program.
        if(input == "no"){
            break;  //This gets us out of the loop.
        }
        else if(input == "yes"){
            cout << "I like your enthusiasm! Lets go!\n";
        }
        else{   //else is catch-all case
            cout << "I don't understand. Lets go anyway!\n";
        }

        playerDiceRoll = rand() % 6 + 1;
        enemyDiceRoll = rand() % 6 + 1;

        if(playerDiceRoll >= enemyDiceRoll){
            totalTreasure += rand() % 10 + 1;
            cout << "You Won! You now have " << totalTreasure << " gold!\n";
        }

        else{
            health -= enemyDiceRoll;
            cout << "Ouch! You lost! you only have " << health << " remaining!\n";
        }

    }
    //ask if they want to go adventuring
    //if they don't, end the program.
    //if they do, start the encounter
        //roll dice for player
        //roll dice for enemy
            //if player roll is equal or higher
                //roll for gold amount and give to player
            //else
                // subtract enemy roll from player health
    
            //if player is still alive
                //keep looping
            //else
                //Tell how much gold they lost
    if(health > 3){
        cout << "Congratulations on returning home with " << totalTreasure << " gold.\n";
    }
    else if(health > 0){
        cout << "You need to see a doctor. You can afford it with your " << totalTreasure << " gold.\n";
    }
    else{
        cout << "You have died. " << totalTreasure << " gold lies next to your cold body.\n";
    }

    return 0;
} //End of entire program

//question
// how could we keep track of how many loops we been on?
// answer: create a variable loopCount ++

// how could we make the enemies stronger every 3 loops?
// enemyDiceRoll *= (loopcount /3)

//how do we know what round we are? if(loopCount % 5 == 0 )