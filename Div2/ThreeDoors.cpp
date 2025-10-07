#include<bits/stdc++.h>
using namespace std;

// Function to check if we can open all doors
// Parameters: x = key in hand, a = key behind door 1, b = key behind door 2, c = key behind door 3
bool canOpenAllDoors(int x, int a, int b, int c) {
    
    // Create a vector of size 4 with all values initialized to false
    // Index 0 is unused, indices 1,2,3 represent doors 1,2,3
    // opened[i] = true means door i is opened, false means it's still locked
    vector<bool> opened(4, false);
    
    // Create a vector of size 4 to store which key is behind each door
    // Index 0 is unused, indices 1,2,3 represent doors 1,2,3
    vector<int> keyBehind(4);
    
    // Store the key behind door 1 (value of 'a')
    keyBehind[1] = a;
    
    // Store the key behind door 2 (value of 'b')
    keyBehind[2] = b;
    
    // Store the key behind door 3 (value of 'c')
    // keyBehind[3] = c;
    
    // Variable to track which key we currently have in our hand
    // Initially, we have key 'x'
    int currentKey = x;
    
    // Loop continues while two conditions are true:
    // 1. currentKey != 0 (we have a key, not empty handed)
    // 2. !opened[currentKey] (the door matching our key is not yet opened)
    while (currentKey != 0 && !opened[currentKey]) {
        
        // Mark the door matching our current key as opened
        // Example: if currentKey = 3, then opened[3] = true (door 3 is now open)
        opened[currentKey] = true;
        
        // Get the key that was behind the door we just opened
        // Example: if we opened door 3, get keyBehind[3]
        int nextKey = keyBehind[currentKey];
        
        // Update currentKey to the key we just found
        // This becomes our new key in hand for the next iteration
        // If nextKey = 0, it means there was no key behind that door
        currentKey = nextKey;
    }
    // Loop ends when either:
    // - currentKey becomes 0 (no more keys to use), OR
    // - We try to open a door that's already opened (would create infinite loop)
    
    // Return true if ALL three doors are opened (door 1 AND door 2 AND door 3)
    // Return false if any door is still locked
    return opened[1] && opened[2] && opened[3];
}

// Main function - program execution starts here
int main() {
    
    // Declare variable 't' to store the number of test cases
    int t;
    
    // Read the number of test cases from input
    cin >> t;
    
    // Loop through each test case
    // t-- means: use current value of t, then decrease t by 1
    // Loop continues until t becomes 0
    while (t--) {
        
        // Declare variable to store the key we start with
        int x;
        
        // Read the starting key number from input
        cin >> x;
        
        // Declare variables for keys behind each door
        int a, b, c;
        
        // Read three numbers: key behind door 1, door 2, and door 3
        // If a door has no key behind it, the value will be 0
        cin >> a >> b >> c;
        
        // Call the function to check if we can open all doors
        // If function returns true, execute the if block
        if (canOpenAllDoors(x, a, b, c)) {
            
            // Print "YES" and move to new line (endl)
            cout << "YES" << endl;
            
        } else {
            // If function returns false, execute the else block
            
            // Print "NO" and move to new line
            cout << "NO" << endl;
        }
    }
    
    // Return 0 to indicate successful program completion
    return 0;
}