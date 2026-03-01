//This Program calculates energy drink consumption.
#include <iostream>
using namespace std;

int main()
{

//Given information
  const double customers = 16500; // customers surveyed 
  const double percentPurchase = 0.15; // purchased one or more  
  const double percentCitrus = 0.58; // citrus flavor purchase 

//Calculations
  const double oneorMore = customers * percentPurchase;
  const double citrus = oneorMore * percentCitrus;

//Conclusion
  cout << "In the survey taken of 16,500 customers, \n" << oneorMore << " customers purchased one or more energy drinks." <<endl;
  cout << "Out of the customers that purchased one or more energy drinks,\n" << citrus << " customers purchased citrus flavored energy drinks." <<endl;

  return 0;
}