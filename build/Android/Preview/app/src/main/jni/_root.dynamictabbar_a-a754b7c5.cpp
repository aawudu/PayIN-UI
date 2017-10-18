// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownSelectedItem.h>
#include <_root.dynamictabbar_a-a754b7c5.h>
#include <Uno.Bool.h>
#include <Uno.Float4.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class dynamictabbar_accessor_DropdownSelectedItem_TextColor :61
// {
// static dynamictabbar_accessor_DropdownSelectedItem_TextColor() :61
static void dynamictabbar_accessor_DropdownSelectedItem_TextColor__cctor__fn(uType* __type)
{
    dynamictabbar_accessor_DropdownSelectedItem_TextColor::Singleton_ = dynamictabbar_accessor_DropdownSelectedItem_TextColor::New1();
    dynamictabbar_accessor_DropdownSelectedItem_TextColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"TextColor"*/]);
}

static void dynamictabbar_accessor_DropdownSelectedItem_TextColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("TextColor");
    ::TYPES[0] = ::g::DropdownSelectedItem_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownSelectedItem_TextColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownSelectedItem_TextColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* dynamictabbar_accessor_DropdownSelectedItem_TextColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_accessor_DropdownSelectedItem_TextColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("dynamictabbar_accessor_DropdownSelectedItem_TextColor", options);
    type->fp_build_ = dynamictabbar_accessor_DropdownSelectedItem_TextColor_build;
    type->fp_ctor_ = (void*)dynamictabbar_accessor_DropdownSelectedItem_TextColor__New1_fn;
    type->fp_cctor_ = dynamictabbar_accessor_DropdownSelectedItem_TextColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))dynamictabbar_accessor_DropdownSelectedItem_TextColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))dynamictabbar_accessor_DropdownSelectedItem_TextColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated dynamictabbar_accessor_DropdownSelectedItem_TextColor() :61
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__ctor_1_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :67
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__GetAsObject_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("dynamictabbar_accessor_DropdownSelectedItem_TextColor", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float4_typeof(), uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->TextColor()), void();
}

// public override sealed Uno.UX.Selector get_Name() :64
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_Name_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = dynamictabbar_accessor_DropdownSelectedItem_TextColor::_name(), void();
}

// public generated dynamictabbar_accessor_DropdownSelectedItem_TextColor New() :61
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__New1_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor** __retval)
{
    *__retval = dynamictabbar_accessor_DropdownSelectedItem_TextColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :66
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_PropertyType_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float4_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :68
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__SetAsObject_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_accessor_DropdownSelectedItem_TextColor", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->SetTextColor(uUnbox< ::g::Uno::Float4>(::g::Uno::Float4_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :69
void dynamictabbar_accessor_DropdownSelectedItem_TextColor__get_SupportsOriginSetter_fn(dynamictabbar_accessor_DropdownSelectedItem_TextColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector dynamictabbar_accessor_DropdownSelectedItem_TextColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> dynamictabbar_accessor_DropdownSelectedItem_TextColor::Singleton_;

// public generated dynamictabbar_accessor_DropdownSelectedItem_TextColor() [instance] :61
void dynamictabbar_accessor_DropdownSelectedItem_TextColor::ctor_1()
{
    ctor_();
}

// public generated dynamictabbar_accessor_DropdownSelectedItem_TextColor New() [static] :61
dynamictabbar_accessor_DropdownSelectedItem_TextColor* dynamictabbar_accessor_DropdownSelectedItem_TextColor::New1()
{
    dynamictabbar_accessor_DropdownSelectedItem_TextColor* obj1 = (dynamictabbar_accessor_DropdownSelectedItem_TextColor*)uNew(dynamictabbar_accessor_DropdownSelectedItem_TextColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
