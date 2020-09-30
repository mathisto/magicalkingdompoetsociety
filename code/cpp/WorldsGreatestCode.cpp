/* Taken from https://www.daniweb.com/programming/software-development/threads/440954/cant-fix-error-in-my-program */

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <sstream>
using namespace std;


class base
{

public:

virtual int prod(){return -1;}
virtual int todo(){return -1;}
virtual int calendar(){return -1;}
};

class dbase2:public base
{

public:
int calendar();
};

int dbase2::calendar()
{
int cme;
int cd;
string cdd;
int cw;
string cwd;
int cm;
string cmd;
int cy;
string cyd;

cout<<endl;
cout<<"========"<<endl;
cout<<"Calendar"<<endl;
cout<<"========"<<endl;
cout<<"---------------------------"<<endl;
cout<<"| View (1) | Settings (2) | "<<endl;
cout<<"---------------------------"<<endl;
cin>>cme;

// calendar display
switch(cd)
{
{case 1:cdd = "-1-"; break;}
}

cout<<"|"<<cdd<<"|"<<endl;

// calendar display
}

class dbase:public base
{

public:
int prod();
int todo();
};

int dbase::prod()
{
char nt[20];
string ntw;
int me;
char ma[5];
int cl;
string ys = "yes";
string dn;
string dp;
string de;
char mp[20];
string mpx;
string adx;
string dex;
string ntwx;
char mp1[20];
string rc;
string adr;
char lit[20];
char nf[20];
string fn;
string fnk;
string fnx;
char co[20];
string tf;


do
{
cout<<endl;
cout<<"========"<<endl;
cout<<"Contacts"<<endl;
cout<<"========"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"| Add Contact (1) | View Contact (2) | "<<endl;
cout<<"--------------------------------------"<<endl;
cin>>me;

if(me == 1)
{
cout<<"Enter any number (Reference number)"<<endl;
cin>>lit;

cout<<"Enter Name:";
getline(cin, dn);
getline(cin, dn);




cout<<endl;
cout<<"+ Add Phone Number? type 'yes' or 'no'"<<endl;
cin>>mp;

if(mp == ys)
{
cout<<"Phone Number:";
getline(cin, dp);
getline(cin, dp);

mpx += ("|Phone Number: " + dp);
}



else
{
dp = "";
}

cout<<endl;
cout<<"+ Add Address? type 'yes' or 'no'"<<endl;
cin>>ma;

if(ma == ys)
{
cout<<"Address:";
getline(cin, adr);
getline(cin, adr);

adx += ("|Address: " + adr);
}

else
{
adr = "";
}

cout<<endl;
cout<<"+ Add Email? type 'yes' or 'no'"<<endl;
cin>>mp1;

if(mp1 == ys)
{
cout<<"Email Address:";
getline(cin, de);
getline(cin, de);

dex += ("|Email: " + de);
}

else
{
de = "";
}

cout<<endl;
cout<<"+ Add Notes? type 'yes' or 'no'"<<endl;
cin>>nt;

if(nt == ys)
{
cout<<"Notes:";
getline(cin, ntw);
getline(cin, ntw);

ntwx += ("|Notes: " + ntw);
}

cout<<endl;
cout<<"+ Add Custom Field? type 'yes' or 'no'"<<endl;
cin>>nf;

if(nf == ys)
{
cout<<"Field Name:";
getline(cin, fn);
getline(cin, fn);

cout<<fn<<":";
getline(cin, fnk);


fnx += ("|" + fn + ": " + fnk);
}



// add ntw

rc += ("-" + dn + "-" + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + "|----------------------" +  "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + mpx + "" + "\t\t\t\t\t\t\t\t\t\t\t" + adx + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + dex + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + ntwx + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + fnx);

ofstream fileo (lit);
fileo<<rc;
}

if(me == 2)
{
cout<<endl;
cout<<"Enter reference number:";
cin>>co;

ifstream fileop(co);

if(! fileop.eof())
{
cout<<endl;
getline(fileop, tf);
cout<<endl;
cout<<"====================="<<endl;
cout<<tf<<endl;
cout<<"====================="<<endl;
cin.get();
cin.get();
}


}
cout<<endl;
cout<<"Back to menu - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>cl;

}while(cl == 1);

}

int dbase::todo()
{
string yxa = "(Done)";
string svi;
int tpx;
int tkm;
int alt;
char it[20];
string done;
string jn;
int nj;
int tmm;
int th;
int tmh;

do
{

cout<<endl;
cout<<"==========="<<endl;
cout<<"Task Center"<<endl;
cout<<"==========="<<endl;
cout<<"----------------------"<<endl;
cout<<"| New (1) | View (2) | "<<endl;
cout<<"----------------------"<<endl;
cin>>tkm;


alt = tkm;
if(tkm == 1)
{


cout<<"Enter any number (task number)"<<endl;
cin>>it;

int imp;
string prt;
string ji;
string di;
string ni;
string all;

cout<<endl;
cout<<"Task Title:";
getline(cin, ji);
getline(cin, ji);

cout<<endl;
cout<<"Due:";
getline(cin, di);

cout<<endl;
cout<<"Notes:";
getline(cin, ni);

cout<<endl;
cout<<"Set Priority | 1 | 2 | 3 |"<<endl;
cin>>imp;

if(imp == 1)
{
prt = "Low";
}

if(imp == 2)
{
prt = "Medium";
}

if(imp == 3)
{
prt = "High";
}

all += ("-" + ji + "-" + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + "|----------------------" +  "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + "|Notes: " + ni + "" + "\t\t\t\t\t\t\t\t\t\t\t" + "|Due: " + di + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t" + "|Priority: " + prt + "\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t");

ofstream file(it);

file<<all;
}


if(alt == 1)
{
string cht;

ifstream filest(it);

if(! filest.eof())
{
getline(filest, cht);

cout<<endl;
cout<<"==========================="<<endl;
cout<<cht<<endl;
cout<<"==========================="<<endl;
cin.get();
cin.get();
}

}

if(tkm == 2)
{
string chs;
char dm[20];

cout<<"Task number:";
cin>>dm;

ifstream files(dm);

if(! files.eof())
{
getline(files, chs);
cout<<"==========================="<<endl;
cout<<chs<<endl;
cout<<"==========================="<<endl;
cin.get();
cin.get();

if(chs == yxa)
{
cout<<"";
}

cout<<"- Mark as Done (1) - Set Task Time (2) -"<<endl;
cin>>nj;

if(nj == 1)
{
done = "(Done)";

jn = (done + chs);

ofstream dfile (dm);
dfile<<jn;
}

if(nj == 2)
{
// set time code
cout<<"Set how much time this task might take"<<endl;
cout<<"Minutes: "<<endl;
cin>>tmm;
cout<<"Hours: "<<endl;
cin>>th;

tmm += ("Minutes: " + tmm);
th += ("Hours: " + th);

tmh = (tmm + th);


}

cout<<endl;
cout<<"Back to menu - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>tpx;

}while(tpx == 1);
}

class Time
{

public:

void Timer();
};

//              COUNTDOWN TIMER

void Time::Timer()
{

unsigned int zxi;

do
{
unsigned int zt;
unsigned int xt;
unsigned int yt;

cout<<endl;
cout<<"==============="<<endl;
cout<<"Countdown Timer"<<endl;
cout<<"==============="<<endl;

cout<<endl;
cout<<"Time in minutes - 1"<<endl;
cout<<"Time in seconds - 2"<<endl;

cin>>yt;



if(yt == 1)
{
cout<<endl;
cout<<"Enter how many minutes to count down from:";
cin>>xt;

cout<<"-"<<xt<<"-";
cout<<flush;
for(xt >= 0; xt --;)
{

cout<<"-"<<xt<<"-";
sleep(60);nd
cout<<flush;
}
}

if(yt == 2)
{
cout<<endl;
cout<<"Enter how many seconds to count down from:";
cin>>zt;

cout<<"-"<<zt<<"-";
cout<<flush;
for(zt >= 0; zt--;)
{

cout<<"-"<<zt<<"-";
sleep(1);
cout<<flush;
}
}

cout<<endl;
cout<<"---"<<endl;
cout<<"End"<<endl;
cout<<"---"<<endl;
cout<<"(press enter)"<<endl;
cin.get();
cin.get();

cout<<"Start another countdown - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>zxi;

}
while(zxi == 1);

}

class Sdt
{
public:
void Speed();
void Distance();
void Time();
};

void Sdt::Time()
{
float one;
float hr;
float hr1;
float mnt;
float scd;
float hr2;
float hr12;
float mnt2;
float scd2;

do
{
unsigned int ch;

cout<<endl;
cout<<"==============="<<endl;
cout<<"Time Calculator"<<endl;
cout<<"==============="<<endl;
cout<<endl;
cout<<"Hours - 1"<<endl;
cout<<"Hours(MPH) - 2"<<endl;
cout<<"Minutes - 3"<<endl;
cout<<"Seconds - 4"<<endl;
cin>>ch;

if(ch == 4)
{
cout<<"Enter the meters:";
cin>>scd;

cout<<"Enter speed meters/second:";
cin>>scd2;

cout<<endl;
cout<<(scd / scd2)<<" Seconds"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(ch == 3)
{
cout<<"Enter the meters:";
cin>>mnt;

cout<<"Enter speed meters/minute:";
cin>>mnt2;

cout<<endl;
cout<<(mnt / mnt2)<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(ch == 2)
{
cout<<"Enter the meters:";
cin>>hr1;

cout<<"Enter speed MPH:";
cin>>hr12;

cout<<endl;
cout<<(hr1 / hr12)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(ch == 1)
{
cout<<"Enter the kilometers:";
cin>>hr;

cout<<"Enter speed KM/H:";
cin>>hr2;

cout<<endl;
cout<<(hr / hr2)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

cout<<endl;
cout<<"Do another convertion - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>ch;
}while(one == 1);
}

//              DISTANCE CALCULATOR

void Sdt::Distance()
{
int vp;
int xpi;
float ks;
float kt;

do
{
cout<<endl;
cout<<"==================="<<endl;
cout<<"Distance Calculator"<<endl;
cout<<"==================="<<endl;
cout<<endl;
cout<<"KM - 1"<<endl;
cout<<"Miles - 2"<<endl;
cout<<"Meters - 3"<<endl;

cin>>xpi;

if(xpi == 1)
{
cout<<endl;
cout<<"Enter the speed (KM/H):";
cin>>ks;

cout<<endl;
cout<<"Enter the minutes:";
cin>>kt;

kt = (kt / 60);
cout<<endl;
cout<<(ks * kt)<<" KM"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xpi == 2)
{
cout<<endl;
cout<<"Enter the speed (MPH):";
cin>>ks;

cout<<endl;
cout<<"Enter the minutes:";
cin>>kt;

kt = (kt / 60);
cout<<endl;
cout<<(ks * kt)<<" Miles"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xpi == 3)
{
cout<<endl;
cout<<"Enter the speed (Meters/Second):";
cin>>ks;

cout<<endl;
cout<<"Enter the minutes:";
cin>>kt;

kt = (kt * 60);
cout<<endl;
cout<<(ks * kt)<<" Meters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

cout<<endl;
cout<<"Do another convertion - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>vp;

}while(vp == 1);
}

//              SPEED CALCULATOR

void Sdt::Speed()
{
float dx;
float tx;
int xp;
int lp;

do
{
cout<<endl;
cout<<"================"<<endl;
cout<<"Speed Calculator"<<endl;
cout<<"================"<<endl;

cout<<endl;
cout<<"M/S - 1"<<endl;
cout<<"KM/H - 2"<<endl;
cout<<"MPH - 3"<<endl;
cin>>xp;

if(xp == 1)
{


cout<<endl;
cout<<"Type in the meters:";
cin>>dx;

cout<<endl;
cout<<"Type in the seconds:";
cin>>tx;

cout<<endl;
cout<<(dx / tx)<<" M/S"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xp == 2)
{
cout<<endl;
cout<<"Type in the kilometers:";
cin>>dx;

cout<<endl;
cout<<"Type in the mintues:";
cin>>tx;

tx = (tx / 60);
cout<<endl;
cout<<(dx / tx)<<" KM/H"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xp == 3)
{
cout<<endl;
cout<<"Type in the miles:";
cin>>dx;

cout<<endl;
cout<<"Type in the mintues:";
cin>>tx;

tx = (tx / 60);
cout<<endl;
cout<<(dx / tx)<<" MPH"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

cout<<endl;
cout<<"Do another conversion - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>lp;

}while(lp == 1);

}

class Unit
{

public:

void Con();

};

void Unit::Con()
{
int hh;
do
{
int zx;
cout<<endl;
cout<<"=============="<<endl;
cout<<"Unit Converter"<<endl;
cout<<"=============="<<endl;
cout<<endl;
cout<<"Temperature - 1"<<endl;
cout<<"Length - 2"<<endl;
cout<<"Time - 3"<<endl;

cin>>zx;

if(zx == 1)
{
int v;
float vv;
cout<<endl;
cout<<"==================================================="<<endl;
cout<<"Celsius to Fahrenheit - 1"<<endl;
cout<<"Fahrenheit to Celsius - 2"<<endl;
cout<<endl;
cout<<"Celsius to Kelvin - 3"<<endl;
cout<<"Fahrenheit to Kelvin - 4"<<endl;
cout<<endl;
cout<<"Kelvin to Fahenheit - 5"<<endl;
cout<<"Kelvin to Celsius - 6"<<endl;
cout<<endl;

cin>>v;

if(v == 1)
{

cout<<"Type in your Celsius Value:";
cin>>vv;

cout<<endl;
cout<<(vv * 9/5 + 32)<<" Degrees Fahrenheit"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(v == 2)
{
cout<<"Type in your Fahrenheit Value:";
cin>>vv;

cout<<endl;
cout<<(vv - 32) * 5/9<<"Degrees Celsius"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(v == 3)
{
cout<<"Type in your Celsius Value:";
cin>>vv;

cout<<endl;
cout<<(vv + 273.15)<<" Kelvin"<<endl;
cin.get();
cin.get();
}

if(v == 4)
{
cout<<"Type in your Fahrenheit Value:";
cin>>vv;

cout<<endl;
cout<<((vv - 32) * 5/9 + 273.15)<<" Kelvin"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(v == 5)
{
cout<<"Type in your Kelvin Value:";
cin>>vv;

cout<<endl;
cout<<((vv - 273.15) * 9/5 + 32)<<" Degrees Fahrenheit"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(v == 6)
{
cout<<"Type in your Kelvin Value:";
cin>>vv;

cout<<endl;
cout<<(vv - 273.15)<<" Degrees Celsius"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}
}

if(zx == 2)
{

string aa = "mm-m";
string ab = "mm-km";
string ac = "mm-ft";
string ad = "mm-inch";
string bb = "m-km";
string cc = "ft-inch";
string dd = "inch-ft";
string dda = "inch-m";
string ddb = "inch-mm";
string ee = "m-mm";
string ff = "km-m";
string gg = "ft-m";
string ga = "ft-km";
string hh = "m-ft";
string hha = "km-mm";
string ii = "inch-mm";
string ib = "m-ft";
string ic = "m-inch";

string mm = "km-mile";
string mma = "mile-km";

string mb = "m-mile";
string mba = "mile-m";

string mc = "ft-mile";
string mca = "mile-ft";

string xy;
float yy;
cout<<endl;
cout<<"==================================================="<<endl;

cout<<"Type in your length to convert from and to:"<<endl;
cout<<"(i.e. mm-m, ft-inch, km-mile)"<<endl;
cout<<endl;

cin>>xy;


//              MM-M
if(xy == aa)
{
cout<<endl;
cout<<"Type in your millimetre value:";
cin>>yy;
cout<<(yy / 1000)<<" Meters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              MM-KM
if(xy == ab)
{
cout<<endl;
cout<<"Type in your millimetre value:";
cin>>yy;
cout<<(yy / 1000 / 1000)<<" Kilometers"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              MM-FT

if(xy == ac)
{
cout<<endl;
cout<<"Type in your millimetre value:";
cin>>yy;
cout<<(yy * 0.03937) / 12<<" Feet"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


//              MM-INCH

if(xy == ad)
{
cout<<endl;
cout<<"Type in your millimetre value:";
cin>>yy;
cout<<(yy * 0.03937)<<" Inches"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}



//              M-KM
if(xy == bb)
{
cout<<endl;
cout<<"Type in your metre value:";
cin>>yy;
cout<<(yy / 1000)<<" Kilometers"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              FT-INCH
if(xy == cc)
{
cout<<endl;
cout<<"Type in your Feet value:";
cin>>yy;
cout<<(yy * 12)<<" Inches"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              INCH-FT
if(xy == dd)
{
cout<<endl;
cout<<"Type in your Inch value:";
cin>>yy;
cout<<(yy / 12)<<" Feet"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xy == dda)
{
cout<<endl;
cout<<"Type in your Inch value:";
cin>>yy;
cout<<(yy * 0.3048) / 12<<" Meters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              M-MM
if(xy == ee)
{
cout<<endl;
cout<<"Type in your Meter value:";
cin>>yy;
cout<<(yy * 1000)<<" Millimeters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              KM-M
if(xy == ff)
{
cout<<endl;
cout<<"Type in your Kilometer value:";
cin>>yy;
cout<<(yy * 1000)<<" Meters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              FT-MM
if(xy == gg)
{
cout<<endl;
cout<<"Type in your Feet value:";
cin>>yy;
cout<<(yy * 0.3048)<<" Meters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(xy == ga)
{
cout<<endl;
cout<<"Type in your Feet value:";
cin>>yy;
cout<<(yy * 0.0003048)<<" Kilometers"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              KM-MM
if(xy == hha)
{
cout<<endl;
cout<<"Type in your kilometer value:";
cin>>yy;
cout<<(yy * 1000 * 1000)<<" Millimeters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              INCH-MM

if(xy == ii)
{
cout<<endl;
cout<<"Type in your inch value:";
cin>>yy;
cout<<(yy / 0.03937)<<" Millimeters"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              MM-FT

if(xy == ib)
{
cout<<endl;
cout<<"Type in your Meter value:";
cin>>yy;
cout<<((yy * 39.37) / 12)<<" Feet"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              MM-INCH

if(xy == ic)
{
cout<<endl;
cout<<"Type in your Meter value:";
cin>>yy;
cout<<(yy * 39.37)<<" Inches"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              KM-Miles

if(xy == mm)
{
cout<<endl;
cout<<"Type in your Kilometer value:";
cin>>yy;
cout<<(yy * 0.6214)<<" Miles"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              MILE-KM

if(xy == mma)
{
cout<<endl;
cout<<"Type in your Mile value:";
cin>>yy;
cout<<(yy * 1.609)<<" Kilometers"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

//              M-MILE

if(xy == mb)
{
cout<<endl;
cout<<"Type in your Meter value:";
cin>>yy;
cout<<(yy * 0.0006214)<<" Miles"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}
}

//              TIME CONVERTER

if(zx == 3)

{
string at = "mins-hours";
string ata = "mins-days";
string atb = "mins-weeks";
string atc = "mins-months";
string atd = "mins-years";

string bt = "hours-mins";
string bta = "hours-days";
string btb = "hours-weeks";
string btc = "hours-months";
string btd = "hours-years";


string ct = "days-mins";
string cta = "days-hours";
string ctb = "days-weeks";
string ctc = "days-months";
string ctd = "days-years";

string dt = "weeks-mins";
string dta = "weeks-hours";
string dtb = "weeks-days";
string dtc = "weeks-months";
string dtd = "weeks-years";

string et = "months-mins";
string eta = "months-hours";
string etb = "months-days";
string etc = "months-weeks";
string etd = "months-years";

string ft = "years-mins";
string fta = "years-hours";
string ftb = "years-days";
string ftc = "years-weeks";
string ftd = "years-months";
string coni;
float mt;

cout<<endl;
cout<<"Type in your time to convert from and to:"<<endl;
cout<<"(i.e. mins-hours, months-weeks, days-years)"<<endl;

cin>>coni;

if(coni == at)
{
cout<<endl;
cout<<"type in your minute value:";
cin>>mt;
cout<<endl;
cout<<(mt / 60)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == ata)
{
cout<<endl;
cout<<"type in your minute value:";
cin>>mt;
cout<<endl;
cout<<(mt / 60) / 24<<" Days"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == atb)
{
cout<<endl;
cout<<"type in your minute value:";
cin>>mt;
cout<<endl;
cout<<((mt / 60) / 24) / 7<<" Weeks"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == atc)
{
cout<<endl;
cout<<"type in your minute value:";
cin>>mt;
cout<<endl;
cout<<(((mt / 60) / 24) / 7) / 4.3<<" Months"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == atd)
{
cout<<endl;
cout<<"type in your minute value:";
cin>>mt;
cout<<endl;
cout<<((((mt / 60) / 24) / 7) / 4.3) / 12<<" Years"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == bt)
{
cout<<endl;
cout<<"type in your hours value:";
cin>>mt;
cout<<endl;
cout<<(mt * 60)<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == bta)
{
cout<<endl;
cout<<"type in your hours value:";
cin>>mt;
cout<<endl;
cout<<(mt / 24)<<" Days"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == btb)
{
cout<<endl;
cout<<"type in your hours value:";
cin>>mt;
cout<<endl;
cout<<(mt / 24) / 7<<" Weeks"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == btc)
{
cout<<endl;
cout<<"type in your hours value:";
cin>>mt;
cout<<endl;
cout<<((mt / 24) / 7) / 4.3<<" Months"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == btd)
{
cout<<endl;
cout<<"type in your hours value:";
cin>>mt;
cout<<endl;
cout<<(((mt / 24) / 7) / 4.3) / 12<<" Years"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ct)
{
cout<<endl;
cout<<"type in your days value:";
cin>>mt;
cout<<endl;
cout<<(mt * 24) * 60<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == cta)
{
cout<<endl;
cout<<"type in your days value:";
cin>>mt;
cout<<endl;
cout<<(mt * 24)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ctb)
{
cout<<endl;
cout<<"type in your days value:";
cin>>mt;
cout<<endl;
cout<<(mt / 7)<<" Weeks"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ctc)
{
cout<<endl;
cout<<"type in your days value:";
cin>>mt;
cout<<endl;
cout<<(mt / 7) / 4.3<<" Months"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ctd)
{
cout<<endl;
cout<<"type in your days value:";
cin>>mt;
cout<<endl;
cout<<((mt / 7) / 4.3) / 12<<" Years"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}


if(coni == dt)
{
cout<<endl;
cout<<"type in your weeks value:";
cin>>mt;
cout<<endl;
cout<<((mt * 7) * 24) * 60<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == dta)
{
cout<<endl;
cout<<"type in your weeks value:";
cin>>mt;
cout<<endl;
cout<<(mt * 7) * 24<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == dtb)
{
cout<<endl;
cout<<"type in your weeks value:";
cin>>mt;
cout<<endl;
cout<<(mt * 7)<<" Days"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == dtc)
{
cout<<endl;
cout<<"type in your weeks value:";
cin>>mt;
cout<<endl;
cout<<(mt / 4.3)<<" Months"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == dtd)
{
cout<<endl;
cout<<"type in your weeks value:";
cin>>mt;
cout<<endl;
cout<<(mt / 4.3) / 12<<" Years"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == et)
{
cout<<endl;
cout<<"type in your months value:";
cin>>mt;
cout<<endl;
cout<<(mt * 4.3 * 7 * 24 * 60)<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == eta)
{
cout<<endl;
cout<<"type in your months value:";
cin>>mt;
cout<<endl;
cout<<(mt * 4.3 * 7 * 24)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == etb)
{
cout<<endl;
cout<<"type in your months value:";
cin>>mt;
cout<<endl;
cout<<(mt * 4.3 * 7)<<" Days"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == etc)
{
cout<<endl;
cout<<"type in your months value:";
cin>>mt;
cout<<endl;
cout<<(mt * 4.3 * 7)<<" Weeks"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == etd)
{
cout<<endl;
cout<<"type in your months value:";
cin>>mt;
cout<<endl;
cout<<(mt / 7)<<" Years"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ft)
{
cout<<endl;
cout<<"type in your years value:";
cin>>mt;
cout<<endl;
cout<<(mt * 12 * 4.3 * 7 * 24 * 60)<<" Minutes"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == fta)
{
cout<<endl;
cout<<"type in your years value:";
cin>>mt;
cout<<endl;
cout<<(mt * 12 * 4.3 * 7 * 24)<<" Hours"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == fta)
{
cout<<endl;
cout<<"type in your years value:";
cin>>mt;
cout<<endl;
cout<<(mt * 12 * 4.3 * 7)<<" Days"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ftb)
{
cout<<endl;
cout<<"type in your years value:";
cin>>mt;
cout<<endl;
cout<<(mt * 12 * 4.3)<<" Weeks"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(coni == ftc)
{
cout<<endl;
cout<<"type in your years value:";
cin>>mt;
cout<<endl;
cout<<(mt * 12)<<" Months"<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

}

cout<<endl;
cout<<"Do another conversion - press 1"<<endl;
cout<<"Exit - Press 2"<<endl;
cin>>hh;
}
while(hh == 1);

}

//

class Small
{

public:

void white();

};

void Small::white()
{

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

}

class Read
{

public:

void helpsh();


};

void Read::helpsh()
{
cout<<endl;
cout<<"print - this will let the you input text and it will print this text in a comfortable reading format"<<endl;
cout<<endl;
cout<<"run_writer - this will launch the writer application"<<endl;
cout<<endl;
cout<<"run_calc - this will launch the calculator application"<<endl;
cout<<endl;
cout<<"run_calc.av - this will launch the average calculator application"<<endl;
cout<<endl;
cout<<"run_rand - this will launch the random number generator application"<<endl;
cout<<endl;
cout<<"run_grid - runs the table application, which lets you display numbers in a table format"<<endl;
cout<<endl;
cout<<"run_convert - opens the unit converter application"<<endl;
cout<<endl;
cout<<"run_speed - opens the speed calculator"<<endl;
cout<<endl;
cout<<"run_distance - this will launch the distance calculator"<<endl;
cout<<endl;
cout<<"version - this will present information about the version of this software"<<endl;
cout<<endl;
cout<<"clear - clears all the contents off the window"<<endl;
cout<<endl;
cout<<"help - defines all commands (how you got here)"<<endl;

}

class Math
{

private:
float aa, bb, cc, dd, ee;

public:

void Calc();
void Av();
void Rando();
void Ncell();


};

//              NCELL DECRLARATION

void Math::Ncell()
{
int nap;

float na;
float nb;
float nc;
float nd;
float ne;
float nf;
float ng;
float nh;
float ni;
float nj;
float nk;
float nl;
float nm;
float nn;
float no;
float np;
float nq;
float nr;
float ns;

string ch;
int cy;

do
{
cout<<endl;
cout<<"============="<<endl;
cout<<"Number Grider"<<endl;
cout<<"============="<<endl;
cout<<endl;
cout<<"How many cells are you working with (max 20)"<<endl;

cin>>cy;

if(cy == 2)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|"<<endl;
cout<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 3)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<endl;
cout<<"Enter cell 2:";
cin>>nb;
cout<<"Enter cell 3:";
cin>>nc;

cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 4)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;

cout<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nc<<"-|-"<<nd<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 5)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<endl;
cout<<"Enter cell 2:";
cin>>nb;
cout<<"Enter cell 3:";
cin>>nc;
cout<<endl;
cout<<"Enter cell 4:";
cin>>nd;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();

}

if(cy == 6)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 7)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<endl;
cout<<"Enter cell 2:";
cin>>nb;
cout<<"Enter cell 3:";
cin>>nc;
cout<<endl;
cout<<"Enter cell 4:";
cin>>nd;
cout<<"Enter cell 5:";
cin>>ne;
cout<<endl;
cout<<"Enter cell 6:";
cin>>nf;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<endl;
cout<<"|-"<<ng<<"-|"<<endl;
cout<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 8)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8";
cin>>nh;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|"<<endl;
cout<<"------"<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 9)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 10)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<endl;
cout<<"|-"<<nj<<"-|"<<endl;
cout<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 11)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<endl;
cout<<"Enter cell 11:";
cin>>nk;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<endl;
cout<<"|-"<<nj<<"-|-"<<nk<<"-|"<<endl;
cout<<"------"<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 12)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<endl;
cout<<"Enter cell 11:";
cin>>nk;
cout<<"Enter cell 12:";
cin>>nl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nj<<"-|-"<<nk<<"-|-"<<nl<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cin.get();
cin.get();
}

if(cy == 13)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<"Enter cell 11:";
cin>>nk;
cout<<"Enter cell 12:";
cin>>nl;
cout<<"Enter cell 13:";
cin>>nm;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-"<<nm<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nd<<"-|-"<<ne<<"-|-"<<nf<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ng<<"-|-"<<nh<<"-|-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nj<<"-|-"<<nk<<"-|-"<<nl<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 14)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<"Enter cell 11:";
cin>>nk;
cout<<"Enter cell 12:";
cin>>nl;
cout<<"Enter cell 13:";
cin>>nm;
cout<<endl;
cout<<"Enter cell 14:";
cin>>nn;

cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-"<<ne<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nf<<"-|-"<<ng<<"-|-"<<nh<<"-"<<ni<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nj<<"-|-"<<nk<<"-|-"<<nl<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nm<<"-|-"<<nn<<"-|-"<<no<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

if(cy == 15)
{
cout<<"Enter cell 1:";
cin>>na;
cout<<"Enter cell 2:";
cin>>nb;
cout<<endl;
cout<<"Enter cell 3:";
cin>>nc;
cout<<"Enter cell 4:";
cin>>nd;
cout<<endl;
cout<<"Enter cell 5:";
cin>>ne;
cout<<"Enter cell 6:";
cin>>nf;
cout<<endl;
cout<<"Enter cell 7:";
cin>>ng;
cout<<"Enter cell 8:";
cin>>nh;
cout<<endl;
cout<<"Enter cell 9:";
cin>>ni;
cout<<"Enter cell 10:";
cin>>nj;
cout<<"Enter cell 11:";
cin>>nk;
cout<<"Enter cell 12:";
cin>>nl;
cout<<"Enter cell 13:";
cin>>nm;
cout<<endl;
cout<<"Enter cell 14:";
cin>>nn;
cout<<"Enter cell 15:";
cin>>no;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<na<<"-|-"<<nb<<"-|-"<<nc<<"-"<<nd<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ne<<"-|-"<<nf<<"-|-"<<ng<<"-"<<nh<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<ni<<"-|-"<<nj<<"-|-"<<nk<<"-"<<nl<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;
cout<<"|-"<<nm<<"-|-"<<nn<<"-|-"<<no<<"-|"<<endl;
cout<<"------"<<"------"<<"------"<<"------"<<endl;

cin.get();
cin.get();
}

cout<<endl;
cout<<"Make another grid - 1"<<endl;
cout<<"Exit - 2"<<endl;

cin>>nap;

}while(nap == 1);

}


//          RANDOM NUMBER DECLARATION

void Math::Rando()

{
int xn;
do
{
int pi;
int phi;
int o;
int ii;
int ddd;
cout<<endl;
cout<<"======================="<<endl;
cout<<"Random Number Genorator"<<endl;
cout<<"======================="<<endl;
cout<<endl;
cout<<"|Custom - Press 1 | ";
cout<<"1 to 10 - Press 2 | ";
cout<<"1 to 50 - Press 3 | ";
cout<<"1 to 100 - Press 4|";

cin>>o;

cout<<endl;
cout<<"Amount of numbers (20 max):";
cin>>phi;

do
{
if(o == 1)
{
pi++;

cout<<endl;
cout<<"From 1 to : ";

cin>>ddd;

srand(time(0));

for(ii = 0; ii < 1; ii++)
{

if(phi == 1)
{
cout<<endl;
cout<<"Random Number: "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 2)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 3)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 4)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 5)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 6)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 7)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 8)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 9)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 10)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 11)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 12)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 13)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 14)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 15)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 16)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 17)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 18)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 19)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 20)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

}
}
}while(pi == phi);

if(o == 2)
{
do
{
if(o == 1)
{
pi++;

cout<<endl;
cout<<"From 1 to : ";

cin>>ddd;

srand(time(0));

for(ii = 0; ii < 1; ii++)
{

if(phi == 1)
{
cout<<endl;
cout<<"Random Number: "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 2)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 3)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 4)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 5)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 6)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 7)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 8)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 9)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 10)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 11)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 12)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 13)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 14)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 15)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 16)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 17)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 18)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 19)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 20)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<", "<<rand()%ddd<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

}
}
}while(pi == phi);
}

