#include <iostream>
#include <string>
#include <iomanip>
#include "Product.h"
#include "Inventory.h"



using namespace std;

int main()
{
    Inventory my_inventory = Inventory(); // Begin by creating the inventory
    //List of all possible barcodes for the 72 available products
    long long int barcode_list[72] =
        {11100012, 11100024, 11378604, 11378606, 11050035, 11050024,
        21100012, 21100024, 21378604, 21378606, 21050035, 21050024,
        31100012, 31100024, 31378604, 31378606, 31050035, 31050024,
        41100012, 41100024, 41378604, 41378606, 41050035, 41050024,
        12100012, 12100024, 12378604, 12378606, 12050035, 12050024,
        22100012, 22100024, 22378604, 22378606, 22050035, 22050024,
        32100012, 32100024, 32378604, 32378606, 32050035, 32050024,
        42100012, 42100024, 42378604, 42378606, 42050035, 42050024,
        13100012, 13100024, 13378604, 13378606, 13050035, 13050024,
        23100012, 23100024, 23378604, 23378606, 23050035, 23050024,
        33100012, 33100024, 33378604, 33378606, 33050035, 33050024,
        43100012, 43100024, 43378604, 43378606, 43050035, 43050024};
    //Nested loops to create 5 of each kind to item to fill the list initially
    for(int i = 0; i<72; i++)
    {
        for(int j=0; j<5;j++)
        {
            Product temp = Product(barcode_list[i]);
            my_inventory.add_to_inventory(temp);
        }

    }

    //The price per ml for each water type - Purified, distilled, spring
    double price[3] = {0.00030, 0.00042, 0.00051};
    double total_cost = 0;  //Total cost of a sales transaction
    double total_sale_amount = 0;  //total amount of money earned
    int total_sales = 0; //Total number of sales

    bool active = true;  //True: user still using system
    long long int option = 0; //User response to options
    string response;  //User response to options


    cout << "\nWelcome to WaterWorks inc. inventory system" << endl;  //Welcoming to the system

    while(active)  // While loop that loop through the options a user uses the system
    {
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        cout << "Please select the option you want to use:" << endl;  //Menu screen
        cout << "   [1] Add Inventory \n   [2] Point of Sales \n   [3] Reporting \n   [4] Search \n   [5] Exit System\n" << endl;
        cout << "Enter Here: ";
        cin >> option;  //Response from user

        switch (option)
        {
            case 1:  //Add Inventory
                {
                    long long int barcode; //User response to Barcode options
                    string brand = ""; //Brand of new product
                    string water_type = ""; //Water type of new product
                    int bottle_size; //bottle size of new product
                    int case_size;  //case size of new product
                    int pallet_size;  //pallet size of new product


                    cout << "\n--------------------------------------------------------------------------" << endl;
                    cout << "You selected to Add Inventory." << endl;
                    cout << "\n\n--------------------------------------------------------------------------" << endl;
                    cout << "\n   [1] Entry via Barcode ID \n   [2] New Entry \n\nPlease input entry method: "; //Options menu
                    cin >> option;  //Response from user

                    switch(option) //Determine entry method base on user
                    {
                        case 1: //If barcode entry was selected
                            {
                                cout << "\n--------------------------------------------------------------------------" << endl;
                                cout << "\n\n   Please Select the barcode of the item you want" << endl;
                                for(int i = 0; i<72; i++) //Loop through all barcode options
                                {
                                    cout << "   [" << i+1 << "] " << barcode_list[i] << endl;  //display options
                                }
                                cout << "\nSelection: ";
                                cin >> option;   //get selection from user
                                if (option > 0 && option <= 72 )  //Check for valid selection
                                {
                                    Product new_entry = Product(barcode);  //Create new product based on barcode
                                    my_inventory.add_to_inventory(new_entry);  //Add new item to your inventory
                                    cout << "Entry Successful" << endl;
                                    cout << "\n\n------------------------------Entry-Complete------------------------------" << endl;
                                }
                                else //Check for invalid response
                                {
                                    cout << "invalid input" << endl;
                                    cout << "\n\n-------------------------------Entry-Failed-------------------------------" << endl;
                                }
                            }
                        break;

                        case 2:  //If new entry was selected
                            {
                                cout << "\n--------------------------------------------------------------------------" << endl;
                                cout << "\nYou Selected new entry, \n\nSelect the brand name " << endl;
                                cout << "   [1] Sammy's \n   [2] Mike's Fresh Food Store \n   [3] FoodMart \n   [4] Yuki's Market \nPlease enter selection: ";
                                cin >> option;  //get Brand name
                                if (option > 0 && option < 5)
                                {
                                    switch(option) //Which brand was selected
                                    {
                                        case 1:
                                        {
                                            brand = "Sammy's";
                                        }
                                        break;
                                        case 2:
                                        {
                                            brand = "Mike's Fresh Food Store";
                                        }
                                        break;
                                        case 3:
                                        {
                                            brand = "FoodMart";
                                        }
                                        break;
                                        case 4:
                                        {
                                            brand = "Yuki's Market";
                                        }
                                        break;
                                    }
                                    cout << "\n\nSelect the water type " << endl;
                                    cout << "   [1] Purified \n   [2] Distilled \n   [3] Spring \nPlease enter selection: ";
                                    cin >> option;  //get Brand name

                                    if (option >0 && option <4)
                                    {
                                        switch(option) //Which brand was selected
                                        {
                                            case 1:
                                            {
                                                water_type = "Purified";
                                            }
                                            break;
                                            case 2:
                                            {
                                                water_type = "Distilled";
                                            }
                                            break;
                                            case 3:
                                            {
                                                water_type = "Spring";
                                            }
                                            break;
                                        }
                                        cout << "\n\nSelect the Bottle size, Case size" << endl;
                                        cout << "   [1] 500ml, 24 pack \n   [2] 500ml, 35 pack \n   [3] 1000ml, 12 pack \n   [4] 1000ml, 24 pack \n   [5] 3786ml, 4 pack \n   [6] 3786ml, 6 pack \nPlease enter selection: ";
                                        cin >> option;  //get Brand name

                                        if(option > 0 && option < 6)
                                        {
                                            switch(option) //Which brand was selected
                                            {
                                                case 1:
                                                {
                                                    bottle_size = 500;
                                                    case_size = 24;
                                                    pallet_size = 90;
                                                }
                                                break;
                                                case 2:
                                                {
                                                    bottle_size = 500;
                                                    case_size = 35;
                                                    pallet_size = 70;
                                                }
                                                break;
                                                case 3:
                                                {
                                                    bottle_size = 1000;
                                                    case_size = 12;
                                                    pallet_size = 90;
                                                }
                                                break;
                                                case 4:
                                                {
                                                    bottle_size = 1000;
                                                    case_size = 24;
                                                    pallet_size = 70;
                                                }
                                                break;
                                                case 5:
                                                {
                                                    bottle_size = 3786;
                                                    case_size = 4;
                                                    pallet_size = 75;
                                                }
                                                break;
                                                case 6:
                                                {
                                                    bottle_size = 3786;
                                                    case_size = 6;
                                                    pallet_size = 50;
                                                }
                                                break;
                                            }
                                            Product new_entry = Product(brand, water_type, bottle_size, case_size, pallet_size);//Create new product
                                            my_inventory.add_to_inventory(new_entry); //Add product to inventory
                                            cout << "\n\n------------------------------Entry-Complete------------------------------" << endl;
                                        }
                                        else //Check for invalid response
                                        {
                                            cout << "invalid input" << endl;
                                            cout << "\n\n-------------------------------Entry-Failed-------------------------------" << endl;
                                        }
                                    }
                                    else //Check for invalid response
                                    {
                                        cout << "invalid input" << endl;
                                        cout << "\n\n-------------------------------Entry-Failed-------------------------------" << endl;
                                    }

                                }
                                else //Check for invalid response
                                {
                                    cout << "invalid input" << endl;
                                    cout << "\n\n-------------------------------Entry-Failed-------------------------------" << endl;
                                }
                        }
                    }
                }
            break;
            case 2:  //Point of sales
            {
                cout << "\n--------------------------------------------------------------------------" << endl;
                cout << "You selected Point of Sales." << endl; //Ask Product they want to buy via barcode
                cout << "--------------------------------------------------------------------------" << endl;

                //display barcode options
                cout << "\n\n   Please Select the barcode of the item you want" << endl;
                for(int i = 0; i<72; i++) //Loop through all barcode options
                {
                    cout << "   [" << i+1 << "] " << barcode_list[i] << endl;  //display options
                }
                cout << "\nSelection: ";
                cin >> option;   //get selection from user
                if (option > 0 && option <= 72 )  //Check for valid selection
                {
                    vector<Node*> search_results = my_inventory.search_via_bacode(barcode_list[option-1]); //Check the inventory for all available item with chosen barcode

                    if(search_results.size() == 0)  //Must be 1 or more items to sell
                    {
                        cout << "\nNo Product found" << endl;
                    }
                    else
                    {
                        int i; //iterator for price

                        if (search_results[0]->p_element.get_water_type() == "Purified")  //set iterator for price if water is Purified
                            i=0;
                        else if (search_results[0]->p_element.get_water_type() == "Distilled")  //set iterator for price if water is Distilled
                            i=1;
                        else  //set iterator for price, water must be Spring
                            i=2;

                        total_cost = search_results[0]->p_element.get_pallet_size()*price[i];  // Multiple price per ml by number of ml per pallet to get total price of item
                        cout << "Cost per Item: $" << setprecision (2) << fixed << total_cost << endl;  //show user total cost
                        cout << search_results.size() << " items found" << endl; //show user the amount of item in stock
                    }

                    cout << "How many do you want?: ";  //ask user how much they want to buy
                    cin >> option;      //get user's response

                    if(option <= search_results.size() && option >= 0)  //check for valid response from user
                    {
                        vector <Node*> sold_list;  //vector of sold items

                        for(int i=0; i<option; i++) //loop to add sold items to sold list
                        {
                            sold_list.push_back(search_results[i]);
                        }

                        total_cost = total_cost*sold_list.size();  //Total cost of the sale
                        cout << "Total cost: $" << setprecision (2) << fixed << total_cost << endl;
                        cout << "Finalize Transaction(y/n): ";  //ask user how much they want to buy
                        cin >> response;

                        if(response == "y" || response == "Y") //Check if response is yes
                        {
                            my_inventory.remove_from_inventory(sold_list); //remove sold items from inventory
                            total_sales += option; //Add to totals sales the amount of items sold
                            total_sale_amount += total_cost; //Add to total amount the money made
                            total_cost = 0;  //reset the register

                            cout << "   Transaction Successful" << endl;
                            cout << "\n\n---------------------------Transaction-Complete---------------------------" << endl;
                        }
                        else if(response == "n" || response == "N") //Check if the response is no
                        {
                            cout << "Transaction Canceled" << endl;
                            cout << "\n\n---------------------------Transaction-Canceled---------------------------" << endl;
                        }
                        else //Check for invalid response
                        {
                            cout << "invalid input" << endl;
                            cout << "\n\n----------------------------Transaction-Failed----------------------------" << endl;
                        }
                    }
                    else //Check for invalid response
                    {
                        cout << "invalid input" << endl;
                        cout << "\n\n----------------------------Transaction-Failed----------------------------" << endl;
                    }
                }
                else //Check for invalid response
                {
                    cout << "invalid input" << endl;
                    cout << "\n\n----------------------------Transaction-Failed----------------------------" << endl;
                }
            }
            break;
            case 3:  //Reporting
            {
                vector <int> temp_brand = my_inventory.get_brand_total(); //A vector to hold all items of a certain brand
                vector <int> temp_water = my_inventory.get_water_type_total();  //A vector to hold all items of a certain water type


                cout << "\n--------------------------------------------------------------------------" << endl;
                cout << "You selected Reporting." << endl; //Ask the brand the want, then the size
                cout << "\n\n--------------------------------------------------------------------------" << endl;

                //Summary of Inventory Totals
                cout <<"   Inventory Totals: \n\tTotal Items: " << my_inventory.get_total() << endl; //Total in inventory
                //Totals per brand
                cout <<"\tBrands:\n \t\tSammy's: " << temp_brand[0] << endl;
                cout <<"\t\tMike's Fresh Food Store: " << temp_brand[1] << endl;
                cout <<"\t\tFoodMart: " << temp_brand[2] << endl;
                cout <<"\t\tYuki's Market: " << temp_brand[3] << endl;
                //Totals per water type
                cout <<"\tWater Type:\n \t\tPurified: " << temp_water[0] << endl;
                cout <<"\t\tDistilled: " << temp_water[1] << endl;
                cout <<"\t\tSpring: " << temp_water[2] << endl;

                //Totals in sales
                cout <<"\tTotal Sales: \n\t\tTotal Items Sold: " << total_sales << endl;//Total items sold
                cout <<"\t\tTotal Money Earned: " << setprecision(2) << fixed << total_sale_amount << endl;//Total Money Earned

                cout << "\n\n-----------------------------Summary-Complete-----------------------------" << endl;
            }
            break;
            case 4:  //Search
            {
                cout << "\n--------------------------------------------------------------------------" << endl;
                cout << "You selected Search." << endl; //Ask the brand the want, then the size
                cout << "\n--------------------------------------------------------------------------" << endl;
                cout << "\n\n   Please Select the barcode of the item you want to search" << endl;
                for(int i = 0; i<72; i++) //Loop through all barcode options
                {
                    cout << "   [" << i+1 << "] " << barcode_list[i] << endl;  //display options
                }
                cout << "\nSelection: ";
                cin >> option;   //get selection from user
                if (option > 0 && option <= 72 )  //Check for valid selection
                {

                    vector<Node*> search_results = my_inventory.search_via_bacode(option); //vector to hold the results of the search

                    if(search_results.size() == 0)//check if there is anything in the inventory
                    {
                        cout << "\nNo Results found" << endl; //No results
                    }
                    else
                    {
                        for (int i = 0;i<search_results.size();i++)//loop to display results
                        {
                            cout << "   [" << i+1 << "] \n" << search_results[i]->p_element.to_string() << "\n" << endl;
                        }
                    }

                    cout << "--------------------------------------------------------------------------" << endl;
                }
                else //Check for invalid response
                {
                    cout << "invalid input" << endl;
                    cout << "\n\n------------------------------search-Failed-------------------------------" << endl;
                }
            }
            break;
            case 5:  //Exit
                cout << "\n--------------------------------------------------------------------------" << endl;
                cout << "You selected to Exit. \nThank You for using our system and have a nice day!" << endl;
                cout << "--------------------------------------------------------------------------" << endl;
                active = false; //exit loop
            break;
            default: //Error in selecting option
                cout << "\nError****************************************************************Error" << endl;
                cout << "\nError in the option selection. Please enter only 1-5" << endl;
                cout << "\nError****************************************************************Error" << endl;
            break;
        }



    }
}
