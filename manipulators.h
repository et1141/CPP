#ifndef MANIPULATORS_H_INCLUDED
#define MANIPULATORS_H_INCLUDED

#include <iostream>
#include <sstream>
#include <ostream>
using namespace std;

inline ostream& quot (ostream &os){ return os <<(char)34;}
inline ostream& amp (ostream &os)
{
    return os <<(char)38;
}
inline ostream& lt (ostream &os)
{
    return os <<(char)60;
}
inline ostream& gt (ostream &os)
{
    return os <<(char)62;
}

struct attr {
    string key, val;
    friend ostream& operator << (ostream &os, const attr &sth)
        {
            return os<<" "<<sth.key<<"="<<quot<<sth.val<<quot;
        }
    public:
    attr (string key, string val) : key(key), val(val)
        {}
    };


//##############################    ISTREAM   #######################################
inline istream& clearline (istream &is)
{
    char a;
    do {
        a=is.get();
    }while (a!='\n'&&a!=EOF);
    return is;
}

struct Ignore {
    int x;
    friend istream& operator >> (istream &is, const Ignore &sth)
        {
            for(int i=0;i<sth.x;i++){
                char a=is.get();
            }
            return is;
        }
    public:
    Ignore (int x) : x(x){}
    };



#endif // MANIPULATORS_H_INCLUDED
