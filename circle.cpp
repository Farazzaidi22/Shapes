#include <iostream>
#include "circle.h"
#include <math.h>

using namespace std;

circle::circle()
{
    this->radius=0;
}

void circle::setradius(float r)
{
    this->radius=r;
    cout<<"Enter radius of the circle: ";
    cin>>r;
}

float circle::getradius()
{
    return this->radius;
}

void circle::choice(char ch)
{
    again:
    cout<<"Enter a for area \nEnter c for circumference \nEnter q for for quiting  \nchoice:";
    cin>>ch;
    switch(ch)
    {
    case 'a':
        {
            calarea();
            break;
        }
    case 'c':
        {
            calcircum();
            break;
        }

    case 'q':
        {
            cout<<"Thanks :)";
            break;
        }

    default:
        {
            cout<<"Sorry1 you entered wrong option" << endl;
            goto again;
        }
    }
}

void circle::calarea()
{
    float a;
    a= (3.142)* (pow(getradius(), 2));
    cout<<"The area of the circle is " << a << endl;
}


void circle::calcircum()
{
    float c;
    c= 2*(3.142)* getradius();
    cout<<"The circumference of the circle is " << c << endl;
}

circle::~circle()
{
    //delete radius;
    cout<<"Hello i am destructor";
}
