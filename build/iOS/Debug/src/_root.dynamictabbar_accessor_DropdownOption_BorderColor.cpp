// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.dynamictabbar_accessor_DropdownOption_BorderColor.h>
#include <Fuse.Drawing.Brush.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class dynamictabbar_accessor_DropdownOption_BorderColor :11
// {
// static dynamictabbar_accessor_DropdownOption_BorderColor() :11
static void dynamictabbar_accessor_DropdownOption_BorderColor__cctor__fn(uType* __type)
{
    dynamictabbar_accessor_DropdownOption_BorderColor::Singleton_ = dynamictabbar_accessor_DropdownOption_BorderColor::New1();
    dynamictabbar_accessor_DropdownOption_BorderColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"BorderColor"*/]);
}

static void dynamictabbar_accessor_DropdownOption_BorderColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BorderColor");
    ::TYPES[0] = ::g::DropdownOption_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownOption_BorderColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownOption_BorderColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* dynamictabbar_accessor_DropdownOption_BorderColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_accessor_DropdownOption_BorderColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("dynamictabbar_accessor_DropdownOption_BorderColor", options);
    type->fp_build_ = dynamictabbar_accessor_DropdownOption_BorderColor_build;
    type->fp_ctor_ = (void*)dynamictabbar_accessor_DropdownOption_BorderColor__New1_fn;
    type->fp_cctor_ = dynamictabbar_accessor_DropdownOption_BorderColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))dynamictabbar_accessor_DropdownOption_BorderColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))dynamictabbar_accessor_DropdownOption_BorderColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))dynamictabbar_accessor_DropdownOption_BorderColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))dynamictabbar_accessor_DropdownOption_BorderColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_accessor_DropdownOption_BorderColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated dynamictabbar_accessor_DropdownOption_BorderColor() :11
void dynamictabbar_accessor_DropdownOption_BorderColor__ctor_1_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :17
void dynamictabbar_accessor_DropdownOption_BorderColor__GetAsObject_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->BorderColor(), void();
}

// public override sealed Uno.UX.Selector get_Name() :14
void dynamictabbar_accessor_DropdownOption_BorderColor__get_Name_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = dynamictabbar_accessor_DropdownOption_BorderColor::_name(), void();
}

// public generated dynamictabbar_accessor_DropdownOption_BorderColor New() :11
void dynamictabbar_accessor_DropdownOption_BorderColor__New1_fn(dynamictabbar_accessor_DropdownOption_BorderColor** __retval)
{
    *__retval = dynamictabbar_accessor_DropdownOption_BorderColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :16
void dynamictabbar_accessor_DropdownOption_BorderColor__get_PropertyType_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Fuse.Drawing.Brush*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :18
void dynamictabbar_accessor_DropdownOption_BorderColor__SetAsObject_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->SetBorderColor(uCast< ::g::Fuse::Drawing::Brush*>(v, ::TYPES[1/*Fuse.Drawing.Brush*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :19
void dynamictabbar_accessor_DropdownOption_BorderColor__get_SupportsOriginSetter_fn(dynamictabbar_accessor_DropdownOption_BorderColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector dynamictabbar_accessor_DropdownOption_BorderColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> dynamictabbar_accessor_DropdownOption_BorderColor::Singleton_;

// public generated dynamictabbar_accessor_DropdownOption_BorderColor() [instance] :11
void dynamictabbar_accessor_DropdownOption_BorderColor::ctor_1()
{
    ctor_();
}

// public generated dynamictabbar_accessor_DropdownOption_BorderColor New() [static] :11
dynamictabbar_accessor_DropdownOption_BorderColor* dynamictabbar_accessor_DropdownOption_BorderColor::New1()
{
    dynamictabbar_accessor_DropdownOption_BorderColor* obj1 = (dynamictabbar_accessor_DropdownOption_BorderColor*)uNew(dynamictabbar_accessor_DropdownOption_BorderColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
