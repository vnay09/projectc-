


#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <fstream>
#include <ctime>
using namespace std;

void FrontPage();
void Date();      
void Time();      

class Prison
{
private:
    // Detaiils of Prisoner
    string First_Name[20] = {" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "};
    string Second_Name[20];
    string Gender[20];
    int CellNo[20] = {1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020};
    int Age[20];
    double Height[20];
    string Eyecolor[20];
    string Crime[20];
    int Punishmentmonths[20];
    int o = 0;

public:
    void SetData();     
    void Details();      
    void Afterlogin();   
    void Attendance();   
    void Release();      
    void SearchPrison(); 
    void PrisonFile();   
    void Logout();      
    void Exit();         
    void Login();        
};

void Prison::Logout()
{
    system("cls");
    cout << "\n\n\n\n\n\n\t\t\t\t\t";
    cout << "logging out ";

    for (int x = 0; x < 15; x++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
    Prison::Login();
}

void Prison::Login()
{

    char username[25];
    char password[25];
    char temppass;
    int attempt = 0;
    int state = 0;

        do
        {
            system("cls");
            Time();
            cout << endl << endl;
            for (int a = 0; a <= 100000000; a++)
                {
                }
                    cout << "\t\t\t\t    ----------------------------------------\n";
            for (int a = 0; a <= 100000000; a++)
                {
                }
                    cout << "\t\t\t\t    |       LIBRARY MANAGEMENT SYSTEM      |\n";
            for (int a = 0; a <= 100000000; a++)
                {
                }
                    cout << "\t\t\t\t    ----------------------------------------\n";
            for (int a = 0; a <= 100000000; a++)
                {
                }
                    cout << "\n\n";
                
            cout << "\t\t\t\t\t";

            cout << "Username : ";
            cin >> username;
            cout << endl;
            cout << "\t\t\t\t\t";
            cout << "Password : ";
    int i;
            for (i = 0;    ;    )
            {
                cin >> temppass;
                    if((temppass >= 'a' && temppass <= 'z') || (temppass >= 'A' && temppass <= 'Z') || (temppass >= '0' &&  temppass <= '9'))
                        {
                            password[i] = temppass;
                            i++;
                            cout << "*";
                        }
                    if (temppass == '\b' && i >=1)
                        {
                        cout << "\b \b";
                        --i;
                        }
                    if(temppass == '\r')
                        {
                            password[i] = '\0';
                            break;
                        }
            }

            if (strcmp(username, "admin") == 0 && strcmp(password, "qwertyuiop") == 0)
            {
                cout << endl << endl;
                cout << "\t\t\t\t\t";
                cout << "You are accessed to the system!\n\n";
                cout << "\t\t\t\t";
                system("pause");
                system("cls");
                state = 0;
                attempt = 4;
                            Prison :: Afterlogin();
            }
            else
            {
                system("cls");
                    attempt += 1;
                    cout << endl << endl;
                    cout << "\t\t\t\t\t";
                        cout << "No. of attempts remain: " << 3 - attempt;
                    cout << endl << endl;
                    cout << "\t\t\t\t\t";
                    system("pause");

                        if (attempt >= 3)
                        {
                            cout << endl;
                            cout << "\t\t\t\t\t";
                                cout << "Attempt permission had been terminated permamently for 24 hours!!";
                            system("pause");
                            exit(1);

                        }
            }
        }while(attempt < 3);
}

void Prison ::SetData()
{
    system("cls");
    Time();
    int a, s;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |                                                   |"<< endl;
    cout << "\t\t\t\t    |         Enter basic information of prisoner       |" << endl;
    cout << "\t\t\t\t    |                                                   |" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << endl << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter first name : ";
    cin >> First_Name[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter second name : ";
    cin >> Second_Name[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter gender : ";
    cin >> Gender[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter age : ";
    cin >> Age[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter height : ";
    cin >> Height[o];
    cout << "\t\t\t\t\t";
    cout<< endl;
    cout << "\t\t\t\t\t";
    cout << "Enter eyecolor : ";
    cin >> Eyecolor[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter crime : ";
    cin >> Crime[o];
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Enter punishment span in months : ";
    cin >> Punishmentmonths[o];
    cout << "\t\t\t\t\t";
    cout << endl << endl << endl;
    cout << "\t\t\t\t\t";
    cout << "Your Cell No is " << CellNo[o];
    cout << endl <<  "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    o = o + 1;
    cout << "Press 1 to return : ";
    cin >> s;
    if (s == 1)
    {
        Prison ::Afterlogin();
    }
}

void Prison ::Details()
{
    system("cls");
    Time();
    int t;
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------"<< endl;
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    |                                                   |"<< endl;
    cout << "\t\t\t\t    |                Prisoner list                      |"<< endl;
    cout << "\t\t\t\t    |                                                   |"<< endl;
    for (t = 0; t <= 100000000; t++)
    {
    }
    cout << "\t\t\t\t    -----------------------------------------------------"<< endl;
    for (t = 0; t <= 100000000; t++)
    {
    }
    int s, c = 0, p = 0;

    cout << "\n\t\t\t\t\t";

    cout << endl << "===========================================================================================================" << endl;
    cout << "SN.\tNAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment" << endl;
    cout << "==========================================================================================================="<< endl;

    for (int x = 0; x <= 19; x++)
    {
        if (First_Name[x] != " ")
        {
            p++;
            cout << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
            cout << endl << endl;
            c++;
        }
    }
    if (c == 0)
    {
        cout << endl << "\t\t\t\t\t";
        cout << "No prisoner Present";
        cout << endl;
        cout << "\t\t\t\t\t";
    }
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin >> s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Attendance()
{
    int s, l, c = 0;
    char ch;
    do
    {
        system("cls");
        Time();
        system("cls");
        int t;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |" << endl;
        cout << "\t\t\t\t    |           Prisoner attendance maintainer          |" << endl;
        cout << "\t\t\t\t    |                                                   |" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << endl << "\t\t\t\t\t";
        cout << endl << "===========================================================================================================" << endl;
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment" << endl;
        cout << "===========================================================================================================" << endl;
        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << endl << endl;
                c++;
            }
        }
        if (c != 0)
        {
            cout << endl << "\t\t\t\t\t";
            cout << "Enter the cell  block of the prisoner :";
            cin >> l;
            l = l - 1001;
            cout << endl <<  "\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            Punishmentmonths[l]--;
            cout << endl << "\t\t\t\t\t";
            cout << "Punishment for :" << Punishmentmonths[l] << " months";
            if (Punishmentmonths[l] <= 0)
            {
                cout << endl <<"\t\t\t\t\t";
                cout << "Prisoner is ready for release";
            }
            cout << endl << endl;
            cout << endl << "\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << endl;
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            //cout << "\t\t\t\t                                                    " << endl;
            cout << "\t\t\t\t    ------------------------------------------------" << endl;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |" << endl;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------" << endl;
        }

    } while (ch == 'y');
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin >> s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Release()
{
    int s, l, c = 0, r;
    char ch;
    do
    {
        system("cls");
        Time();
        int t;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    |                                                   |" << endl;
        cout << "\t\t\t\t    |                Release prisoner                   |" << endl;
        cout << "\t\t\t\t    |                                                   |" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }
        cout << "\t\t\t\t    -----------------------------------------------------" << endl;
        for (t = 0; t <= 100000000; t++)
        {
        }

        cout << endl << "\t\t\t\t\t";
        cout << endl <<"===========================================================================================================" << endl;
        cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment" << endl;
        cout << "===========================================================================================================" << endl;

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                cout << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t\t" << Age[x] << "\t" << Gender[x] << "\t" << Height[x] << "\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                cout << endl << endl;
                c++;
            }
        }
        if (c != 0)
        {
            cout << "\n\t\t\t\t\t";
            cout << "Enter the cell block of the prisoner :";
            cin >> l;
            l = l - 1001;
            cout << endl << "\t\t\t\t\t";
            cout << "Name : ";
            cout << First_Name[l] << " " << Second_Name[l];
            cout << endl <<"\t\t\t\t\t";
            if (Punishmentmonths[l] <= 0)
            {
                cout << endl <<"\t\t\t\t\t";
                cout << "Prisoner is ready for release";
                cout << endl <<"\t\t\t\t\t";
                cout << "Press 1 to release the prisoner :";
                cin >> r;
                if (r == 1)
                {
                    First_Name[l] = " ";
                    Second_Name[l] = " ";
                    Gender[l] = " ";
                    Age[l] = 0;
                    Height[l] = 0;
                    Eyecolor[l] = " ";
                    Punishmentmonths[l] = 0;
                    cout << endl <<"\t\t\t\t\tProcessing";

                    for (int process = 0; process < 7; process++)
                    {
                        for (int a = 0; a <= 100000000; a++)
                        {
                        }
                        cout << ".";
                    }
                    cout << endl <<"\t\t\t\t\t";
                    cout << "Prisoner released successfully";
                }
            }
            else
            {
                cout << endl <<"\t\t\t\t\t";
                cout << "Prisoner is not ready for release";
            }

            cout << endl << endl;
            cout << endl <<"\t\t\t\t\t";
            cout << "Press y to choose another prisoner and press n to exit :";
            cin >> ch;
        }
        else
        {
            int a;
            cout << "\t\t\t\t\t";
            cout << endl;
            cout << "\t\t\t\t\t";
            for (a = 0; a <= 100000000; a++)
            {
            }
            //cout << "\t\t\t\t                                                    " << endl;
            cout << "\t\t\t\t    ------------------------------------------------" << endl;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    |             No prisoners present             |" << endl;
            for (a = 0; a <= 100000000; a++)
            {
            }
            cout << "\t\t\t\t    ------------------------------------------------" << endl;
            break;
        }
    } while (ch == 'y');
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin >> s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::SearchPrison()
{
    int info;
    int CN, i, a, s, l;
    int c = 0, p = 0;

    system("cls");
    cout << "\t\t\t\t    ----------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |             Search Menu              |" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << endl << endl;
    cout << "\t\t\t\t";
    cout << "Enter the prisoner cell id to be searched : ";
    cin >> CN;
    cout << endl <<"\t\t\t\t";
    cout << endl << "===========================================================================================================" << endl;
    cout << "NAME\t\t\tCell Block\tAge\tGender\tHeight\tEye Colour\tCrime\tPunishment" << endl;
    cout << "===========================================================================================================" << endl;
    l = CN - 1001;
    info = CellNo[l];
    if (CN == info)
    {
        if (First_Name[l] != " ")
        {
            cout << First_Name[l] << "" << Second_Name[l] << "\t\t" << CellNo[l] << "\t\t" << Age[l] << "\t" << Gender[l] << "\t" << Height[l] << "\t" << Eyecolor[l] << "\t\t" << Crime[l] << "\t\t" << Punishmentmonths[l] << endl;
            cout << endl << endl;
        }
        else
        {
            cout << endl;
            cout << "\t\t\t\t";
            cout << endl;
            cout << "\t\t\t\t";
            cout << "cell block empty" << endl;
        }
    }
    else
    {
        cout << endl;
        cout << "\t\t\t\t";
        cout << endl;
        cout << "\t\t\t\t";
        cout << "invalid cell id" << endl;
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t";
    cout << "Press 1 to return : ";
    cin >> s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::PrisonFile()
{
    Time();
    system("cls");

    int format, a;
    int s, c = 0, p = 0;
    cout << endl<<endl<<endl;
    cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                                                               |" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     1)   Txt File                             |"<< endl;
    cout << "\t\t\t\t|                                                               |" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t|                     2)   Word File                            |" << endl;
    cout << "\t\t\t\t|                                                               |" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t-----------------------------------------------------------------" << endl;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << endl;
    cout << "\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t";
    cout << "In which format you want to open your file? ";
    cin >> format;
    std::ofstream MyFile_;
    switch (format)
    {
    case 1:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << endl;
        cout << "\t\t\t\t\t";
        cout << endl<<endl<<endl<<endl<<endl;
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |        Txt File created successfully              |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.txt");

        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";
        MyFile_ << "\t\t\t\t    |                                                   |\n";
        MyFile_ << "\t\t\t\t    |                Prisoner list                      |\n";
        MyFile_ << "\t\t\t\t    |                                                   |\n";
        MyFile_ << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_ << "\n\t\t\t\t\t";

        MyFile_ << "\n=====================================================================================================================\n";
        MyFile_ << "SR.\tNAME\t\t\tCell Block\tAge\t\tGender\tHeight\tEye Colour\tCrime\tPunishment\n";
        MyFile_ << "=======================================================================================================================\n";

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                p++;
                MyFile_ << p << "\t" << First_Name[x] << "" << Second_Name[x] << "\t\t" << CellNo[x] << "\t" << Age[x] << "\t\t" << Gender[x] << "\t" << Height[x] << "\t\t" << Eyecolor[x] << "\t\t" << Crime[x] << "\t\t" << Punishmentmonths[x] << endl;
                MyFile_ << endl
                        << endl;
                c++;
            }
        }
        if (c == 0)
        {
            MyFile_ << "\n\t\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << endl;
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;

    case 2:
        Time();
        system("cls");
        cout << "\t\t\t\t\t";
        cout << endl;
        cout << "\t\t\t\t\t";
        cout << endl<<endl<<endl<<endl<<endl;
        cout << "\t\t\t\t    -----------------------------------------------------\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    |          Word File created successfully           |\n";
        cout << "\t\t\t\t    |                                                   |\n";
        cout << "\t\t\t\t    -----------------------------------------------------\n";

        MyFile_.open("Prison_Data.doc");

        MyFile_ << "\t\t\t *** Prisoner list *** ";
        MyFile_ << endl;

        for (int x = 0; x <= 19; x++)
        {
            if (First_Name[x] != " ")
            {
                MyFile_ << "First name: " << First_Name[x];
                MyFile_ << endl;
                MyFile_ << "Second name: " << Second_Name[x];
                MyFile_ << endl;
                MyFile_ << "Cell number: " << CellNo[x];
                MyFile_ << endl;
                MyFile_ << "Age: " << Age[x];
                MyFile_ << endl;
                MyFile_ << "Gender: " << Gender[x];
                MyFile_ << endl;
                MyFile_ << "Height: " << Height[x];
                MyFile_ << endl;
                MyFile_ << "Eye colour: " << Eyecolor[x];
                MyFile_ << endl;
                MyFile_ << "Crime: " << Crime[x];
                MyFile_ << endl;
                MyFile_ << "Punishment Months: " << Punishmentmonths[x];
                MyFile_ << endl;
                MyFile_ << endl;
                c++;
            }
        }
        if (c == 0)
        {

            MyFile_ <<endl<< "\t\t\t\t";
            MyFile_ << "No prisoner Present";
            MyFile_ << endl;
            MyFile_ << "\t\t\t\t\t";
        }
        MyFile_.close();
        break;
    default:
        cout << "Invalid choice";
        break;
    }

    cout << endl;
    cout << "\t\t\t\t\t";
    cout << endl;
    cout << "\t\t\t\t\t";
    cout << "Press 1 to return : ";
    cin>>s;
    if (s == 1)
    {
        Prison::Afterlogin();
    }
}

void Prison ::Afterlogin()
{
    int a, c;
    int v;
    do
    {
        v = 0;
        system("cls");
        Time();
        cout << endl<<endl<<endl;
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     1)   New prisoner entry                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     2)   Prisoner details                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     3)   Attendace prisoner                             |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     4)   Release prisoner                               |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     5)   Search prisoner                                |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     6)   Prison File                                    |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     7)   Logout                                         |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                     8)   Exit                                           |\n";
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t|                                                                         |\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout << "\t\t\t\t---------------------------------------------------------------------------\n";
        for (a = 0; a <= 100000000; a++)
        {
        }
        cout <<endl;
        cout << "\t\t\t\t\t\t\t";
        cout << endl;
        cout << "\t\t\t\t\t\t\t";
        cout << "Enter your choice : ";
        cin >> c;
        switch (c)
        {
        case 1:
            Prison ::SetData();
            break;
        case 2:
            Prison ::Details();
            break;
        case 3:
            Prison ::Attendance();
            break;
        case 4:
            Prison ::Release();
            break;
        case 5:
            Prison ::SearchPrison();
            break;
        case 6:
            Prison::PrisonFile();
            break;
        case 7:
            Prison::Logout();
            break;
        case 8:
            Prison::Exit();
            break;
        default:
            cout << "\n\t\t\t\tInvalid choice\n";
            cout << "\t\t\t\tPress 1 to return : ";
            cin >> v;
        }
    } while (v == 1);
}

