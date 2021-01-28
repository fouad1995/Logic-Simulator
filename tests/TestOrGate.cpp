#include <gtest/gtest.h>

#include "../include/or/OR_Gate.h"

class TestOr {

public:
	TestOr(int input1, int input2) {
		auto or = new or_gate();
		or ->set_in1(new Node("1", input1));
		or ->set_in2(new Node("2", input2));
		or ->set_out(new Node("out"));//<! out will be set
		or ->Calculate_Out();
		result = or->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};


TEST(Or, Test_11) {

	TestOr or (1, 1);
	auto result = or .get_result();

	ASSERT_EQ(1, result);
}


TEST(Or, Test_10) {

	TestOr or (1, 0);
	auto result = or .get_result();

	ASSERT_EQ(1, result);
}

TEST(Or, Test_01) {

	TestOr or (0, 1);
	auto result = or .get_result();

	ASSERT_EQ(1, result);
}

TEST(Or, Test_00) {

	TestOr or (0, 0);
	auto result = or .get_result();

	ASSERT_EQ(0, result);
}