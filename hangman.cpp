// hangman.cpp
// Hangman game illustrates string library functions, 
// character arrays, arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Prototype. we'll define this below.
int processGuess(char* word, const char* targetWord, char guess, int random);

// Define an array of strings (since a string is just a char array)
//  and since string are just char *'s, we really want an array of char *'s
const char* wordBank[] = {"computer", "president", "trojan", "program",
                          "coffee", "library", "football", "popcorn", 
                          "science", "engineer"};

const int numWords = 10;

int main()
{
  srand(time(0));
  char guess;
  bool wordGuessed = false;
  int numTurns = 10;

  // Pick a random word from the wordBank
   int random = rand() % numWords;
  const char* targetWord = wordBank[random];
    cout << targetWord << endl;

  // More initialization code as needed
  char word[80]= {'*'};   // a blank array to use to build up the answer
                  // It should be initialized with *'s and then
                  //  change them to the actual letters when the 
                  //  user guesses the letter
     int arrayS;
    arrayS =  strlen(wordBank[random]);
    int astrCounter = arrayS;
    int countMyNumbers = 0;
    cout << "Current word: "; 
    for(int i = 0; i < arrayS; i++)
      {

            word[i]  = '*';
        cout << '*';

      }
    cout <<endl<< numTurns <<" remain...Enter a letter to guess:\n"; 

    int numCounter;

    while(numTurns != 0 && wordGuessed == false)
    {
    cin >> guess;
    processGuess(word, targetWord,guess, random);
    numCounter = processGuess(word, targetWord,guess, random);

            if(numCounter == 1)
            {
              astrCounter--;
               cout << "Yes\n";
                //countMyNumbers++;
            }
           if(numCounter == 0)
            {
              numTurns--;
              cout << "No\n";
                //countMyNumbers++;
            }
           if(numCounter == 2)
            {
               cout << "\nThe word was:  ";
               
               processGuess(word, targetWord,guess, random);
               wordGuessed = true;
               cout << "Maybe\n";
              //numTurns--;
                //countMyNumbers++;
            }
        
        if(astrCounter == 0)
        {
         cout << "You have guesssed the word Corredtly!" << endl;
         wordGuessed = true;   
        }
    cout << endl << numTurns << " remain... Enter a letter to guess:\n";
        
    }
    if(numTurns == 0 && wordGuessed == false)
       {
           cout << "Too many turns...You lose!\n";
       }

  
  // An individual game continues until a word
  //  is guessed correctly or 10 turns have elapsed




  // Print out end of game status


    
  return 0;
}

// Given the current version of the word, target/selected word, and
// the character that the user just guessed, change the word to 
// "turn on" any occurrences the guess character and return a count
// of how many occurrences of 'guess' were found
int processGuess(char* word, const char* targetWord, char guess, int random)
{
    int turnCounter = 10;

    int arrayS;
    int countAst = 0;
    int arrayShower = arrayS;
    arrayS =  strlen(wordBank[random]);
    cout << "\nCurrent Word: " ;
      for(int i = 0; i < arrayS; i++)
      {
        cout << word[i];

      }
      for(int i = 0; i < arrayS; i++)
      {
        if(guess == targetWord[i])
        {
            word[i]  = targetWord[i];
            arrayShower--;
            //countAst = 1;
        }
          else
          {
             countAst = 0; 
              turnCounter--;
          }
          
          if('*' != word[i])
          {
              countAst = 2;
          }

      }


    return countAst;
    
}


