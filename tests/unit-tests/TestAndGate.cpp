#include <gtest/gtest.h>

#include "../include/and/AND_gate.h"

class TestAnd:public ::testing::Test {

protected:

	std::unique_ptr<Gate> _gate;

	 void SetUp() override {
		_gate = std::make_unique<and_gate>();
		

	}
	
	 void TearDown() override {
	
	}

};

TEST_F(TestAnd,Test_11) {

	_gate ->set_in1(new Node("1", 1));
	_gate ->set_in2(new Node("1", 1));
	_gate ->set_out(new Node("out"));//<! out will be set
	_gate ->Calculate_Out();
	auto result = _gate->get_out()->getvalue();


	ASSERT_EQ(1, result);
	
}

TEST_F(TestAnd, Test_10) {

	_gate->set_in1(new Node("1", 1));
	_gate->set_in2(new Node("2", 0));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(0, result);

}

TEST_F(TestAnd, Test_01) {

	_gate->set_in1(new Node("1", 0));
	_gate->set_in2(new Node("2", 1));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();


}

TEST_F(TestAnd, Test_00) {
	_gate->set_in1(new Node("1", 0));
	_gate->set_in2(new Node("2", 0));
	_gate->set_out(new Node("out"));//<! out will be set
	_gate->Calculate_Out();
	auto result = _gate->get_out()->getvalue();

	ASSERT_EQ(0, result);

}