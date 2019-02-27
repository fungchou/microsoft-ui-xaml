// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "PersonPictureTemplateSettings.h"

GlobalDependencyProperty PersonPictureTemplateSettingsProperties::s_DispatcherProperty{ nullptr };
GlobalDependencyProperty PersonPictureTemplateSettingsProperties::s_EffectiveImageBrushProperty{ nullptr };
GlobalDependencyProperty PersonPictureTemplateSettingsProperties::s_EffectiveInitialsProperty{ nullptr };

PersonPictureTemplateSettingsProperties::PersonPictureTemplateSettingsProperties()
{
    EnsureProperties();
}

void PersonPictureTemplateSettingsProperties::EnsureProperties()
{
    if (!s_DispatcherProperty)
    {
        s_DispatcherProperty =
            InitializeDependencyProperty(
                L"Dispatcher",
                winrt::name_of<winrt::CoreDispatcher>(),
                winrt::name_of<winrt::PersonPictureTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::CoreDispatcher>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_EffectiveImageBrushProperty)
    {
        s_EffectiveImageBrushProperty =
            InitializeDependencyProperty(
                L"EffectiveImageBrush",
                winrt::name_of<winrt::ImageBrush>(),
                winrt::name_of<winrt::PersonPictureTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::ImageBrush>::BoxedDefaultValue(),
                nullptr);
    }
    if (!s_EffectiveInitialsProperty)
    {
        s_EffectiveInitialsProperty =
            InitializeDependencyProperty(
                L"EffectiveInitials",
                winrt::name_of<winrt::hstring>(),
                winrt::name_of<winrt::PersonPictureTemplateSettings>(),
                false /* isAttached */,
                ValueHelper<winrt::hstring>::BoxedDefaultValue(),
                nullptr);
    }
}

void PersonPictureTemplateSettingsProperties::ClearProperties()
{
    s_DispatcherProperty = nullptr;
    s_EffectiveImageBrushProperty = nullptr;
    s_EffectiveInitialsProperty = nullptr;
}

void PersonPictureTemplateSettingsProperties::Dispatcher(winrt::CoreDispatcher const& value)
{
    static_cast<PersonPictureTemplateSettings*>(this)->SetValue(s_DispatcherProperty, ValueHelper<winrt::CoreDispatcher>::BoxValueIfNecessary(value));
}

winrt::CoreDispatcher PersonPictureTemplateSettingsProperties::Dispatcher()
{
    return ValueHelper<winrt::CoreDispatcher>::CastOrUnbox(static_cast<PersonPictureTemplateSettings*>(this)->GetValue(s_DispatcherProperty));
}

void PersonPictureTemplateSettingsProperties::EffectiveImageBrush(winrt::ImageBrush const& value)
{
    static_cast<PersonPictureTemplateSettings*>(this)->SetValue(s_EffectiveImageBrushProperty, ValueHelper<winrt::ImageBrush>::BoxValueIfNecessary(value));
}

winrt::ImageBrush PersonPictureTemplateSettingsProperties::EffectiveImageBrush()
{
    return ValueHelper<winrt::ImageBrush>::CastOrUnbox(static_cast<PersonPictureTemplateSettings*>(this)->GetValue(s_EffectiveImageBrushProperty));
}

void PersonPictureTemplateSettingsProperties::EffectiveInitials(winrt::hstring const& value)
{
    static_cast<PersonPictureTemplateSettings*>(this)->SetValue(s_EffectiveInitialsProperty, ValueHelper<winrt::hstring>::BoxValueIfNecessary(value));
}

winrt::hstring PersonPictureTemplateSettingsProperties::EffectiveInitials()
{
    return ValueHelper<winrt::hstring>::CastOrUnbox(static_cast<PersonPictureTemplateSettings*>(this)->GetValue(s_EffectiveInitialsProperty));
}