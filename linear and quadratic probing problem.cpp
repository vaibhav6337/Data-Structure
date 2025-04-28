#include<iostream>
using namespace std;

const int MAX = 100;
int empkey[MAX];   // Store telephone numbers
int hsize, n;
int* htLinear;     // For Linear Probing
int* htQuadratic;  // For Quadratic Probing

void initializeTables() {
    htLinear = new int[hsize];
    htQuadratic = new int[hsize];

    for (int i = 0; i < hsize; i++) {
        htLinear[i] = -1;
        htQuadratic[i] = -1;
    }
}

void insertLinear(int key) {
    int index = key % hsize;
    int i = 0;

    while (htLinear[(index + i) % hsize] != -1 && i < hsize) {
        i++;
    }
    if (i == hsize) {
        cout << "\nHash table (Linear) is full. Cannot insert " << key << endl;
    } else {
        htLinear[(index + i) % hsize] = key;
    }
}

void insertQuadratic(int key) {
    int index = key % hsize;
    int i = 0;

    while (htQuadratic[(index + i*i) % hsize] != -1 && i < hsize) {
        i++;
    }
    if (i == hsize) {
        cout << "\nHash table (Quadratic) is full. Cannot insert " << key << endl;
    } else {
        htQuadratic[(index + i*i) % hsize] = key;
    }
}

int searchLinear(int key) {
    int index = key % hsize;
    int i = 0;
    int comparisons = 1; // First comparison

    while (htLinear[(index + i) % hsize] != key) {
        i++;
        comparisons++;
        if (htLinear[(index + i) % hsize] == -1 || comparisons > hsize) {
            return -1;  // Not found
        }
    }
    return comparisons;
}

int searchQuadratic(int key) {
    int index = key % hsize;
    int i = 0;
    int comparisons = 1; // First comparison

    while (htQuadratic[(index + i*i) % hsize] != key) {
        i++;
        comparisons++;
        if (htQuadratic[(index + i*i) % hsize] == -1 || comparisons > hsize) {
            return -1;  // Not found
        }
    }
    return comparisons;
}

void displayTable(int* ht) {
    for (int i = 0; i < hsize; i++) {
        cout << "Index " << i << ": ";
        if (ht[i] != -1) {
            cout << ht[i] << endl;
        } else {
            cout << "Empty" << endl;
        }
    }
}

int main() {
    cout << "Enter the size of hash table: ";
    cin >> hsize;
    cout << "Enter number of clients: ";
    cin >> n;

    cout << "\nEnter telephone numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> empkey[i];
    }

    initializeTables();

    // Insert into both hash tables
    for (int i = 0; i < n; i++) {
        insertLinear(empkey[i]);
        insertQuadratic(empkey[i]);
    }

    cout << "\nHash Table with Linear Probing:\n";
    displayTable(htLinear);

    cout << "\nHash Table with Quadratic Probing:\n";
    displayTable(htQuadratic);

    // Now search telephone numbers
    char choice;
    do {
        int searchKey;
        cout << "\nEnter telephone number to search: ";
        cin >> searchKey;

        int compLinear = searchLinear(searchKey);
        int compQuadratic = searchQuadratic(searchKey);

        if (compLinear != -1)
            cout << "Found in Linear Probing with " << compLinear << " comparisons.\n";
        else
            cout << "Not found in Linear Probing.\n";

        if (compQuadratic != -1)
            cout << "Found in Quadratic Probing with " << compQuadratic << " comparisons.\n";
        else
            cout << "Not found in Quadratic Probing.\n";

        cout << "\nDo you want to search another telephone number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    // Free memory
    delete[] htLinear;
    delete[] htQuadratic;

    return 0;
}

