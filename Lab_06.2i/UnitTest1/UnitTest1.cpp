#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.2i/Lab_06.2i.cpp"  // Замініть на правильний шлях до вашого файлу
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 5;
            int a[n] = { 4,5,2,-1,-6};

          
            int max = Max(a, n);
            Assert::AreEqual(max, 5);  

            
            int min = Min(a, n);
            Assert::AreEqual(min, -6);

           
        }
    };
}
