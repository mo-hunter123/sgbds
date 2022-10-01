#include <iostream>
#include <string>
#include "BusLine.hpp"
#include "BusStation.hpp"
#include "TripDate.hpp"
#include <ctime>

using namespace std;

class Trip
{
private:
    BusLine *line;
    string tripId;
    BusStation *busStation;
    TripDate *dateDepart;
    TripDate *dateArrivee;

public:
    Trip(BusLine *line,
         string tripId,
         BusStation *busStation,
         TripDate *dateDepart,
         TripDate *dateArrivee)
    {
        this->line = line; 
        this->tripId = tripId; 
        this->busStation = busStation; 
        this->dateArrivee = dateArrivee; 
        this->dateDepart = dateDepart; 
    }

    


};