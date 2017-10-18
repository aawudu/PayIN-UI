// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.dynamictabbar_a-c1cc018e.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[2];

namespace g{

// internal sealed class dynamictabbar_accessor_DropdownMenu_FontSize :111
// {
// static dynamictabbar_accessor_DropdownMenu_FontSize() :111
static void dynamictabbar_accessor_DropdownMenu_FontSize__cctor__fn(uType* __type)
{
    dynamictabbar_accessor_DropdownMenu_FontSize::Singleton_ = dynamictabbar_accessor_DropdownMenu_FontSize::New1();
    dynamictabbar_accessor_DropdownMenu_FontSize::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"FontSize"*/]);
}

static void dynamictabbar_accessor_DropdownMenu_FontSize_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FontSize");
    ::TYPES[0] = ::g::DropdownMenu_typeof();
    ::TYPES[1] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownMenu_FontSize::_name_, uFieldFlagsStatic,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&::g::dynamictabbar_accessor_DropdownMenu_FontSize::Singleton_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* dynamictabbar_accessor_DropdownMenu_FontSize_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_accessor_DropdownMenu_FontSize);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("dynamictabbar_accessor_DropdownMenu_FontSize", options);
    type->fp_build_ = dynamictabbar_accessor_DropdownMenu_FontSize_build;
    type->fp_ctor_ = (void*)dynamictabbar_accessor_DropdownMenu_FontSize__New1_fn;
    type->fp_cctor_ = dynamictabbar_accessor_DropdownMenu_FontSize__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))dynamictabbar_accessor_DropdownMenu_FontSize__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))dynamictabbar_accessor_DropdownMenu_FontSize__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))dynamictabbar_accessor_DropdownMenu_FontSize__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))dynamictabbar_accessor_DropdownMenu_FontSize__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_accessor_DropdownMenu_FontSize__get_SupportsOriginSetter_fn;
    return type;
}

// public generated dynamictabbar_accessor_DropdownMenu_FontSize() :111
void dynamictabbar_accessor_DropdownMenu_FontSize__ctor_1_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :117
void dynamictabbar_accessor_DropdownMenu_FontSize__GetAsObject_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("dynamictabbar_accessor_DropdownMenu_FontSize", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uBox(::g::Uno::Float_typeof(), uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->FontSize()), void();
}

// public override sealed Uno.UX.Selector get_Name() :114
void dynamictabbar_accessor_DropdownMenu_FontSize__get_Name_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = dynamictabbar_accessor_DropdownMenu_FontSize::_name(), void();
}

// public generated dynamictabbar_accessor_DropdownMenu_FontSize New() :111
void dynamictabbar_accessor_DropdownMenu_FontSize__New1_fn(dynamictabbar_accessor_DropdownMenu_FontSize** __retval)
{
    *__retval = dynamictabbar_accessor_DropdownMenu_FontSize::New1();
}

// public override sealed Uno.Type get_PropertyType() :116
void dynamictabbar_accessor_DropdownMenu_FontSize__get_PropertyType_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Float_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :118
void dynamictabbar_accessor_DropdownMenu_FontSize__SetAsObject_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_accessor_DropdownMenu_FontSize", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->SetFontSize(uUnbox<float>(::g::Uno::Float_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter() :119
void dynamictabbar_accessor_DropdownMenu_FontSize__get_SupportsOriginSetter_fn(dynamictabbar_accessor_DropdownMenu_FontSize* __this, bool* __retval)
{
    return *__retval = true, void();
}

::g::Uno::UX::Selector dynamictabbar_accessor_DropdownMenu_FontSize::_name_;
uSStrong< ::g::Uno::UX::PropertyAccessor*> dynamictabbar_accessor_DropdownMenu_FontSize::Singleton_;

// public generated dynamictabbar_accessor_DropdownMenu_FontSize() [instance] :111
void dynamictabbar_accessor_DropdownMenu_FontSize::ctor_1()
{
    ctor_();
}

// public generated dynamictabbar_accessor_DropdownMenu_FontSize New() [static] :111
dynamictabbar_accessor_DropdownMenu_FontSize* dynamictabbar_accessor_DropdownMenu_FontSize::New1()
{
    dynamictabbar_accessor_DropdownMenu_FontSize* obj1 = (dynamictabbar_accessor_DropdownMenu_FontSize*)uNew(dynamictabbar_accessor_DropdownMenu_FontSize_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
