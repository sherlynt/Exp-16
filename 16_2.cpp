#include <iostream>
using namespace std;

int main() {
    int weight;
    cout << "Enter weight: ";  
    cin >> weight;            
    try {
        if (weight > 50) {    
            throw weight;      
        } else {
            cout << "Weight: " << weight << "\n APPROVED" << endl;
        }
    }
    catch (int a) {         
        cout << "\n ERROR: Overweight! (" << weight << ")" << endl;  
    }
}
