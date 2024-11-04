//Crystal Zhang 
//Lab 7 
//11/3/2024

#include <iostream> 
#include <fstream> //allows the use of txt files as data sources
#include <string> //allows the use of string variables 

using namespace std; 

int main () 
{ 
  double int1; //creates variables for the 1st, 2nd, and 3rd score
  double int2; 
  double int3; 
  
  double average; //variable for the average of all the scores

  string string; //string variable for the names
  
  ifstream inFile; //input file stream variable
  inFile.open("game_scores.txt"); //opens the input file

  while (!inFile.eof()) //this loop with continue until the inFile has no more lines to run
    {
      inFile >> string >> int1 >> int2 >> int3; //makes the inFile read the string, first number, second number, and third number on a line
      average = (int1 *0.2) + (int2 * 0.3) + (int3 * 0.5); //calculates the average for the numbers that the program read

      cout << "For " << string << ":" << endl; //Tells the viewer who is recieving this result
      cout << "The average of all your scores is " << average << endl; //prints the average of the scores

      if (average > 2000) //if the average is more than 2000
        cout << "Congrats! You are an Expert!" << endl; //print this
      else if ((1800 <= average) && (average <= 2000)) //if the average is between 1800 and 2000 inclusive 
        cout << "Master - Good Job!" << endl; //print this
      else if ((1500 <= average) && (average < 1800)) //if the average is 1500 or more but less than 1800
        cout << "Advanced - Good Job!" << endl; //print this
      else if ((1000 <= average) && (average < 1500)) //if the average is 1000 or more but less than 1500
        cout << "Intermediate" << endl; //print this
      else //if the average is less than 1000
        cout << "Beginner - Keep Practicing!" << endl; //print this 

      cout << "" << endl; //creates a space to make the output neater 
    }
  
  inFile.close(); //closes the files

  /* 
    For Jason:
The average of all your scores is 532
Beginner - Keep Practicing!

For Ashley:
The average of all your scores is 1064
Intermediate

For Kayden:
The average of all your scores is 2128
Congrats! You are an Expert!
  */ 
  
  return 0; //return code 
}
