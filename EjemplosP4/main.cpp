#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    multimap<int,string> Alumnos;
    Alumnos.insert(pair<int,string>(3,"Isabela"));
    Alumnos.insert(pair<int,string>(1,"Nickol"));
    Alumnos.insert(pair<int,string>(10,"Cristian"));
    Alumnos.insert(pair<int,string>(10,"Sebastian"));

    cout<<"El tamano del map es:"<< Alumnos.size()<<endl;
    cout<< "El orden predeterminado de map es :"<<endl;

    for (map<int, string>:: iterator it = Alumnos.begin(); it!=Alumnos.end(); ++it){

        cout <<(*it).first<< " "<<(*it).second<<endl;

    }


    return 0;
}
