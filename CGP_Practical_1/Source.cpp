//	Ask the compiler to include minimal header files for our program.
#include "GameWindows.h";

//	use int main if you want to have a console to print out message
int main()

//	use WinMain if you don't want the console
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	GameWindows* gWin = gWin->getInstance();


	gWin->createWindow();
	while (gWin->gameLoop())//it just works
	{
		//It just works
	}
	gWin->clearWindow();

	return 0;
}


//--------------------------------------------------------------------