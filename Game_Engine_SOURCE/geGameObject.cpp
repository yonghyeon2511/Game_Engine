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
        HBRUSH blueBrush = CreateSolidBrush(RGB(0, 0, 255));     // �Ķ��� �귯�� ����
        HBRUSH oldBrush = (HBRUSH)SelectObject(hdc, blueBrush);  // �Ķ��� �귯�� ����, ��� �귯�� ��ȯ

        HPEN redPen = CreatePen(PS_SOLID, 2, RGB(255, 0, 0));    // ������ �� ����
        HPEN oldPen = (HPEN)SelectObject(hdc, redPen);           // ������ �� ����, ������ �� ��ȯ

        SelectObject(hdc, oldPen);                               // ������ �� ����, ������ �� ��ȯ

        Rectangle(hdc, 100 + mX, 100 + mY, 200 + mX, 200 + mY);  // �Ķ��� �귯��, ������ �� 

        SelectObject(hdc, oldBrush);                             // ��� �귯�� ����, �Ķ��� �귯�� ��ȯ

        DeleteObject(blueBrush);                                 // �Ķ��� �귯�� ����
        DeleteObject(redPen);                                    // ������ �� ����
    }
}