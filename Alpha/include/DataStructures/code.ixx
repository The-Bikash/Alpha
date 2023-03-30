module;
#include <bitset>
#include <intrin.h>
#include <omp.h>
#include <iostream>
#include <vector>
#include <utility>
#include <numeric>
#include <string>
#include <exception>
#include <bit>
#include <algorithm>
export module code;

import LinearContainer;
import algorithm;
import time;
import io;
import simd;
import Matrix;
import Rational;
using namespace std;

bool isPrime(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return false;
    }

    return true;

}


// Computes (a^b) % m using modular exponentiation
long long power(long long a, long long b, long long m) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

// Miller-Rabin primality test
bool isPrime(long long n, int k) {
    if (n <= 1 || (n > 2 && n % 2 == 0))
        return false;

    long long d = n - 1;
    while (d % 2 == 0) {
        d >>= 1;
    }

    // Repeat k times
    for (int i = 0; i < k; i++) {
        long long a = rand() % (n - 2) + 2;
        long long x = power(a, d, n);

        if (x == 1 || x == n - 1)
            continue;

        bool isWitness = false;
        while (d != n - 1) {
            x = (x * x) % n;
            d <<= 1;
            if (x == 1)
                return false;
            if (x == n - 1) {
                isWitness = true;
                break;
            }
        }

        if (!isWitness)
            return false;
    }

    return true;
}

using namespace alpha;
export void FUN() {
    //const size_t size = 64*100000;
    //unsigned int* a = new unsigned int[size];
    //unsigned int* b = new unsigned int[size];
    //unsigned int* c = new unsigned int[size];

    //for (size_t i = 0; i < size; ++i) {
    //    a[i] = rand() % 1000;
    //    b[i] = rand() % 100;
    //}


    //time_start();
    ///*for (size_t i = 0; i < size; ++i) {
    //    c[i] = a[i] + b[i];

    //}*/
    //alpha::_simd_add_vector_uint32(a, b, c, size);
    //time_end();
    //delete[]a;
    //delete[]b;
    //delete[]c;

    alpha::SquareMat<Rational<int>> x = { {12,13,14}, {20,28,30}, {40,50, 60} };

    alpha::print(x);
    x.rrf();
    
    alpha::print(x,"\n\n\n\n");

    system("pause");
}