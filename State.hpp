#pragma once




namespace Haider_Engine {


	class State
	{

		public:

			virtual void Init() = 0;


			virtual void HandleInput() = 0; // state handling when input is recieved
			virtual void Update(float dt) = 0;
			virtual void Draw(float dt) = 0; 


			virtual void Pause() {} // state handling when pausing game
			virtual void Resume() {}// state handling when resuming game



	};




}