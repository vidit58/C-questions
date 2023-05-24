
#include<iostream>
using namespace std;

int main()
{
    int marks[5], total_marks = 500, obtained_marks = 0;
    float percentage;

    cout<<"Enter marks of five subjects: "<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Subject "<<(i+1)<<": ";
        cin>>marks[i];

        obtained_marks += marks[i];
    }

    percentage = (float(obtained_marks) / total_marks) * 100;


    cout<<"Percentage: "<<percentage<<"%"<<endl;
    if(percentage >= 90)
    {
        cout<<"Grade: A";
    }
    else if(percentage >= 80)
    {
        cout<<"Grade: B";
    }
    else if(percentage >= 60)
    {
        cout<<"Grade: C";
    }
    else
    {
        cout<<"Grade: D";
    }

    return 0;
}


