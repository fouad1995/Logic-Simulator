#include <gtest/gtest.h>

#include "../include/nor/NOR_Gate.h"

class TestNor {

public:
	TestNor(int input1, int input2) {
		auto nor = new nor_gate();
		nor->set_in1(new Node("1", input1));
		nor->set_in2(new Node("2", input2));
		nor->set_out(new Node("out"));//<! out will be set
		nor->Calculate_Out();
		result = nor->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};

TEST(Nor, Test_11) {

	auto nor = TestNor(1, 1);
	auto result = nor.get_result();


	ASSERT_EQ(0, result);

}

TEST(Nor, Test_10) {


	auto nor = TestNor(1, 0);
	auto result = nor.get_result();


	ASSERT_EQ(0, result);
}

TEST(Nor, Test_01) {


	auto nor = TestNor(0, 1);
	auto result = nor.get_result();


	ASSERT_EQ(0, result);

}

TEST(Nor, Test_00) {

	auto nor = TestNor(0, 0);
	auto result = nor.get_result();

	ASSERT_EQ(1, result);

}