#include <gtest/gtest.h>

#include "../include/xor/XOR_Gate.h"

class TestXor {

public:
	TestXor(int input1, int input2) {
		auto xor = new xor_gate();
		xor ->set_in1(new Node("1", input1));
		xor ->set_in2(new Node("2", input2));
		xor ->set_out(new Node("out"));//<! out will be set
		xor ->Calculate_Out();
		result = xor ->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};


TEST(Xor, Test_11) {

	TestXor xor (1, 1);
	auto result = xor .get_result();

	ASSERT_EQ(0, result);
}


TEST(Xor, Test_10) {

	TestXor xor (1, 0);
	auto result = xor .get_result();

	ASSERT_EQ(1, result);
}

TEST(Xor, Test_01) {

	TestXor xor (0, 1);
	auto result = xor .get_result();

	ASSERT_EQ(1, result);
}

TEST(Xor, Test_00) {

	TestXor xor (0, 0);
	auto result = xor .get_result();

	ASSERT_EQ(0, result);
}