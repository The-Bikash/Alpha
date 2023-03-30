//module;
//#include <iostream>
//#include <string>
//#include <cmath>
//#define _USE_MATH_DEFINES
//#include <math.h>
//
//export module Function;
//
//
//import io;
//import core;
//import string;
//
//
//
//export namespace alpha {
//	enum {
//		RealNumberSet, ComplexNumberSet, RationalNumberSet, RealInterval, ComplexInterVal
//	};
//
//    class Function {
//    public:
//        Function(std::string func_str) : func_str_(func_str) {}
//
//        double operator()(double x) {
//            return eval(func_str_, x);
//        }
//
//    private:
//        std::string func_str_;
//
//        double eval(std::string func_str, double x) {
//            std::string replaced_str = replace_var(func_str, x);
//            return eval_expr(replaced_str);
//        }
//
//        std::string replace_var(std::string func_str, double x) {
//            std::string x_str = std::to_string(x);
//            size_t pos = 0;
//            while ((pos = func_str.find("x", pos)) != std::string::npos) {
//                func_str.replace(pos, 1, x_str);
//                pos += x_str.length();
//            }
//            return func_str;
//        }
//
//        double eval_expr(std::string expr_str) {
//            size_t pos = 0;
//            while ((pos = expr_str.find("pi", pos)) != std::string::npos) {
//                expr_str.replace(pos, 2, std::to_string(M_PI));
//                pos += std::to_string(M_PI).length();
//            }
//            pos = 0;
//            while ((pos = expr_str.find("e", pos)) != std::string::npos) {
//                expr_str.replace(pos, 1, std::to_string(M_E));
//                pos += std::to_string(M_E).length();
//            }
//            return eval_add_subtract(expr_str);
//        }
//
//        double eval_add_subtract(std::string expr_str) {
//            size_t pos = 0;
//            while ((pos = expr_str.find("+", pos)) != std::string::npos) {
//                double left = eval_multiply_divide(expr_str.substr(0, pos));
//                double right = eval_add_subtract(expr_str.substr(pos + 1));
//                return left + right;
//            }
//            pos = 0;
//            while ((pos = expr_str.find("-", pos)) != std::string::npos) {
//                double left = eval_multiply_divide(expr_str.substr(0, pos));
//                double right = eval_add_subtract(expr_str.substr(pos + 1));
//                return left - right;
//            }
//            return eval_multiply_divide(expr_str);
//        }
//
//        double eval_multiply_divide(std::string expr_str) {
//            size_t pos = 0;
//            while ((pos = expr_str.find("*", pos)) != std::string::npos) {
//                double left = eval_power(expr_str.substr(0, pos));
//                double right = eval_multiply_divide(expr_str.substr(pos + 1));
//                return left * right;
//            }
//            pos = 0;
//            while ((pos = expr_str.find("/", pos)) != std::string::npos) {
//                double left = eval_power(expr_str.substr(0, pos));
//                double right = eval_multiply_divide(expr_str.substr(pos + 1));
//                return left / right;
//            }
//            return eval_power(expr_str);
//        }
//
//        double eval_power(std::string expr_str) {
//            size_t pos = expr_str.length() - 1;
//            while (pos > 0) {
//                if (expr_str[pos] == '^') {
//                    double left = eval_trig(expr_str.substr(0, pos));
//                    double right = eval_power(expr_str.substr(pos + 1));
//                    return std::pow(left, right);
//                }
//                pos--;
//            }
//            return eval
//
//
//
//
//    };
//}