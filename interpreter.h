#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class TVAR
{
    char* nume;
    int valInt;
    double valDouble;
    float valFloat;
    bool isInt;
    bool isDouble;
    bool isFloat;
    TVAR* next;
    public:
    static TVAR* head;
    static TVAR* tail;
    TVAR(char* n, int v = -1);
    TVAR(char* n, double v = -1);
    TVAR(char* n, float v = -1);
    TVAR();
    int exists(char* n);

    int getValueInt(char *n);
    void setValueInt(char *n, int v);
    void addInt(char* n, int v = -1);

    double getValueDouble(char *n);
    void setValueDouble(char *n, double v);
    void addDouble(char* n, double v = -1);

    float getValueFloat(char *n);
    void setValueFloat(char *n, float v);
    void addFloat(char* n, float v = -1);

    bool checkIsInt(char *n);
    bool checkIsDouble(char *n);
    bool checkIsFloat(char *n);

    void printVars();
};

TVAR* TVAR::head;
TVAR* TVAR::tail;

TVAR::TVAR(char *n, int v)
{
    this->nume = new char[strlen(n)+1];
    strcpy(this->nume,n);
    this->next = NULL;
    this->valInt = v;
    this->valDouble = -1;
    this->valFloat = -1;

    this->isInt = true;
    this->isDouble = false;
    this->isFloat = false;
}

TVAR::TVAR(char *n, double v)
{
    this->nume = new char[strlen(n)+1];
    strcpy(this->nume,n);
    this->next = NULL;
    this->valInt = -1;
    this->valDouble = v;
    this->valFloat = -1;

    this->isInt = false;
    this->isDouble = true;
    this->isFloat = false;
}

TVAR::TVAR(char *n, float v)
{
    this->nume = new char[strlen(n)+1];
    strcpy(this->nume,n);
    this->next = NULL;
    this->valInt = -1;
    this->valDouble = -1;
    this->valFloat = v;

    this->isInt = false;
    this->isDouble = false;
    this->isFloat = true;
}

TVAR::TVAR()
{
    TVAR::head = NULL;
    TVAR::tail = NULL;
    this->valInt = -1;
    this->valDouble = -1;
    this->valFloat = -1;
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

int TVAR::getValueInt(char *n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->valInt;
        tmp = tmp->next;
    }
    return -1;
}

void TVAR::setValueInt(char *n, int v)
{
    //printf("Set value int: %d\n", v);
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        {
            tmp->valInt = v;
        }
        tmp = tmp->next;
    }
}

void TVAR::addInt(char *n, int v)
{
    printf("Added value int: %d\n", v);
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

void TVAR::addDouble(char* n, double v)
{
    //printf("Added value: %f\n", v);
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

float TVAR::getValueFloat(char *n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->valFloat;
        tmp = tmp->next;
    }
    return -1;
}

void TVAR::setValueFloat(char *n, float v)
{
    //printf("Set value float: %f\n", v);
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        {
            tmp->valFloat = v;
        }
        tmp = tmp->next;
    }
}

void TVAR::addFloat(char *n, float v)
{
    //printf("Added value float: %f\n", v);
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

bool TVAR::checkIsInt(char *n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->isInt;
        tmp = tmp->next;
    }
    return false;
}

bool TVAR::checkIsDouble(char *n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->isDouble;
        tmp = tmp->next;
    }
    return false;
}

bool TVAR::checkIsFloat(char *n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->isFloat;
        tmp = tmp->next;
    }
    return false;
}

double TVAR::getValueDouble(char* n)
{
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        return tmp->valDouble;
        tmp = tmp->next;
    }
    return -1;
}

void TVAR::setValueDouble(char* n, double v)
{
    //printf("Set value: %f\n", v);
    TVAR* tmp = TVAR::head;
    while(tmp != NULL)
    {
        if(strcmp(tmp->nume,n) == 0)
        {
            tmp->valDouble = v;
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
        cout<<tmp->nume<<"=";

        if (tmp->valInt >=0 ){
            cout<<tmp->valInt;
        }

        else if (tmp->valDouble >= 0){
            cout << tmp->valDouble;
        }

        else if (tmp->valFloat >= 0){
            cout << tmp->valFloat;
        }

        cout<<endl;
        tmp = tmp->next;
    } 
}
TVAR* ts = NULL;