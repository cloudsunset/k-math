#include <iostream>
#include <kma/kma.hpp>

//void Rotationkmarix(kma::vec4  iPos, kma::vec4  iAxis, float iAngle)
//{
//	kma::kma4 Rotation = kma::rotate(30, iAxis);
//	iPos = iPos * Rotation;
//	iPos.show();
//}

//void Quaternions(kma::vec4  iPos, kma::vec4  iAxis, float iAngle)
//{
//	kma::quat quaternion = kma::rotate(Position, Angle, Axis);
//}


void testVec4()
{
	kma::vec4  vecA{ 1, 2, 3, 0};
	std::cout << "vecA: " << vecA << std::endl;
	kma::vec4  vecB{2, 5, 8, 0};
	std::cout << "vecB: " << vecB << std::endl;
	

	float dotproduct = kma::dot(vecA, vecB);
	std::cout << "vec4 dot product: " << dotproduct << std::endl;

	kma::vec4 crossproduct = kma::cross(vecA, vecB);
	std::cout << "vec4 cross product: " << crossproduct << std::endl;

	std::cout << "vec4 normalized vector: " << vecA.normalize() << std::endl;
}

void testMat4()
{
	kma::mat4 matrixA{};
	std::cout << "matrixA:" << std::endl;
	std::cout << matrixA << std::endl;
}

void testVec3()
{
	kma::vec3  vecC{ 1, 2, 3};
	std::cout << "vecC: " << vecC << std::endl;
	kma::vec3  vecD{2, 5, 8};
	std::cout << "vecD: " << vecD << std::endl;

	float dot3product = kma::dot(vecC, vecD);
	std::cout << "vec3 dot product: " << dot3product << std::endl;

	kma::vec3 cross3product = kma::cross(vecC, vecD);
	std::cout << "vec3 cross product: " << cross3product << std::endl;

	std::cout << "vec3 normalized vector: " << vecC.normalize() << std::endl;
}

void testVec2()
{
	kma::vec2  vecC{ 1, 2};
	std::cout << "vecC: " << vecC << std::endl;
	kma::vec2  vecD{2, 5};
	std::cout << "vecD: " << vecD << std::endl;

	std::cout << "vec2 normalized vector: " << vecC.normalize() << std::endl;
}

void testQuaternions()
{
	float AngleA = 90.0f;
	kma::vec4 vecA{1.0f, 2.0f, 3.0f,0.0f};
	kma::quat quaternionA {AngleA, vecA};
	std::cout << "quaternionA: " << quaternionA << std::endl;
	float AngleB = 45.0f;
	kma::vec4 vecB{4.0f, 5.0f, 6.0f, 0.0f};
	kma::quat quaternionB {AngleB, vecB};
	std::cout << "quaternionB: " << quaternionB << std::endl;

	kma::quat mult = quaternionA * quaternionB;
	std::cout << "quaternion mult: " << mult << std::endl;

}

int main()
{

	//testVec4();
	//testMat4();
	//testQuaternions();
	//testVec3();
	testVec2();
	
	

	

	return 0;
}