#ifndef SAISIE_H_INCLUDED
#define SAISIE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
void saisie_nf(std::string& nf_patient,std::string& nf_scanner,std::string& nf_radio,std::string& nf_mammo,std::string& nf_analyse,std::string& nf_controle)
{
    cout << "Saisir votre fichier patient sous la forme: C:/fichier/nom_fichierpatient.txt ";
    cin >> nf_patient;
      cout << "Saisir votre fichier scanner sous la forme: C:/fichier/nom_fichier_scanner.txt ";
    cin >> nf_scanner;
      cout << "Saisir votre fichier radio sous la forme: C:/fichier/nom_fichier_radio.txt ";
    cin >> nf_radio;
      cout << "Saisir votre fichier mammo sous la forme: C:/fichier/nom_fichier_mammo.txt ";
    cin >> nf_mammo;
      cout << "Saisir votre fichier analyse sous la forme: C:/fichier/nom_fichier_analyse.txt ";
    cin >> nf_analyse;
      cout << "Saisir votre fichier controle sous la forme: C:/fichier/nom_fichier_controle.txt ";
    cin >> nf_controle;

}

#endif // SAISIE_H_INCLUDED