if(o == 3)
{

srand(time(0));

for(ii = 0; ii < 1; ii++)
{
cout<<endl;
cout<<"Random Number: "<<rand()%50<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}
}

if(o == 4)
{
pi++;

srand(time(0));

for(ii = 0; ii < 1; ii++)
{

if(phi == 1)
{
cout<<endl;
cout<<"Random Number: "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 2)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 3)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 4)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 5)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 6)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 7)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 8)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 9)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 10)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 11)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 12)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 13)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 14)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 15)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 16)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 17)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 18)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 19)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

if(phi == 20)
{
cout<<endl;
cout<<"Random Numbers: "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<", "<<rand()%100<<endl;
cout<<"--------------------------------------------------------------------------------"<<endl;
cin.get();
cin.get();
}

}
}

cout<<endl;
cout<<"Menu - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>xn;

}while(xn == 1);

}

//          AVERAGE DECLARATION


void Math::Av()

{
int vb;
do
{
// new averaging system
float pp;
float x;
float xx;
float xxx;
float xxxx;
float xxxxx;
float xxxxxx;
float xxxxxxx;
float xxxxxxxx;
float xxxxxxxxx;
float xxxxxxxxxx;
float xxxxxxxxxxx;
float xxxxxxxxxxxx;
float xxxxxxxxxxxxx;
float xxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxxxxxx;
float xxxxxxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"======="<<endl;
cout<<"Average"<<endl;
cout<<"======="<<endl;
cout<<endl;
cout<<"how many values are you averaging? (max 20)"<<endl;

cin>>pp;

float ppp = pp;

if(pp == 2)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;

cout<<endl;
cout<<"Average: "<<(x + xx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 3)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 4)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx+ xxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 5)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx+ xxxx + xxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 6)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 7)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 8)
{
cout<<endl;
cout<<"type in the values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 9)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 10)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 11)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 12)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 13)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 14)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 15)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 16)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 17)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 18)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 19)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

if(pp == 20)
{
cout<<endl;
cout<<"type in your values and separate them with the enter key"<<endl;
cin>>x;
cin>>xx;
cin>>xxx;
cin>>xxxx;
cin>>xxxxx;
cin>>xxxxxx;
cin>>xxxxxxx;
cin>>xxxxxxxx;
cin>>xxxxxxxxx;
cin>>xxxxxxxxxx;
cin>>xxxxxxxxxxx;
cin>>xxxxxxxxxxxx;
cin>>xxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxxx;
cin>>xxxxxxxxxxxxxxxxxxxx;

cout<<endl;
cout<<"Average: "<<(x + xx + xxx + xxxx + xxxxx + xxxxxx + xxxxxxx + xxxxxxxx + xxxxxxxxx + xxxxxxxxxx + xxxxxxxxxxx + xxxxxxxxxxxx + xxxxxxxxxxxxx + xxxxxxxxxxxxxx + xxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxxx + xxxxxxxxxxxxxxxxxxxx) / ppp<<endl;
cout<<"---------------------------------"<<endl;
cin.get();
cin.get();
}

cout<<endl;
cout<<"Do another average - 1"<<endl;
cout<<"Exit - 2"<<endl;

cin>>vb;
}while(vb == 1);

}


