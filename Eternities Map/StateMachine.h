#pragma once

#include <stack>
#include "State.h"

class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	void addState(State& newState, bool isReplacing = true);
	void removeState();

	void procesChanges();

	State& getActiveState();

private:
	std::stack<State> states;
	State& newState;

	bool isAdding;  //Zmienne opisuj¹ce aktualn¹ akcjê
	bool isReplacing;
	bool isRemoving;
};

