#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"
#include "CoordinateTransformer.h"
#include "Entity.h"
#include "Star.h"
#include "Camera.h"
#include "MouseCameraController.h"
#include "FrameTimer.h"
#include "Plank.h"
#include "Ball.h"
#include "SpawnPoint.h"
#include <random>
#include "Sound.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */
	static constexpr float maxBallDistance = 2000.0f;

	Sound collideSound = Sound( L"Sounds\\arkpad.wav" );

	FrameTimer ft;
	CoordinateTransformer ct;
	Camera cam;
	MouseCameraController camCtrl;
	Plank plank;
	std::vector<Ball> balls;
	SpawnPoint spawn;
	/********************************/
};