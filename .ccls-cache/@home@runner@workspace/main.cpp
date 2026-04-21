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
  uniform_int_distribution<> dist (1,25)

  randomNumber= dist(gen)
    
  return 0; 
}
