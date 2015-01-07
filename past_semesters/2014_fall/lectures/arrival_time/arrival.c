/*
#include<stdio.h>

main () {
    double rainbow;
    double dash;
    double apple;
    double jack;
    double twilight;
    double sparkles;
    int rarity;
    
    
    printf("Please enter departure time (hours and minutes): ");
    scanf(" %lf %lf", &rainbow, &dash);
    printf("Please enter flight time (hours and minutes): ");
    scanf(" %lf %lf", &apple, &jack);
    
    twilight = rainbow + apple;
    sparkles = dash + jack;
    
    if (sparkles >=60) {
        sparkles = (int) sparkles % 60;
        rarity = sparkles / 60;
        twilight = twilight + rarity;
    }
    twilight = twilight + 2;
    if (twilight >=24) {
        twilight = (int) twilight % 24;
        rarity = 100;
    }
    if (rarity = 100) {
        printf("You will arrive at %d:%d the next day\n", (int) twilight, (int) sparkles);
    }
    else {
        printf("You will arrive at %d:%d\nf", (int) twilight, (int) sparkles);
    }
}
*/

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
    arrival_hour++;
    arrival_min = arrival_min - 60;
    /* if you wanted to account for 120+ edge case
    arrival_hour = arrival_hour + (int) arrival_min / 60;
    arrival_min = (int) arrival_min % 60;
    */
  }
  
  if (arrival_hour >= 24) {
    arrival_hour = arrival_hour - 24;
  }

// account for time zones (point E)
  //time zone difference
  arrival_hour = arrival_hour + 2;
  
  printf("arrival time: %f:%f", arrival_hour, arrival_min);
  
}




/*
// GET departure time (point A)
8 45
// GET travel time (point B)
4 45

// combine departure time and travel time (point C)
45 + 45 = 90 -> 1 hr 30 min
8 + 4 = 12

// convert extra minutes to extra hours (point D)
12:00 + 1 hr 30 min = 13:30

// account  for time zone (point E)
13:30 + 2 hr = 15:30

15:30
*/


/*
while
if
scanf
*/

/*
departure time: 8:45
flight time: 4:45
45 + 45 = 90 
90 % 60 = 30 (extra minutes)
90 / 60 = 1 (extra hours)
90 - 60 = 30 (hour: +1)
*/

            
/*
Understand the problem: This program is given the flight departure time in Honolulu (Hawaiian Standard Time is time zone -10), and the flight duration. It should print the arrival time in San Francisco (Pacific Standard Time is time zone -8). For example, if the traveler leaves Honolulu at 8:45 am, on a flight taking 4 hours 45 minutes, the program execution might look like:
       Enter departure time
               in hours minutes (24 hour time, EOF to quit): 8 45
       Enter flight time
               in hours minutes: 4 45
       You will land at 15:30
       Enter departure time
               in hours minutes (24 hour time, EOF to quit): ^D
*/
/* my attempt
#include <stdio.h>

int main () {
  int departure_hr, departure_min, arrive_hr, arrive_min, roll_hr, roll_min, flight_time_hr, flight_time_min;
  int time_zone_diff = 3;
  
  printf("Please enter departure time in hours minutes (eg. 8 45, or EOF to quit):");
  scanf("%d %d", &departure_hr, &departure_min);
  printf("Enter flight time in hours minutes:");
  scanf("%d %d", &arrive_hr, &arrive_min);
  
  flight_time_hr = departure_hr + arrive_hr;
  flight_time_min = departure_min + arrive_min;
  
  if(flight_time_hr > 24){
    roll_hr = flight_time_hr % 24;
    flight_time_hr = roll_hr;
  } 
  if (flight_time_min > 60){
    roll_min = flight_time_min % 60;
    flight_time_min = roll_min;
  }
  
  printf("You will land at %d:%d\n", (flight_time_hr + time_zone_diff), flight_time_min);
  return 0;
}
*/