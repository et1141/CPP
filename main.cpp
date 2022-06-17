#include <iostream>
#include <fstream>

#include "manipulators.h"
#include "svg.h"
#include <unordered_map>
#include <list>



using namespace std;



int main()
{
    //manipulatory ostream:
    cout<<"quot: "<<quot<<endl;
    cout<<"amp: "<<amp<<endl;
    cout<<"lt: "<<lt<<endl;
    cout<<"gt: "<<gt<<endl;
    cout <<"attr:"<<attr("*****", "***") << endl;
    cout<<endl<<endl;

    //manipulatory istream:
    istringstream iss{"whatssupp AA \n    \n NewLINE"};
    string s1;
    iss>>clearline>>s1;
    cout<<"clearline: "<<s1<<endl;

    istringstream iss2{"1234567899999"};
    string s2;
    iss2>>Ignore(8)>>s2;
    cout<<"ignore: "<<s2<<endl;


    //File Print example:
    ifstream infile;
    infile.open("Sth.txt", ios::in );
    string s3;
    infile>>Ignore(8)>>s3;
    cout<<"ignore: "<<s3<<endl;

    Rectangle shape1 = Rectangle();


    IndexS test1 = IndexS("CV");
    test1.addAtribute("Age","42");
    test1.addAtribute("Experiance","lack of");
    test1.addAtribute("sth","AAA");

    IndexS test2=IndexS("occupation");
    Text test3= Text("programmer");
    cout<<"Test3: "<<test3<<endl;
    test2.addContent(&test3);
    cout<<test2<<endl;
    cout<<test1<<endl;
    test1.addContent(&test2);
    cout<<test1<<endl;


    //IndexP:
    IndexP test4 = IndexP("Rect");
    test4.addAtribute("x","55");
    test4.addAtribute("y","63");
    cout<<test4<<endl;


    InitPicture picture = InitPicture();
    FigureConfig conf1 = FigureConfig();
    Rectangle rect1 = Rectangle(conf1);
    conf1.x="50";
    conf1.y="300";
    conf1.stroke="blue";
    Rectangle rect2 = Rectangle(conf1);
    picture.addPainting(&rect1.index);
    picture.addPainting(&rect2.index);
    picture.save("picture1.html");

/*
    for(int i=10;i<=300;i+=10){
        conf1.x=i;
        conf1.y=i;
        if(i%3==0)
            conf1.stroke="blue";
        else if(i%2==0)
            conf1.stroke="red";
            else 
                conf1.stroke="black";
     Rectangle rect= Rectangle(conf1);
     picture.addPainting(&rect.index);
    }
*/




    return 0;
}


    /*
    std::unordered_map<string, string> kraj {
        { "jezyk", "polski" },
        { "wojewodztwo","wielkopolska" }
    };

    for(auto x : kraj){
        cout<<attr(x.first,x.second);
    }
    */
