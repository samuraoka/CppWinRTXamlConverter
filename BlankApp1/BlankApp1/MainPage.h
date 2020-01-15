#pragma once

#include "MainPage.g.h"

namespace winrt::BlankApp1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

    private:
        int32_t m_MyProperty{ 0 };
    };
}

namespace winrt::BlankApp1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
