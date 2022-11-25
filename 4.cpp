#include <iostream>
#include <iomanip>

using namespace std;

struct Student {
    string name, major;
    int generation, nim;
};

Student student[20];

void line(){
    cout << setfill('=') << setw(30) << "" << endl;
}

void miniLine(){
    cout << setfill('-') << setw(30) << "" << endl;
}

void swap(Student &student1, Student &student2){
    Student temp;
    temp = student1;
    student1 = student2;
    student2 = temp;
}

void space(){
    cout << endl << endl;
}

int get(){
    system("cls");
    int n;

    line();
    cout << "       Student Database" << endl;
    line();

    cout << "How many student : "; 
    cin >> n;
    miniLine();

    for (int i = 1; i <= n; i++){
        cout << "Student " << i << endl;
        cout << "Name       : "; 
        cin >> student[i].name;
        cout << "NIM        : "; 
        cin >> student[i].nim;
        cout << "generation : ";
        cin >> student[i].generation;
        cout << "Major      : ";
        cin >> student[i].major;
        miniLine(); 
    }

    return n;
}

void show(Student student[]){
    int total = get();   

    system("cls");

    line();
    cout << "  Students Before Get Sorted" << endl;
    line();

    for (int i = 1; i <= total; i++){
        cout << "Student " << i << endl;
        cout << "Name       : " << student[i].name << endl;
        cout << "NIM        : " << student[i].nim << endl;
        cout << "Generation : " << student[i].generation << endl;
        cout << "Major      : " << student[i].major << endl;
        miniLine();
    }

    space();

    line();
    cout << "   Students After Get Sorted" << endl;
    line();

    for (int i = 1; i < total; i++){
        for (int j = i + 1; j <= total; j++){
            if (student[i].nim > student[j].nim){
                swap(student[i], student[j]);
            }
        }
    }

     for (int i = 1; i <= total; i++){
        cout << "Student " << i << endl;
        cout << "Name       : " << student[i].name << endl;
        cout << "NIM        : " << student[i].nim << endl;
        cout << "Generation : " << student[i].generation << endl;
        cout << "Major      : " << student[i].major << endl;
        miniLine();
    }
}

int main(){
    show(student);
}