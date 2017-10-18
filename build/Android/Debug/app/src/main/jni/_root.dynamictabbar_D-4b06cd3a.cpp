// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.dynamictabbar_D-4b06cd3a.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_DropdownOption_FontSize_Property :244
// {
static void dynamictabbar_DropdownOption_FontSize_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownOption_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownOption*/], offsetof(::g::dynamictabbar_DropdownOption_FontSize_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_DropdownOption_FontSize_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_DropdownOption_FontSize_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_DropdownOption_FontSize_Property", options);
    type->fp_build_ = dynamictabbar_DropdownOption_FontSize_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_DropdownOption_FontSize_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_DropdownOption_FontSize_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_DropdownOption_FontSize_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_DropdownOption_FontSize_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public dynamictabbar_DropdownOption_FontSize_Property(DropdownOption obj, Uno.UX.Selector name) :247
void dynamictabbar_DropdownOption_FontSize_Property__ctor_3_fn(dynamictabbar_DropdownOption_FontSize_Property* __this, ::g::DropdownOption* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :249
void dynamictabbar_DropdownOption_FontSize_Property__Get1_fn(dynamictabbar_DropdownOption_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->FontSize(), void();
}

// public dynamictabbar_DropdownOption_FontSize_Property New(DropdownOption obj, Uno.UX.Selector name) :247
void dynamictabbar_DropdownOption_FontSize_Property__New1_fn(::g::DropdownOption* obj, ::g::Uno::UX::Selector* name, dynamictabbar_DropdownOption_FontSize_Property** __retval)
{
    *__retval = dynamictabbar_DropdownOption_FontSize_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :248
void dynamictabbar_DropdownOption_FontSize_Property__get_Object_fn(dynamictabbar_DropdownOption_FontSize_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :250
void dynamictabbar_DropdownOption_FontSize_Property__Set1_fn(dynamictabbar_DropdownOption_FontSize_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->SetFontSize(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter() :251
void dynamictabbar_DropdownOption_FontSize_Property__get_SupportsOriginSetter_fn(dynamictabbar_DropdownOption_FontSize_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public dynamictabbar_DropdownOption_FontSize_Property(DropdownOption obj, Uno.UX.Selector name) [instance] :247
void dynamictabbar_DropdownOption_FontSize_Property::ctor_3(::g::DropdownOption* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_DropdownOption_FontSize_Property New(DropdownOption obj, Uno.UX.Selector name) [static] :247
dynamictabbar_DropdownOption_FontSize_Property* dynamictabbar_DropdownOption_FontSize_Property::New1(::g::DropdownOption* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_DropdownOption_FontSize_Property* obj1 = (dynamictabbar_DropdownOption_FontSize_Property*)uNew(dynamictabbar_DropdownOption_FontSize_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
