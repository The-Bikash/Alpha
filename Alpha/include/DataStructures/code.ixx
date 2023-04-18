module;
#include<stdlib.h>
#include<compare>
export module code;

import LinearContainer;
import algorithm;
import time;
import io;
import simd;
import Matrix;
import Rational;
import Complex;
import string;
using namespace alpha;
//void vectorPrint(const Array<string>& _Path) {
//	for (const auto& component : _Path)
//		print(component);
//};
//bool back(Array<string>& _Path, string& _Input) {
//	input(_Input);
//	if (_Input == "back") {
//		_Path.pop_back();
//		vectorPrint(_Path);
//		return true;
//	}
//	return false;
//}
//
//bool matrixadd() {
//	print("Enter the field : "); string field; input(field);
//	if (field == "real") {
//		size_t row;
//		print("Enter the value of row : "); input(row);
//		SquareMat<float> A(row);
//		SquareMat<float> B(row);
//		print("Enter the value of A : \n"); input(A);
//		print("Enter the value of B : \n"); input(B);
//		auto C = A + B;
//		print("Sum of A and B = ", C);
//	}
//	else if (field == "rational") {
//		size_t row;
//		print("Enter the value of row : "); input(row);
//		SquareMat<Rational<int>> A(row);
//		SquareMat<Rational<int>> B(row);
//		print("Enter the value of A : \n"); input(A);
//		print("Enter the value of B : \n"); input(B);
//		auto C = A + B;
//		print("Sum of A and B = \n", C);
//	}
//	else if (field == "complex") {
//		size_t row;
//		print("Enter the value of row : "); input(row);
//		SquareMat<Complex<float>> A(row);
//		SquareMat<Complex<float>> B(row);
//		print("Enter the value of A : \n"); input(A);
//		print("Enter the value of B : \n"); input(B);
//		auto C = A + B;
//		print("Sum of A and B = \n", C);
//	}
//	else {
//
//	}
//	print("\nIf you do not want to continue press 1 else press 0 : ");
//	int i; input(i);
//	if (i == 1) return true;
//	else return false;
//}
//
//void matrixsub() {
//
//}
//
//void LinearAlgebra(Array<string>& _Path) {
//	string _Input;
//	while (true) {
//		_Input = string();
//		if (back(_Path, _Input)) return;
//		else if (_Input == "matrix add") {
//			_Path.emplace_back(_Input += '>'); vectorPrint(_Path);
//			while (true) {
//				print('\n');
//				if (matrixadd())break;
//			}
//			_Path.pop_back(); vectorPrint(_Path);
//		}
//		else if (_Input == "matrix sub") {
//			_Path.emplace_back(_Input += '>'); vectorPrint(_Path);
//			matrixsub();
//		}
//	}
//}
//void RealAnalysis(Array<string>& _Path) {
//
//}
//void ComplexAnalysis(Array<string>& _Path) {
//
//}

export void FUN() {
	/*alpha::print("*********************** WELCOME ***************************\n\n\n\n");
	print(">");
	string _Input;
	string _Input1;
	Array<string> _Path = { ">" };
	auto vectorPrint = [](const Array<string>& _Path) {
		for (const auto& component : _Path)
			print(component);
	};
	while (true) {
		_Input = _Input1;
		input(_Input);
		if (_Input == string("Linear Algebra")) {
			_Path.emplace_back(_Input += '>'); vectorPrint(_Path);
			LinearAlgebra(_Path);
		}
		else if (_Input == string("Real Analysis")) {
			_Path.emplace_back(_Input += '>');
			vectorPrint(_Path);
			RealAnalysis(_Path);
		}
		else if (_Input == string("Complex Analysis")) {
			_Path.emplace_back(_Input += '>');
			vectorPrint(_Path);
			ComplexAnalysis(_Path);
		}else {
			print("Error");
			print('\n'); vectorPrint(_Path);
		}
	}*/
	using _Ty = Complex<int>;
	Complex<_Ty> C = { 18433,123242 };
	size_t size = 100000000;
	Array<Complex<_Ty>> v1; v1.reserve(size);
	Array<Complex<_Ty>> v2; v1.reserve(size);

	//srand((unsigned int)time(0));
	for (size_t i = 0; i < size; ++i) {
		auto real = (_Ty)(rand() % 1000);
		auto imag = (_Ty)(rand() % 1000);
		v1.emplace_back(real, imag);
		v2.emplace_back(real, imag);
	}
	time_start();
	C._MultoContainer(v1.begin(), v1.end());
	time_end();
	time_start();
	for (size_t i = 0; i < size; ++i) {
		v2[i] *= C;
	}
	time_end();
	//print(v1);
	alpha::print(v1 == v2);

	
}