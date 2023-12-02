#include <iostream>
using namespace std;

int main()
{
    cout << "DNS Resolver" << endl;

    // Predefined mapping between URL and IP address
    const char *url1 = "www.example.com";
    const char *ip1 = "192.168.1.1";

    const char *url2 = "www.google.com";
    const char *ip2 = "172.217.168.78";

    // Get user input
    cout << "Enter URL: ";
    string userInput;
    cin >> userInput;

    // Check user input against predefined mappings
    if (userInput == url1)
    {
        cout << "IP Address: " << ip1 << endl;
    }
    else if (userInput == url2)
    {
        cout << "IP Address: " << ip2 << endl;
    }
    else
    {
        cout << "URL not found in the mapping." << endl;
    }

    return 0;
}
