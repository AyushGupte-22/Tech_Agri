#include <iostream>
using namespace std;
int main()
{
    int choice, sum = 0;
    switch (1)
    {
    case 1:
        cout << "Q.1 Which of the following corresponds to 'ek bataa do'?\n";
        cout << "1.Purva\n2.Sawa\n3.Adha\n4.Pauna\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 3)
        {
            sum += 1000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 2:
        cout << "Q.2 Which of the following gods is also known as ;Gauri Nandan'?\n";
        cout << "1.Agni\n2.Indra\n3.Hanuman\n4.Ganesha\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 4)
        {
            sum += 2000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 3:
        cout << "Q.3 In the game of ludo the discs or tokens are of how many colours?\n";
        cout << "1. One\n2.Two\n3.Three\n4.Four\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 4)
        {
            sum += 3000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 4:
        cout << "Q.4 Which of these are names of national parks located in Madhya Pradesh?\n";
        cout << "1.Krishna and Kanhaiya\n2.Kanha and Madhav\n3.Ghanshyam and Murar\n4.Girdhar and Gopal\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 2)
        {
            sum += 5000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 5:
        cout << "Q.5 Where was the BRICS summit held in 2014?\n";
        cout << "1.Brazil\n2.India\n3.Russia\n4.China\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 1)
        {
            sum += 10000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 6:
        cout << "Q.6 Who wrote the introduction to the English translation of Rabindranath Tagore's Gitanjali?\n";
        cout << "1.P.B. Shelley\n2.Alfred Tennyson\n3.W.B. Yeats\n4.T.S. Elliot\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 3)
        {
            sum += 20000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 7:
        cout << "Q.7 Which of these leaders was a recipient of a gallantry award in 1987 by a state government for saving two girls from drowning?\n";
        cout << "1.Anandiben Patel\n2.Vasundhara Raje Scindia\n3.Uma Bharti\n4.Mamata Banerjee\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 1)
        {
            sum += 40000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 8:
        cout << "Q.8 The wife of which of these famous sports persons was once captain of Indian volleyball team?\n";
        cout << "1.K.D.Jadav\n2.Dhyan Chand\n3.Prakash Padukone\n4.Milkha Singh\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 4)
        {
            sum += 80000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 9:
        cout << "Q.9 Which of these terms can only be used for women?\n";
        cout << "1.Dirghaayu\n2.Suhagan\n3.Chiranjeevi\n4.Sushil\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 2)
        {
            sum += 160000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    case 10:
        cout << "Q.10 Which Of These Grand Slam Tennis Tournaments Was Not Played In 2020?\n";
        cout << "1.French Open\n2.US Open\n3.Wimbledon Championships\n4.Australian Open\n";
        cout << "Your choice(index) : ";
        cin >> choice;
        if (choice == 3)
        {
            sum += 320000;
            cout << "Right answer.\n\n";
        }
        else
        {
            cout << "Wrong answer.\n\n";
            break;
        }
    }
    cout << "You won Rs. " << sum;
    return 0;
}