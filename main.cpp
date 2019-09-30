#include <bits/stdc++.h>
#include <windows.h>

using namespace std;
struct DormSystem
{
    int ID;
    char Name[20];
    char FatherName[20];
    char Department[20];
    char Sex[6];
    int Age;
    int Block;
    int Year;
    int Dorm;
    int Bed;
};

void Register();
void listAll();
void deleteStudent();
void SearchIn();
void Exit();

ifstream inFile;

int main()
{

    string m;
    int choice;

    inFile.open("logo.txt");
    system("COLOR 03");

    cout << "\n\n\n";
    for (int i = 0; i < 22 ; i++)
    {
        getline(inFile, m);
        cout << "\t\t" << m << endl;
    }
    system("PAUSE");
    system("CLS");
    system("COLOR A");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tLoading ...\n\n\t\t\t\t";
    for (int i = 0; i < 120 ; i++)
    {
        Sleep(12);
        cout << (char)219;
        if ( 2*i % (i/10 + 1)  == 0)
            Sleep(60);
    }


    while (true)
    {

        do
        {
            system("CLS");
            system("COLOR 03");
            cout << endl;
            inFile.seekg(3107L, ios::beg);
            for (int i = 0 ; i < 3 ; i++)
            {
                getline(inFile, m);
                cout << "\t\t" << m << endl;
            }

            cout << "\n\n\n";
            cout << "\t\t\t\t\t\tPress 1 : To Register New Student." << endl
                 << "\t\t\t\t\t\tPress 2 : To Check Students Detail." << endl
                 << "\t\t\t\t\t\tPress 3 : To Search Specific Student Data." << endl
                 << "\t\t\t\t\t\tPress 4 : To Delete Student Data." << endl
                 << "\t\t\t\t\t\tPress 0 : To Exit.\n\n\n";
            cout << "\n\t\tPlease Enter Your Choice >>>>> ";
            cin >> choice;

            switch(choice)
            {
            case 1 :
                Register();
                break;
            case 2 :
                listAll();
                break;
            case 4 :
                deleteStudent();
                break;
            case 3 :
                SearchIn();
                break;
            case 0 :
                Exit();
                break;
            default :
                system("COLOR 4");
                cout << "\n\n\n\t\t\tPlease Enter Valid Number";
                Sleep(1500);
                system("COLOR 03");
                system("CLS");
                break;
            }
        }
        while (choice < 1 || choice > 5);
    }
    inFile.close();
    return 0;
}
void Register()
{
    int numOfStudents;
    string Data;

    DormSystem TafWon[10000];
    system("CLS");
    cout << "\n\n\t\tHow Many Student(s) Do You Want To Register? ";
    cin >> numOfStudents;

    for (int i = 0; i < numOfStudents ; i++)
    {
        cout << "\tEnter ID : ";
        cin >> TafWon[i].ID
        cout << "\tEnter Name : ";
        cin >> TafWon[i].Name;
        cout << "\tEnter Father Name : ";
        cin >> TafWon[i].FatherName;
        cout << "\tEnter Age : ";
        cin >> TafWon[i].Age;
        cout << "\tEnter Sex(M/F) : ";
        cin >> TafWon[i].Sex;
        cout << "\tEnter Year : ";
        cin >> TafWon[i].Year;
        cout << "\tEnter Department : ";
        cin >> TafWon[i].Department;
        cout << "\tEnter Block Number : ";
        cin >> TafWon[i].Block;
        cout << "\tEnter Dorm Number : ";
        cin >> TafWon[i].Dorm;
        cout << "\tEnter Bed Number : ";
        cin >> TafWon[i].Bed;
    }
    ifstream MainFile;
    MainFile.open("Students List.rtf");

    if (MainFile.fail())
    {
        ofstream StartFile;
        StartFile.open("Students List.rtf", ios::out);
        StartFile << "  ID   NAME       FATHER NAME   AGE   SEX   YAER DEPART  BLOCK  DORM  BED" <<endl;
        StartFile << "------------------------------------------------------------------------- " << endl;
        StartFile.close();

    }
    MainFile.close();

    ofstream File;

    File.open("Students List.rtf", ios::app);

    for (int i = 0; i < numOfStudents; i++)
    {
        File << left;

        File << setw(6) << TafWon[i].ID << setw(14) << TafWon[i].Name << setw(12) << TafWon[i].FatherName << setw(3)
             << TafWon[i].Age  << "  " << setw(6) << TafWon[i].Sex <<"  " << setw(4) << TafWon[i].Year;

        File <<" " << setw(7) << TafWon[i].Department  << " " << setw(7) << TafWon[i].Block
             << setw(5) << TafWon[i].Dorm  << " "  << setw(3) <<TafWon[i].Bed << endl;
    }

    File.close();
    system("CLS");
    cout << endl <<"\n\n\n\n";

    cout << "\t\t  __        __  __   __   __   __   __                        __   __   __  \"  __  ___  __  __  ___\n"
         << "\t\t |__  |  | |   |    |__  |__  |__  |__  |  | |   |   \\ /     |__| |__  |  _ | |__   |  |__ |__| |  \\\n"
         << "\t\t  __| |__| |__ |__  |__   __|  __| |    |__| |__ |__  |      | \\  |__  |__| |  __|  |  |__ | \\  |__/\n\n\n" <<endl;
    system("PAUSE");
    system("CLS");
}

