#include <gtest/gtest.h>
#include "../include/not/Not_Gate.h"

//<! TODO(FOUAD) : apply more checks as NOT-GATE is "not" allowed to take more than one input 
//<! but currently it will take one input if you gave it two inputs it will ignore the second one

class TestNot {
public:
	TestNot(int input1) {
		auto not = new NOT_Gate();
		not->set_in1(new Node("1", input1));
		not->set_out(new Node("out"));//<! out will be set
		not->Calculate_Out();
		result = not ->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;

};

TEST(Not, Test_1) {

	TestNot not (1);
	auto result = not .get_result();

	ASSERT_EQ(0, result);
}

TEST(Not, Test_0) {

	TestNot not (0);
	auto result = not .get_result();

	ASSERT_EQ(1, result);
}