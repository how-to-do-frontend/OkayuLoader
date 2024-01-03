#include "ui.h"

extern const char WindowName[] = "OkayuLoader";
extern int WindowWidth = 500;
extern int WindowHeight = 150;
extern DWORD dwFlag = ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse;


void ui(static bool& open) 
{

    ImGui_ImplDX9_NewFrame();
    ImGui_ImplWin32_NewFrame();
    ImGui::NewFrame();

    ImGui::SetNextWindowSize(ImVec2(WindowWidth, WindowHeight), ImGuiCond_Once);
    ImGui::SetNextWindowPos(ImVec2(0, 0), ImGuiCond_Once);
    {
        ImGui::Begin(WindowName, &open, dwFlag);
        themes::PurpleWhite();

        // Window part
        ImGui::Text("Okayu - private osu server, that supports relax pp system.");

        ImGui::PushStyleColor(ImGuiCol_Text, PurpleBlackColors::AccentColor);
        ImGui::Text("Status:");
        ImGui::PopStyleColor();
        ImGui::SameLine();
        ImGui::Text("online");

        ImGui::PushStyleColor(ImGuiCol_Text, PurpleBlackColors::AccentColor);
        ImGui::Text("Website:");
        ImGui::PopStyleColor();
        ImGui::SameLine();
        ImGui::Text("osu.okayu.pw");

        ImGui::PushItemWidth(480);
        ImGui::Combo("", &osu::server, osu::servers, 8, 2);
        ImGui::PopItemWidth();

        if (ImGui::Button("Play", ImVec2(480, 18))) button::play(true);
        if (ImGui::Button("Play without patcher", ImVec2(480, 18))) button::play(false);
    }

    ImGui::End();

    ImGui::EndFrame();
}

namespace themes
{
    void PurpleBlack()
    {
        // Getting styles
        ImGuiStyle& style = ImGui::GetStyle();

        // Window styling
        style.Alpha = 1.0f;
        style.WindowRounding = 5.0f;
        style.GrabRounding = 0.0f;
        style.GrabMinSize = 0.0f;
        style.FrameRounding = 5.0f;
        style.WindowPadding = ImVec2(10, 10);

        // Colors styling
        style.Colors[ImGuiCol_WindowBg] = PurpleBlackColors::DefaultColor;
        style.Colors[ImGuiCol_TitleBgActive] = PurpleBlackColors::AccentColor;

        style.Colors[ImGuiCol_FrameBg] = PurpleBlackColors::FrameDefaultColor;

        style.Colors[ImGuiCol_Button] = PurpleBlackColors::AccentColor;
        style.Colors[ImGuiCol_ButtonHovered] = PurpleBlackColors::HoveredAccentColor;
        style.Colors[ImGuiCol_ButtonActive] = PurpleBlackColors::ActiveAccentColor;

        style.Colors[ImGuiCol_TextSelectedBg] = PurpleBlackColors::TextAccentColorHover;

        style.Colors[ImGuiCol_Tab] = PurpleBlackColors::FrameAccentColor;
        style.Colors[ImGuiCol_TabHovered] = PurpleBlackColors::HoveredAccentColor;
        style.Colors[ImGuiCol_TabActive] = PurpleBlackColors::AccentColor;
    }

    void PurpleWhite()
    {
        // Getting styles
        ImGuiStyle& style = ImGui::GetStyle();

        // Window styling
        style.Alpha = 1.0f;
        style.WindowRounding = 5.0f;
        style.GrabRounding = 0.0f;
        style.GrabMinSize = 0.0f;
        style.FrameRounding = 5.0f;
        style.WindowPadding = ImVec2(10, 10);

        // Colors styling
        style.Colors[ImGuiCol_WindowBg] = PurpleWhiteColors::DefaultColor;
        style.Colors[ImGuiCol_TitleBgActive] = PurpleWhiteColors::AccentColor;
        style.Colors[ImGuiCol_ScrollbarBg] = PurpleWhiteColors::FrameDefaultColor;

        style.Colors[ImGuiCol_FrameBg] = PurpleWhiteColors::FrameDefaultColor;
        style.Colors[ImGuiCol_PopupBg] = PurpleWhiteColors::FrameDefaultColor;

        style.Colors[ImGuiCol_Header] = PurpleWhiteColors::AccentColor;
        style.Colors[ImGuiCol_HeaderHovered] = PurpleWhiteColors::HoveredAccentColor;
        style.Colors[ImGuiCol_HeaderActive] = PurpleWhiteColors::ActiveAccentColor;

        style.Colors[ImGuiCol_Button] = PurpleWhiteColors::AccentColor;
        style.Colors[ImGuiCol_ButtonHovered] = PurpleWhiteColors::HoveredAccentColor;
        style.Colors[ImGuiCol_ButtonActive] = PurpleWhiteColors::ActiveAccentColor;

        style.Colors[ImGuiCol_TextSelectedBg] = PurpleWhiteColors::TextAccentColorHover;
        style.Colors[ImGuiCol_Text] = ImVec4(0.000f, 0.000f, 0.000f, 1.000f);

        style.Colors[ImGuiCol_Tab] = PurpleWhiteColors::FrameAccentColor;
        style.Colors[ImGuiCol_TabHovered] = PurpleWhiteColors::HoveredAccentColor;
        style.Colors[ImGuiCol_TabActive] = PurpleWhiteColors::AccentColor;

        style.Colors[ImGuiCol_FrameBgHovered] = PurpleWhiteColors::HoveredAccentColor;
    }
}

namespace PurpleBlackColors
{
    extern ImVec4 DefaultColor = ImVec4(0.067f, 0.067f, 0.067f, 1.000f);
    extern ImVec4 AccentColor = ImVec4(0.514f, 0.392f, 1.000f, 1.000f);

    extern ImVec4 FrameAccentColor = ImVec4(0.514f, 0.392f, 1.000f, 0.500f);
    extern ImVec4 FrameDefaultColor = ImVec4(0.027f, 0.027f, 0.027f, 1.000f);
    extern ImVec4 HoveredAccentColor = ImVec4(0.643f, 0.553f, 1.000f, 1.000f);
    extern ImVec4 ActiveAccentColor = ImVec4(0.414f, 0.269f, 0.994f, 1.000f);

    extern ImVec4 TextAccentColorHover = ImVec4(0.514f, 0.392f, 1.000f, 0.350f);
}

namespace PurpleWhiteColors
{
    extern ImVec4 DefaultColor = ImVec4(1.000f, 1.000f, 1.000f, 1.000f);
    extern ImVec4 AccentColor = ImVec4(0.514f, 0.392f, 1.000f, 1.000f);

    extern ImVec4 FrameAccentColor = ImVec4(0.514f, 0.392f, 1.000f, 0.500f);
    extern ImVec4 FrameDefaultColor = ImVec4(0.900f, 0.900f, 0.900f, 1.000f);
    extern ImVec4 HoveredAccentColor = ImVec4(0.643f, 0.553f, 1.000f, 1.000f);
    extern ImVec4 ActiveAccentColor = ImVec4(0.414f, 0.269f, 0.994f, 1.000f);

    extern ImVec4 TextAccentColorHover = ImVec4(0.514f, 0.392f, 1.000f, 0.350f);
}
