#include <iostream>
#include <iterator>
#include <delay.h>
#include <reverse.h>
#include <echo.h>
#include <effect.h>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace std;

void testDelay()
{

    string strToTest("Hello World Hello1 World1");

    istringstream iss(strToTest);

    vector<string> myVector;

    copy(istream_iterator<string>(iss),
         istream_iterator<string>(),
         back_inserter(myVector));

    /*
    for(vector<string>::iterator it = myVector.begin(); it != myVector.end(); ++it)
    {
        cout << *it << endl;
    }
    */

    Effect *myEcho = new Echo();

    myEcho->processEffect(myVector);

    delete myEcho;
}

int main()
{
    testDelay();
    return 0;
}