//          CALCULATOR DECLARATION  


void Math::Calc()
{

int bx;

do
{
cout<<endl;
cout<<"=========="<<endl;
cout<<"Calculator"<<endl;
cout<<"=========="<<endl;

float num1;
float num2;
float general;
char oper;

cout<<endl;
cout<<"Type in your calculation:"; cin>>num1;
cin>>oper; cin>>num2;


switch(oper)

{

case'+':{cout<<endl;cout<<(num1 + num2)<<endl;break;}
case'-':{cout<<endl;cout<<(num1 - num2)<<endl;break;}
case'*':{cout<<endl;cout<<(num1 * num2)<<endl;break;}
case'/':{cout<<endl;cout<<(num1 / num2)<<endl;break;}
case'r':{srand (time(0)); for(general = 0; general < 1; general++){
cout<<endl;
cout<<rand()%100<<endl;}}

}

cout<<"---------------------------------"<<endl;
cin.get();
cin.get();

cout<<endl;
cout<<"Do another calculation - 1"<<endl;
cout<<"Exit - 2"<<endl;

cin>>bx;
}while(bx == 1);

}

class Text
{
public:

void Write();
int Writer();
int Ver();

};

//              VERSION DECLARATION

int Text::Ver()
{
cout<<"-----------------------"<<endl;
cout<<"|TSP version 0.9 Beta |"<<endl;
cout<<"|7th milestone release|"<<endl;
cout<<"-----------------------"<<endl;
}

