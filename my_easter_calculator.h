#include <iostream>
#include <string>

using namespace std;
string findEasterDate(int year)
{
int a,b,c,d,e,f,g,h,i,j,k,m,Month,p,Date;
string Monthname;
a = year % 19;
b = year / 100;
c = year % 100;
d = b / 4;
e = b % 4;
f = (b + 8) / 25;
g = (b - f + 1) / 3;
h = ((19 * a) + b - d - g + 15) % 30;
i = c / 4;
j = c % 4;
k = (32 + (2 * e) + (2 * i) - h - j) % 7;
m = (a + (11 * h) + (22 * k) ) / 451;
Month = ( h + k - (7 * m) + 114 ) / 31;
p = ( h + k - (7 * m) + 114 ) % 31;
Date = p + 1;
switch(Month)
{
case 1:
Monthname="January";
break;
case 2:
Monthname="February";
break;
case 3:
Monthname="March";
break;
case 4:
Monthname="April";
break;
case 5:
Monthname="May";
break;
case 6:
Monthname="June";
break;
case 7:
Monthname="July";
break;
case 8:
Monthname="August";
break;
case 9:
Monthname="September";
break;
case 10:
Monthname="October";
break;
case 11:
Monthname="November";
break;
case 12:
Monthname="December";
break;
}
Monthname="Easter Month is: "+Monthname+" \n"+"Easter day is: "+ to_string(Date);

return Monthname;
  
}