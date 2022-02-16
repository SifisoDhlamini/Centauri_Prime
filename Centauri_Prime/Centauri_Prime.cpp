// Centauri_Prime.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm> // for std::find
#include <iterator> // for std::begin, std::end

using namespace std;

string GetRuler(const string& kingdom) {
    // TODO: implement this method to determine the ruler name, given the kingdom.
    string ruler = "";
    char vowels[] = { 'a','e', 'i', 'o', 'u' };
    char last = tolower(kingdom[kingdom.size() - 1]);
    if (last == 'y' || kingdom == "") return "nobody";
    bool exists = std::find(std::begin(vowels), std::end(vowels), last) != std::end(vowels);

    ruler = (exists) ? "Alice" : "Bob";

    return ruler;
}

int main() {
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t) {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
            << GetRuler(kingdom) << ".\n";
    }
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
