#include <iostream>
#include <string>
using namespace std;

// Function to read a 3-letter password from the user
string readPassword()
{
    string pass;
    cout << "Enter the password (3 capital letters): ";
    cin >> pass;
    return pass;
}

// Function to brute-force guess the password
void checkPasswordMatching(string pass)
{
    int counter = 0;

    // Loop through all combinations from 'A' to 'Z' for 3 letters
    for (char i = 'A'; i <= 'Z'; i++)
    {
        for (char j = 'A'; j <= 'Z'; j++)
        {
            for (char k = 'A'; k <= 'Z'; k++)
            {
                counter++; // Increase trial count

                // Build the current guess
                string trial = "";
                trial += i;
                trial += j;
                trial += k;

                // Print the current guess
                cout << "Trial [" << counter << "]: " << trial << "\n";

                // Check if the guess matches the actual password
                if (trial == pass)
                {
                    cout << "\n✅ Password matched: " << trial << endl;
                    cout << "🔁 Found after " << counter << " trial(s).\n";
                    return; // Stop once matched
                }
            }
        }
    }

    // If not found (in case of invalid input)
    cout << "\n❌ Password not found.\n";
}

// Main function
int main()
{
    string password = readPassword(); 
    checkPasswordMatching(password);  
    return 0;
}
