#include "Location.h"
#include <iostream>
#include <string>

using namespace std;

Location::Location()
{
    building = "";
    section = "";
}

Location::Location(string b, string s)
{
    building = b;
    section = s;
}

Location::~Location()
{
    //dtor
}

string Location::get_building() const  //returns building
{
    return building;
}
string Location::get_section() const  //returns section
{
    return section;
}

void Location::set_building(string b)  //changes building
{
    building = b;
}
void Location::set_section(string s)  //returns section
{
    section = s;
}

string Location::to_string() const  // returns a string detail of the location
{
    string ans = "Building: " + building + "\tSection: " + section;
}

