#pragma once

#include<string>
#include "LogicSimulator_Export.h"
class LogicSimulator_EXPORT Node
{


public:

	/*@breief default construcutor
	*/
	Node();

	/*@breief	custom construcutor initializes node with name = name and value = 0
	*@param	    name		node name
	*/
	Node(std::string name);

	/*@breief	custom construcutor initializes node with name = name and value = 0
	*@param	    name		node name
	*@param	    value		node value
	*/
	Node(std::string name, int value);

	/*@breief	set node name
	*@param	    name		node name
	*/
	void setname(std::string namem);
	

	/*@breief	set node value
	*@param	    name		node value
	*/
	void setvalue(int v);


	/*@breief	get node name
	* @return	string		node name
	*/
	std::string getname();

	/*@breief	get node value
	* @return	int		node value
	*/
	int getvalue();

private:
	std::string mName; //<! node name
	int mValue;		   //<! value holded by this node
};

