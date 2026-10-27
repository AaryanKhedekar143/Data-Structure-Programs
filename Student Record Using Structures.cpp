#include<iostream>
#include<string>
using namespace std;
struct Student 
{
    int rollNo;
    string name;
    float percentage;
};
int main()
{
    Student s[100];
    int n;
    cout<<"Enter Number of Students: ";
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cout<<"\nEnter Details of Student "<<i+1<<endl;
            cout<<"\nEnter Roll Number: ";
            cin>>s[i].rollNo;
            cout<<"\nEnter Name: ";
            cin>>ws;
            getline(cin,s[i].name);
            cout<<"\nEnter Percentage: ";
            cin>>s[i].percentage;
        }
    cout<<"\n-------STUDENT RECORDS-------\n";
    cout<<"Roll No.\tName\tPercentage\n";
    for(int i=0;i<n;i++)
        {
            cout<<s[i].rollNo<<"\t\t\t"<<s[i].name<<"\t\t\t"<<s[i].percentage<<"%\n";
        }
    return 0;
}
