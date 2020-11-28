#include <iostream>
#include <stdlib.h>
#include <conio.h>


void start_process(); //function prototype
void end_process(int Total_mark); //function prototype

using namespace std;

int main() //main function start
{
    //login system
    system("cls");
    system("COLOR 9");
    string username,password;
    cout <<"\t\t\t\t================Welcome=============" << endl;
    cout<<"\t\t\t\tif you want to participant then please login:\n\n";

    cout<<"\t\t\t\tplease input username:";
    cin>>username;
    cout<<"\t\t\t\tplease input password:";
    cin>>password;
    if(username=="admin")

    {
        if(password=="password")

        {
            start_process(); //call the function
        }
    }

    else
    {
        end_process(0); //call the function
    }
    return 0;
}

void start_process() //1st function work start
{
    //subject menu
    int choice;

    system("cls");
    system("COLOR 7");
    cout<<"\t\t\t\tBangladesh Army University of Science and Technology (BAUST)"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |           Name of All Subject               |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |1.OOP Language (C)                           |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |2.OOP Language (C++)                         |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |3.JAVA                                       |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |4.Python                                     |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;
    cout<<"\t\t\t\t    |5.Common question on Technology              |"<<endl;
    cout<<"\t\t\t\t    -----------------------------------------------"<<endl;


    cout<<"Choose your subject in serial number (1 to 5): "<<endl;
    cin>>choice;

    if(choice == 1)

    {
        //1st subject question start
        system("cls");
        system("COLOR 7");

        char answer;
        int Total_mark=0;

        cout<<"\n 1.Who invented c language:\n"<< endl;
        cout<< "a) James goslink"<< endl;
        cout<< "b) Dennis M. Ritchie"<< endl;
        cout<< "c) Richard stallman"<< endl;
        cout<< "d) Rob pike"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='b')
        {
            cout<<"\n you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;



        // char answer;
        //int Total mark=0;

        cout<<"\n 2.who is the CEO of Google:\n"<< endl;
        cout<< "a) Bill gates"<< endl;
        cout<< "b) Jeff Bezos"<< endl;
        cout<< "c) Suleman"<< endl;
        cout<< "d) Sundar Pichai"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        cout<<"\n 3.What is required in each C program? :\n"<< endl;
        cout<< "a)The program must have at least one function. "<< endl;
        cout<< "b)The program does not require any function. "<< endl;
        cout<< "c)Input data "<< endl;
        cout<< "d) Output data"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;


        cout<<"\n 4.Why is a macro used in place of a function?:\n"<< endl;
        cout<< "a)It reduces execution time. "<< endl;
        cout<< "b) It reduces code size."<< endl;
        cout<< "c) It increases execution time. "<< endl;
        cout<< "d) It increases code size."<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        cout<<"\n 5. In the C language, the constant is defined _______.:\n"<< endl;
        cout<< "a) Before main"<< endl;
        cout<< "b)  After main"<< endl;
        cout<< "c)  Anywhere, but starting on a new line."<< endl;
        cout<< "d)  None of the these."<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='c')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;




        end_process(Total_mark); // call the function and pass total mark
        cout<<"if you want go subject menu then press y:";
        if(getch()=='y')
            start_process(); //function call
        else
            exit(0);
    }

    if(choice == 2)

    {
        //2nd subject question start
        system("cls");
        system("COLOR 7");

        char answer;
        int Total_mark=0;

        cout<<"\n 1.Who invented C++ language?\n"<< endl;
        cout<< "a)James Gosling "<< endl;
        cout<< "b) Jeff Bezos"<< endl;
        cout<< "c) Bjarne Stroustrup"<< endl;
        cout<< "d) Dennis M. Ritchie"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='c')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;



        // char answer;
        //int Total mark=0;

        cout<<"\n 2.A single line comment in C++ language source code can begin with _____\n"<< endl;
        cout<< "a) ; "<< endl;
        cout<< "b) : "<< endl;
        cout<< "c) /* "<< endl;
        cout<< "d) //"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;



        cout<<"\n 3.Which one is not a correct variable type in C++?"<< endl;
        cout<< "a)float  "<< endl;
        cout<< "b) real "<< endl;
        cout<< "c)int  "<< endl;
        cout<< "d)  double"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='b')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;


        cout<<"\n 4.An expression A.B in C++ means ____\n"<< endl;
        cout<< "a) A is member of object B  "<< endl;
        cout<< "b) B is member of Object A "<< endl;
        cout<< "c) Product of A and B"<< endl;
        cout<< "d) None of these"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='b')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        cout<<"\n 5.A C++ code line ends with ___\n"<< endl;
        cout<< "a) A Semicolon (;)"<< endl;
        cout<< "b) B.A Fullstop(.)"<< endl;
        cout<< "c) A Comma (,)"<< endl;
        cout<< "d) A Slash (/)"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        end_process(Total_mark);
        cout<<"if you want go subject menu then press y:";
        if(getch()=='y')
            start_process();
        else
            exit(0);
    }

    if(choice == 3)

    {
        //3rd subject question start
        system("cls");
        system("COLOR 7");

        char answer;
        int Total_mark=0;

        cout<<"\n 1.Who is known as father of Java Programming Language?\n"<< endl;
        cout<< "a)James Gosling "<< endl;
        cout<< "b) Jeff Bezos"<< endl;
        cout<< "c) Bjarne Stroustrup"<< endl;
        cout<< "d) Dennis M. Ritchie"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;



        // char answer;
        //int Total mark=0;

        cout<<"\n 2.In java control statements break, continue, return, try-catch-finally and assert belongs to?\n"<< endl;
        cout<< "a) Selection statements "<< endl;
        cout<< "b) Loop Statements"<< endl;
        cout<< "c) Transfer statements "<< endl;
        cout<< "d) Pause Statement"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='c')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;


        cout<<"\n 3.Which provides runtime environment for java byte code to be executed?\n"<< endl;
        cout<< "a)  JDK"<< endl;
        cout<< "b)  JVM"<< endl;
        cout<< "c)  JRE"<< endl;
        cout<< "d)  JAVAC"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='b')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        cout<<"\n 4.What is byte code in Java?\n"<< endl;
        cout<< "a) Code generated by a Java compiler "<< endl;
        cout<< "b) Code generated by a Java Virtual Machine"<< endl;
        cout<< "c) Name of Java source code file"<< endl;
        cout<< "d) Block of code written inside a class"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"\n 5.Which of the following are not Java keywords ?\n"<< endl;
        cout<< "a) double"<< endl;
        cout<< "b) switch"<< endl;
        cout<< "c) then"<< endl;
        cout<< "d) instanceof"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='c')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        end_process(Total_mark);
        cout<<"if you want go subject menu then press y:";
        if(getch()=='y')
            start_process();
        else
            exit(0);
    }


    if(choice == 4)

    {
        //4th subject question start
        system("cls");
        system("COLOR 7");

        char answer;
        int Total_mark=0;

        cout<<"\n 1.Who invented python language \n"<< endl;
        cout<< "a)James Gosling  "<< endl;
        cout<< "b)Jeff Bezos "<< endl;
        cout<< "c)Bjarne Stroustrup  "<< endl;
        cout<< "d)Guido van Rossum  "<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;


        // char answer;
        //int Total mark=0;

        cout<<"\n 2.All keywords in python are in.....\n "<< endl;
        cout<< "a)UPPER CASE  "<< endl;
        cout<< "b)lower case  "<< endl;
        cout<< "c)Capitalized "<< endl;
        cout<< "d)None of the mentioned"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }

        cout<<"----------------------------------------------------------"<<endl;
        cout<<"\n 3.Which of the following is the use of id() function in python \n"<< endl;
        cout<< "a) Every object doesn’t have a unique id "<< endl;
        cout<< "b) Id returns the identity of the object "<< endl;
        cout<< "c) All of the mentioned "<< endl;
        cout<< "d) None of the mentioned "<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='b')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        cout<<"\n 4.Is python case sensitive when dealing with identifiers \n"<< endl;
        cout<< "a)  yes  "<< endl;
        cout<< "b)  no "<< endl;

        cout<<"please choose 'a' 'b'  and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"\n 5.What is the return type of function id.?\n"<< endl;
        cout<< "a) float"<< endl;
        cout<< "b) bool"<< endl;
        cout<< "c) dict"<< endl;
        cout<< "d) int"<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='d')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;





        cout<<"\n 6.Are nested if-else are allowed in python.?\n"<< endl;
        cout<< "a)Yes "<< endl;
        cout<< "b)no "<< endl;

        cout<<"please choose 'a' 'b'  and press enter:";
        cin>>answer;
        if(answer=='a')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        end_process(Total_mark);
        cout<<"if you want go subject menu then press y:";
        if(getch()=='y')
            start_process();
        else
            exit(0);
    }

    if(choice == 5)

    {
        //5th subject question start
        system("cls");
        system("COLOR 7");

        char answer;
        int Total_mark=0;

        cout<<"\n 1.What are the four main components of the Google Analytics platform? (select all that apply) \n "<< endl;
        cout<< "a)  Collection    "<< endl;
        cout<< "b)  Configuration "<< endl;
        cout<< "c)  Continuation "<< endl;
        cout<< "d)  Processing   "<< endl;
        cout<< "e)  Progressing  "<< endl;
        cout<< "f)  Reporting  "<< endl;
        cout<< "g)  (a+b+d+f)    "<< endl;

        cout<<"please choose 'a'  'b'  'c'  'd' 'e' 'f' 'g' and press enter:";
        cin>>answer;
        if(answer== 'g')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;


        cout<<"\n 2.Which Analytics tracking technology would you use to collect how users interact with a web-connected ticket kiosk? \n"<< endl;
        cout<< "a) Software Development Kit  "<< endl;
        cout<< "b) JavaScript Tracking Code  "<< endl;
        cout<< "c) The Measurement Protocol  "<< endl;
        cout<< "d) HTML  "<< endl;
        cout<<"please choose 'a' 'b' 'c' or 'd' and press enter:";
        cin>>answer;
        if(answer=='c')
        {
            cout<<"\n  you choose right answer!"<<endl;
            Total_mark++;
        }
        else
        {
            cout<<"\n Sorry you choose wrong answer!"<<endl;
        }
        cout<<"----------------------------------------------------------"<<endl;

        end_process(Total_mark);
        cout<<"if you want go subject menu then press y:";
        if(getch()=='y')
            start_process();
        else
            exit(0);
    }

}
void end_process(int Total_mark) //total mark value receive
{
    cout<<"\nThank for participant"<<endl;
    cout<<"Your Mark is:"<<Total_mark<<endl; // print total marl
}


