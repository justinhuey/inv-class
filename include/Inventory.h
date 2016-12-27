#ifndef INVENTORY_H
#define INVENTORY_H

#include "ProductLinkedList.h"
#include <vector>



class Inventory
{
    public:
        Inventory();
        virtual ~Inventory();
        void add_to_inventory(Product p);
        vector<Node*> search_via_bacode(long long int barcode) const;
        void remove_from_inventory(vector<Node*> remove_list);
        int get_total() const;
        vector<int> get_brand_total() const;
        vector<int> get_water_type_total() const;

    protected:

    private:
        ProductLinkedList inv_list;
        int counter= 0;
};

#endif // INVENTORY_H
