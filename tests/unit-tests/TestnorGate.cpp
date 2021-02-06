#include <gtest/gtest.h>

#include "../include/nor/NOR_Gate.h"

class TestNor :public ::testing::Test {

protected:

	std::unique_ptr<Gate> _gate;

	void SetUp() override {
		_gate = std::make_unique<nor_gate>();


	}

	void TearDown() override {

	}

};

TEST_F(TestNor, Test_11) {

	_gate->set_in1(std::make_shared<Node>("1", 1));
	_gate->set_in2(std::make_shared<Node>("2", 1));
	_gate->set_out(std::make_shared<Node>("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();
	ASSERT_EQ(0, result);

}

TEST_F(TestNor, Test_10) {

	_gate->set_in1(std::make_shared<Node>("1", 1));
	_gate->set_in2(std::make_shared<Node>("2", 0));
	_gate->set_out(std::make_shared<Node>("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();
	ASSERT_EQ(0, result);
}

TEST_F(TestNor, Test_01) {

	_gate->set_in1(std::make_shared<Node>("1", 0));
	_gate->set_in2(std::make_shared<Node>("2", 1));
	_gate->set_out(std::make_shared<Node>("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();
	ASSERT_EQ(0, result);

}

TEST_F(TestNor, Test_00) {

	_gate->set_in1(std::make_shared<Node>("1", 0));
	_gate->set_in2(std::make_shared<Node>("2", 0));
	_gate->set_out(std::make_shared<Node>("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(1, result);

}