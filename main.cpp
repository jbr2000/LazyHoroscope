//Authors:Jason Rupert
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string first;
string second;
  //get user input
cout<<"What is your first name?"<<endl;
cin>>first;
cout<<"What is your last name?"<<endl;
cin>>second;
cout<<"Welcome, "<<first.at(0)<<"."<<second.at(0)<<"., here is your fortune..."<<endl;
  //tell fortune
cout<<"your lucky number is "<<first.length()<<endl;
  //tell fortune pt two
char initial=first.at(0);
if (initial == 'a' || initial=='e' || initial=='o' ||initial=='i'||initial=='u'||initial == 'A' || initial=='E' || initial=='O' ||initial=='I'||initial=='U')
{
      cout<<"you are destined to be famous!"<<endl;
}
return 0;
}
