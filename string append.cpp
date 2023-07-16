#include <iostream>
#include <string>
using namespace std;
   
// Function to demonstrate append()
void appendDemo(string str1, string str2)
{
    // Appends str2 in str1
    str1.append(str2);
    cout << "Using append() : ";
    cout << str1 << endl;
}
   
// Driver code
int main()
{
    string str1("Hello World! ");
    string str2("GeeksforGeeks");
   
    cout << "Original String : " << str1 << endl;
    appendDemo(str1, str2);
   
    return 0;
}
