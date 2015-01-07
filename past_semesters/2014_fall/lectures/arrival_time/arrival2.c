#include <stdio.h>

main () {
  float dept_hour;
  float dept_min;
  float travel_hour;
  float travel_min;
  float arrival_hour;
  float arrival_min;
  
  // GET departure time (point A)
  printf ("Please enter Departure time or EOF to quit:\n");
  scanf ("%f %f", &dept_hour, &dept_min);
  
  // GET travel time (point B)
  printf ("Please enter Travel time: \n");
  scanf ("%f""%f", &travel_hour, &travel_min);
  
  // combine departure time and travel time (point C)
  arrival_hour = dept_hour + travel_hour;
  arrival_min = dept_min + travel_min;

  // convert extra minutes to extra hours (point D)
  //okay.
  if (arrival_min >= 60) {
    arrival_hour = arrival_hour + (int) arrival_min / 60;
    arrival_min = (int) arrival_min % 60;
  }
  
  if (arrival_hour >= 24) {
    arrival_hour = arrival_hour - 24;
  }

  // account for time zones (point E)
  arrival_hour = arrival_hour + 2;
  
  if (arrival_hour < 12) {
    printf("arrival time: %.0f:%.0f\n", arrival_hour, arrival_min);
  } else {
    printf("arrival time: %.0f:%.0f\n", arrival_hour-12, arrival_min);
  }
  
  return 0;
}