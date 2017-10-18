// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseVisual_IsEnabled_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseVisual_IsEnabled_Property :422
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseVisual_IsEnabled_Property_typeof();
void dynamictabbar_FuseVisual_IsEnabled_Property__ctor_3_fn(dynamictabbar_FuseVisual_IsEnabled_Property* __this, ::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseVisual_IsEnabled_Property__Get1_fn(dynamictabbar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void dynamictabbar_FuseVisual_IsEnabled_Property__New1_fn(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseVisual_IsEnabled_Property** __retval);
void dynamictabbar_FuseVisual_IsEnabled_Property__get_Object_fn(dynamictabbar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseVisual_IsEnabled_Property__Set1_fn(dynamictabbar_FuseVisual_IsEnabled_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct dynamictabbar_FuseVisual_IsEnabled_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Visual*> _obj;

    void ctor_3(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseVisual_IsEnabled_Property* New1(::g::Fuse::Visual* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
