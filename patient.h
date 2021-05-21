#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED
#include <string>
using namespace std;
class patient
{
    public:
        string id ;
        string nom ;
        string prenom;
        string nom_med;
        string etat ;
        string besoin;
        patient( string i="",string n="",string p="",string nm="",string e="",string b="")
        {
          id=i;
          nom=n;
          prenom=p;
          nom_med=nm;
          etat=e;
          besoin=b;
        }

        };


#endif // PATIENT_H_INCLUDED
