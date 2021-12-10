#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "[---------- char 문자열 ----------]" << endl;

    char myCh1[] = "my string";
    char myCh2[20];

    cout << "* - 글자 개수: " << strlen(myCh1) << endl;
    cout << "* - 사이즈: " << sizeof myCh1 << endl;


    strcpy(myCh2, myCh1);

    cout << "* - 원본 : " << myCh1 << endl;
    cout << "* - 사본 : " << myCh2 << endl;

    cout << "* - 합친 것 : " << strcat(myCh1, " [plus something]") << endl;
    
    char s[10] = "aaaa";
    //myCh1 = "test";
    char myCh3[15] = "char array";

    cout << "* - 글자수 myCh1 : " << strlen(myCh3) << endl;
    cout << "* - Byte  myCh1 : " << sizeof myCh3 << endl;


    cout << endl << "[---------- string 객체 ----------]" << endl;

    string myStr1 = "Smoothie Coding";
    string myStr2;


    cout << "@ - string 객체 myStr1 : " << myStr1 << endl;

    myStr1 += " -> upgrade your code";

    cout << "@ - string 객체 myStr1 : " << myStr1 << endl;


    myStr2 = myStr1;
    cout << "@ - string 객체 myStr2 : " << myStr2 << endl;

    cout << "@ - 주소 myStr1 : " << &myStr1 << ", @ - 주소 myStr2 : " << &myStr2 << endl;

    // cout << strlen(myStr1);
    // cout << strcpy(myStr1, myStr2);
    // strcat(myStr1, " plus something");

    // 문자열 재할당
    myStr1 = "Hello";
    cout << "@ - 글자수 myStr1 : " << myStr1.size() << endl;

    return 0;
}
