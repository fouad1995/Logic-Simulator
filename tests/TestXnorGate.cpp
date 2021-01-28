#include <gtest/gtest.h>

#include "../include/xnor/XNOR_Gate.h"

class TestXnor {

public:
	TestXnor(int input1, int input2) {
		auto xnor = new xnor_gate();
		xnor->set_in1(new Node("1", input1));
		xnor->set_in2(new Node("2", input2));
		xnor->set_out(new Node("out"));//<! out will be set
		xnor->Calculate_Out();
		result = xnor->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};


TEST(Xnor, Test_11) {

	TestXnor xnor (1, 1);
	auto result = xnor .get_result();

	ASSERT_EQ(1, result);
}


TEST(Xnor, Test_10) {

	TestXnor xnor(1, 0);
	auto result = xnor.get_result();

	ASSERT_EQ(0, result);
}

TEST(Xnor, Test_01) {

	TestXnor xnor(0, 1);
	auto result = xnor.get_result();

	ASSERT_EQ(0, result);
}

TEST(Xnor, Test_00) {

	TestXnor xnor(0, 0);
	auto result = xnor.get_result();

	ASSERT_EQ(1, result);
}