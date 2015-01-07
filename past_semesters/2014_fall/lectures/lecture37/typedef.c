/*   File:  typedef.c
//   By:    The Awesome Students of EE160
//   Date:	Today :)
*/

#include <stdio.h>

// This program demonstrates using typedef
int main () {
  typedef float mi_per_hr_type;
  typedef float km_per_hr_type;
  
  mi_per_hr_type starting_velocity = 55.5;
  mi_per_hr_type ending_velocity = 40.5;
  
  printf("Starting velocity (mi/hr): %f\n", starting_velocity);
  printf("Ending velocity (mi/hr): %f\n", ending_velocity);
  
  km_per_hr_type converted_starting_velocity = starting_velocity * 1.60934;
  km_per_hr_type converted_ending_velocity = ending_velocity * 1.60934;
  
  printf("Converted starting velocity (km/hr): %f\n", converted_starting_velocity);
  printf("Converted ending velocity (km/hr): %f\n", converted_ending_velocity);
  
  return 0;
}