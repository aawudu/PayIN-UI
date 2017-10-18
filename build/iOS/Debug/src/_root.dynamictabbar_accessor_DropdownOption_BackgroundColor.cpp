// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownOption.h>
#include <_root.dynamictabbar_accessor_DropdownOption_BackgroundColor.h>
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

// internal sealed class dynamictabbar_accessor_DropdownOption_BackgroundColor :1
// {
// static dynamictabbar_accessor_DropdownOption_BackgroundColor() :1
static void dynamictabbar_accessor_DropdownOption_BackgroundColor__cctor__fn(uType* __type)
{
    dynamictabbar_accessor_DropdownOption_BackgroundColor::Singleton_ = dynamictabbar_accessor_DropdownOption_BackgroundColor::New1();
    dynamictabbar_accessor_DropdownOption_BackgroundColor::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"BackgroundC...*/]);
}

static void dynamictabbar_accessor_DropdownOption_BackgroundColor_build(uType* type)
{
    ::STRINGS[0] = uString::Const("BackgroundColor");
    ::TYPES[0] = ::g::DropdownOption_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownOption_BackgroundColor::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownOption_BackgroundColor::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* dynamictabbar_accessor_DropdownOption_BackgroundColor_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_accessor_DropdownOption_BackgroundColor);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("dynamictabbar_accessor_DropdownOption_BackgroundColor", options);
    type->fp_build_ = dynamictabbar_accessor_DropdownOption_BackgroundColor_build;
    type->fp_ctor_ = (void*)dynamictabbar_accessor_DropdownOption_BackgroundColor__New1_fn;
    type->fp_cctor_ = dynamictabbar_accessor_DropdownOption_BackgroundColor__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))dynamictabbar_accessor_DropdownOption_BackgroundColor__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))dynamictabbar_accessor_DropdownOption_BackgroundColor__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))dynamictabbar_accessor_DropdownOption_BackgroundColor__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))dynamictabbar_accessor_DropdownOption_BackgroundColor__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_accessor_DropdownOption_BackgroundColor__get_SupportsOriginSetter_fn;
    return type;
}

// public generated dynamictabbar_accessor_DropdownOption_BackgroundColor() :1
void dynamictabbar_accessor_DropdownOption_BackgroundColor__ctor_1_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void dynamictabbar_accessor_DropdownOption_BackgroundColor__GetAsObject_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->BackgroundColor(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void dynamictabbar_accessor_DropdownOption_BackgroundColor__get_Name_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = dynamictabbar_accessor_DropdownOption_BackgroundColor::_name(), void();
}

// public generated dynamictabbar_accessor_DropdownOption_BackgroundColor New() :1
void dynamictabbar_accessor_DropdownOption_BackgroundColor__New1_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor** __retval)
{
    *__retval = dynamictabbar_accessor_DropdownOption_BackgroundColor::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void dynamictabbar_accessor_DropdownOption_BackgroundColor__get_PropertyType_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*Fuse.Drawing.Brush*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void dynamictabbar_accessor_DropdownOption_BackgroundColor__SetAsObject_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::DropdownOption*>(obj, ::TYPES[0/*DropdownOption*/]))->SetBackgroundColor(uCast< ::g::Fuse::Drawing::Brush*>(v, ::TYPES[1/*Fuse.Drawing.Brush*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void dynamictabbar_accessor_DropdownOption_BackgroundColor__get_SupportsOriginSetter_fn(dynamictabbar_accessor_DropdownOption_BackgroundColor* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector dynamictabbar_accessor_DropdownOption_BackgroundColor::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> dynamictabbar_accessor_DropdownOption_BackgroundColor::Singleton_;

// public generated dynamictabbar_accessor_DropdownOption_BackgroundColor() [instance] :1
void dynamictabbar_accessor_DropdownOption_BackgroundColor::ctor_1()
{
    ctor_();
}

// public generated dynamictabbar_accessor_DropdownOption_BackgroundColor New() [static] :1
dynamictabbar_accessor_DropdownOption_BackgroundColor* dynamictabbar_accessor_DropdownOption_BackgroundColor::New1()
{
    dynamictabbar_accessor_DropdownOption_BackgroundColor* obj1 = (dynamictabbar_accessor_DropdownOption_BackgroundColor*)uNew(dynamictabbar_accessor_DropdownOption_BackgroundColor_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
