/* 
Author: Sidrat Habib
Course: CSCI-135 
Instructor: Tong Yi and Michael Zamansky 
Assignment: Lab 3C + 3D 
    main.cpp
      reservoir.cpp
        reverseorder.cpp
        reverseorder.h

get_east_storage function accepts a std:string w/ date
returns the East Basin storage for that day
file calls and tests other factors
*/

#include <iostream>
#include "reservoir.h"
#include "reverseorder.h"

int main() {
//task A: East basin storage on that day
  std::cout << "Enter date: 01/07/2018" << std::endl;
  std::cout << "East Basin Storage: " << get_east_storage("07/24/2018") << " billion gallons" << std::endl;

//task B: Minimum and maximum storage in 2018
  std::cout << "Minimum storage in the East Basin: " << get_min_east() << " billion gallons" << std::endl;
  std::cout << "Maximum storage in the East Basin: " << get_max_east() << " billion gallons" << std::endl;

//task C: Comparing elevations
  std::cout << "03/17/2018 " << compare_basins("05/17/2021") << std::endl;
  std::cout << "04/14/2018 " << compare_basins("07/27/2021") << std::endl;

//task D: Reverse chronological order
  reverseorder("05/23/2018","12/28/2018");

  return 0;
}