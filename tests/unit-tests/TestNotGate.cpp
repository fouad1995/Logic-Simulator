#include <gtest/gtest.h>
#include "../include/not/Not_Gate.h"

//<! TODO(FOUAD) : apply more checks as NOT-GATE is "not" allowed to take more than one input 
//<! but currently it will take one input if you gave it two inputs it will ignore the second one

class TestNot :public ::testing::Test {

protected:

	std::unique_ptr<Gate> _gate;

	void SetUp() override {
		_gate = std::make_unique<not_gate>();


	}

	void TearDown() override {

	}

};
TEST_F(TestNot, Test_1) {

	_gate->set_in1(new Node("1", 1));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();
	ASSERT_EQ(0, result);
}

TEST_F(TestNot, Test_0) {
	_gate->set_in1(new Node("1", 0));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();
	ASSERT_EQ(1, result);
}