#include "geApplication.h"

namespace ge
{
    // 초기화
    Application::Application() : mHwnd(nullptr), mHdc(nullptr)
    {
    }

    Application::~Application()
    {
    }

    void Application::Initialize(HWND hwnd)
    {
        mHwnd = hwnd;        // mHwnd 멤버 변수에 hWnd(핸들) 저장
        mHdc = GetDC(hwnd);  // GetDC(HWND hWnd)

        mPlayer.SetPosition(0, 0);
    }

    void Application::Run()
    {
        Update();
        LateUpdate();
        Render();
    }

    void Application::Update()
    {
        mPlayer.Update();
    }

    void Application::LateUpdate()
    {
    }

    void Application::Render()
    {
        mPlayer.Render(mHdc);
    }
}