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
  //tell fortune
cout<<"Welcome, "<<first.at(0)<<"."<<second.at(0)<<"., here is your fortune..."<<endl;

  return 0;
}
