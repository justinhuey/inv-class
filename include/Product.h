#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include "Location.h"


class Product
{
    public:
        Product(); //default constructor, should return VOID
        Product(string brand, string water_type, int bottle_size, int case_size, int pallet_size); //Manual constructor to create new product type
        Product(long long int barcode_num);  //Constructor to create product base on preset product types
        virtual ~Product();  //deconstructor

        string get_brand() const;  //returns  brand
        string get_water_type() const;  //returns water type
        int get_bottle_size() const;  //returns bottle size in ml
        int get_case_size() const;  //returns case size
        int get_pallet_size() const;  //returns pallet size in ml
        int get_prod_date() const;  //returns date the product was produce
        long long int get_barcode_num() const;  //returns barcode
        long long int get_prod_id() const;  //returns product id
        bool get_curr() const;  //returns True: product still in inventory, False: product was sold
        bool get_delivered() const;  //returns True: product was sold and delivered, False: product sold, but not delivered yet
        bool get_final_loc() const;  //returns True: product isn't scheduled to move, False: product scheduled to move
        Location get_curr_loc() const; //returns current location
        Location get_fut_loc() const; //returns where product needs to go

        void set_brand(string change);  //changes  brand
        void set_water_type(string change);  //changes water type
        void set_bottle_size(int change);  //changes bottle size in ml
        void set_case_size(int change);  //changes case size
        void set_pallet_size(int change);  //changes pallet size in ml
        void set_prod_date(int change);  //changes date the product was produce
        void set_barcode_num(long long int change);  //changes barcode
        void set_prod_id(long long int change);  //changes product id
        void set_curr(bool change);  //changes True: product still in inventory, False: product was sold
        void set_delivered(bool change);  //changes True: product was sold and delivered, False: product sold, but not delivered yet
        void set_final_loc(bool change);  //changes True: product isn't scheduled to move, False: product scheduled to move
        void set_curr_loc(Location change); //changes current location
        void set_fut_loc(Location change); //changes where product needs to go

        double calc_water_amount() const;  // returns the amount of water in a pallet
        std::string to_string() const; // returns a string with product details

    protected:

    private:
        string brand; //The store brand on the label
        string water_type; //The type of water either: Distilled, Spring, Purified, or Fluoride
        double bottle_size;  //The amount of water the bottle holds in ml
        int case_size;  //The amount of bottles in a case
        int pallet_size; //The number of cases in a pallet
        int prod_date; //the date the product was produce in the format:mmddyyyy
        long long int barcode_num;  //The number of the barcode code
        long long int prod_id;  //unique product id number
        bool curr; //True: product still in inventory, False: product was sold
        bool delivered;  //True: product was sold and delivered, False: product sold, but not delivered yet
        bool final_loc;  //True: product isn't scheduled to move, False: product scheduled to move
        Location curr_loc; //current location of product
        Location fut_loc; //Where the product needs to go

};

#endif // PRODUCT_H