void Prison ::Exit()
{
    system("cls");
    Time();
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    cout << "Thank you!!";
    cout << "\n\n\n\n\n\n\t\t\t\t\t\t";
    getch();
}

void Date()
{
    time_t T = time(NULL);
    struct tm tm = *localtime(&T);
    cout << "\n\n\n";
    cout << "\t\t\t\t\t   Date: " << tm.tm_mday << "/" << tm.tm_mon + 1 << "/" << tm.tm_year + 1900 << endl;
}

void Time()
{
    time_t curr_time;
    curr_time = time(NULL);

    tm *tm_local = localtime(&curr_time);
    cout << "Time : " << tm_local->tm_hour << ":" << tm_local->tm_min << ":" << tm_local->tm_sec << endl;
}

void FrontPage()
{
    int process = 0;
    system("cls");
    Time();
    Date();
    cout << endl;
    int a;
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    |   PRISON STATION MANAGEMENT SYSTEM   |\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "\t\t\t\t    ----------------------------------------\n";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << endl<<endl;
    cout << "\t\t\t\t";
    for (a = 0; a <= 100000000; a++)
    {
    }
   
    cout << "Mini Project   ";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << ":";
    for (a = 0; a <= 100000000; a++)
    {
    }
    cout << "   Prison Management System";
    cout << endl<<endl;
    cout << "\t\t\t\t";
    cout << endl<<endl;
    cout << "\t\t\t\t";
    cout<<"Major Contributers:"<<endl;
    cout << "\t\t\t\t Binay Shrestha(790403)";
    cout << "\t\t\t\tPratistha Prajapati(790413)";
    cout << "\t\t\t\tRajeev Suwal(790414)";
     cout << endl<<endl;
    cout << "\t\t\t\t";
    cout << endl<<endl;
    cout << "\t\t\t\t";
    system("pause");
    cout << "\n\t\t\t\tLoading";

    for (process = 0; process < 15; process++)
    {
        for (int a = 0; a <= 100000000; a++)
        {
        }
        cout << ".";
    }
}

int main()
{
    Prison a;

    FrontPage();
    a.Login();
    return 0;
}
