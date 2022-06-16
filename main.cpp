#include <iostream>
#include <fstream>

#include "manipulators.h"
#include "svg.h"
#include <unordered_map>
#include "xmlStorage.h"
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
    test1.addAtribute("jezyk","polski");
    test1.addAtribute("zamineszkaly","Wro");
    test1.addAtribute("lat","42");

    IndexS test2=IndexS("Zawod");
    Text test3= Text("Programista");
    cout<<"Test3: "<<test3<<endl;
    test2.addContent(&test3);
    cout<<test2<<endl;
    cout<<test1<<endl;
    test1.addContent(&test2);
    cout<<test1<<endl;

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




/* Some old shit
    auto test4 = test1.get1st();
//    cout<<test4.name;
    cout<<"NOWY:::" <<test4;


    list <Content*> cont;
    Content *wrr=&test3;
    Content *wrr2=&test2;
    cont.push_back(wrr);
    cont.push_back(wrr2);
  //  Text test5 =(Text)cont.front();
  //  cout<<test5<<endl;
    //Text test5= cont.front();
    //cout<<test5<<endl;
  //  list<Content*>::iterator it;
 //   for(it=cont.begin();it!=cont.end();it++)
 //   {
 //       (*it)->foo();
  //  }
//
*/
