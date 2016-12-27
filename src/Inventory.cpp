#include "Inventory.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

Inventory::Inventory()//Constructor
{
    inv_list = ProductLinkedList();//the linked list that holds the items
    Product temp = Product();  //Blank product place holder

    //Nested for loops to create the base(brand and water type levels) for the 3-D linked list
    for (int i = 0; i<4; i++)
    {
        for (int j = 0; j<3; j++)
        {
            switch(i)
            {
                //Sammy's Node
                case 0:

                    switch(j)
                    {
                        case 0:
                            inv_list.add_to_head("Sammy's", temp, 1);//Create Sammy's node
                            inv_list.add_branch_node("Purified", temp, inv_list.get_head(1), 2); //Branch off from sammy's to create the first water type Purified
                        break;

                        case 1:
                            inv_list.add_to_tail("Distilled", temp, 2);  //add Distilled
                        break;
                        case 2:
                            inv_list.add_to_tail("Spring", temp, 2);  //add Spring
                        break;

                    }
                break;
                //Mike's node
                case 1:
                    switch(j)
                    {
                        case 0:
                            inv_list.add_to_tail("Mike's Fresh Food Store", temp, 1); //Create Mike's Node
                            inv_list.add_branch_node("Purified", temp, inv_list.get_next(inv_list.get_head(1)), 3);  //Branch off from mike's to create the first water type Purified
                        break;
                         case 1:
                            inv_list.add_to_tail("Distilled", temp, 3);  //add Distilled
                        break;
                        case 2:
                            inv_list.add_to_tail("Spring", temp, 3);  //add Spring
                        break;


                    }
                break;
                //FoodMarts Node
                case 2:
                    switch(j)
                    {
                        case 0:
                            inv_list.add_to_tail("FoodMart", temp, 1); //Create FoodMart' Node
                            inv_list.add_branch_node("Purified", temp, inv_list.get_next(inv_list.get_next(inv_list.get_head(1))), 4);  //Branch off from mike's to create the first water type Purified
                        break;
                         case 1:
                            inv_list.add_to_tail("Distilled", temp, 4);  //add Distilled
                        break;
                        case 2:
                            inv_list.add_to_tail("Spring", temp, 4);  //add Spring
                        break;


                    }
                break;
                //Yuki's Node
                case 3:
                    switch(j)
                    {
                        case 0:
                            inv_list.add_to_tail("Yuki's Market", temp, 1);//Create Yuki's node
                            inv_list.add_branch_node("Purified", temp, inv_list.get_next(inv_list.get_next(inv_list.get_next(inv_list.get_head(1)))), 5); //Branch off from yuki's to create the first water type Purified
                        break;
                        case 1:
                            inv_list.add_to_tail("Distilled", temp, 5);  //add Distilled
                        break;
                        case 2:
                            inv_list.add_to_tail("Spring", temp, 5);  //add Spring
                        break;
                    }
                break;

            }

        }
    }

}

Inventory::~Inventory()
{
    //dtor
}

void Inventory::add_to_inventory(Product p)
{
    stringstream ss; //for int to string

    //Switch statement based on the barcode to select which tail to add the product to
    switch(p.get_barcode_num())
    {
        case 11100012:
        case 11100024:
        case 11378604:
        case 11378606:
        case 11050035:
        case 11050024:
            if (inv_list.get_head(6) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,6);
            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_head(2),6);
            }
        break;
        case 21100012:
        case 21100024:
        case 21378604:
        case 21378606:
        case 21050035:
        case 21050024:
            if (inv_list.get_head(9) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,9);
            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_head(3),9);


            }


        break;
        case 31100012:
        case 31100024:
        case 31378604:
        case 31378606:
        case 31050035:
        case 31050024:
            if (inv_list.get_head(12) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,12);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_head(4),12);


            }


        break;
        case 41100012:
        case 41100024:
        case 41378604:
        case 41378606:
        case 41050035:
        case 41050024:
            if (inv_list.get_head(15) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,15);
            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_head(5),15);


            }

        break;
        case 12100012:
        case 12100024:
        case 12378604:
        case 12378606:
        case 12050035:
        case 12050024:
            if (inv_list.get_head(7) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,7);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_head(2)),7);


            }


        break;
        case 22100012:
        case 22100024:
        case 22378604:
        case 22378606:
        case 22050035:
        case 22050024:
            if (inv_list.get_head(10) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,10);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_head(3)),10);


            }


        break;
        case 32100012:
        case 32100024:
        case 32378604:
        case 32378606:
        case 32050035:
        case 32050024:
            if (inv_list.get_head(13) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,13);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_head(4)),13);


            }


        break;
        case 42100012:
        case 42100024:
        case 42378604:
        case 42378606:
        case 42050035:
        case 42050024:
            if (inv_list.get_head(16) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,16);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_head(5)),16);


            }


        break;
        case 13100012:
        case 13100024:
        case 13378604:
        case 13378606:
        case 13050035:
        case 13050024:
           if (inv_list.get_head(8) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,8);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_next(inv_list.get_head(2))),8);


            }


        break;
        case 23100012:
        case 23100024:
        case 23378604:
        case 23378606:
        case 23050035:
        case 23050024:
            if (inv_list.get_head(11) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,11);



            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_next(inv_list.get_head(3))),11);


            }


        break;
        case 33100012:
        case 33100024:
        case 33378604:
        case 33378606:
        case 33050035:
        case 33050024:
           if (inv_list.get_head(14) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,14);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_next(inv_list.get_head(4))),14);


            }


        break;
        case 43100012:
        case 43100024:
        case 43378604:
        case 43378606:
        case 43050035:
        case 43050024:
            if (inv_list.get_head(17) != NULL)
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_to_tail(str,p,17);


            }
            else
            {
                ss << p.get_barcode_num();
                string str = ss.str();
                inv_list.add_branch_node(str,p,inv_list.get_next(inv_list.get_next(inv_list.get_head(5))),17);


            }


        break;

        default:

        break;
    }
}

