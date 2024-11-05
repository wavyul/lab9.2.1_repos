#include "pch.h"
#include "CppUnitTest.h"
#include "../LB9.2.1/main.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int x, y, z, w;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMacroFunctionality)
        {
            int x = 5, y = 8, z = 10;
            int w;

            w = MIN((x * y) + (y * Z), SQR((Z * x) + (y * Z)));
            Assert::AreEqual(56, w);

            w = MAX(SQR(x + y), SQR(x - Z));
            Assert::AreEqual(169, w);
        }
    };
}
