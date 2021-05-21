#ifndef TRAITEMENT_H_INCLUDED
#define TRAITEMENT_H_INCLUDED
#include <string>
#include <vector>
#include "patient.h"
#include "scanner.h"
#include "radio.h"
#include "mammo.h"
#include "analyse.h"
#include "controle.h"
using namespace std ;
     void affect_scannerAB(patient& pp ,std::vector<scanner>& ss);
     void affect_radioAB(patient& pp ,std::vector<radio>& rr) ;
      void affect_mammoAB(patient& pp ,std::vector<mammo>& mm);
      void affect_analyseAB(patient& pp ,std::vector<analyse>& aa);
      void affect_controleAB(patient& pp ,std::vector<controle>& cc);
      void affect_scannerCD(patient& pp ,std::vector<scanner>& ss);
     void affect_radioCD(patient& pp ,std::vector<radio>& rr) ;
      void affect_mammoCD(patient& pp ,std::vector<mammo>& mm);
      void affect_analyseCD(patient& pp ,std::vector<analyse>& aa);
      void affect_controleCD(patient& pp ,std::vector<controle>& cc);
     void traitement(std::vector<patient>& p,std::vector<scanner>& s,std::vector<radio>& r,std::vector<mammo>& m,std::vector<analyse>& a,std::vector<controle>& c);



 void affect_scannerAB(patient& pp ,std::vector<scanner>& ss)
    {
        bool aff = false;
        for(int i(0);i<ss.size()&& (aff==false) ; i++)
        {
            if (ss[i].rv1=="vide")
            {
                ss[i].rv1=pp.id ;
                aff=true;
            }

             else if (ss[i].rv2=="vide")
            {
                ss[i].rv2=pp.id ;
                aff=true;
            }
            else if (ss[i].rv3=="vide")
            {
                ss[i].rv3=pp.id ;
                aff=true;
            }
            else if (ss[i].rv4=="vide")
            {
                ss[i].rv4=pp.id ;
                aff=true;
            }
            else if (ss[i].rv5=="vide")
            {
                ss[i].rv5=pp.id ;
                aff=true;
            }
            else if (ss[i].rv6=="vide")
            {
                ss[i].rv6=pp.id ;
                aff=true;
            }
            else if (ss[i].rv7=="vide")
            {
                ss[i].rv7=pp.id ;
                aff=true;
            }
            else if (ss[i].rv8=="vide")
            {
                ss[i].rv8=pp.id ;
                aff=true;
            }
            else if (ss[i].rv9=="vide")
            {
                ss[i].rv9=pp.id ;
                aff=true;
            }
           else if  (ss[i].rv10=="vide")
            {
                ss[i].rv10=pp.id ;
                aff=true;
            }
        }
    }

void affect_radioAB(patient& pp ,std::vector<radio>& rr)
    {
        bool aff = false;
        for(int i(0);(i<rr.size())&& (aff==false) ; i++)
        {
            if (rr[i].rv1=="vide")
            {
                rr[i].rv1=pp.id ;
                aff=true;
            }

             else if (rr[i].rv2=="vide")
            {
                rr[i].rv2=pp.id ;
                aff=true;
            }
            else if (rr[i].rv3=="vide")
            {
                rr[i].rv3=pp.id ;
                aff=true;
            }
            else if (rr[i].rv4=="vide")
            {
                rr[i].rv4=pp.id ;
                aff=true;
            }
            else if (rr[i].rv5=="vide")
            {
                rr[i].rv5=pp.id ;
                aff=true;
            }
            else if (rr[i].rv6=="vide")
            {
                rr[i].rv6=pp.id ;
                aff=true;
            }
            else if (rr[i].rv7=="vide")
            {
                rr[i].rv7=pp.id ;
                aff=true;
            }
            else if (rr[i].rv8=="vide")
            {
                rr[i].rv8=pp.id ;
                aff=true;
            }
            else if (rr[i].rv9=="vide")
            {
                rr[i].rv9=pp.id ;
                aff=true;
            }
           else if  (rr[i].rv10=="vide")
            {
                rr[i].rv10=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv11=="vide")
            {
                rr[i].rv11=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv12=="vide")
            {
                rr[i].rv12=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv13=="vide")
            {
                rr[i].rv13=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv14=="vide")
            {
                rr[i].rv14=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv15=="vide")
            {
                rr[i].rv15=pp.id ;
                aff=true;
            }
        }
    }

