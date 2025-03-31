#include "geGameObject.h"

namespace ge
{
    GameObject::GameObject()
    {
    }

    GameObject::~GameObject()
    {
    }

    void GameObject::Update()
    {
        if (GetAsyncKeyState(VK_LEFT) & 0x8000)
        {
            mX -= 0.01f;
        }

        if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
        {
            mX += 0.01f;
        }

        if (GetAsyncKeyState(VK_UP) & 0x8000)
        {
            mY -= 0.01f;
        }

        if (GetAsyncKeyState(VK_DOWN) & 0x8000)
        {
            mY += 0.01f;
        }
    }

    void GameObject::LateUpdate()
    {
    }

    void GameObject::Render(HDC hdc)
    {
        HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));     // 파란색 브러시 생성
        HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);  // 파란색 브러시 선택, 흰색 브러시 반환

        HPEN redPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));    // 빨간색 펜 생성
        HPEN oldPen = (HPEN)SelectObject(hdc, redPen);           // 빨간색 펜 선택, 검은색 펜 반환

        SelectObject(hdc, oldPen);                               // 검은색 펜 선택, 빨간색 펜 반환

        Rectangle(hdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);  // 파란색 브러시, 검은색 펜 

        SelectObject(hdc, oldBrush);                             // 흰색 브러시 선택, 파란색 브러시 반환

        DeleteObject(blueBrush);                                 // 파란색 브러시 삭제
        DeleteObject(redPen);                                    // 빨간색 펜 삭제
    }
}