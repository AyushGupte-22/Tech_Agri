#include <iostream>
using namespace std;

int main() {
    int score = 0;

    cout << "Welcome to KBC - Kaun Banega Crorepati!" << endl;

    for (int questionNumber = 1; questionNumber <= 10; questionNumber++) {
        cout << "\nQuestion " << questionNumber << ": ";

        int prize;
        switch (questionNumber) {
            case 1:
                prize = 10000;
                cout << "What is the capital of France?" << endl;
                cout << "A) London\nB) Paris\nC) Rome\nD) Berlin" << endl;
                char choice1;
                cin >> choice1;
                if (choice1 == 'B' || choice1 == 'b') {
                    cout << "Correct answer! You've won " << prize << " rupees!" << endl;
                    score += prize;
                } else {
                    cout << "Sorry, that's incorrect. The correct answer was B) Paris." << endl;
                    cout << "Game Over! Your final score: " << score << " rupees" << endl;
                    return 0;
                }
                break;

            case 2:
                prize = 20000;
                cout << "Which planet is known as the Red Planet?" << endl;
                cout << "A) Venus\nB) Mars\nC) Jupiter\nD) Saturn" << endl;
                char choice2;
                cin >> choice2;
                if (choice2 == 'B' || choice2 == 'b') {
                    cout << "Correct answer! You've won " << prize << " rupees!" << endl;
                    score += prize;
                } else {
                    cout << "Sorry, that's incorrect. The correct answer was B) Mars." << endl;
                    cout << "Game Over! Your final score: " << score << " rupees" << endl;
                    return 0;
                }
                break;

             case 3:
                    prize = 30000;
                    cout << "What is the capital of the United States of America?" << endl;
                    cout << "A) New York\nB) Chicago\nC) Washington\nD) Los Angeles" << endl;
                    char choice3;
                    cin >> choice3;
                     if (choice3 == 'C' || choice3 == 'c') {
                    cout << "Correct answer! You've won 30,000 rupees!" << endl;
                    score += 30000;
                }   else {
                    cout << "Sorry, that's incorrect. The correct answer was C) Washington." << endl;
                    cout << "Game Over! Your final score: " << score << " rupees" << endl;
                    return 0;
                }
                break;

                case 4:
                    prize = 40000;
                    cout<<"Who is the highest run scorer for Newzealand int he test?" <<endl;
                    cout<< "A) Kane Williamson\n B) Ross Taylor\n C) Brendon McCullum\n D)Stephen Fleming\n" << endl;
                    char choice4;
                    cin >> choice4;
                     if (choice4 == 'A' || choice4 == 'a') {
                    cout << "Correct answer! You've won 40,000 rupees!" << endl;
                    score += 40000;
                }   else {
                    cout << "Sorry, that's incorrect. The correct answer was A) Kane Williamson." << endl;
                    cout << "Game Over! Your final score: " << score << " rupees" << endl;
                    return 0;
                }
                break;

                case 5:
                prize = 50000;
                cout << "Which of the following is not a valid programming language?" << endl;
                cout << "A) Java\nB) C++\nC) Linux\nD) Python" << endl;
                char choice5;
                cin >> choice5;
                if (choice5 == 'C' || choice5 == 'c') {
                cout << "Correct answer! You've won 50,000 rupees!" << endl;
                    score += 50000;
                }   else {
                    cout << "Sorry, that's incorrect. The correct answer was C) Linux." << endl;
                    cout << "Game Over! Your final score: " << score << " rupees" << endl;
                    return 0;
                }
                break;

            default:
                cout << "Invalid question number." << endl;
                return 1;
        }

        cout << "Your current score: " << score << " rupees" << endl;
    }

    cout << "\nCongratulations! You've completed the game and won a total of " << score << " rupees!" << endl;

    return 0;
}
