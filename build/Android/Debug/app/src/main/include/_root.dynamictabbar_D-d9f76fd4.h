// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownSelectedItem;}
namespace g{struct dynamictabbar_DropdownSelectedItem_Text_Property;}

namespace g{

// internal sealed class dynamictabbar_DropdownSelectedItem_Text_Property :209
// {
::g::Uno::UX::Property1_type* dynamictabbar_DropdownSelectedItem_Text_Property_typeof();
void dynamictabbar_DropdownSelectedItem_Text_Property__ctor_3_fn(dynamictabbar_DropdownSelectedItem_Text_Property* __this, ::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_DropdownSelectedItem_Text_Property__Get1_fn(dynamictabbar_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void dynamictabbar_DropdownSelectedItem_Text_Property__New1_fn(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name, dynamictabbar_DropdownSelectedItem_Text_Property** __retval);
void dynamictabbar_DropdownSelectedItem_Text_Property__get_Object_fn(dynamictabbar_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_DropdownSelectedItem_Text_Property__Set1_fn(dynamictabbar_DropdownSelectedItem_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void dynamictabbar_DropdownSelectedItem_Text_Property__get_SupportsOriginSetter_fn(dynamictabbar_DropdownSelectedItem_Text_Property* __this, bool* __retval);

struct dynamictabbar_DropdownSelectedItem_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::DropdownSelectedItem*> _obj;

    void ctor_3(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_DropdownSelectedItem_Text_Property* New1(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
