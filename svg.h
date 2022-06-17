#ifndef SVG_H_INCLUDED
#define SVG_H_INCLUDED
#include "xmlStorage.h"

#include <fstream>


class XmlConfig{
    public:
     string version = "1.0";
     string encoding = "utf-8";
    // string standalone; //zamiast tego encoding="utf-8"  ??
    
};

class SvgConfig{
    public:
     string xmlns="http://www.w3.org/2000/svg";
     string width="500";
     string height="500";
     string version="1.1";
};


class InitPicture{
    IndexS svg=IndexS("svg");
    IndexP xml=IndexP("?xml");
public:
    InitPicture(XmlConfig configXml = XmlConfig(),SvgConfig configSvg = SvgConfig()){
         xml.addAtribute("encoding",configXml.encoding);
         xml.addAtribute("version",configXml.version); 
         
         svg.addAtribute("version",configSvg.version);
         svg.addAtribute("height",configSvg.height);
         svg.addAtribute("width",configSvg.width);
         svg.addAtribute("xmlns",configSvg.xmlns);
    }
  void addPainting(Content *newCnt){
    svg.addContent(newCnt);
  }
  void save(string outputName){
     fstream file;
     file.open(outputName,ios::out);
     file<<xml;
     file<<svg;
     file.close();
  }

};

/*
l_rect.addAtribute("y","10");
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
*/

class FigureConfig{
    public:
     string x="10";
     string y="10";
     string rx="10";
     string ry="10";
     string width="30";
     string height="30";
     string stroke="black";
     string fill="transparent";
     string stroke_width="5";
};
///rectange,line,circle,ellipse,polygon<wielokat>


class Rectangle{
    public:
    IndexP index=IndexP("rect");
    Rectangle(FigureConfig conf=FigureConfig()){
        index.addAtribute("x",conf.x);
        index.addAtribute("y",conf.y);
        index.addAtribute("rx",conf.rx);
        index.addAtribute("ry",conf.ry);
        index.addAtribute("width",conf.width);
        index.addAtribute("height",conf.height);
        index.addAtribute("stroke",conf.stroke);
        index.addAtribute("fill",conf.fill);
        index.addAtribute("stroke-width",conf.stroke_width);
    }
};

class Circle{
    public:
    IndexP index=IndexP("circle");
    Circle(FigureConfig conf=FigureConfig()){
        index.addAtribute("x",conf.x);
        index.addAtribute("y",conf.y);
        index.addAtribute("rx",conf.rx);
        index.addAtribute("ry",conf.ry);
        index.addAtribute("width",conf.width);
        index.addAtribute("height",conf.height);
        index.addAtribute("stroke",conf.stroke);
        index.addAtribute("fill",conf.fill);
        index.addAtribute("stroke-width",conf.stroke_width);
    }
};

class Ellipse{
    public:
    IndexP index=IndexP("ellipse");
    Ellipse(FigureConfig conf=FigureConfig()){
        index.addAtribute("x",conf.x);
        index.addAtribute("y",conf.y);
        index.addAtribute("rx",conf.rx);
        index.addAtribute("ry",conf.ry);
        index.addAtribute("width",conf.width);
        index.addAtribute("height",conf.height);
        index.addAtribute("stroke",conf.stroke);
        index.addAtribute("fill",conf.fill);
        index.addAtribute("stroke-width",conf.stroke_width);
    }
};

class Line{
    public:
    IndexP index=IndexP("line");
    Line(FigureConfig conf=FigureConfig()){
        index.addAtribute("x",conf.x);
        index.addAtribute("y",conf.y);
        index.addAtribute("rx",conf.rx);
        index.addAtribute("ry",conf.ry);
        index.addAtribute("width",conf.width);
        index.addAtribute("height",conf.height);
        index.addAtribute("stroke",conf.stroke);
        index.addAtribute("fill",conf.fill);
        index.addAtribute("stroke-width",conf.stroke_width);
    }
};

class Polygon{
    public:
    IndexP index=IndexP("polygon");
    Polygon(FigureConfig conf=FigureConfig()){
        index.addAtribute("x",conf.x);
        index.addAtribute("y",conf.y);
        index.addAtribute("rx",conf.rx);
        index.addAtribute("ry",conf.ry);
        index.addAtribute("width",conf.width);
        index.addAtribute("height",conf.height);
        index.addAtribute("stroke",conf.stroke);
        index.addAtribute("fill",conf.fill);
        index.addAtribute("stroke-width",conf.stroke_width);
    }
};

/*

class Rectangle{

    public:
    Rectangle(){
        /*
        fstream rectangle;
        rectangle.open("rectangle.html",ios::out);
        rectangle<<"<?xml version="<<quot<<"1.0"<<quot<<" standalone="<<quot<<"no"<<quot<<"?>"<<endl;
        rectangle<<"<svg width="<<quot<<"200"<<quot<<" height="<<quot<<"250"<<quot<<" version="<<quot<<"1.1"<<quot<<" xmlns="<<quot<<"http://www.w3.org/2000/svg"<<quot<<">"<<endl;
    */
      //  IndexP xml_rect("rect");

 ////       rectangle<<xml_rect;
//
//        rectangle.close();
//        }

//};

#endif // SVG_H_INCLUDED
