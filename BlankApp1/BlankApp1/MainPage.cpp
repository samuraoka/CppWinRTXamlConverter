#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::BlankApp1::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        return m_MyProperty;
    }

    void MainPage::MyProperty(int32_t value)
    {
        m_MyProperty = value;
    }
}
