#pragma once

#include "MainPage.g.h"

namespace winrt::BlankApp1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        winrt::event_token PropertyChanged(Windows::UI::Xaml::Data::PropertyChangedEventHandler const& handler);
        void PropertyChanged(winrt::event_token const& token) noexcept;

        void IncrementButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Windows::UI::Xaml::RoutedEventArgs const& e);

    private:
        int32_t m_MyProperty{ 0 };
        winrt::event<winrt::Windows::UI::Xaml::Data::PropertyChangedEventHandler> OnPropertyChanged;
	};
}

namespace winrt::BlankApp1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