void affect_mammoAB(patient& pp ,std::vector<mammo>& mm)
    {
        bool aff = false;
        for(int i(0);(i<mm.size())&& (aff==false) ; i++)
        {
            if (mm[i].rv1=="vide")
            {
                mm[i].rv1=pp.id ;
                aff=true;
            }

             else if (mm[i].rv2=="vide")
            {
                mm[i].rv2=pp.id ;
                aff=true;
            }
            else if (mm[i].rv3=="vide")
            {
                mm[i].rv3=pp.id ;
                aff=true;
            }
            else if (mm[i].rv4=="vide")
            {
                mm[i].rv4=pp.id ;
                aff=true;
            }
            else if (mm[i].rv5=="vide")
            {
                mm[i].rv5=pp.id ;
                aff=true;
            }
            else if (mm[i].rv6=="vide")
            {
                mm[i].rv6=pp.id ;
                aff=true;
            }
            else if (mm[i].rv7=="vide")
            {
                mm[i].rv7=pp.id ;
                aff=true;
            }
            else if (mm[i].rv8=="vide")
            {
                mm[i].rv8=pp.id ;
                aff=true;
            }
            else if (mm[i].rv9=="vide")
            {
                mm[i].rv9=pp.id ;
                aff=true;
            }
           else if  (mm[i].rv10=="vide")
            {
                mm[i].rv10=pp.id ;
                aff=true;
            }

        }
    }

void affect_analyseAB(patient& pp ,std::vector<analyse>& aa)
    {
        bool aff = false;
        for(int i(0);i<aa.size()&& (aff==false) ; i++)
        {
            if (aa[i].rv1=="vide")
            {
                aa[i].rv1=pp.id ;
                aff=true;
            }

             else if (aa[i].rv2=="vide")
            {
                aa[i].rv2=pp.id ;
                aff=true;
            }
            else if (aa[i].rv3=="vide")
            {
                aa[i].rv3=pp.id ;
                aff=true;
            }
            else if (aa[i].rv4=="vide")
            {
                aa[i].rv4=pp.id ;
                aff=true;
            }
            else if (aa[i].rv5=="vide")
            {
                aa[i].rv5=pp.id ;
                aff=true;
            }
            else if (aa[i].rv6=="vide")
            {
                aa[i].rv6=pp.id ;
                aff=true;
            }
            else if (aa[i].rv7=="vide")
            {
                aa[i].rv7=pp.id ;
                aff=true;
            }
            else if (aa[i].rv8=="vide")
            {
                aa[i].rv8=pp.id ;
                aff=true;
            }
            else if (aa[i].rv9=="vide")
            {
                aa[i].rv9=pp.id ;
                aff=true;
            }
           else if  (aa[i].rv10=="vide")
            {
                aa[i].rv10=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv11=="vide")
            {
                aa[i].rv11=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv12=="vide")
            {
                aa[i].rv12=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv13=="vide")
            {
                aa[i].rv13=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv14=="vide")
            {
                aa[i].rv14=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv15=="vide")
            {
                aa[i].rv15=pp.id ;
                aff=true;
            }
        }
    }

