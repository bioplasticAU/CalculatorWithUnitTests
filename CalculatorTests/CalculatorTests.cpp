#include "pch.h"
#include "CppUnitTest.h"
#include "../Calculator/Calc.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
	TEST_CLASS(CalculatorTests)
	{
	public:
		
		TEST_METHOD(TestAddition)
		{
			Calc calc;
			// Act
			int result = calc.add(10, 5);
			// Assert
			Assert::AreEqual(15, result);
		}
		TEST_METHOD(TestSubtraction)
		{
			Calc calc;
			// Act
			int result = calc.subtract(10, 5);
			// Assert
			Assert::AreEqual(5, result);
		}
		TEST_METHOD(TestMultiplication)
		{
			Calc calc;
			// Act
			int result = calc.multiply(10, 5);
			// Assert
			Assert::AreEqual(50, result);
		}
		TEST_METHOD(TestDivision) {
			Calc calc;
			// Act
			double result = calc.divide(10, 2);
			// Assert
			Assert::AreEqual(5.0, result);
		}
		TEST_METHOD(TestDivisionByZero) {
			Calc calc;
			// Act
			double result = calc.divide(10, 0);
			// Assert
			Assert::IsTrue(isinf(result)); //check if result is "Infinity"
		}
		TEST_METHOD(TestDivisionDecimalResult) {
			Calc calc;
			// Act
			double result = calc.divide(5, 2);
			// Assert
			Assert::AreEqual(2.5, result); //check if result is "Infinity"
		}
	};
}
