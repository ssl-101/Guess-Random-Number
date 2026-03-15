//This program will display simple math problems
//for a tutoring program.
#include <iostream>
#include <random>
using namespace std;

int main()
{

//random number generator.
 std::random_device rd;
 std::mt19937 gen(rd());
 std::uniform_int_distribution<> dist(1, 100);

// 2 numbers for the simple addition problem.
 int firstNumber = dist(gen);
 int secondNumber = dist(gen);
 int answer;
 int correctAnswer = firstNumber + secondNumber;
  
//Simple addition problem
  cout << "Solve the problem below. Enter your answer" << endl;
  cout << firstNumber << " + " << secondNumber << " =?" << endl;
  
  cin >>answer;
  cout<< "Correct answer: "<< correctAnswer << endl;
  
  cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  cin.get();
  
   return 0;
}