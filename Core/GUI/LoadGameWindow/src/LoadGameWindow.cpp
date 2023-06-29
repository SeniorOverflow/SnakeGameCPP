#include "LoadGameWindow.h"



LoadGameWindow::LoadGameWindow()
{

    std::cout<<"Start  window"<<std::endl;
}

void LoadGameWindow::show(SDL_Window * window, SDL_Renderer * renderer) {

    if( TTF_Init()  == -1 )
    {
        std::cout<<"some error"<<std::endl;
    };
    SDL_Init(SDL_INIT_VIDEO);

    // Определение цветов
    SDL_Color black = { 0, 0, 0, 255 };
    SDL_Color white = { 255, 255, 255, 255 };


    // Определение меню
    gui::MenuItem menuItems[] = {
            { "LoadSave", gui::GuiButtons::LoadSave,      { 300, 200, 200, 50 } },
            { "DeleteSave", gui::GuiButtons::DeleteSave,              { 300, 275, 200, 50 } },
            { "Back", gui::GuiButtons::Back,            { 300, 675, 200, 50 } }
    };

    int numMenuItems = sizeof(menuItems) / sizeof(menuItems[0]);

    // Отрисовка меню
    SDL_SetRenderDrawColor(renderer, black.r, black.g, black.b, black.a);
    SDL_RenderClear(renderer);
    TTF_Font* font = TTF_OpenFont("assets//Caprasimo-Regular.ttf", 24);
    for (int i = 0; i < numMenuItems; i++) {
        // Отрисовка фона
        SDL_SetRenderDrawColor(renderer, white.r, white.g, white.b, white.a);
        SDL_RenderFillRect(renderer, &menuItems[i].pos);

        // Отрисовка текста
        SDL_Surface* surface = TTF_RenderText_Solid(font, menuItems[i].name, black);
        SDL_Texture* texture = SDL_CreateTextureFromSurface(renderer, surface);
        SDL_Rect textRect = { menuItems[i].pos.x + 10, menuItems[i].pos.y + 10, surface->w, surface->h };
        SDL_RenderCopy(renderer, texture, NULL, &textRect);

        SDL_FreeSurface(surface);
        SDL_DestroyTexture(texture);
    }

    // Обновление экрана
    SDL_RenderPresent(renderer);

    // Ожидание событий
    bool quit = false;
    SDL_Event event;
    while (!quit) {
        while (SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_QUIT:
                    m_stateWindow = StateWindow::Exit;
                    quit = true;
                    break;
                case SDL_MOUSEBUTTONDOWN:
                    // Обработка клика на пункте меню
                    int mouseX = event.button.x;
                    int mouseY = event.button.y;
                    for (int i = 0; i < numMenuItems; i++) {
                        if (mouseX >= menuItems[i].pos.x && mouseX <= menuItems[i].pos.x + menuItems[i].pos.w &&
                            mouseY >= menuItems[i].pos.y && mouseY <= menuItems[i].pos.y + menuItems[i].pos.h) {
                            switch (menuItems[i].button) {


                                case gui::GuiButtons::LoadSave:
                                {
                                    quit = true;
                                    m_stateWindow = StateWindow::LoadSave ;
                                    break;
                                }

                                case gui::GuiButtons::DeleteSave :
                                {
                                    quit = true;
                                    m_stateWindow = StateWindow::DeleteSave;
                                    break;
                                }

                                case gui::GuiButtons::Back:
                                {
                                    quit = true;
                                    m_stateWindow = StateWindow::Back;
                                    break;
                                }
                                 default:
                                 {
                                     m_stateWindow = StateWindow::Wait;
                                     break;
                                 }
                            }
                        }
                    }
                    break;
            }
        }
    }

    // Освобождение ресурсов
    TTF_CloseFont(font);
    TTF_Quit();
   // SDL_DestroyRenderer(renderer);
}

LoadGameWindow::StateWindow LoadGameWindow::stateWindow() const {
    return m_stateWindow;
}

