// Simulation.h 
// CS303 Project 1

#include "Simulation.h"
#include "Random.h"


//Constructor
Simulation::Simulation(int floors_ , int MaxTurns_, double Frequency_)
 {  
    floors = floors_;
    MaxTurns = MaxTurns_;
    Frequency = Frequency_;
 }
bool Simulation :: genuser ()
{  //Generate a new user
    if(random() < 50){
        
    }
   {
     //random numbers to generate starting and ending floors
      int start = RandomFloor;
      int end  = my_random.next_int(waiting_time);
      if(start < end){
        direction = 1 ;
       }
    else {
        direction = -1;
         }
    
    //pushback user contructor into the list container
    Passengers.push_back(User(start, end, direction));
    Elevator.called(start, direction);
   }
}

void Simulation :: Simulate ()
{  int turns = 0;
   while(turns < MaxTurns){
       if genuser();
     if Elevator.process()
    
    //Increment the number of turns
      turns++;
   }
}

