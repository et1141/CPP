#include <iostream>
#include <fstream>

#include "manipulators.h"
#include "svg.h"
#include <unordered_map>
#include "xmlStorage.h"


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

    Triangle shape1 = Triangle();

    /*
    std::unordered_map<string, string> kraj {
        { "jezyk", "polski" },
        { "wojewodztwo","wielkopolska" }
    };

    for(auto x : kraj){
        cout<<attr(x.first,x.second);
    }
    */
    IndexS test1 = IndexS("CV");
    test1.addAtribute("jezyk","polski");
    test1.addAtribute("zamineszkaly","Wro");
    test1.addAtribute("lat","42");
    cout<<test1<<endl;


    return 0;
}
