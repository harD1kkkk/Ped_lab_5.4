#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.4/lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        
        TEST_METHOD(TestMethod1)
        {
            const int K = 1;
            const int N = 3;
            double expactation = P0(K, N);
            double expected_result = 0.0152712;
            double epsilon = 1e-6;  
            Assert::IsTrue(abs(expactation - expected_result) < epsilon);
        }
        
        TEST_METHOD(TestMethod2)
        {
            const int K = 1;
            const int N = 3;
            double expactation = P1(K, N, K);
            double expected_result = 0.0152712;
            double epsilon = 1e-6;  
            Assert::IsTrue(abs(expactation - expected_result) < epsilon);
        }
        
        TEST_METHOD(TestMethod3)
        {
            const int K = 1;
            const int N = 3;
            double expactation = P3(K, N, K, 1.0);
            double expected_result = 0.0152712;
            double epsilon = 1e-6;  
            Assert::IsTrue(abs(expactation - expected_result) < epsilon);
        }
        
        TEST_METHOD(TestMethod4)
        {
            const int K = 1;
            const int N = 3;
            double expactation = P4(K, N, N, 1.0);
            double expected_result = 0.0152712;
            double epsilon = 1e-6;  
            Assert::IsTrue(abs(expactation - expected_result) < epsilon);
        }
    };
}
