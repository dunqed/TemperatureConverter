#include <iostream>
using namespace std;
int main () {

  double fTemp, step1, step2, step3;

  //Get farenheit from user
  cout << "What is the temperate in farenheit? ";
  cin >> fTemp;

  //Do the Math
  step1 = fTemp - 32;

  step2 = step1 * 5;

  step3 = step2 / 9;

  //Display result to the user
  cout << "The temperature in Celsius is: " << step3 << endl;
  return 0;    
}