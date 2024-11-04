//Crystal Zhang 
//Lab 7 
//11/3/2024

#include <iostream> 
#include <fstream>
#include <string>

using namespace std; 

int main () 
{ 
  double int1; 
  double int2; 
  double int3; 
  double average;

  string string;
  
  ifstream inFile; //input file stream variable
  inFile.open("game_scores.txt"); //opens the input file

  while (!inFile.eof()) //this loop with continue until the inFile has no more lines to run
    {
      inFile >> string >> int1 >> int2 >> int3; 
      average = (int1 *0.2) + (int2 * 0.3) + (int3 * 0.5);

      cout << "For " << string << ":" << endl;
      cout << "The average of all your scores is " << average << endl; 

      if (average > 2000) 
        cout << "Congrats! You are an Expert!" << endl;
      else if ((1800 <= average) && (average <= 2000))
        cout << "Master - Good Job!" << endl;
      else if ((1500 <= average) && (average < 1800)) 
        cout << "Advanced - Good Job!" << endl; 
      else if ((1000 <= average) && (average < 1500))
        cout << "Intermediate" << endl; 
      else
        cout << "Beginner - Keep Practicing!" << endl; 

      cout << "" << endl; 
    }
  
  inFile.close(); //closes the files
  
  return 0;
}
