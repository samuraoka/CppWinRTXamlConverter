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
        OnPropertyChanged(*this, PropertyChangedEventArgs{ L"MyProperty" });
    }

    winrt::event_token MainPage::PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler)
    {
        return OnPropertyChanged.add(handler);
    }
    void MainPage::PropertyChanged(winrt::event_token const& token) noexcept
    {
        OnPropertyChanged.remove(token);
    }
}

void winrt::BlankApp1::implementation::MainPage::IncrementButton_Click(
    winrt::Windows::Foundation::IInspectable const& /*sender*/,
    winrt::Windows::UI::Xaml::RoutedEventArgs const& /*e*/)
{
    MyProperty(m_MyProperty + 1);
}
