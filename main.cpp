#include <QCoreApplication>
#include <iostream>
#include <math.h>
using namespace std;
#define Pi 3.14159265


void trojkat()
     {

     cout<< " |. " << endl;
     cout<< " |  .. "<<endl;
     cout<< " |      .."<<endl;
     cout<< "A|         .. B" <<endl;
     cout<< " |             .." <<endl;
     cout<< " |           kat  ..                " <<endl;
     cout<< " |___________________.. " <<endl;
     cout<< "    C      " <<endl;


     }

int main(int argc, char *argv[])
{
    QCoreApplication q(argc, argv);
    double a;
    double b;
    double c;
    double stopnie = 0;
    double kat, si, ta;
    trojkat();
    cout<< "Podaj procent nachylenia"<<endl;
    cin >> stopnie;
    cout<< "Podaj dlugosc a w cm "<<endl;
    cin >> a;
    stopnie = stopnie/100;

    kat= atan(stopnie)*180/Pi;
    si = sin(kat*Pi/180);
    ta = tan(kat*Pi/180);
    b = a/si;
    c = a/ta;
    cout<< "kat wynosi  "<<kat <<" stopni"<<endl;

    cout<< "Bok A wynosi  " << a <<" cm"<< endl;
    cout<< "Bok B wynosi  "<< b <<" cm"<< endl;
    cout<< "Bok C wynosi  "<< c <<" cm"<< endl;




system ("pause");

    return q.exec();
}
