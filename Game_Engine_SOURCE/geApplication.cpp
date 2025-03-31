#include "geApplication.h"

namespace ge
{
    // �ʱ�ȭ
    Application::Application() : mHwnd(nullptr), mHdc(nullptr)
    {
    }

    Application::~Application()
    {
    }

    void Application::Initialize(HWND hwnd)
    {
        mHwnd = hwnd;        // mHwnd ��� ������ hWnd(�ڵ�) ����
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