#ifndef XMLSTORAGE_H_INCLUDED
#define XMLSTORAGE_H_INCLUDED

#include <fstream>
#include <unordered_map>
#include <list>
#include <iterator>

//Dokument taki sk�ada si� ze znacznik�w pojedynczych i podw�jnych
//implementuj�c tre�� skorzystaj z kolekcji listowej z STL

//zbi�r atrybut�w, czyli par klucz�warto��; implementuj�c zbi�r atrybut�w skorzystaj asocjacyjnej z
//kolekcji nieuporz�dkowanej. Sam dokument XML sk�ada si� z jednego znacznika zwanego znacznikiem g��wnym.

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
    public:
        virtual void print(ostream &os) const{};
        //virtual Content (const Content &oldobj) con;
};

inline ostream& operator << (ostream &os, const Content &content){ //must be in header file!
  content.print(os);
  return os;
}



class IndexP : public Content{  //
    string name;
    unordered_map<string, string> atributes;

    public:
        IndexP (string name):name(name){};
        //IndexP (const IndexS &old){
        //        name=old.name;
        //        atributes=old.atributes;
        //        cont=old.cont;
        //    }
        void addAtribute(string key, string val){
                atributes[key] = val;
            }
        //  protected:
        void print (ostream &os)const{
            os<<lt<<name;
            for(auto el : atributes){
                os<<attr(el.first,el.second);
            }
            os<<"/"<<gt;
            }
};



class IndexS : public Content{  //
        string name;//string open;
        unordered_map<string, string> atributes;
        list <Content*> cont;

        public:
            IndexS(string name):name(name){};
            IndexS (const IndexS &old){
                name=old.name;
                atributes=old.atributes;
                cont=old.cont;
            }
            void addAtribute(string key, string val){
                atributes[key] = val;
            }
            void addContent(Content *newCnt){
                cont.push_back(newCnt);
            }

            //  protected:
            void print (ostream &os)const{
                os<<lt<<name;
                 for(auto el : atributes){
                    os<<attr(el.first,el.second);
                }
                os<<gt<<endl;
              //  iterator it;
                for(auto el: cont){
                   os<< (*el);
                }

                os<<endl<<lt<<"/"<<name<<gt;
            }
};

class Text : public Content{  //<nazwa j�zyk="polski">Czechy</nazwa>  <- text to u nas: Czechy
    public:
        string txt;
        Text (string text):txt(text){};

        void print (ostream &os)const{
             os<<txt;
            }

};

#endif // XMLSTORAGE_H_INCLUDED
