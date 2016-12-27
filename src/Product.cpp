#include "Product.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <sstream>


using namespace std;

Product::Product()
{
    prod_id = 0;
}

Product::~Product()
{
    //dtor
}

Product::Product(string brand, string water_type, int bottle_size, int case_size, int pallet_size) //Manual constructor to create new product type
        {
            //set the products values
            this->brand = brand;
            this->water_type = water_type;
            this->bottle_size = bottle_size;
            this->case_size = case_size;
            this->pallet_size = pallet_size;

            //creates new barcodes and id numbers
            if (brand == "Sammy's")
            {
                if (water_type == "Purified")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 11050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 11050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 11100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 11100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 11378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 11378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Distilled")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 12050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 12050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 12100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 12100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 12378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 12378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Spring")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 13050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 13050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 13100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 13100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 13378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 13378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else
                {
                    //throw error
                }
            }
            else if (brand == "Mike's Fresh Food Store")
            {
                 if (water_type == "Purified")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 21050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 21050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 21100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 21100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 21378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 21378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Distilled")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 22050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 22050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 22100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 22100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 22378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 22378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Spring")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 23050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 23050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 23100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 23100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 23378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 23378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else
                {
                    //throw error
                }
            }
            else if (brand == "FoodMart")
            {
                 if (water_type == "Purified")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 31050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 31050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 31100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 31100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 31378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 31378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Distilled")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 32050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 32050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 32100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 32100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 32378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 32378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Spring")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 33050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 33050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 33100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 33100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 33378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 33378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else
                {
                    //throw error
                }
            }
            else if (brand == "Yuki's Market")
            {
                 if (water_type == "Purified")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 41050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 41050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 41100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 41100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 41378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 41378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Distilled")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 42050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 42050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 42100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 42100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 42378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 42378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else if (water_type == "Spring")
                {
                    if (bottle_size == 500)
                    {
                        if (case_size == 24)
                        {
                            barcode_num = 43050024;
                        }
                        else if (case_size == 35)
                        {
                            barcode_num = 43050035;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 1000)
                    {
                        if (case_size == 12)
                        {
                            barcode_num = 43100012;
                        }
                        else if (case_size == 24)
                        {
                            barcode_num = 43100024;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else if (bottle_size == 3786)
                    {
                        if (case_size == 4)
                        {
                            barcode_num = 43378604;
                        }
                        else if (case_size == 6)
                        {
                            barcode_num = 43378606;
                        }
                        else
                        {
                            //throw error
                        }
                    }
                    else
                    {
                        //throw error
                    }
                }
                else
                {
                    //throw error
                }
            }
            else
            {
                //throw error
            }


            //get the current date for prod_date
            //Used code from http://stackoverflow.com/questions/5438482/getting-the-current-time-as-a-yyyy-mm-dd-hh-mm-ss-string
            //to get current date
            std::time_t rawtime;
            std::tm* timeinfo;
            char buffer [8];
            std::time(&rawtime);
            timeinfo = std::localtime(&rawtime);
            std::strftime(buffer,8,"%m%d%Y",timeinfo);
            int temp = std::atoi (buffer);
            prod_date = temp;

            prod_id = (barcode_num*100000000)+prod_date;

            //Set the bool
            curr = true;
            delivered = false;
            final_loc = false;

        }

Product::Product(long long int barcode)  //Constructor to create product base on preset product types
{
    barcode_num = barcode;
    switch(barcode)
    {
        case 11050024:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 21050024:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 31050024:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 41050024:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 12050024:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 22050024:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 32050024:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 42050024:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 13050024:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 23050024:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 33050024:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        case 43050024:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 24;
            pallet_size = 90;
        break;
        //
        case 11050035:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 21050035:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 31050035:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 41050035:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 12050035:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 22050035:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 32050035:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 42050035:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 13050035:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 23050035:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 33050035:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        case 43050035:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 500;
            case_size = 35;
            pallet_size = 70;
        break;
        //
        //
        case 11100012:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 21100012:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 31100012:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 41100012:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 12100012:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 22100012:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 32100012:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 42100012:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 13100012:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 23100012:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 33100012:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        case 43100012:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 12;
            pallet_size = 90;
        break;
        //
        case 11100024:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 21100024:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 31100024:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 41100024:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 12100024:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 22100024:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 32100024:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 42100024:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 13100024:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 23100024:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 33100024:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        case 43100024:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 1000;
            case_size = 24;
            pallet_size = 70;
        break;
        //
        //
        case 11378604:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 21378604:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 31378604:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 41378604:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 12378604:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 22378604:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 32378604:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 42378604:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 13378604:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 23378604:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 33378604:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        case 43378604:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 4;
            pallet_size = 75;
        break;
        //
        case 11378606:
            brand = "Sammy's";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 21378606:
            brand = "Mike's Fresh Food Store";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 31378606:
            brand = "FoodMart";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 41378606:
            brand = "Yuki's Market";
            water_type = "Purified";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 12378606:
            brand = "Sammy's";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 22378606:
            brand = "Mike's Fresh Food Store";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 32378606:
            brand = "FoodMart";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 42378606:
            brand = "Yuki's Market";
            water_type = "Distilled";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 13378606:
            brand = "Sammy's";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 23378606:
            brand = "Mike's Fresh Food Store";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 33378606:
            brand = "FoodMart";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        case 43378606:
            brand = "Yuki's Market";
            water_type = "Spring";
            bottle_size = 3786;
            case_size = 6;
            pallet_size = 50;
        break;
        default:

        break;
    }

    //get the current date for prod_date
    //Used code from http://stackoverflow.com/questions/5438482/getting-the-current-time-as-a-yyyy-mm-dd-hh-mm-ss-string
    //to get current date
    std::time_t rawtime;
    std::tm* timeinfo;
    char buffer [8];
    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
    std::strftime(buffer,8,"%m%d%Y",timeinfo);
    int temp = std::atoi (buffer);
    prod_date = temp;

    prod_id = (barcode_num*100000000)+prod_date;
    curr = true;
    delivered = false;
    final_loc = false;
}


string Product::get_brand() const  //returns  brand
{
    return brand;
}
string Product::get_water_type() const  //returns water type
{
    return water_type;
}
int Product::get_bottle_size() const  //returns bottle size in ml
{
    return bottle_size;
}
int Product::get_case_size() const  //returns case size
{
    return case_size;
}
int Product::get_pallet_size() const  //returns pallet size in ml
{
    return (bottle_size*case_size*pallet_size);
}
int Product::get_prod_date() const  //returns date the product was produce
{
    return prod_date;
}
long long int Product::get_barcode_num() const  //returns barcode
{
    return barcode_num;
}
long long int Product::get_prod_id() const  //returns product id
{
    return prod_id;
}
bool Product::get_curr() const  //returns True: product still in inventory, False: product was sold
{
    return curr;
}
bool Product::get_delivered() const  //returns True: product was sold and delivered, False: product sold, but not delivered yet
{
    return delivered;
}
bool Product::get_final_loc() const  //returns True: product isn't scheduled to move, False: product scheduled to move
{
    return final_loc;
}

Location Product::get_curr_loc() const //returns current location
{
    return curr_loc;
}
Location Product::get_fut_loc() const //returns where product needs to go
{
    return fut_loc;
}

void Product::set_brand(string change)  //changes  brand
{
    brand = change;
}
void Product::set_water_type(string change)  //changes water type
{
    water_type = change;
}
void Product::set_bottle_size(int change)  //changes bottle size in ml
{
    bottle_size = change;
}
void Product::set_case_size(int change)  //changes case size
{
    case_size = change;
}
void Product::set_pallet_size(int change)  //changes pallet size in ml
{
    pallet_size = change;
}
void Product::set_prod_date(int change)  //changes date the product was produce
{
    prod_date = change;
}
void Product::set_barcode_num(long long int change)  //changes barcode
{
    barcode_num = change;
}
void Product::set_prod_id(long long int change)  //changes product id
{
    prod_id = change;
}
void Product::set_curr(bool change)  //changes True: product still in inventory, False: product was sold
{
    curr = change;
}
void Product::set_delivered(bool change)  //changes True: product was sold and delivered, False: product sold, but not delivered yet
{
    delivered = change;
}
void Product::set_final_loc(bool change)  //changes True: product isn't scheduled to move, False: product scheduled to move
{
    final_loc = change;
}

void Product::set_curr_loc(Location change) //changes current location
{
    curr_loc = change;
}
void Product::set_fut_loc(Location change) //changes where product needs to go
{
    fut_loc = change;
}

double Product::calc_water_amount() const  // returns the amount of water in a pallet
{
    double ans = bottle_size*case_size*pallet_size;
    return ans;
}
std::string Product::to_string() const
{
    stringstream ss;

    ss << bottle_size;
    std::string bot = ss.str();
    ss.str("");

    ss << case_size;
    std::string cas = ss.str();
    ss.str("");

    ss << pallet_size;
    std::string pal = ss.str();
    ss.str("");

    string to_str = "Brand: " + brand + "\tWater Type: " + water_type + "\nBottle and Case size: " + bot + "ml, " + cas +" pack\tPallet size: " + pal;
    return to_str;
}

