// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Bool.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseTriggersWhileBool_Value_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseTriggersWhileBool_Value_Property :175
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseTriggersWhileBool_Value_Property_typeof();
void dynamictabbar_FuseTriggersWhileBool_Value_Property__ctor_3_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseTriggersWhileBool_Value_Property__Get1_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval);
void dynamictabbar_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseTriggersWhileBool_Value_Property** __retval);
void dynamictabbar_FuseTriggersWhileBool_Value_Property__get_Object_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseTriggersWhileBool_Value_Property__Set1_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin);

struct dynamictabbar_FuseTriggersWhileBool_Value_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Triggers::WhileBool*> _obj;

    void ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseTriggersWhileBool_Value_Property* New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
