#include <bits/stdc++.h>

using namespace std;

int meanofarray(vector <int> arr) {
    double mean {0};

    for(auto val: arr) {
        mean += val;
    }
    return static_cast <double>(mean / arr.size());
}

void printarray(vector <int> arr) {
    for(auto val: arr) {
        cout << val << " ";
    }
    cout << endl;
}

int main(){

    vector <int> numbers {5, 9, 10, 21, 15, 1};

    char choice;
    int num;
    do {

        cout << "\nP-Print numbers." << endl;
        cout << "A-Add numbers." << endl;
        cout << "M-Display mean of numbers." << endl;
        cout << "S-Display smallest of numbers." << endl;
        cout << "L-Display largest of numbers." << endl;
        cout << "Q-Quit." << endl;

        cout << "\nEnter your choice : ";
        cin >> choice;

        if(choice == 'P' || choice == 'p') {
            if(numbers.size() > 0) {
                printarray(numbers);
            }else {
                cout << "[] - array is empty" << endl;
            }
        }else if(choice == 'A' || choice == 'a') {
            cout << "Enter a number : ";
            cin >> num;

            numbers.push_back(num);

            cout << num << " is added" << endl;
        }else if(choice == 'M' || choice == 'm') {
            if(numbers.size() > 0) {
                cout << meanofarray(numbers) << endl;
            }else {
                cout << "Unable to find the mean value - no data" << endl;
            }
        }else if(choice == 'S' || choice == 's') {
            if(numbers.size() > 0) {
                cout << *min_element(numbers.begin(), numbers.end()) << endl;
            }else {
                cout << "Unable to determine the smallest number - no data in the list" << endl;
            }
        }else if(choice == 'L' || choice == 'l') {
            if(numbers.size() > 0) {
                cout << *max_element(numbers.begin(), numbers.end()) << endl;
            }else {
                cout << "Unable to determine the smallest number - no data in the list" << endl;
            }
        }

    }while(choice != 'q' && choice != 'Q');
        cout << "Goodbye" << endl;


    return 0;
}
