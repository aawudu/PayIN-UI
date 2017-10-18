// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseScaling_Factor_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseScaling_Factor_Property :297
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseScaling_Factor_Property_typeof();
void dynamictabbar_FuseScaling_Factor_Property__ctor_3_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseScaling_Factor_Property__Get1_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void dynamictabbar_FuseScaling_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseScaling_Factor_Property** __retval);
void dynamictabbar_FuseScaling_Factor_Property__get_Object_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseScaling_Factor_Property__Set1_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct dynamictabbar_FuseScaling_Factor_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Scaling*> _obj;

    void ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseScaling_Factor_Property* New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
