#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "patient.h"
#include "scanner.h"
#include "radio.h"
#include "mammo.h"
#include "analyse.h"
#include "controle.h"
#include "tab_fichier.h"
#include "fichier_tab.h"
#include "saisie.h"
#include "traitement.h"

using namespace std;


int main()
{
   string  nf_patient,nf_scanner,nf_radio,nf_mammo,nf_analyse,nf_controle ; // declaration des variables de type chaine pour contenir les noms des fichiers
   ifstream f_patient,f_scanner,f_radio,f_mammo,f_analyse,f_controle ;  // declaration des streams ou on vas ouvrir les fichiers en lecture
   ofstream of_patient,of_scanner,of_radio,of_mammo,of_analyse,of_controle ;  // declaration des streams ou on vas ouvrir les fichiers en ecriture

   vector<patient> p ;
   vector<scanner> s ;
   vector<radio>   r ;   // declaration des tableaux dynamiques de type de nos classes
   vector<mammo>   m ;
   vector<analyse> a ;
   vector<controle> c;

   saisie_nf(nf_patient,nf_scanner,nf_radio,nf_mammo,nf_analyse,nf_controle); // fonction pour saisir les localisations des fichiers dans le pc




   f_patient.open(nf_patient.c_str());
   f_scanner.open(nf_scanner.c_str());
   f_radio.open(nf_radio.c_str());
   f_mammo.open(nf_radio.c_str());            // ouverture des fichier lecture
   f_analyse.open(nf_analyse.c_str());
   f_controle.open(nf_controle.c_str());


   fichier_tab_p(f_patient,p);
   fichier_tab_s(f_scanner,s);
   fichier_tab_r(f_radio,r);
   fichier_tab_m(f_mammo,m);     // fonctions pour stocker chaque ligne  du chaque fichier dans une case du tableau correspondant
   fichier_tab_a(f_analyse,a);
   fichier_tab_c(f_controle,c);



   traitement(p,s,r,m,a,c) ;   // fonctions traitement des tableaux



   f_patient.close();
   f_scanner.close();
   f_radio.close();
   f_mammo.close();            // fermeture des fichier en mode lecture
   f_analyse.close();
   f_controle.close();



   of_scanner.open(nf_scanner.c_str());
   of_radio.open(nf_radio.c_str());
   of_mammo.open(nf_mammo.c_str());            // ouverture des fichier
   of_analyse.open(nf_analyse.c_str());
   of_controle.open(nf_controle.c_str());

   tab_fichier_s(s,of_scanner);
   tab_fichier_r(r,of_radio);
   tab_fichier_m(m,of_mammo);   //fonctions pour restocker les rendez vous des tableaux apres traitement dans chaque fichier correspondant
   tab_fichier_a(a,of_analyse);
   tab_fichier_c(c,of_controle);



   of_scanner.close();
   of_radio.close();
   of_mammo.close();            // fermeture des fichier en mode ecriture
   of_analyse.close();
   of_controle.close();












    return 0;
}