//              PRINT DECLARATION

void Text::Write()
{
string c;
cout<<"->";
getline(cin, c);
getline(cin, c);
cout<<endl;
cout<<endl;
cout<<"---------|\t\t"<<c<<"\t\t|---------"<<endl;
cout<<endl;
cout<<endl;
}

//              WRITER DECLARATION

int Text::Writer()
{
string a;
string cob;
int vmi;
string vm;
string c2;
string edit;
int i;
int y = 1;
string s1;
string s2;



while(y == 1)
{
cout<<endl;
cout<<"==========="<<endl;
cout<<"Text Writer"<<endl;
cout<<"==========="<<endl;
cout<<"-------------------------------------"<<endl;
cout<<"| New (1) | Open (2) | Settings (3) |"<<endl;
cout<<"-------------------------------------" <<endl;

cin>>i;


//      New
if(i < 2)
{

char d[20];
stringstream nice;
cout<<"-----------------------------------------------------"<<endl;
cout<<"Start typing . . ."<<endl;
cout<<"====================================================="<<endl;
getline(cin, a);
getline(cin, a);
cout<<"====================================================="<<endl;



cout<<"(no spaces) Save as:"<<endl;
cin>>d;

ofstream file(d);

file<<a;

cout<<endl;
cout<<cob<<endl;
cout<<"File Size - "<<a.capacity()<<" Bytes"<<endl;

cin.get();
cin.get();

cout<<"====="<<endl;
cout<<"Saved"<<endl;
cout<<"====="<<endl;

cout<<endl;
cout<<"Menu - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>y;

}

//      Edit

if(i == 2)
{
string c;
string df;
string dx;
char t[20];

cout<<"Enter filename and path:"<<endl;

cin>>t;

ifstream files(t);

if(! files)

{
cout<<"-Error 290-"<<endl;
cout<<"cannot find file"<<endl;
return -1;
}

if(! files.eof())

{
getline(files, c);
ifstream filesd("/i.txt");
ifstream filesdx("/ii.txt");
getline(filesd, df);
cout<<df<<endl;
cout<<c;


getline(cin, c);
getline(cin, c);

getline(filesdx, dx);
cout<<dx<<endl;

c2 += (c + edit);

ofstream fileb(t);

fileb<<c2;


cout<<endl;
cout<<"("<<cob<<")"<<endl;

cin.get();


cout<<endl;
cout<<"Menu - 1"<<endl;
cout<<"Exit - 2"<<endl;
cin>>y;

c2 = "";

}



if(! files)
{
cout<<"-Error 290-"<<endl;
cout<<"cannot find file"<<endl;

return -1;
}

}

//      Settings

if(i == 3)
{
int nl;

cout<<endl;
cout<<"\t-Settings-\t"<<endl;
cout<<"| View Mode (1) | Tools (2) |"<<endl;

cin>>nl;

if(nl == 1)
{

cout<<endl;

cout<<"                |--||--||--|";cout<<" -3"<<endl;
cout<<"      |--||--|";cout<<"  |--||--||--|";cout<<" -2"<<endl;
cout<<"|--|";cout<<"  |--||--|";cout<<"  |--||--||--|";cout<<" -1"<<endl;
cout<<endl;
cout<<"Viewing Mode Scale:";
cin>>vmi;

if(vmi == 1)
{
s1 = "===============\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.|||||||||||||||";

s2 = "|||||||||||||||\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.===============";

ofstream filej ("i.txt");

filej<<s1;

ofstream filejj ("ii.txt");

filejj<<s2;
}

if(vmi == 2)
{
s1 = "==================================================\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.||||||||||||||||||||||||||||||||||||||||||||||||||";

s2 = "||||||||||||||||||||||||||||||||||||||||||||||||||\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.==================================================";

ofstream filej ("i.txt");

filej<<s1;

ofstream filejj ("ii.txt");

filejj<<s2;
}

if(vmi == 3)
{
s1 = "============================================================\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";

s2 = "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t.============================================================";

ofstream filej ("i.txt");

filej<<s1;

ofstream filejj ("ii.txt");

filejj<<s2;

}
}

if(nl == 2)
{
int nlx;

cout<<endl;
cout<<"|Character count toggle (1) | File size display toggle (2)|"<<endl;
cin>>nlx;

if(nlx == 1)
{
string local;
string on = "on";
string off = "off";

cout<<"Character count - type 'on' or 'off'"<<endl;
getline(cin, local);
getline(cin, local);
if(local == on)
{
cob = "Characters - " + a.size();

cout<<"--"<<endl;
cout<<"ON"<<endl;
cout<<"--"<<endl;
}

if(local == off)
{
cob = "";

cout<<"---"<<endl;
cout<<"OFF"<<endl;
cout<<"---"<<endl;
}

}

if(nlx == 2)
{
cout<<"File size display On/Off"<<endl;
}

}

}
}

}

