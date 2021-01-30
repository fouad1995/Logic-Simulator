#include <gtest/gtest.h>

#include "../include/or/OR_Gate.h"


class TestOr :public ::testing::Test {

protected:

	std::unique_ptr<Gate> _gate;

	void SetUp() override {
		_gate = std::make_unique<or_gate>();


	}

	void TearDown() override {

	}

};

TEST_F(TestOr, Test_11) {

	_gate->set_in1(new Node("1", 1));
	_gate->set_in2(new Node("1", 1));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(1, result);
}


TEST_F(TestOr, Test_10) {

	_gate->set_in1(new Node("1", 1));
	_gate->set_in2(new Node("1", 0));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(1, result);
}

TEST_F(TestOr, Test_01) {
	_gate->set_in1(new Node("1", 0));
	_gate->set_in2(new Node("1", 1));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(1, result);
}

TEST_F(TestOr, Test_00) {

	_gate->set_in1(new Node("1", 0));
	_gate->set_in2(new Node("1", 0));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(0, result);
}