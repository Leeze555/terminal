﻿#pragma once

#include "Class.g.h"

namespace winrt::ExtensionComponent::implementation
{
    struct Class : ClassT<Class>
    {
        Class() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
        int32_t DoTheThing();
        winrt::Windows::UI::Xaml::FrameworkElement PaneContent();

    private:
        winrt::fire_and_forget _makeWebView(const winrt::Windows::UI::Xaml::Controls::StackPanel parent);
        winrt::fire_and_forget _webMessageReceived(const winrt::Windows::Foundation::IInspectable& sender,
                                                   const winrt::Microsoft::Web::WebView2::Core::CoreWebView2WebMessageReceivedEventArgs& args);
    };
}

namespace winrt::ExtensionComponent::factory_implementation
{
    struct Class : ClassT<Class, implementation::Class>
    {
    };
}
