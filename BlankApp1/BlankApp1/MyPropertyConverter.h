#pragma once

#include "MyPropertyConverter.g.h"

namespace winrt::BlankApp1::implementation
{
    struct MyPropertyConverter : MyPropertyConverterT<MyPropertyConverter>
    {
        MyPropertyConverter() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::BlankApp1::factory_implementation
{
    struct MyPropertyConverter : MyPropertyConverterT<MyPropertyConverter, implementation::MyPropertyConverter>
    {
    };
}
