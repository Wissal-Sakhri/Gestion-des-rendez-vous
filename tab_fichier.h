#ifndef TAB_FICHIER_H_INCLUDED
#define TAB_FICHIER_H_INCLUDED
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

using namespace std ;

   void tab_fichier_s(std::vector<scanner>& s,std::ofstream& of_scanner);
   void tab_fichier_r(std::vector<radio>& r,std::ofstream& of_radio);
   void tab_fichier_m(std::vector<mammo>& m,std::ofstream& of_mammo);
   void tab_fichier_a(std::vector<analyse>& a,std::ofstream& of_analyse);
   void tab_fichier_c(std::vector<controle>& c,std::ofstream& of_controle);

using namespace std ;

 void tab_fichier_s(std::vector<scanner>& s,std::ofstream& of_scanner)
 {
     for (int i(0);i<s.size();i++)
     {
         of_scanner << s[i].date << ":"<<s[i].rv1 << ":"<<s[i].rv2 << ":"<<s[i].rv3 << ":"<<s[i].rv4 << ":"<<s[i].rv5 << ":"<<s[i].rv6 << ":"<<s[i].rv7 << ":"<<s[i].rv8 << ":"<<s[i].rv9 << ":"<<s[i].rv10 << endl ;
     }
 }
void tab_fichier_r(std::vector<radio>& r,std::ofstream& of_radio)
{
         for (int i(0);i<r.size();i++)
         {


         of_radio << r[i].date << ":"<<r[i].rv1 << ":"<<r[i].rv2 << ":"<<r[i].rv3 << ":"<<r[i].rv4 << ":"<<r[i].rv5 << ":"<<r[i].rv6 << ":"<<r[i].rv7 << ":"<<r[i].rv8 << ":"<<r[i].rv9 << ":"<<r[i].rv10 << ":"<<r[i].rv11<< ":"<<r[i].rv12<< ":"<<r[i].rv13<< ":"<<r[i].rv14<< ":"<<r[i].rv15 << endl ;
         }
}
 void tab_fichier_m(std::vector<mammo>& m,std::ofstream& of_mammo)
 {
     for (int i(0);i<m.size();i++)
     {
         of_mammo << m[i].date << ":"<<m[i].rv1 << ":"<<m[i].rv2 << ":"<<m[i].rv3 << ":"<<m[i].rv4 << ":"<<m[i].rv5 << ":"<<m[i].rv6 << ":"<<m[i].rv7 << ":"<<m[i].rv8 << ":"<<m[i].rv9 << ":"<<m[i].rv10 << endl ;
     }
 }
  void tab_fichier_a(std::vector<analyse>& a,std::ofstream& of_analyse)
  {
     for (int i(0);i<a.size();i++)
         {


         of_analyse << a[i].date << ":"<<a[i].rv1 << ":"<<a[i].rv2 << ":"<<a[i].rv3 << ":"<<a[i].rv4 << ":"<<a[i].rv5 << ":"<<a[i].rv6 << ":"<<a[i].rv7 << ":"<<a[i].rv8 << ":"<<a[i].rv9 << ":"<<a[i].rv10 << ":"<<a[i].rv11<< ":"<<a[i].rv12<< ":"<<a[i].rv13<< ":"<<a[i].rv14<< ":"<<a[i].rv15 << endl ;
         }
  }
 void tab_fichier_c(std::vector<controle>& c,std::ofstream& of_controle)
 {
      for (int i(0);i<c.size();i++)
         {


         of_controle << c[i].date << ":"<<c[i].rv1 << ":"<<c[i].rv2 << ":"<<c[i].rv3 << ":"<<c[i].rv4 << ":"<<c[i].rv5 << ":"<<c[i].rv6 << ":"<<c[i].rv7 << ":"<<c[i].rv8 << ":"<<c[i].rv9 << ":"<<c[i].rv10 << ":"<<c[i].rv11<< ":"<<c[i].rv12<< ":"<<c[i].rv13<< ":"<<c[i].rv14<< ":"<<c[i].rv15 << endl ;
         }
 }




#endif // TAB_FICHIER_H_INCLUDED
