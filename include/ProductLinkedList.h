#ifndef PRODUCTLINKEDLIST_H
#define PRODUCTLINKEDLIST_H

#include "Product.h"
#include <iostream>
#include <string>


struct Node
{
    string s_element;
    Product p_element;
    Node *branch;
    Node *next;
    Node *prev;
};

class ProductLinkedList
{
    public:
        ProductLinkedList();
        virtual ~ProductLinkedList();
        Node* get_head(int l) const;
        Node* get_tail(int l) const;
        Node* get_next(Node* n) const;
        Node* get_prev(Node* n) const;
        int get_length() const;
        void add_to_head(string s, Product p, int l);
        void add_to_tail(string s, Product p, int l);
        void insert_node_after(string s, Product p, Node* n, int l);
        void add_branch_node(string s, Product p, Node* n, int l);
        void splice_node(Node* n);


    protected:

    private:
        int length;
        int level;
        Node *head[17];
        Node *tail[17];
};

#endif // PRODUCTLINKEDLIST_H
