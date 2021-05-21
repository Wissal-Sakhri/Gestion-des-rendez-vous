#ifndef RADIO_H_INCLUDED
#define RADIO_H_INCLUDED
#include<string>
class radio
{
public:
    string date,rv1,rv2,rv3,rv4,rv5,rv6,rv7,rv8,rv9,rv10,rv11,rv12,rv13,rv14,rv15;
    radio(string d0="",string d1="",string d2="",string d3="",string d4="",string d5="",string d6="",string d7="",string d8="",string d9="",string d10="",string d11="" ,string d12="" ,string d13="", string d14="", string d15="")
    {
        date=d0;
        rv1=d1;
        rv2=d2;
        rv3=d3;
        rv4=d4;
        rv5=d5;
        rv6=d6;
        rv7=d7;
        rv8=d8;
        rv9=d9;
        rv10=d10;
        rv11=d11 ;
        rv12=d12 ;
        rv13= d13 ;
        rv14= d14 ;
        rv15 =d15 ;
    }
};

#endif // RADIO_H_INCLUDED
