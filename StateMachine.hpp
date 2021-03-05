#pragma once

#include <stack>
#include <memory>


#include "State.hpp"



namespace Haider_Engine {

	typedef std::unique_ptr <State> StateRef;

	class StateMachine
	{
	public:
		StateMachine() {};
		~StateMachine() {};

		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();

		StateRef &GetActiveState();

		void ProcessStateChanges();


	private:

		std::stack<StateRef> _states;

		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;


	};


}