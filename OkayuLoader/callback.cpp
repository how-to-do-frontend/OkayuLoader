#include "callback.h"

namespace button
{	
	void play(bool patcher)
	{	
		switch (osu::server)
		{
		case 0:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver okayu.pw");
		case 1:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver gatari.pw");
		case 2:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver akatsuki.pw");
		case 3:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver lisek.world");
		case 4:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver ez-pp.farm");
		case 5:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver ussr.pl");
		case 6:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver halcyon.pw");
		case 7:
			system("start %Appdata%\\..\\Local\\osu!\\osu!.exe -devserver heia.kim");
		default:
			break;
		}
		if (patcher)
		{
			system("start %Appdata%\\..\\Local\\osu!\\Patcher\\osu!.patcher.exe");
		}
	}
}
