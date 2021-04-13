// ComCppCsTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "CallerAllocatedLib_h.h"

int main()
{
    if (FAILED(CoInitialize(nullptr))) {
        std::cout << "Failed to initialize COM\n";
    }

    IStuff *pStuff = nullptr;
    CLSID clsClass1 = { 0 };
    if (FAILED(CLSIDFromProgID(L"InProcTargetTest.Class1", &clsClass1))
        || FAILED(CoCreateInstance(clsClass1, nullptr, CLSCTX_INPROC_SERVER, IID_IStuff, (LPVOID*)&pStuff))) {
        std::cout << "Failed to create COM instance\n";
    }

    TCHAR test[10] = { 0 };
    pStuff->GetShortTest(5, true, test);

    std::cout << "From C#: " << test << "\n";
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
