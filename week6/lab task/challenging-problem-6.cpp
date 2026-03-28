#include<iostream>
using namespace std;

main()

{
    string username[3],password[3];
    string name[3];
    string course[3];
    int age[3];
    int choice;
    bool login= false;

    for(int n=0 ; n<3 ; n++)
    {
        cout<<"Enter the username: ";
        cin >> username[n];

        cout<<"Enter the password: ";
        cin >> password[n];

        if(username[n]=="admin" && password[n]=="1234")
        {
            login=true;
            cout<<"LOGIN SUCCESSFUL "<<endl;
            break;
        }

        else 
        {
            cout<<"LOGIN FAILED"<<endl;
        }

        if(n== 2 && username[n]!="admin" && password[n]!="1234")
        {
            cout<<"too many attempt. program ends "<<endl;
        }
    }

    int studentcount=0;
    int studentcourse=0;

    if(login==true)
    {
        while(true)
        {
            cout<<endl<<"--------university manangement system---------"<<endl;
            cout<<"1. ADD STUDENT "<<endl;
            cout<<"2. VIEW STUDENT"<<endl;
            cout<<"3. ADD COURSE  "<<endl;
            cout<<"4. VIEW COURSES"<<endl;
            cout<<"5. EXIT "<<endl;
            cout<<"enter the choice ";
            cin >> choice;

            if(choice==1)
            {
                if(studentcount < 3)
                {
                    cout<<"Enter Student name: ";
                    cin >> name[studentcount];

                    cout<<"Enter the Student age: ";
                    cin >> age[studentcount];

                    cout<<"Student added successfully "<<endl;
                    studentcount++;
                }
            }

            else if(choice==2)
            {
                for(int i=0 ; i<studentcount ; i++)
                {
                    cout<<"Student "<<(i+1)<<": "<<name[i]<<" age: "<<age[i]<<endl;
                }
            }

            else if(choice==3)
            {
                if(studentcourse < 3 )
                {
                    cout<<"Enter the course name: ";
                    cin>> course[studentcourse];
                    cout<<"Course added successfully "<<endl;
                    studentcourse++;
                }
            }
     
            else  if(choice==4)
            {
                for(int i=0;i<studentcourse;i++)
                {
                    cout<<"Courses are  "<<course[i]<<endl;
                }
            }    
     
            else if(choice==5)
            {
                cout<<"program Ends "<<endl;
                break;
            }
    
            else
            {
                cout<<"Invalid Choice "<<endl;
            }

        }
    }
}