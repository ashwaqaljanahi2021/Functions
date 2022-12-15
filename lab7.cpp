#include <iostream>
#include <iomanip>
using namespace std;

//global constants
const double GM = 100, PT=50;
const double SC = .3, TM= .15, Five= .20; 
void info() //information displayed for user
{
    cout<<"Thank you for taking interest in our Fitness membership program!"<<endl;
    cout<<"We offer 15% off for members that have been with us for more than 12 months!"<<endl;
    cout<<"We offer 20% off for members that have had more than five personal"<<
    " training sessions with us!"<<endl;
     cout<<"We also offer 30% off for members that are Seniors!"<<endl;
}
double getinfo(double total); //determine discounts for individuals
double calculateFee(double absolute); // calculate total between gym memberships and personal sessions
double Training(double totalsessions); // personal training sessions calculation

int main()
{
char ch=true;
info();
do //loop repetition for however many transaction user wants
{
double tot=true,training2=true, totalresult=true;
cout<<setprecision(2)<<showpoint<<fixed; //decimal places
for( int i=0; i==1; i++) //for loop to be sure that the program does not get confused and executes too many times
{getinfo(tot);
double Training(double totalsessions);
}
calculateFee(totalresult);
cout<<"Would you like to calculate a new membership? Type y/Y?"<<endl; 
cin>>ch;
}while(ch == 'y'|| ch =='Y');
}
double Training(double totalsessions) // calculate personal fitness sessions
{
int Persession = 40;
int sessions=true;
cout<<"How many personal training sessions did you have?"<<endl;
cin>>sessions;
{ while(sessions<0)//error validation
{
    cout<<"Invaild!"<<endl;
    cout<<"How many personal training sessions did you have?"<<endl;
    cin>>sessions;
}

while(sessions<=5)
{

    totalsessions = sessions*PT;
    break;
    
}

while(sessions>5)
{
    totalsessions = sessions*Persession;
    break;
    
}
}
return totalsessions;
}

double getinfo(double total) // calculate gym membership costs
{
double totalsess=true;
char ch=true,ans=true;
int howmanypt=true;
    cout<<"Please enter S/s for Senior or A/a for Adult"<<endl;
    cin>>ch;
    while(ch != 'S' && ch != 's' && ch != 'A' && ch != 'a')
        {
            cout<<"Error!"<<endl;
            cout<<"Please enter S/s for Senior or A/a for Adult"<<endl;
            cin>>ch;
        }
switch(ch) //switch case used for Senior or Adult
{
    case 's':
    case 'S': 
cout<<"Enter the number of months you previously bought"<<endl;
cin>>howmanypt;
while(howmanypt<0)
{cout<<"Error!"<<endl;
cout<<"Enter the number of months you previously bought"<<endl;
cin>>howmanypt;
    
}
if(howmanypt>=12)
   {   total= GM-(GM*(SC+TM)); //compute discounts
    double Training(double totalsess);
   break;
   }
else 
{   total= GM-(GM*SC);// compute discounts
    double Training(double totalsess);

    break;
}
    case 'A': 
    case 'a':
cout<<"Enter the number of months you previously bought"<<endl;
cin>>howmanypt;
while(howmanypt<0)
{cout<<"Error!"<<endl;
cout<<"Enter the number of months you previously bought"<<endl;
cin>>howmanypt;
}
  
if (howmanypt>=12)
   {   total= GM-(GM*TM); //compute discounts
double Training(double totalsess);
   break;
   }
else
    {total= GM;
    double Training(double totalsess);
    break;
    }
default: cout<<"Error invaild answer!"<<endl; //error
break;
}//switch case
return total;
}//end of getinfo function

double calculateFee(double absolute) //calculate total costs

{
double Personal=true, results=true;
absolute = getinfo(results) + Training(Personal);
cout<<"Your total for the membership is $"<<absolute<<endl; 
return absolute;
}
