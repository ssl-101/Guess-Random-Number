//this program will display patterns
#include <iostream>
#include <random>
using namespace std;
int main()
{
  int randomNumber, inputNumber, guessTotal= 0;

  //random generator
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<> dist (1,25);

  randomNumber= dist(gen);

  cout<<"Guess the number, 1 through 25: "<<endl;
  
  
  while( inputNumber != randomNumber){
   cin>> inputNumber;
    guessTotal++;

    if (inputNumber < randomNumber)
    {
      cout<<" Nope! Guessed too low. Try again :"<<endl;
    }
     else ( inputNumber > randomNumber);
    {
      cout<<"Nope! Guessed too high. Try again :"<<endl;
    }
  }
    cout<<"Congrats! you got it in" << guessTotal << "tries! "<<endl;
  
  return 0; 
}
