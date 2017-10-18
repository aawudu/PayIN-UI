// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.String.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_MyButton_Text_Property;}
namespace g{struct MyButton;}

namespace g{

// internal sealed class dynamictabbar_MyButton_Text_Property :137
// {
::g::Uno::UX::Property1_type* dynamictabbar_MyButton_Text_Property_typeof();
void dynamictabbar_MyButton_Text_Property__ctor_3_fn(dynamictabbar_MyButton_Text_Property* __this, ::g::MyButton* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_MyButton_Text_Property__Get1_fn(dynamictabbar_MyButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval);
void dynamictabbar_MyButton_Text_Property__New1_fn(::g::MyButton* obj, ::g::Uno::UX::Selector* name, dynamictabbar_MyButton_Text_Property** __retval);
void dynamictabbar_MyButton_Text_Property__get_Object_fn(dynamictabbar_MyButton_Text_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_MyButton_Text_Property__Set1_fn(dynamictabbar_MyButton_Text_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin);
void dynamictabbar_MyButton_Text_Property__get_SupportsOriginSetter_fn(dynamictabbar_MyButton_Text_Property* __this, bool* __retval);

struct dynamictabbar_MyButton_Text_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::MyButton*> _obj;

    void ctor_3(::g::MyButton* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_MyButton_Text_Property* New1(::g::MyButton* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
