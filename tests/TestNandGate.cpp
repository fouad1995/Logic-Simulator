#include <gtest/gtest.h>

#include "../include/nand/NAND_Gate.h"

class TestNand {

public:
	TestNand(int input1 , int input2) {
		auto nand = new NAND_Gate();
		nand ->set_in1(new Node("1", input1));
		nand ->set_in2(new Node("2", input2));
		nand ->set_out(new Node("out"));//<! out will be set
		nand ->Calculate_Out();
		result = nand->get_out()->getvalue();
	};

	int get_result() {
		return result;
	}

private:
	int result;
};

TEST(Nand,Test_11) {
	
	auto nand = TestNand(1, 1);
	auto result = nand.get_result();


	ASSERT_EQ(0, result);
	
}

TEST(Nand, Test_10) {

	auto nand = TestNand(1, 0);
	auto result = nand.get_result();


	ASSERT_EQ(1, result);
}

TEST(Nand, Test_01) {

	auto nand = TestNand(0, 1);
	auto result = nand.get_result();


	ASSERT_EQ(1, result);

}

TEST(Nand, Test_00) {
	auto nand = TestNand(0, 0);
	auto result = nand.get_result();


	ASSERT_EQ(1, result);

}