#ifndef FICHIER_TAB_H_INCLUDED
#define FICHIER_TAB_H_INCLUDED
#include <iostream>
#include<vector>
#include<string>
#include "patient.h"
#include "scanner.h"
#include "radio.h"
#include "mammo.h"
#include "analyse.h"
#include "controle.h"
#include <sstream>
#include <fstream>
using namespace std ;

   void fichier_tab_p(std::ifstream& f_patient,std::vector<patient>& p);
   void fichier_tab_s(std::ifstream& f_scanner,std::vector<scanner>& s);
   void fichier_tab_r(std::ifstream& f_radio,std::vector<radio>& r);
   void fichier_tab_m(std::ifstream& f_mammo,std::vector<mammo>& m);
   void fichier_tab_a(std::ifstream& f_analyse,std::vector<analyse>& a);
   void fichier_tab_c(std::ifstream& f_controle,std::vector<controle>& c);




  void split(const string& chaine, char delimiteur, std::vector<string>& elements)
{
 stringstream ss(chaine);
 string sousChaine;
 while (getline(ss, sousChaine, delimiteur))
 {
 elements.push_back(sousChaine);
 }
}



 void fichier_tab_p(std::ifstream& f_patient,std::vector<patient>& p)
 {
    string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_patient, ligne))
     {
     patient pp ;
      split(ligne,':',t);

      pp.id = t[0] ;
      pp.nom = t[1];
      pp.prenom = t[2] ;
      pp.nom_med = t[3] ;
      pp.etat = t[4] ;
      pp.besoin = t[5];
      p.push_back(pp);
      t.clear();
      i+=1 ;
     }
 }
 void fichier_tab_s(std::ifstream& f_scanner,std::vector<scanner>& s)
 {
    string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_scanner, ligne))
     {
         scanner ss ;
      split(ligne,':',t);

      ss.date = t[0] ;
      ss.rv1=t[1];
      ss.rv2=t[2];
      ss.rv3=t[3];
      ss.rv4=t[4];
      ss.rv5=t[5];
      ss.rv6=t[6];
      ss.rv7=t[7];
      ss.rv8=t[8];
      ss.rv9=t[9];
      ss.rv10=t[10];
    s.push_back(ss);
      t.clear();
      i+=1 ;
     }
}
void fichier_tab_r(std::ifstream& f_radio,std::vector<radio>& r)
{

    string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_radio, ligne))
     {
      radio rr ;
      split(ligne,':',t);

      rr.date = t[0] ;
      rr.rv1=t[1];
      rr.rv2=t[2];
      rr.rv3=t[3];
      rr.rv4=t[4];
      rr.rv5=t[5];
      rr.rv6=t[6];
      rr.rv7=t[7];
      rr.rv8=t[8];
      rr.rv9=t[9];
      rr.rv10=t[10];
      rr.rv11=t[11];
      rr.rv12=t[12];
      rr.rv13=t[13];
      rr.rv14=t[14];
      rr.rv15=t[15];
      r.push_back(rr);
      t.clear();
      i+=1 ;
     }
}
void fichier_tab_m(std::ifstream& f_mammo,std::vector<mammo>& m)
{
    string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_mammo, ligne))
     {
         mammo mm ;
      split(ligne,':',t);

      mm.date = t[0] ;
      mm.rv1=t[1];
      mm.rv2=t[2];
      mm.rv3=t[3];
      mm.rv4=t[4];
      mm.rv5=t[5];
      mm.rv6=t[6];
      mm.rv7=t[7];
      mm.rv8=t[8];
      mm.rv9=t[9];
      mm.rv10=t[10];
    m.push_back(mm);
      t.clear();
      i+=1 ;
     }
}
 void fichier_tab_a(std::ifstream& f_analyse,std::vector<analyse>& a)
 {
     string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_analyse, ligne))
     {
     analyse aa ;
      split(ligne,':',t);

      aa.date = t[0] ;
      aa.rv1=t[1];
      aa.rv2=t[2];
      aa.rv3=t[3];
      aa.rv4=t[4];
      aa.rv5=t[5];
      aa.rv6=t[6];
      aa.rv7=t[7];
      aa.rv8=t[8];
      aa.rv9=t[9];
      aa.rv10=t[10];
      aa.rv11=t[11];
      aa.rv12=t[12];
      aa.rv13=t[13];
      aa.rv14=t[14];
      aa.rv15=t[15];
      a.push_back(aa);
      t.clear();
      i+=1 ;
     }
 }
void fichier_tab_c(std::ifstream& f_controle,std::vector<controle>& c)
{
     string ligne ;
     std::vector<string> t ;
     int i(0);
     while(getline(f_controle, ligne))
     {
      controle cc ;
      split(ligne,':',t);

      cc.date = t[0] ;
      cc.rv1=t[1];
      cc.rv2=t[2];
      cc.rv3=t[3];
      cc.rv4=t[4];
      cc.rv5=t[5];
      cc.rv6=t[6];
      cc.rv7=t[7];
      cc.rv8=t[8];
      cc.rv9=t[9];
      cc.rv10=t[10];
      cc.rv11=t[11];
      cc.rv12=t[12];
      cc.rv13=t[13];
      cc.rv14=t[14];
      cc.rv15=t[15];
      c.push_back(cc);
      t.clear();
      i+=1 ;
     }
}



#endif // FICHIER_TAB_H_INCLUDED
