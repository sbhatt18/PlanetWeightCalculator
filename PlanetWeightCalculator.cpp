#include <iostream>

using namespace std;

int main()
{
    double normweight;
    int planet;
    cout<<"What is your weight? ";
    cin>>normweight;
    
    cout<<"What planet would you like to check your weight (1 for Mercury, 2 for Venus, 3 for Earth, 4 for Mars, 5 for Jupiter, 6 for Saturn, 7 for Uranus, 8 for Neptune, 9 for Pluto)? ";
    cin>>planet;
    
    switch(planet)
    {
      case 1:
      cout<< "Your weight on Mercury is "<<normweight*0.38;
      break;
      
      case 2:
      cout<< "Your weight on Venus is "<<normweight*0.91;
      break;
      
      case 3:
      cout<< "Your weight on Earth is "<<normweight;
      break;
      
      case 4:
      cout<< "Your weight on Mars is "<<normweight*0.38;
      break;        
      
      case 5:
      cout<< "Your weight on Jupiter is "<<normweight*2.34;
      break; 
      
      case 6:
      cout<< "Your weight on Saturn is "<<normweight*1.06;
      break; 
      
      case 7:
      cout<< "Your weight on Uranus is "<<normweight*0.92;
      break;
      
      case 8:
      cout<< "Your weight on Neptune is "<<normweight*1.19;
      break;
      
      case 9:
      cout<< "Your weight on Pluto is "<<normweight*0.06;
      break;
      
      case 10:
      cout<< "Invalid input.";
      break;
    }    
    return 0;
}