vector<Node*> Inventory::search_via_bacode(long long int barcode) const
{
    vector<Node*> search_results;//vector to hold the results
    Node *current_ptr; //pointer to hold the current place
    bool end_loop = true;// loop control

    //Switch statement based on the barcode to select which head to begin our search
    switch(barcode)
    {
        case 11100012:
        case 11100024:
        case 11378604:
        case 11378606:
        case 11050035:
        case 11050024:
            current_ptr = inv_list.get_head(6);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 21100012:
        case 21100024:
        case 21378604:
        case 21378606:
        case 21050035:
        case 21050024:
            current_ptr = inv_list.get_head(9);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 31100012:
        case 31100024:
        case 31378604:
        case 31378606:
        case 31050035:
        case 31050024:
            current_ptr = inv_list.get_head(12);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 41100012:
        case 41100024:
        case 41378604:
        case 41378606:
        case 41050035:
        case 41050024:
            current_ptr = inv_list.get_head(15);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 12100012:
        case 12100024:
        case 12378604:
        case 12378606:
        case 12050035:
        case 12050024:
            current_ptr = inv_list.get_head(7);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 22100012:
        case 22100024:
        case 22378604:
        case 22378606:
        case 22050035:
        case 22050024:
            current_ptr = inv_list.get_head(10);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 32100012:
        case 32100024:
        case 32378604:
        case 32378606:
        case 32050035:
        case 32050024:
            current_ptr = inv_list.get_head(13);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 42100012:
        case 42100024:
        case 42378604:
        case 42378606:
        case 42050035:
        case 42050024:
            current_ptr = inv_list.get_head(16);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 13100012:
        case 13100024:
        case 13378604:
        case 13378606:
        case 13050035:
        case 13050024:
           current_ptr = inv_list.get_head(8);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 23100012:
        case 23100024:
        case 23378604:
        case 23378606:
        case 23050035:
        case 23050024:
            current_ptr = inv_list.get_head(11);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 33100012:
        case 33100024:
        case 33378604:
        case 33378606:
        case 33050035:
        case 33050024:
           current_ptr = inv_list.get_head(14);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;
        case 43100012:
        case 43100024:
        case 43378604:
        case 43378606:
        case 43050035:
        case 43050024:
            current_ptr = inv_list.get_head(17);
            if (current_ptr != NULL)
            {
                while(end_loop)
                {
                    if (current_ptr->p_element.get_barcode_num() == barcode)
                    {
                        search_results.push_back(current_ptr);
                    }
                    if(current_ptr->next != NULL)
                    {
                        current_ptr = current_ptr->next;
                    }
                    else
                    {
                        end_loop = false;
                    }
                }
            }
        break;

        default:

        break;
    }
    return search_results;// return the results
}

void Inventory::remove_from_inventory(vector<Node*> remove_list)
{
    for (int i = 0; i<remove_list.size(); i++)
    {
        inv_list.splice_node(remove_list[i]);
    }
}
int Inventory::get_total() const
{
    return inv_list.get_length();
}
vector<int> Inventory::get_brand_total() const
{
    vector<int> ans;
    int counter = 0;

    vector<Node*> temp = Inventory::search_via_bacode(11100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    temp = Inventory::search_via_bacode(21100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    temp = Inventory::search_via_bacode(31100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    temp = Inventory::search_via_bacode(41100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    return ans;
}
vector<int> Inventory::get_water_type_total() const
{
    vector<int> ans;
    int counter = 0;

    vector<Node*> temp = Inventory::search_via_bacode(11100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(11050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(21050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(31050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(41050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    temp = Inventory::search_via_bacode(12100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(12050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(22050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(32050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(42050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);
    counter = 0;

    temp = Inventory::search_via_bacode(13100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(13050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(23050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(33050024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43100012);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43100024);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43378604);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43378606);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43050035);
    counter += temp.size();
    temp.clear();
    temp = Inventory::search_via_bacode(43050024);
    counter += temp.size();
    temp.clear();

    ans.push_back(counter);

    return ans;
}
