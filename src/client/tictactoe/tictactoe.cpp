// Tic Tac Toe - SFML.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "App.h"
App g_app;

#include "Driver.h"
Driver g_wnd;

#include "GUI.h"
GUI g_ui;

#include "Scene.h"
Scene::Handler g_scene; //Scene manager

#include <ctime.h>
Time Clock;

#include "Net.h"
Net g_net;

#include "SMain.h"
SMain * s_main;

#include "Player.h"
Player g_player;

int _tmain(int argc, _TCHAR* argv[])
{
	g_app.init();
	return 0;
}

