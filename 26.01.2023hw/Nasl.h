#pragma once
#include <iostream>
#include <type_traits>

using namespace std;

template <typename T>
class base {
protected:
	T value1;
	T value2;
public:
	base() : value1{ NULL }, value2{ NULL } {}
	base(T v1, T v2) : value1{ v1 }, value2{ v2 } {}
	void show() {
		cout << "value1 - " << value1 << endl;
		cout << "value2 - " << value2 << endl;
	}
	T get_value1() {
		return value1;
	}
	T get_value2() {
		return value2;
	}
	void set_value1(T v1) {
		value1 = v1;
	}
	void set_value2(T v2) {
		value2 = v2;
	}
};
template <typename T>
class child : public base<T> {
protected:
	T value3;
	T value4;
public:
	child() : base<T>(NULL, NULL), value3{ NULL }, value4{ NULL } {}
	child(T v1, T v2, T v3, T v4) : base<T>(v1, v2), value3{ v3 }, value4{ v4 } {}
	void show() {
		cout << "value1 - " << value1 << endl;
		cout << "value2 - " << value2 << endl;
		cout << "value3 - " << value3 << endl;
		cout << "value4 - " << value4 << endl;
	}
	T get_value3() {
		return value3;
	}
	T get_value4() {
		return value4;
	}
	void set_value3(T v3) {
		value3 = v3;

	}
	void set_value4(T v4) {
		value4 = v4;
	}
};
template <typename T>
class child2 : public child<T> { // I put <int>, because i don't know to do it's another way
protected:
	T value5;
	T value6;
public:
	child2() : child<T>(NULL, NULL, NULL, NULL), value5{ NULL }, value6{ NULL } {};
	child2(T v1, T v2, T v3, T v4, T v5, T v6) : child<T>(v1, v2, v3, v4), value5{ v5 }, value6{ v6 } {}
	void show() {
		cout << "value1 - " << value1 << endl;
		cout << "value2 - " << value2 << endl;
		cout << "value3 - " << value3 << endl;
		cout << "value4 - " << value4 << endl;
		cout << "value5 - " << value5 << endl;
		cout << "value6 - " << value6 << endl;
	}
	T get_value5() {
		return value5;
	}
	T get_value6() {
		return value6;
	}
	void set_value5(T v5) {
		value5 = v5;

	}
	void set_value6(T v6) {
		value6 = v6;
	}
};