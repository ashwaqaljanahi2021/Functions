#include <iostream>
#include <iomanip>
using namespace std;

//global constants
const double GM = 100, PT=50, Persession =40;
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
char ch; 
info();
do //loop repetition for however many transaction user wants
{
double tot,training2, totalresult;
cout<<setprecision(2)<<showpoint<<fixed; //decimal places
for( int i=0; i==1; i++) //for loop to be sure that the program does not get confused and executes too many times
{getinfo(tot);
Training(training2);
}
calculateFee(totalresult);
cout<<"Would you like to make another transaction. Type y/Y?"<<endl; 
cin>>ch;
}while(ch == 'y'|| ch =='Y');
}


double calculateFee(double absolute) //calculate total costs
{
    double Personal, results;
   absolute = getinfo(results) + Training(Personal);
cout<<"Your total for both the membership and training session is "<<absolute<<endl; 
return absolute;
}

double Training(double totalsessions) // calculate personal fitness sessions
{
int sessions;
cout<<"How many personal training sessions did you have?"<<endl;
cin>>sessions;
{while(sessions<0)//error validation
{
    cout<<"Invaild!"<<endl;
    cout<<"How many personal training sessions did you have?"<<endl;
    cin>>sessions;
}

while(sessions<=5)
{
    cout<<"How many personal training sessions do you want to buy?"<<endl;
    cin>>sessions;
    totalsessions = sessions*PT;
    cout<<"Your total personal training session is "<<totalsessions<<endl;
    break;
    
}

while(sessions>5)
{
    cout<<"How many personal training sessions do you want to buy?"<<endl;
    cin>>sessions;
    totalsessions = sessions*Persession;
    cout<<"Your total personal training session is "<<totalsessions<<endl;
    break;
    
}
}
return totalsessions;
}

double getinfo(double total) // calculate gym membership costs
{
char ch,ans;
    cout<<"Please enter S/s for Senior or A/a for Adult"<<endl;
    cin>>ch;
    while(ch != 'S' && ch!= 's' && ch!='A' && ch!='a')//error validation 
    {
        cout<<"Invaild response! Try again"<<endl;
        cout<<"Please enter S/s for Senior or A/a for Adult"<<endl;
        cin>>ch;
    }
switch(ch) //switch case used for Senior or Adult
{
    case 's':
    case 'S': 
   cout<<"Have you bought our memembership for 12 or more months? Type Y/y"<<endl;
    cin>>ans;
    if(ans=='y'|| ans=='Y')
   {   total= GM-(GM*(SC+TM)); //compute discounts
    cout<<"The total memebership is " <<total<<endl;
   break;
   }
else 
{   total= GM-(GM*SC);// compute discounts
    cout<<"The total membership is"<<total<<endl;
    break;
}

  
 case 'A': 
 case 'a':
    cout<<"Have you bought our memembership for 12 or more months? Type Y/y"<<endl;
    cin>>ans;
if(ans=='y'|| ans=='Y')
   {   total= GM-(GM*TM); //compute discounts
cout<<"The total memebership is "<< total<<endl;
   break;
   }
else
    {total= GM;
    cout<<"The total membership is "<<total<<endl;
    break;
    }
default: cout<<"Error invaild answer!"<<endl; //error
break;
}//switch case
return total;
}//end of getinfo function
