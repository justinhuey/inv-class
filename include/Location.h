#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
#include <string>

using namespace std;

class Location
{
    public:
        Location();
        Location(string b, string s);
        virtual ~Location();

        string get_building() const;  //returns building
        string get_section() const;  //returns section

        void set_building(string b);  //changes building
        void set_section(string s);  //returns section

        std::string to_string() const;// returns a string detail of the location


    protected:

    private:
        string building; //name of the warehouse building, DELIVERED if than product was sold and delivered
        string section;  //The sectionific location within the building, if DELIVERED than product sold and delivered
};

#endif // LOCATION_H