void affect_controleAB(patient& pp ,std::vector<controle>& cc)
    {
        bool aff = false;
        for(int i(0);(i<cc.size())&& (aff==false) ; i++)
        {
            if (cc[i].rv1=="vide")
            {
                cc[i].rv1=pp.id ;
                aff=true;
            }

             else if (cc[i].rv2=="vide")
            {
                cc[i].rv2=pp.id ;
                aff=true;
            }
            else if (cc[i].rv3=="vide")
            {
                cc[i].rv3=pp.id ;
                aff=true;
            }
            else if (cc[i].rv4=="vide")
            {
                cc[i].rv4=pp.id ;
                aff=true;
            }
            else if (cc[i].rv5=="vide")
            {
                cc[i].rv5=pp.id ;
                aff=true;
            }
            else if (cc[i].rv6=="vide")
            {
                cc[i].rv6=pp.id ;
                aff=true;
            }
            else if (cc[i].rv7=="vide")
            {
                cc[i].rv7=pp.id ;
                aff=true;
            }
            else if (cc[i].rv8=="vide")
            {
                cc[i].rv8=pp.id ;
                aff=true;
            }
            else if (cc[i].rv9=="vide")
            {
                cc[i].rv9=pp.id ;
                aff=true;
            }
           else if  (cc[i].rv10=="vide")
            {
                cc[i].rv10=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv11=="vide")
            {
                cc[i].rv11=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv12=="vide")
            {
                cc[i].rv12=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv13=="vide")
            {
                cc[i].rv13=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv14=="vide")
            {
                cc[i].rv14=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv15=="vide")
            {
                cc[i].rv15=pp.id ;
                aff=true;
            }
        }
    }

      void affect_scannerCD(patient& pp ,std::vector<scanner>& ss)
    {
        bool aff = false;
        for(int i(10);(i<ss.size())&& (aff==false) ; i++)
        {
            if (ss[i].rv1=="vide")
            {
                ss[i].rv1=pp.id ;
                aff=true;
            }

             else if (ss[i].rv2=="vide")
            {
                ss[i].rv2=pp.id ;
                aff=true;
            }
            else if (ss[i].rv3=="vide")
            {
                ss[i].rv3=pp.id ;
                aff=true;
            }
            else if (ss[i].rv4=="vide")
            {
                ss[i].rv4=pp.id ;
                aff=true;
            }
            else if (ss[i].rv5=="vide")
            {
                ss[i].rv5=pp.id ;
                aff=true;
            }
            else if (ss[i].rv6=="vide")
            {
                ss[i].rv6=pp.id ;
                aff=true;
            }
            else if (ss[i].rv7=="vide")
            {
                ss[i].rv7=pp.id ;
                aff=true;
            }
            else if (ss[i].rv8=="vide")
            {
                ss[i].rv8=pp.id ;
                aff=true;
            }
            else if (ss[i].rv9=="vide")
            {
                ss[i].rv9=pp.id ;
                aff=true;
            }
           else if  (ss[i].rv10=="vide")
            {
                ss[i].rv10=pp.id ;
                aff=true;
            }
        }
    }

    void affect_radioCD(patient& pp ,std::vector<radio>& rr)
    {
        bool aff = false;
        for(int i(10);(i<rr.size())&& (aff==false) ; i++)
        {
            if (rr[i].rv1=="vide")
            {
                rr[i].rv1=pp.id ;
                aff=true;
            }

             else if (rr[i].rv2=="vide")
            {
                rr[i].rv2=pp.id ;
                aff=true;
            }
            else if (rr[i].rv3=="vide")
            {
                rr[i].rv3=pp.id ;
                aff=true;
            }
            else if (rr[i].rv4=="vide")
            {
                rr[i].rv4=pp.id ;
                aff=true;
            }
            else if (rr[i].rv5=="vide")
            {
                rr[i].rv5=pp.id ;
                aff=true;
            }
            else if (rr[i].rv6=="vide")
            {
                rr[i].rv6=pp.id ;
                aff=true;
            }
            else if (rr[i].rv7=="vide")
            {
                rr[i].rv7=pp.id ;
                aff=true;
            }
            else if (rr[i].rv8=="vide")
            {
                rr[i].rv8=pp.id ;
                aff=true;
            }
            else if (rr[i].rv9=="vide")
            {
                rr[i].rv9=pp.id ;
                aff=true;
            }
           else if  (rr[i].rv10=="vide")
            {
                rr[i].rv10=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv11=="vide")
            {
                rr[i].rv11=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv12=="vide")
            {
                rr[i].rv12=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv13=="vide")
            {
                rr[i].rv13=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv14=="vide")
            {
                rr[i].rv14=pp.id ;
                aff=true;
            }
            else if  (rr[i].rv15=="vide")
            {
                rr[i].rv15=pp.id ;
                aff=true;
            }
        }
    }

    void affect_mammoCD(patient& pp ,std::vector<mammo>& mm)
    {
        bool aff = false;
        for(int i(10);(i<mm.size())&& (aff==false ); i++)
        {
            if (mm[i].rv1=="vide")
            {
                mm[i].rv1=pp.id ;
                aff=true;
            }

             else if (mm[i].rv2=="vide")
            {
                mm[i].rv2=pp.id ;
                aff=true;
            }
            else if (mm[i].rv3=="vide")
            {
                mm[i].rv3=pp.id ;
                aff=true;
            }
            else if (mm[i].rv4=="vide")
            {
                mm[i].rv4=pp.id ;
                aff=true;
            }
            else if (mm[i].rv5=="vide")
            {
                mm[i].rv5=pp.id ;
                aff=true;
            }
            else if (mm[i].rv6=="vide")
            {
                mm[i].rv6=pp.id ;
                aff=true;
            }
            else if (mm[i].rv7=="vide")
            {
                mm[i].rv7=pp.id ;
                aff=true;
            }
            else if (mm[i].rv8=="vide")
            {
                mm[i].rv8=pp.id ;
                aff=true;
            }
            else if (mm[i].rv9=="vide")
            {
                mm[i].rv9=pp.id ;
                aff=true;
            }
           else if  (mm[i].rv10=="vide")
            {
                mm[i].rv10=pp.id ;
                aff=true;
            }

        }
    }

    void affect_analyseCD(patient& pp ,std::vector<analyse>& aa)
    {
        bool aff = false;
        for(int i(10);(i<aa.size())&&( aff==false) ; i++)
        {
            if (aa[i].rv1=="vide")
            {
                aa[i].rv1=pp.id ;
                aff=true;
            }

             else if (aa[i].rv2=="vide")
            {
                aa[i].rv2=pp.id ;
                aff=true;
            }
            else if (aa[i].rv3=="vide")
            {
                aa[i].rv3=pp.id ;
                aff=true;
            }
            else if (aa[i].rv4=="vide")
            {
                aa[i].rv4=pp.id ;
                aff=true;
            }
            else if (aa[i].rv5=="vide")
            {
                aa[i].rv5=pp.id ;
                aff=true;
            }
            else if (aa[i].rv6=="vide")
            {
                aa[i].rv6=pp.id ;
                aff=true;
            }
            else if (aa[i].rv7=="vide")
            {
                aa[i].rv7=pp.id ;
                aff=true;
            }
            else if (aa[i].rv8=="vide")
            {
                aa[i].rv8=pp.id ;
                aff=true;
            }
            else if (aa[i].rv9=="vide")
            {
                aa[i].rv9=pp.id ;
                aff=true;
            }
           else if  (aa[i].rv10=="vide")
            {
                aa[i].rv10=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv11=="vide")
            {
                aa[i].rv11=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv12=="vide")
            {
                aa[i].rv12=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv13=="vide")
            {
                aa[i].rv13=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv14=="vide")
            {
                aa[i].rv14=pp.id ;
                aff=true;
            }
            else if  (aa[i].rv15=="vide")
            {
                aa[i].rv15=pp.id ;
                aff=true;
            }
        }
    }

     void affect_controleCD(patient& pp ,std::vector<controle>& cc)
    {
        bool aff = false;
        for(int i(10);(i<cc.size())&& (aff==false) ; i++)
        {
            if (cc[i].rv1=="vide")
            {
                cc[i].rv1=pp.id ;
                aff=true;
            }

             else if (cc[i].rv2=="vide")
            {
                cc[i].rv2=pp.id ;
                aff=true;
            }
            else if (cc[i].rv3=="vide")
            {
                cc[i].rv3=pp.id ;
                aff=true;
            }
            else if (cc[i].rv4=="vide")
            {
                cc[i].rv4=pp.id ;
                aff=true;
            }
            else if (cc[i].rv5=="vide")
            {
                cc[i].rv5=pp.id ;
                aff=true;
            }
            else if (cc[i].rv6=="vide")
            {
                cc[i].rv6=pp.id ;
                aff=true;
            }
            else if (cc[i].rv7=="vide")
            {
                cc[i].rv7=pp.id ;
                aff=true;
            }
            else if (cc[i].rv8=="vide")
            {
                cc[i].rv8=pp.id ;
                aff=true;
            }
            else if (cc[i].rv9=="vide")
            {
                cc[i].rv9=pp.id ;
                aff=true;
            }
           else if  (cc[i].rv10=="vide")
            {
                cc[i].rv10=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv11=="vide")
            {
                cc[i].rv11=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv12=="vide")
            {
                cc[i].rv12=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv13=="vide")
            {
                cc[i].rv13=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv14=="vide")
            {
                cc[i].rv14=pp.id ;
                aff=true;
            }
            else if  (cc[i].rv15=="vide")
            {
                cc[i].rv15=pp.id ;
                aff=true;
            }
        }
    }




