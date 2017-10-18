// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseTranslation_X_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseTranslation_X_Property :330
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseTranslation_X_Property_typeof();
void dynamictabbar_FuseTranslation_X_Property__ctor_3_fn(dynamictabbar_FuseTranslation_X_Property* __this, ::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseTranslation_X_Property__Get1_fn(dynamictabbar_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void dynamictabbar_FuseTranslation_X_Property__New1_fn(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseTranslation_X_Property** __retval);
void dynamictabbar_FuseTranslation_X_Property__get_Object_fn(dynamictabbar_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseTranslation_X_Property__Set1_fn(dynamictabbar_FuseTranslation_X_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);

struct dynamictabbar_FuseTranslation_X_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Translation*> _obj;

    void ctor_3(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseTranslation_X_Property* New1(::g::Fuse::Translation* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
