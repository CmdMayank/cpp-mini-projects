#include<iostream>
#include<string>
using namespace std;

    //Function to calculate total 
   int calcTotal(int Marks[],int n)
    {
        int total = 0;
        for(int i=0; i<n; i++)
        {
            total += Marks[i];
        }
        return total;
    }

    //function to calculate Average 
    float calcAvg(int total, int n)
    {
        return (float)total/n;
    }
     
    //function to calculate grade
    char calcGrade (float average)
    {
        if (average>=90)
        return 'A';

        else if(average>=75)
        return 'B';

        else if(average>=60)
        return 'C';

        else
        return 'D';
    }

int main()
{
    string stdName;
    int stdRoll;
    const int subject = 5;
    int Marks[subject];

    cout << "===== Student Report Card Programme =====" << endl;
    
    cout<<"Enter the student details to show the grade and remarks :)"<<endl;
    cout<<"Enter Student name: ";
    getline(cin, stdName);
    
    cout<<"Enter student Roll no. : ";
    cin>>stdRoll;

    cout<<"Enter the marks of the students"<<endl;

    for(int i=0; i<5; i++)
    {
       cout<< "Subjects" <<i+1 << ":";
       cin>>Marks[i]; 
    }

    cout<<"\nMarks Entered: ";
    for(int j=0; j<5; j++)
    {
        cout<<Marks[j]<< " ";
    }
    cout<<endl;

    //processing section
    int total = calcTotal(Marks, subject);
    float average = calcAvg(total, subject);
    char grade = calcGrade(average);

    cout<<"\n========REPORT CARD========"<<endl;
    cout<<"Roll number : "<<stdRoll<<endl;
    cout<<"Name : "<<stdName<<endl;
    cout<<"Total : "<<total<<"/"<<subject*100<<endl;
    cout<<"Average : "<<"%"<<average<<endl;
    cout<<"Grade : "<<grade<<endl;

    cout<<"======================================="<<endl;


    
    return 0;
}   