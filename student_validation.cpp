//validates whether a student can proceed to the next program
#include <iostream>
using namespace std;

int main()
{

    int programsDone, result;
    programsDone = 0;
    result = 0;

    while(result < 50 && programsDone < 5)
    {
        cout << "Enter the result: ";
        cin >> result;
        cout << "Enter the number of programs completed: ";
        cin >> programsDone;
    }

    cout << "Good! You can now proceed to the next exercise" << endl;


    return 0;

}
