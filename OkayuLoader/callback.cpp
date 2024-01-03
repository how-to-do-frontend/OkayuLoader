#include "callback.h"

namespace button
{	
	void play(bool patcher)
	{
		system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver okayu.pw");
		if (patcher)
		{
			system("start %Appdata%\\..\\Local\\osu!\\Patcher\\osu!.patcher.exe");
		}
	}
}
