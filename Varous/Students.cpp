#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name, gender;
    int id, birthday, score;

    void getName()
    {
        getline(cin, name);
    }
    void getId()
    {
        cin >> id;
    }
    void getBirthDate()
    {
        cin >> birthday;
    }
    void getGender()
    {
        cin.ignore();
        getline(cin, gender);
    }
    void getScore()
    {
        cin >> score;
    }
};

int main()

{

    Student st[20];
    Student maximum;
    Student minimum;
    Student young;
    int i;


    for (i = 0; i < 3; i++) {
        cout << "Student " << i + 1 << endl
             << endl;

        cout << "Enter Name : ";
        st[i].getName();

        cout << "Enter Id : ";
        st[i].getId();

        cout << "Enter Birthday(e.g. 20) : ";
        st[i].getBirthDate();

        cout << "Enter Gender : ";
        st[i].getGender();

        cout << "Enter Score : ";
        st[i].getScore();

        cout << endl
             << endl;
        cin.ignore();
    }

    int minAge = 100;
    int maxScore = -1;
    int minScore = 1000;
    int femaleCount = 0;



    for (i = 0; i < 3; i++) {
        cout << endl
             << endl;

        if (st[i].gender == "F" || st[i].gender == "f") {
            femaleCount++;
        }

        if (maxScore <= st[i].score) {
            maxScore = st[i].score;
            maximum = st[i];
        }

        if (minScore >= st[i].score) {
            minScore = st[i].score;
            minimum = st[i];
        }
        if (minAge >= st[i].birthday) {
            minAge = st[i].birthday;
            young = st[i];
        }
    }
    cout << endl;

    cout << "\t\t\tInfo Of Youngest Student " << endl;
    cout << "\t\t\t________________________" << endl
         << endl;
    cout << "\t\t\t\tName: " << young.name << endl;
    cout << "\t\t\t\tID: " << young.id << endl;
    cout << "\t\t\t\tBirthday: " << young.birthday << endl;
    cout << "\t\t\t\tGender: " << young.gender << endl;
    cout << "\t\t\t\tScore: " << young.score << endl
         << endl;


    cout << "\t\t\tStudent with Highest Score: " << endl;
    cout << "\t\t\t________________________" << endl
         << endl;
    cout << "\t\t\t\tName: " << maximum.name << endl;
    cout << "\t\t\t\tID: " << maximum.id << endl;
    cout << "\t\t\t\tBirthday: " << maximum.birthday << endl;
    cout << "\t\t\t\tGender: " << maximum.gender << endl;
    cout << "\t\t\t\tScore: " << maximum.score << endl
         << endl;

    cout << "\t\t\tStudent with Lower  Score: " << endl;
    cout << "\t\t\t________________________" << endl
         << endl;
    cout << "\t\t\t\tName: " << minimum.name << endl;
    cout << "\t\t\t\tID: " << minimum.id << endl;
    cout << "\t\t\t\tBirthday: " << minimum.birthday << endl;
    cout << "\t\t\t\tGender: " << minimum.gender << endl;
    cout << "\t\t\t\tScore: " << minimum.score << endl
         << endl;


    cout << "\t\t\tTotal Females in the class: " << femaleCount << endl
         << endl;

    return 0;
}
