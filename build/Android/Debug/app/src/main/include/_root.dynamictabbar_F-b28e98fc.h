// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseControlsPanel_Color_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseControlsPanel_Color_Property :112
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseControlsPanel_Color_Property_typeof();
void dynamictabbar_FuseControlsPanel_Color_Property__ctor_3_fn(dynamictabbar_FuseControlsPanel_Color_Property* __this, ::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseControlsPanel_Color_Property__Get1_fn(dynamictabbar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval);
void dynamictabbar_FuseControlsPanel_Color_Property__New1_fn(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseControlsPanel_Color_Property** __retval);
void dynamictabbar_FuseControlsPanel_Color_Property__get_Object_fn(dynamictabbar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseControlsPanel_Color_Property__Set1_fn(dynamictabbar_FuseControlsPanel_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin);
void dynamictabbar_FuseControlsPanel_Color_Property__get_SupportsOriginSetter_fn(dynamictabbar_FuseControlsPanel_Color_Property* __this, bool* __retval);

struct dynamictabbar_FuseControlsPanel_Color_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Controls::Panel*> _obj;

    void ctor_3(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseControlsPanel_Color_Property* New1(::g::Fuse::Controls::Panel* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
