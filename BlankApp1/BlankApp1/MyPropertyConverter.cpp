#include "pch.h"
#include "MyPropertyConverter.h"
#if __has_include("MyPropertyConverter.g.cpp")
#include "MyPropertyConverter.g.cpp"
#endif

namespace winrt::BlankApp1::implementation
{
    MyPropertyConverter::MyPropertyConverter()
    {
        ::OutputDebugStringW(winrt::to_hstring(__FUNCTION__).c_str());
    }

    Windows::Foundation::IInspectable MyPropertyConverter::Convert(
        Windows::Foundation::IInspectable const& value,
        Windows::UI::Xaml::Interop::TypeName const& /*targetType*/,
        Windows::Foundation::IInspectable const& /*parameter*/,
        hstring const& /*language*/)
    {
        return value;
    }

    Windows::Foundation::IInspectable MyPropertyConverter::ConvertBack(
        Windows::Foundation::IInspectable const& /*value*/,
        Windows::UI::Xaml::Interop::TypeName const& /*targetType*/,
        Windows::Foundation::IInspectable const& /*parameter*/,
        hstring const& /*language*/)
    {
        throw hresult_not_implemented();
    }
}
