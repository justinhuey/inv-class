#include "ProductLinkedList.h"


ProductLinkedList::ProductLinkedList()
{
    length = 0;
    for (int i=0; i<18; i++)
    {
        head[i] = NULL;
        tail[i] = NULL;
    }
}

ProductLinkedList::~ProductLinkedList()
{
    //dtor
}

Node* ProductLinkedList::get_head(int l) const
{
    return head[l];
}
Node* ProductLinkedList::get_tail(int l) const
{
    return tail[l];
}
Node* ProductLinkedList::get_next(Node* n) const
{
    return n->next;
}
Node* ProductLinkedList::get_prev(Node* n) const
{
    return n->prev;
}
int ProductLinkedList::get_length() const
{
    return length;
}
void ProductLinkedList::add_to_head(string s, Product p, int l)
{
    if (p.get_prod_id() == 0)
    {
        if (head[l]==NULL)
        {

            head[l] = new Node();
            head[l]->branch = NULL;
            head[l]->s_element = s;
            tail[l] = head[l];
            head[l]->prev = NULL;


        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->s_element = s;
            temp->next = head[l];
            head[l]->prev = temp;
            head[l] = temp;
            head[l]->prev = NULL;


        }
    }
    else
    {
        if (head[l] == NULL)
        {
            head[l] = new Node();
            head[l]->branch = NULL;
            head[l]->p_element = p;
            head[l]->s_element = s;
            tail[l] = head[l];
            head[l]->prev = NULL;


        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->p_element = p;
            temp->s_element =s;
            temp->next = head[l];
            head[l]->prev = temp;
            head[l] = temp;
            head[l]->prev = NULL;


        }
        //cout << head[l]->p_element.get_barcode_num() << " " << length << endl;
    }


}
void ProductLinkedList::add_to_tail(string s, Product p, int l)
{
    if (p.get_prod_id() == 0)
    {
        if (tail[l] == head[l])
        {
            Node *temp = new Node();
            temp->branch = NULL;
            temp->s_element = s;
            head[l]->next = temp;
            temp->prev = head[l];
            tail[l]=temp;
            tail[l]->next = NULL;
        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->s_element = s;
            temp->prev = tail[l];
            tail[l]->next = temp;
            tail[l] = temp;
            tail[l]->next = NULL;
        }
    }
    else
    {
        if (head[l] == tail[l])
        {
            Node *temp = new Node();
            temp->branch = NULL;
            temp->s_element = s;
            temp->p_element = p;
            head[l]->next = temp;
            temp->prev = head[l];
            tail[l]=temp;
            tail[l]->next = NULL;
        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->p_element = p;
            temp->s_element = s;
            temp->prev = tail[l];
            tail[l]->next = temp;
            tail[l] = temp;
            tail[l]->next = NULL;
        }
        length++;
        //cout << tail[l]->p_element.get_barcode_num() << " " << length << endl;
    }
}
void ProductLinkedList::insert_node_after(string s, Product p, Node* n, int l)
{
    if (tail[l] == n)
    {
        add_to_tail(s, p, l);
    }
    else
    {
        if (p.get_prod_id() == 0)
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->s_element = s;
            temp->prev = n;
            temp->next = n->next;
            n->next->prev = temp;
            n->next = temp;

        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->branch = NULL;
            temp->p_element = p;
            temp->s_element = s;
            temp->prev = n;
            temp->next = n->next;
            n->next->prev = temp;
            n->next = temp;


        }
        length++;
    }

}
void ProductLinkedList::add_branch_node(string s, Product p, Node* n, int l)
{
    if(n->branch == NULL)
    {
        if (p.get_prod_id() == 0)
        {
            Node *temp;
            temp = new Node();
            temp->s_element = s;
            temp->prev = n;
            n->branch = temp;
            head[l] = temp;
            tail[l] = temp;
        }
        else
        {
            Node *temp;
            temp = new Node();
            temp->p_element = p;
            temp->s_element = s;
            temp->prev = n;
            n->branch = temp;
            head[l] = temp;
            tail[l] = temp;
            length++;
        }
        //cout << head[l]->p_element.get_barcode_num() << " " << length <<  endl;

    }
}

void ProductLinkedList::splice_node(Node* n)
{
    bool isHead = false;
    bool isTail = false;
    int j;

    for (int i=0; i<18; i++)
    {
        if(head[i] == n)
        {
            isHead = true;
            j=i;
        }
        if (tail[i] == n)
        {
            isTail = true;
            j=i;
        }
    }

    if (isHead && isTail)
    {
        n->prev->branch = nullptr;
    }
    else if(isHead)
    {
        head[j] = n->next;
        n->prev->branch = n->next;
        n->next = n->prev;
        n->prev = nullptr;
        n->next = nullptr;
    }
    else if (isTail)
    {
        tail[j] = n->prev;
        n->prev->next= nullptr;
        n->prev = nullptr;
    }
    else
    {
        n->prev->next = n->next;
        n->next->prev = n->prev;
        n->next = nullptr;
        n->prev = nullptr;
    }
    length--;
}
