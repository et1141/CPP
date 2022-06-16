#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED

#include "xmlStorage.h"

class Triangle{

    public:
    Triangle(){
        fstream triangle;
        triangle.open("triangle.html",ios::out);
        triangle<<"<?xml version="<<quot<<"1.0"<<quot<<" standalone="<<quot<<"no"<<quot<<"?>"<<endl;
        triangle<<"<svg width="<<quot<<"200"<<quot<<" height="<<quot<<"250"<<quot<<" version="<<quot<<"1.1"<<quot<<" xmlns="<<quot<<"http://www.w3.org/2000/svg"<<quot<<">"<<endl;
        triangle<<"<rect x="<<quot<<"10"<<quot<<" y="<<quot<<"10"<<quot<<" width="<<quot<<"30"<<quot<<" height="<<quot<<"30"<<quot<<" stroke="<<quot<<"black"<<" fill="
        <<quot<<"transparent"<<quot<<" stroke-width="<<quot<<"5"<<quot<<"/>"<<endl;
        triangle<<"</svg>";


        triangle.close();
        }

};

#endif // SVG_H_INCLUDED
