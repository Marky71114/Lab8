#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


char findGrade(double score) {
    if (score > 90) return 'A';
    else if (score > 75) return 'B';
    else if (score > 60) return 'C';
    else if (score > 45) return 'D';
    else return 'F';
}

int main() {
    int num;
    
    cout << "Enter the number of students: ";
    cin >> num;
    cin.ignore(); 

    string name[num];
    double score[num];

    for (int i = 0; i < num; i++) {
        
        cout << "Name of student " << i + 1 << ": ";
        getline(cin, name[i]);

        
        cout << "Score of student " << i + 1 << ": ";
        cin >> score[i];
        cin.ignore(); 
    }

    cout << "---------------------------------------------" << endl;
    cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << endl;
    cout << "---------------------------------------------" << endl;

    for (int i = 0; i < num; i++) {
        
        cout << setw(25) << name[i] 
             << setw(8) << score[i] 
             << setw(8) << findGrade(score[i]) << endl;
    }
    cout << "---------------------------------------------" << endl;

    return 0;
}