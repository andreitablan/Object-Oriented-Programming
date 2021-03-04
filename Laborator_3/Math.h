#pragma once
class Math
{
public:

    static int Add(int number1, int number2);

    static int Add(int number1, int number2, int number3);

    static int Add(double number1, double number2);

    static int Add(double number1, double number2, double number3);

    static int Mul(int number1, int number2);

    static int Mul(int number1, int number2, int number3);

    static int Mul(double number1, double number2);

    static int Mul(double number1, double number2, double number3);

    static int Add(int count, ...); // sums up a list of integers

    //static char* Add(const char* text1, const char* text2);
};

