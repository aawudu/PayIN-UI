// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_accessor_DropdownOption_Text;}

namespace g{

// internal sealed class dynamictabbar_accessor_DropdownOption_Text :21
// {
::g::Uno::UX::PropertyAccessor_type* dynamictabbar_accessor_DropdownOption_Text_typeof();
void dynamictabbar_accessor_DropdownOption_Text__ctor_1_fn(dynamictabbar_accessor_DropdownOption_Text* __this);
void dynamictabbar_accessor_DropdownOption_Text__GetAsObject_fn(dynamictabbar_accessor_DropdownOption_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void dynamictabbar_accessor_DropdownOption_Text__get_Name_fn(dynamictabbar_accessor_DropdownOption_Text* __this, ::g::Uno::UX::Selector* __retval);
void dynamictabbar_accessor_DropdownOption_Text__New1_fn(dynamictabbar_accessor_DropdownOption_Text** __retval);
void dynamictabbar_accessor_DropdownOption_Text__get_PropertyType_fn(dynamictabbar_accessor_DropdownOption_Text* __this, uType** __retval);
void dynamictabbar_accessor_DropdownOption_Text__SetAsObject_fn(dynamictabbar_accessor_DropdownOption_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void dynamictabbar_accessor_DropdownOption_Text__get_SupportsOriginSetter_fn(dynamictabbar_accessor_DropdownOption_Text* __this, bool* __retval);

struct dynamictabbar_accessor_DropdownOption_Text : ::g::Uno::UX::PropertyAccessor
{
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return dynamictabbar_accessor_DropdownOption_Text_typeof()->Init(), _name_; }
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return dynamictabbar_accessor_DropdownOption_Text_typeof()->Init(), Singleton_; }

    void ctor_1();
    static dynamictabbar_accessor_DropdownOption_Text* New1();
};
// }

} // ::g
