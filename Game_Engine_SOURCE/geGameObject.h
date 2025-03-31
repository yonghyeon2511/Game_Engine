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

        // private인 mX, mY에 접근하기 위한 함수
        void SetPosition(float x, float y)
        {
            mX = x;
            mY = y;
        }

        float GetPositionX() { return mX; }
        float GetPositionY() { return mY; }

    private:
        // 게임 오브젝트의 좌표
        float mX;
        float mY;
    };
}