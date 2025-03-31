#pragma once
#include "CommonInclude.h"
#include "geGameObject.h"

namespace ge
{
    class Application
    {
    public:
        Application();   // 持失切
        ~Application();  // 社瑚切

        void Initialize(HWND hwnd);
        void Run();
        void Update();
        void LateUpdate();
        void Render();

    private:
        HWND mHwnd;  // Handle
        HDC mHdc;    // Device Context

        GameObject mPlayer;
    };
}