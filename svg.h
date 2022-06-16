#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED

#include "xmlStorage.h"

class DrawFigure{

    public:
    DrawFigure(string figure,string s, string y){
        fstream rectangle;
        rectangle.open("rectangle.html",ios::out);
        rectangle<<"<?xml version="<<quot<<"1.0"<<quot<<" standalone="<<quot<<"no"<<quot<<"?>"<<endl;
        rectangle<<"<svg width="<<quot<<"200"<<quot<<" height="<<quot<<"250"<<quot<<" version="<<quot<<"1.1"<<quot<<" xmlns="<<quot<<"http://www.w3.org/2000/svg"<<quot<<">"<<endl;

        IndexP xml_rect("rect");
        xml_rect.addAtribute("x","60");
        xml_rect.addAtribute("y","10");
        xml_rect.addAtribute("rx","10");
        xml_rect.addAtribute("ry","10");
        xml_rect.addAtribute("width","30");
        xml_rect.addAtribute("height","30");
        xml_rect.addAtribute("stroke","blue");
        xml_rect.addAtribute("fill","transparent");
        xml_rect.addAtribute("stroke-width","5");
        rectangle<<xml_rect;

        rectangle.close();
        }
    //DrawFigure(FigurePar info){};

};



class Rectangle{

    public:
    Rectangle(){
        fstream rectangle;
        rectangle.open("rectangle.html",ios::out);
        rectangle<<"<?xml version="<<quot<<"1.0"<<quot<<" standalone="<<quot<<"no"<<quot<<"?>"<<endl;
        rectangle<<"<svg width="<<quot<<"200"<<quot<<" height="<<quot<<"250"<<quot<<" version="<<quot<<"1.1"<<quot<<" xmlns="<<quot<<"http://www.w3.org/2000/svg"<<quot<<">"<<endl;

        IndexP xml_rect("rect");
        xml_rect.addAtribute("x","60");
        xml_rect.addAtribute("y","10");
        xml_rect.addAtribute("rx","10");
        xml_rect.addAtribute("ry","10");
        xml_rect.addAtribute("width","30");
        xml_rect.addAtribute("height","30");
        xml_rect.addAtribute("stroke","blue");
        xml_rect.addAtribute("fill","transparent");
        xml_rect.addAtribute("stroke-width","5");
        rectangle<<xml_rect;

        rectangle.close();
        }

};

#endif // SVG_H_INCLUDED
