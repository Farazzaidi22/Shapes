#include <iostream>
#ifndef CIRCLE_H
#define CIRCLE_H

using namespace std;

class circle
{
    public:
        circle();
        void setradius(float );
        float getradius();
        void choice(char );
        void calcircum();
        void calarea();
        ~circle();

    private:
        float radius;
        char ch;
};

#endif // CIRCLE_H
