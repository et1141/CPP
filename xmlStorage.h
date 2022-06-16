#ifndef XMLSTORAGE_H_INCLUDED
#define XMLSTORAGE_H_INCLUDED

#include <fstream>
#include <unordered_map>
#include <list>


//Dokument taki sk³ada siê ze znaczników pojedynczych i podwójnych
//implementuj¹c treœæ skorzystaj z kolekcji listowej z STL

//zbiór atrybutów, czyli par klucz–wartoœæ; implementuj¹c zbiór atrybutów skorzystaj asocjacyjnej z
//kolekcji nieuporz¹dkowanej. Sam dokument XML sk³ada siê z jednego znacznika zwanego znacznikiem g³ównym.

//  Dokumaent;
//      Tresc
//          Znacznik pojedynczy
//          Znacznik podwojny
//                  poczatek
//                  Tresc
//                  koniec
//          Napis
//

class createXmlFigure{
    public:
     string version;
     createXmlFigure(string figure,string filename);

};

class Content{
    public:
        friend ostream& operator << (ostream &os, const Content &content);
    protected:
        virtual void print(ostream &os) const{}
};
inline ostream& operator << (ostream &os, const Content &content){ //must be in header file!
  content.print(os); // delegate the work to a polymorphic member function.
  return os;
}

class Atribute{  //
    public:
        string key;
        string value;
};

//class InxexP : Content{  //
//    public:
//
//};



class IndexS : public Content{  //
        string name;//string open;
        unordered_map<string, string> atributes;
        list <Content> cont;

        //string close;

        public:
            IndexS(string name):name(name){};
            void addAtribute(string key, string val){
                atributes[key] = val;
            }
        protected:
            void print (ostream &os){
                os<<lt<<name;
                 for(auto el : atributes){
                    os<<attr(el.first,el.second);
                }
                os<<gt<<endl;

                os<<lt<<"/"<<name<<gt<<endl;
            }

};

class Text : Content{  //<nazwa jêzyk="polski">Czechy</nazwa>  <- text to u nas: Czechy
    public:
        string txt;
        Text (string text):txt(text){};

    protected:
        void print (ostream &os){
             os<<txt;
            }
};





#endif // XMLSTORAGE_H_INCLUDED
