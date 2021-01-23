#include <gtest/gtest.h>

#include "../include/and/AND_gate.h"

class TestAnd {

public:
	TestAnd(int input1 , int input2) {
		auto and = new AND_gate();
		and ->set_in1(new Node("1", input1));
		and ->set_in2(new Node("2", input2));
		and ->set_out(new Node("out"));//<! out will be set
		and ->Calculate_Out();
		result = and ->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};

TEST(And,Test_11) {
	
	auto And = TestAnd(1, 1);
	auto result = And.get_result();


	ASSERT_EQ(1, result);
	
}

TEST(And, Test_10) {

	auto And = TestAnd(1, 0);
	auto result = And.get_result();


	ASSERT_EQ(0, result);

}

TEST(And, Test_01) {

	auto And = TestAnd(0, 1);
	auto result = And.get_result();


	ASSERT_EQ(0, result);

}

TEST(And, Test_00) {

	auto And = TestAnd(0, 0);
	auto result = And.get_result();


	ASSERT_EQ(0, result);

}