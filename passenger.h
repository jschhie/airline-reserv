#ifndef PASSENGER_H
#define PASSENGER_H

class Passenger 
{

    short flightNum, seatRow;
    char seatLabel, name[30];

public:
    
    Passenger(short flightNumber, short row, char label, char* name); // note: need to compile still
    int getFlightNum() const;
    int getSeatRow() const;
    int getSeatLabel() const;
    // TODO: char* getName() const;

}; // Passenger Class

#endif /* PASSENGER_H */
