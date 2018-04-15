#include "StateMachine.h"



StateMachine::StateMachine()
{
}


StateMachine::~StateMachine()
{
}

void StateMachine::addState(State& newState, bool isReplacing)
{
	isAdding = true;
	this->isReplacing = isReplacing;

	this->newState = newState;
}

void StateMachine::removeState()
{
	isRemoving = true;
}

void StateMachine::procesChanges()
{
	if (isRemoving && !states.empty())
	{
		states.pop();

		if (!states.empty())
			states.top().resume();

		isReplacing = false;
	}

	if (isAdding)
	{
		if (!states.empty())
		{
			if (isReplacing)
				states.pop();
			else
				states.top().pause();
		}

		states.push(newState);
		states.top().init();
		isAdding = false;
	}
}

State& StateMachine::getActiveState()
{
	return states.top;
}
