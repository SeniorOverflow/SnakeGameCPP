#pragma  once

#include <iostream>

namespace gui {
    enum class GuiButtons : uint8_t {
        NewGame = 0x01,
        LoadGame = 0x02,
        SaveGame = 0x03,
        Settings = 0x04,
        CreateHost = 0x05,
        EscSettings = 0x06,
        Exit = 0x07,
        VeryLow = 0x08,
        Low = 0x09,
        Middle = 0x0A,
        Hard =0x0B,
        Nightmare = 0x0C,
        Back = 0x0D,
        CreateSave = 0x0E,
        DeleteSave = 0x0F,
        LoadSave = 0x10,
        KeyBoardSettings  = 0x10,
        AudioSettings = 0x11,
        VideoSettings = 0x12,
        MouseSettings = 0x13,
        CreateHostStart = 0x14,
        GameDifficultySettings = 0x15
    };



    struct MenuItem {
        const char * name;
        GuiButtons button;
        SDL_Rect pos;
    };
}