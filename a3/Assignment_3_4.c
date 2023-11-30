/*
Write a program (using arrays and functions) that runs 1000 games of craps
(without human intervention) and answers each of the following questions (35 points):
    a) How many games are won on the first roll, second roll, ..., twentieth roll and after the
        twentieth roll?
    b) How many games are lost on the first roll, second roll, ..., twentieth roll and after the
        twentieth roll?
    c) What are the chances of winning at craps? [Note: You should discover that craps is
        one of the fairest casino games. What do you suppose this means?]
    d) What’s the average length of a game of craps?
    e) Do the chances of winning improve with the length of the game?*/

//Alex Koehn
//Assignment 3.4

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned int rollDice(void);

enum Status { CONTINUE, WON, LOST };

const size_t rollCheck = 20;
size_t wins[rollCheck] = {0};
size_t loss[rollCheck] = {0};


int main (void)
{
    unsigned int myPoint; // player must make this point to win
    enum Status gameStatus; // can contain CONTINUE, WON, or LOST
    unsigned int rollCounter;
    unsigned int rollTally = 0;
    unsigned int sum;

    //play 1000 games
    for(size_t i = 0; i <=1000; i++)
    {
        rollCounter = 0;
        sum = rollDice();
        //first roll of game
        switch(sum) 
        {
            // win on first roll
            case 7: // 7 is a winner
            case 11: // 11 is a winner          
                gameStatus = WON; 
                wins[0] += 1; //increment wins counter for roll 1
                break;

            // lose on first roll
            case 2: // 2 is a loser
            case 3: // 3 is a loser
            case 12: // 12 is a loser
                gameStatus = LOST; 
                loss[0] += 1; //increment loss counter for roll 1
                break;

            // remember point
            default:                  
                gameStatus = CONTINUE; 
                myPoint = sum; // remember the point
                break; 
        } 

        // 2nd ... 20th roll
        while (CONTINUE == gameStatus)
        {
            sum = rollDice(); // roll dice again

            //prevents counter from counting higher than 20
            if(rollCounter != rollCheck)
                rollCounter += 1;

            if (sum == myPoint) // win by making point
            { 
                wins[rollCounter] += 1; 
                gameStatus = WON; 
            } 
            else 
            {
                if (7 == sum) // lose by rolling 7
                {
                    loss[rollCounter] += 1;
                    gameStatus = LOST; 
                } 
            } 
        }

        rollTally += rollCounter;
    }

    unsigned int winTally = 0;
    unsigned int lossTally = 0;

    float firstWinChance, lastWinChance;

    printf("%s%8s%8s%12s\n", "Roll", "Wins", "Losses", "Win Chance");
    for(size_t i = 0; i <= rollCheck; ++i) 
    { 
        winTally += wins[i];
        lossTally += loss[i];

        if(i == rollCheck)//used to add a '+' to the 20th roll counter
        {
            printf("%4zu%s%6zu%9zu%12.3f\n", i,"+", wins[i], loss[i], (winTally * 1.0)/(winTally + lossTally));
        }
        else
        {
            printf("%4zu%7zu%9zu%12.3f\n", i+1, wins[i], loss[i], (winTally * 1.0)/(winTally + lossTally));
        }

        if(i == 0)//first roll
        {
            firstWinChance = (winTally * 1.0)/(winTally + lossTally);
        }
        else if(i == rollCheck)//last roll
        {
            lastWinChance = (winTally * 1.0)/(winTally + lossTally);
        }

    }
    
    puts("");puts("");
    printf("%s%.2f\n", "Total Chance of winning: ", winTally/1000.0);
    puts("");puts("");
    printf("%s%.2f%s\n", "Average Length of game: ", rollTally/1000.0, " rolls");
    puts("");puts("");
    printf("%s", "The chances of winning ");
    if(lastWinChance < firstWinChance)
    {
        printf("%s", "do not "); 
    }
    printf("%s\n\n", "improve with the length of the game.");
    return 0;
}

unsigned int rollDice(void)
{
   unsigned int die1 = 1 + (rand() % 6); 
   unsigned int die2 = 1 + (rand() % 6);
   return die1 + die2;
} 
