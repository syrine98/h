#include "ensemble.h"
 #include<iostream>

ensemble::ensemble()
{
    head=NULL ;
}
ensemble::ensemble(const ensemble & e1)
{
    this->head=e1.head;
    do
    {
        head->val=e1.head->val;
        head=head->next;
    }
    while (head==NULL);
}
ensemble::~ensemble()
{
    //dtor
}
bool ensemble::est_vide()
{
    return(head==NULL);
}
bool ensemble::est_pres(int a)
{
    if (this->est_vide())
    {
        return(false);
    }
    else
    {
        noeud* l= this->head ;
        if(l->val==a)
        {
            return(true);
        }
        else
    {
        do
    {
    l=l->next ;
    if (l->val==a)
    {
        return(true);
    }
    }
    while( l->next == NULL);
    }
    }
    return(false);
}
void ensemble::add(int a)
{
    if(! this->est_pres(a))
    {
        noeud* l= new noeud ;
        l->next=head ;
        l->val=a;
        head=l;
    }
}
void ensemble::del(int a)
{
    noeud* l1;
    noeud* l2 ;
    l1=head ;
    l2=head ;
    do
    {
        if(l1->val==a)
        {
            l2->next=l1->next;
            delete[] l1;
        }
        l2=l1;
        l1=l1->next;
    }
    while(l1 == NULL);
}
int ensemble::plus_petit()
{
    noeud* l=head ;
    int m=l->val;
    do
    {
        if (m>l->val)
        {
            m=l->val;
        }
        l=l->next;
    }
    while(l == NULL);
    return(m);
}
ensemble ensemble::operator=(const ensemble &e1)
{
    if(this!=&e1)
    {
        delete[] head ;
        head =new noeud ;
        do
        {
            head->val=e1.head->val;
        }
        while(e1.head==NULL);
    }
}



