//              WRITER DECLARATION





//              MAIN FUNCTION

int main()
{
int z = 1;
string a;
string b = "print";
string d = "run_writer";
string f = "run_calc";
string e = "run_calc.av";
string g = "run_rand";
string h = "help";
string hh = "run_convert";
string hx = "run_speed";
string hxi = "run_distance";
string hxp = "run_tcalc";
string nm = "run_grid";
string zti = "run_timer";
string hg = "clear";
string ix = "version";
string ij = "run_task";
string ji = "run_contact";
string lz = "run_cal";


//              COMMAND LOOP

cout<<endl;
cout<<"\t--------------------------------------------------------------"<<endl;
cout<<"\t-----------------------------TSP 0.9 Beta--------------------------"<<endl;
cout<<"\t--------------------------------------------------------------"<<endl;

cout<<"";
sleep(1);
cout<<flush;

cout<<"\t[=";
sleep(1);

cout<<flush;
cout<<"==";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"=";
sleep(1);
cout<<flush;

cout<<"=";
sleep(1);
cout<<flush;

cout<<"\t\t==";
sleep(1);
cout<<flush;

cout<<"=";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"\t\t==";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"\t=";
sleep(1);
cout<<flush;

cout<<"=";
sleep(1);
cout<<flush;

cout<<"==";
sleep(1);
cout<<flush;

cout<<"=]";
sleep(1);
cout<<flush;

cout<<"";
sleep(1);
cout<<flush<<endl;

cout<<"--------------------------------------------------------------------------------"<<endl;

cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;

do{


cout<<endl;
cout<<"Command >";
cin>>a;




if(a == b)
{
Text run;
run.Write();
}




if(a == d)
{


Text runa;

runa.Writer();

}


if(a == f)
{


Math runb;

runb.Calc();

}

if(a == e)
{
Math runc;

runc.Av();
}

if(a == g)
{
Math rund;

rund.Rando();


}

if(a == h)
{
Read rune;

rune.helpsh();


}

if(a == hh)
{
Unit show;

show.Con();

}

if(a == hg)
{
Small beos;

beos.white();

}


if(a == hx)
{
Sdt showa;

showa.Speed();
}

if(a == nm)
{
Math showb;

showb.Ncell();
}

if(a == zti)
{
Time showc;

showc.Timer();

}

if(a == ix)
{
Text showd;

showd.Ver();

}

if(a == hxi)
{
Sdt showe;

showe.Distance();

}

if(a == hxp)
{
Sdt showf;

showf.Time();

}

if(a == ij)
{
dbase showft;

base* ppdbase = &showft;

ppdbase->todo();

}

if(a == ji)
{
dbase showhn;

base* pdbase = &showhn;

pdbase->prod();

}

if(a == lz)
{
dbase2 togol;

base* pdbase2 = &togol;

pdbase2->calendar();
}
}while(z == 1);

return 0;
}