void traitement(std::vector<patient>& p,std::vector<scanner>& s,std::vector<radio>& r,std::vector<mammo>& m,std::vector<analyse>& a,std::vector<controle>& c)
{

    for (int i(0) ; i< p.size(); i++)
    {
      if ( p[i].etat=="A" )
      {
          if(p[i].besoin=="scanner")
          {

              affect_scannerAB(p[i],s);

          }
           else if(p[i].besoin=="radio")
           {
              affect_radioAB(p[i],r);
           }

           else if(p[i].besoin=="mammo")
            {

              affect_mammoAB(p[i],m);
            }

           else if(p[i].besoin=="analyse")
            {
              affect_analyseAB(p[i],a);

            }
           else if(p[i].besoin=="controle")
            {
              affect_controleAB(p[i],c);
            }

        }
      }

     for (int i(0) ; i< p.size(); i++)
    {
        if ( p[i].etat=="B" )
      {
           if(p[i].besoin=="scanner")
          {

              affect_scannerAB(p[i],s);

          }
           else if(p[i].besoin=="radio")
           {
              affect_radioAB(p[i],r);
           }

            else if(p[i].besoin=="mammo")
            {

              affect_mammoAB(p[i],m);
            }

          else if(p[i].besoin=="analyse")
            {
              affect_analyseAB(p[i],a);
            }
           else if(p[i].besoin=="controle")
            {
              affect_controleAB(p[i],c);
            }

        }
    }
    for (int i(0) ; i< p.size(); i++)
    {
       if ( p[i].etat=="C" )
      {
           if(p[i].besoin=="scanner")
          {

              affect_scannerCD(p[i],s);
          }
           else if(p[i].besoin=="radio")
           {
              affect_radioCD(p[i],r);
           }

            else if(p[i].besoin=="mammo")
            {

              affect_mammoCD(p[i],m);
            }

          else if(p[i].besoin=="analyse")
            {
              affect_analyseCD(p[i],a);
            }
           else if(p[i].besoin=="controle")
            {
              affect_controleCD(p[i],c);
            }

        }
    }
    for (int i(0) ; i< p.size(); i++)
    {
     if ( p[i].etat=="D" )
      {
           if(p[i].besoin=="scanner")
          {

              affect_scannerCD(p[i],s);
          }
           else if(p[i].besoin=="radio")
           {
              affect_radioCD(p[i],r);
           }

            else if(p[i].besoin=="mammo")
            {

              affect_mammoCD(p[i],m);
            }

          else if(p[i].besoin=="analyse")
            {
              affect_analyseCD(p[i],a);
            }
           else if(p[i].besoin=="controle")
            {
              affect_controleCD(p[i],c);
            }

        }



    }






}




#endif // TRAITEMENT_H_INCLUDED
