#ifndef OPERATIONHEADER_H
#define OPERATIONHEADER_H


class operationClass
{
public:
	operationClass();

	int getNum1() { return num1; }; //Setters and getters for both numerator and denomenator variables
	void setNum1(int _num) { num1 = _num; };
	int getDen1() { return den1; };
	void setDen1(int _den ) { den1 = _den; };

	int getNum2() { return num2; }; //Setters and getters for both numerator and denomenator variables
	void setNum2(int _num) { num2 = _num; };
	int getDen2() { return den2; };
	void setDen2(int _den) { den2 = _den; };

	double addition(int _num1, int _den1, int _num2, int _den2);
	double subtraction(int _num1, int _den1, int _num2, int _den2);
	double multiplication(int _num1, int _den1, int _num2, int _den2);
	double division(int _num1, int _den1, int _num2, int _den2);
	void invert(int _num,int _den);
	void mixedFraction(int _num, int _den);//Mixed Fraction function? tf is that
	void reduce(int _num, int _den);
	bool lessThan(int _num1, int _den1, int _num2, int _den2);
	bool lessThanEqualTo(int _num1, int _den1, int _num2, int _den2);
	bool greaterThan(int _num1, int _den1, int _num2, int _den2);
	bool greaterThanEqualTo(int _num1, int _den1, int _num2, int _den2);
	bool equalTo(int _num1, int _den1, int _num2, int _den2);

private:

	int num1;
	int den1;
	int num2;
	int den2;

};


#endif

