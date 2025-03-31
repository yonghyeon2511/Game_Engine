#pragma once
#include "CommonInclude.h"

namespace ge
{
    class GameObject
    {
    public:
        GameObject();
        ~GameObject();

        void Update();
        void LateUpdate();
        void Render(HDC hdc);

        // private�� mX, mY�� �����ϱ� ���� �Լ�
        void SetPosition(float x, float y)
        {
            mX = x;
            mY = y;
        }

        float GetPositionX() { return mX; }
        float GetPositionY() { return mY; }

    private:
        // ���� ������Ʈ�� ��ǥ
        float mX;
        float mY;
    };
}