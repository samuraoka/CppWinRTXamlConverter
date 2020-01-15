#include "pch.h"
#include "MyPropertyConverter.h"
#if __has_include("MyPropertyConverter.g.cpp")
#include "MyPropertyConverter.g.cpp"
#endif

namespace winrt::BlankApp1::implementation
{
    int32_t MyPropertyConverter::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MyPropertyConverter::MyProperty(int32_t /*value*/)
    {
        throw hresult_not_implemented();
    }
}
