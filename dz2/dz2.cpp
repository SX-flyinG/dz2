#include <iostream>

using namespace std;

int main() {
    int result{ 0 };
    float count{ 0 };  

    cout << "Have you ever used Git for version control?\n[0] - NO \n[1] - YES" << endl; // quest1
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }
    else if (result == 0) {
        cout << "Sorry but u must used git to version control\nBye bye." << endl;
        return 0;
    }

    cout << "Do you prefer Python over JavaScript?\n[0] - NO \n[1] - YES" << endl; // quest2
    cin >> result;

    if (result == 1) {
        count += 1;
    }
    else if (result == 0) {
        cout << "Ok , go to next question" << endl;
    }

    cout << "Have you ever worked with NoSQL databases like MongoDB?\n[0] - NO \n[1] - YES" << endl; // quets 3 
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }

    else if (result == 0) {
        cout << "Nice , so go to next question" << endl;
        count += 0.5;
    }

    cout << "Have you ever written automated tests for your code?\n[0] - NO \n[1] - YES" << endl; // quest 4
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }

    else if (result == 0) {
        cout << "Its quite bad but ok we'll try to teach you.\n Lets go to  next quetion" << endl;
    }

    cout << "Have you ever worked with machine learning algorithms?\n[0] - NO \n[1] - YES" << endl; // quest 5 
    cin >> result;

    if (result == 1) {
        count += 1;
        cout << "Its not important for our job but its good\n Lets go to  next quetion" << endl;
    }

    else if (result == 0) {
        count += 0.5;
        cout << "You mustnt know this to get his job but it was better if you know machine learning algoritms.\nSo go to  next quetion" << endl;
    }

    cout << "Have you ever written code in Go or Rust?\n[0] - NO \n[1] - YES" << endl; // quest 6
    cin >> result;

    if (result == 1) {
        count += 1;
        cout << "Its not important too , bu its good if you know more languages then other.\n Lets go to  next quetion" << endl;
    }

    else if (result == 0) {
        count += 0.5;
        cout << "You mustnt know this to get his job but it was better if you know Go or Rust.\nSo go to  next quetion" << endl;
    }

    cout << "Have you ever used Docker for containerization?\n[0] - NO \n[1] - YES" << endl; // quest7
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }
    else if (result == 0) {
        if (count >= 4) {
            cout << "Its quite bad but you have a good results before so we can try to teach you.\nSo  go to next question" << endl;
        }
        else {
            cout << "Sorry but we cant give you this job.\nBye bye." << endl;
            return 0;
        }
    }

    cout << "Have you ever used Jenkins for continuous integration?\n[0] - NO \n[1] - YES" << endl; // quest8
    cin >> result;

    if (result == 1) {
        count += 1;
    }
    else if (result == 0) {
        cout << "Ok , go to next question" << endl;
    }

    cout << "Have you ever developed a mobile application?\n[0] - NO \n[1] - YES" << endl; // quest9
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }

    else if (result == 0) {
        cout << "U try to get a job how a mobile developer but had never developed mobile application?\nBye bye" << endl;
        return 0;
    }

    cout << "Have you ever deployed an application to a cloud platform like AWS?\n[0] - NO \n[1] - YES" << endl; // quest10
    cin >> result;

    if (result == 1) {
        cout << "Nice , so go to next question" << endl;
        count += 1;
    }

    else if (result == 0) {
        cout << "Its quite bad but ok we'll try to teach you.\n Lets go to  next quetion" << endl;
    }

    cout << "Have you ever used Jenkins for continuous integration?\n[0] - NO \n[1] - YES" << endl; // quest11 
    cin >> result;

    if (result == 1) {
        count += 1;
        cout << "Its not important for our job but its good\n Lets go to  next quetion" << endl;
    }

    else if (result == 0) {
        count += 0.5;
        cout << "You mustnt know this to get his job but it was better if you know machine learning algoritms.\nSo go to  next quetion" << endl;
    }

    cout << "Have you ever written code in Meowlang?" << endl; // quest12
    cin >> result;

    if (result == 1) {
        count += 1;
        cout << "Its not a seriously question but ok." << endl;
    }

    else if (result == 0) {
        count += 0.5;
        cout << "Maybe u understand that this isnt seriously question." << endl;
    }

    if (count >= 8.5) {
        cout << "Ok we think that u are perfect persone for this job. You have : "<< count << "/12" << endl;
    }
    else {
        cout << "Sorry but u cant get this job because you have only : " << count << "/12" << endl;
    }
    return 0;
}
