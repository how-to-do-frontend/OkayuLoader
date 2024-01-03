#pragma once
#include "ui_backend.h"
#include "globals.h"
#include "callback.h"

extern const char WindowName[];
extern int WindowWidth;
extern int WindowHeight;
extern DWORD dwFlag;

void ui(static bool& open);

namespace themes 
{
	void PurpleWhite();
}

namespace PurpleBlackColors
{
    extern ImVec4 DefaultColor;
    extern ImVec4 AccentColor;

    extern ImVec4 FrameAccentColor;
    extern ImVec4 FrameDefaultColor;
    extern ImVec4 HoveredAccentColor;
    extern ImVec4 ActiveAccentColor;

    extern ImVec4 TextAccentColorHover;
}

namespace PurpleWhiteColors
{
    extern ImVec4 DefaultColor;
    extern ImVec4 AccentColor;

    extern ImVec4 FrameAccentColor;
    extern ImVec4 FrameDefaultColor;
    extern ImVec4 HoveredAccentColor;
    extern ImVec4 ActiveAccentColor;

    extern ImVec4 TextAccentColorHover;
}