void listAll()
{
    system("CLS");
    system("COLOR A");
    cout << "\n\n\t\tLoading ...\n\t\t\t";
    string Data;
    for (int i = 0; i < 100 ; i++)
    {
        Sleep(12);
        cout << (char)220;
    }
    system("COLOR 03");
    system("CLS");
    ifstream read;
    read.open("students list.rtf");
    if (read.fail())
    {
        cout <<"\n\n\n\n";
        cout << "\t\t\t\t  __ ___      __    ___   __   __  __         ___    __       *  __ ___ \n"
             << "\t\t\t\t |__  |  |   |__    |  \\ |  | |__ |__  |\\ | \"  |    |__ \\ /  | |__   |  \n"
             << "\t\t\t\t |   _|_ |__ |__    |__/ |__| |__  __| | \\|    |    |__ / \\  |  __|  |  \n\n\n" << endl;


        system("PAUSE");
        return;
    }
    while (read.good())
    {
        getline(read, Data);
        cout << "\t\t\t" << Data <<endl;
    }
    Sleep(3);
    system("PAUSE");
    read.close();
}

void deleteStudent()
{
    ifstream del;
    ofstream temp;
    string lists, ID,userID;
    bool  Found = false;
    system("CLS");
    cout <<"\n\n\t\t\tEnter ID Number Which You Are Going To Delete : ";
    cin >> userID;
    del.open("students list.rtf");
    temp.open("list.rtf");

    while (del.good())
    {

        del >> ID;;
        getline(del, lists);
        if (ID  == userID && ID != "ID")
        {
            Found = true;
            continue;
        }
        else if (ID == "ID")
            temp << "  ID   NAME       FATHER NAME   AGE   SEX   YAER DEPART  BLOCK  DORM  BED" <<endl;
        else if (!del.eof())
            temp << ID << lists << endl;
    }
    del.close();
    temp.close();
    remove("Students list.rtf");
    rename("list.rtf", "Students list.rtf");
    system("CLS");

    cout << endl <<"\n\n\n\n";
    if (Found)
    {
        cout << "\t\t\t\t  __        __  __   __   __   __   __                       ___    __       __      __ ___  __  __ \n"
             << "\t\t\t\t |__  |  | |   |    |__  |__  |__  |__  |  | |   |   \\ /     |  \\  |__  |   |__ |   |__  |  |__  |  \\\n"
             << "\t\t\t\t  __| |__| |__ |__  |__   __|  __| |    |__| |__ |__  |      |__/  |__  |__ |__ |__ |__  |  |__  |__/\n\n\n" <<endl;
    }
    else
        cout << "\t\t       __   __   __   ___   __   __  __         ___    __      *  __ ___ \n"
             << "\t\t |  | |__  |__  |__|  |  \\ |  | |__ |__  |\\ | \"  |    |__ \\ /  | |__  |  \n"
             << "\t\t |__|  __| |__  | \\   |__/ |__| |__  __| | \\|    |    |__ / \\  |  __| |  \n\n\n" << endl;

    system("PAUSE");

    return;
}

void SearchIn()
{
    string userID, ID, result;

    ifstream  checked;
    checked.open("Students list.rtf");
    system("CLS");
    cout << "\n\n\n\t\t\tPlease Enter User ID : ";
    cin >> userID;
    cout << "\n\n\n";
    while (checked.good())
    {

        checked >> ID;
        getline(checked, result);
        if (ID == userID)
        {
            cout << "\t\tResult : \n\n";
            cout << "\t\t\t  ID   NAME       FATHER NAME   AGE   SEX   YAER DEPART  BLOCK  DORM  BED" <<endl;
            cout << "\t\t\t------------------------------------------------------------------------- " << endl;
            cout << "\t\t\t" <<ID  <<  result << endl <<endl << endl;
            system("PAUSE");
            return;
        }
    }
    cout << "\t\t       __   __   __   ___   __   __  __         ___    __      *  __ ___ \n"
         << "\t\t |  | |__  |__  |__|  |  \\ |  | |__ |__  |\\ | \"  |    |__ \\ /  | |__  |  \n"
         << "\t\t |__|  __| |__  | \\   |__/ |__| |__  __| | \\|    |    |__ / \\  |  __| |  \n\n\n" << endl;

    system("PAUSE");

    return;
}

void Exit()
{
    system("CLS");
    system("COLOR E");
    string m;
    cout << "\n\n\n";
    inFile.seekg(0L, ios::beg);

    for (int i = 0; i < 22 ; i++)
    {
        getline(inFile, m);
        cout << "\t\t" << m << endl;
    }
    exit(1);

}
