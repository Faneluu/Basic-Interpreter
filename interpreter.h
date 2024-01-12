#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class TVAR
{
    char* nume;
    double valoare;
    TVAR* next;
    public:
    static TVAR* head;
    static TVAR* tail;
    TVAR(char* n, double v = -1);
    TVAR();
    int exists(char* n);
    double getValue(char *n);
    void setValue(char *n, double v);
    void add(char* n, double v = -1);
    void printVars();
};

TVAR* TVAR::head;
TVAR* TVAR::tail;

TVAR::TVAR(char* n, double v)
{
    this->nume = new char[strlen(n)+1];
    strcpy(this->nume,n);
    this->valoare = v;
    this->next = NULL;
}

TVAR::TVAR()
{
    TVAR::head = NULL;
    TVAR::tail = NULL;
}

int TVAR::exists(char* n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL) 
    { 
        if(strcmp(tmp->nume,n) == 0)
            return 1;
        tmp = tmp->next;
    }
    return 0;
}

void TVAR::add(char* n, double v)
{
    printf("Added value: %f\n", v);
    TVAR* elem = new TVAR(n, v);
    if(head == NULL)
    { 
        TVAR::head = TVAR::tail = elem;
    }
    else
    {
        TVAR::tail->next = elem;
        TVAR::tail = elem;
    }
}

double TVAR::getValue(char* n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->valoare;
        tmp = tmp->next;
    }
    return -1;
}

void TVAR::setValue(char* n, double v)
{
    printf("Set value: %f\n", v);
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        {
            tmp->valoare = v;
        }
        tmp = tmp->next;
    }
}

void TVAR::printVars()
{
    cout<<"\nPrinting table of variables...\n";
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        cout<<tmp->nume<<"="<<tmp->valoare<<"\n";
        tmp = tmp->next;
    } 
}
TVAR* ts = NULL;