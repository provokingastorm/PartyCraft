// partycraft.cpp

#include "..\..\include\hge.h"

HGE *hge=0;

bool FrameFunc()
{
	// Get the time elapsed since last call of FrameFunc().
	// This will help us to synchronize on different
	// machines and video modes.
	float dt=hge->Timer_GetDelta();

	// Continue execution
	return false;
}

// This function will be called by HGE when
// the application window should be redrawn.
// Put your rendering code here.
bool RenderFunc()
{
	hge->Gfx_BeginScene();

	// Clear screen with black color
	hge->Gfx_Clear(0);

	// End rendering and update the screen
	hge->Gfx_EndScene();

	// RenderFunc should always return false
	return false;
}


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	// Get HGE interface
	hge = hgeCreate(HGE_VERSION);

	// Set up log file, frame function, render function and window title
	hge->System_SetState(HGE_LOGFILE, "partycraft.log");
	hge->System_SetState(HGE_FRAMEFUNC, FrameFunc);
	hge->System_SetState(HGE_RENDERFUNC, RenderFunc);
	hge->System_SetState(HGE_TITLE, "PartyCraft");

	// Set up video mode
	hge->System_SetState(HGE_WINDOWED, true);
	hge->System_SetState(HGE_SCREENWIDTH, 1080);
	hge->System_SetState(HGE_SCREENHEIGHT, 720);
	hge->System_SetState(HGE_SCREENBPP, 32);

	if(hge->System_Initiate())
	{
		hge->System_Start();
	}
	else MessageBox(NULL, hge->System_GetErrorMessage(), "Error", MB_OK | MB_ICONERROR | MB_SYSTEMMODAL);

	// Clean up and shutdown
	hge->System_Shutdown();
	hge->Release();
	return 0;
}
