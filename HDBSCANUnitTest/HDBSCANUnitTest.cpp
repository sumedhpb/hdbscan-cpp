#include "pch.h"
#include <iostream>
#include "CppUnitTest.h"
#include"../HDBSCAN-CPP/distance/EuclideanDistance.hpp"
#include <limits>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace HDBSCANUnitTest
{
	TEST_CLASS(EuclideanTest)
	{
	public:
		TEST_METHOD(EuclideanDistanceTest1)
		{
			std::vector<double> pointOne{ -7, -4 };
			std::vector<double> pointTwo{ 17, 6.5 };
			double realDistance = 26.1964;
			EuclideanDistance Edistance;
			double distance = Edistance.computeDistance(pointOne, pointTwo);
			Assert::AreEqual(realDistance, distance, 0.0001);
		}
		TEST_METHOD(EuclideanDistanceTest2)
		{
			std::vector<double> pointOne{ 4, 5 };
			std::vector<double> pointTwo{ 1, 1 };
			double realDistance = 5;
			EuclideanDistance Edistance;
			double distance = Edistance.computeDistance(pointOne, pointTwo);
			Assert::AreEqual(realDistance, distance, 0.0001);
		}
		TEST_METHOD(EuclideanDistanceTest3)
		{
			std::vector<double> pointOne{ 7, 4, 3 };
			std::vector<double> pointTwo{ 17, 6, 2 };
			double realDistance = 10.2469;
			EuclideanDistance Edistance;
			double distance = Edistance.computeDistance(pointOne, pointTwo);
			Assert::AreEqual(realDistance, distance, 0.0001);
		}
		TEST_METHOD(EuclideanDistanceTest4)
		{
			std::vector<double> pointOne{ 0,3,4,5 };
			std::vector<double> pointTwo{ 7,6,3,-1 };
			double realDistance = 9.747;
			EuclideanDistance Edistance;
			double distance = Edistance.computeDistance(pointOne, pointTwo);
			Assert::AreEqual(realDistance, distance, 0.001);
		}
	};
}
