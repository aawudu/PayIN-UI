// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.dynamictabbar_D-bc69bab7.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_DropdownMenu_BackgroundColor_Property :463
// {
static void dynamictabbar_DropdownMenu_BackgroundColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownMenu_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownMenu*/], offsetof(::g::dynamictabbar_DropdownMenu_BackgroundColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_DropdownMenu_BackgroundColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_DropdownMenu_BackgroundColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_DropdownMenu_BackgroundColor_Property", options);
    type->fp_build_ = dynamictabbar_DropdownMenu_BackgroundColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_DropdownMenu_BackgroundColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_DropdownMenu_BackgroundColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_DropdownMenu_BackgroundColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_DropdownMenu_BackgroundColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public dynamictabbar_DropdownMenu_BackgroundColor_Property(DropdownMenu obj, Uno.UX.Selector name) :466
void dynamictabbar_DropdownMenu_BackgroundColor_Property__ctor_3_fn(dynamictabbar_DropdownMenu_BackgroundColor_Property* __this, ::g::DropdownMenu* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :468
void dynamictabbar_DropdownMenu_BackgroundColor_Property__Get1_fn(dynamictabbar_DropdownMenu_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("dynamictabbar_DropdownMenu_BackgroundColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->BackgroundColor(), void();
}

// public dynamictabbar_DropdownMenu_BackgroundColor_Property New(DropdownMenu obj, Uno.UX.Selector name) :466
void dynamictabbar_DropdownMenu_BackgroundColor_Property__New1_fn(::g::DropdownMenu* obj, ::g::Uno::UX::Selector* name, dynamictabbar_DropdownMenu_BackgroundColor_Property** __retval)
{
    *__retval = dynamictabbar_DropdownMenu_BackgroundColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :467
void dynamictabbar_DropdownMenu_BackgroundColor_Property__get_Object_fn(dynamictabbar_DropdownMenu_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :469
void dynamictabbar_DropdownMenu_BackgroundColor_Property__Set1_fn(dynamictabbar_DropdownMenu_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_DropdownMenu_BackgroundColor_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::DropdownMenu*>(obj, ::TYPES[0/*DropdownMenu*/]))->SetBackgroundColor(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :470
void dynamictabbar_DropdownMenu_BackgroundColor_Property__get_SupportsOriginSetter_fn(dynamictabbar_DropdownMenu_BackgroundColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public dynamictabbar_DropdownMenu_BackgroundColor_Property(DropdownMenu obj, Uno.UX.Selector name) [instance] :466
void dynamictabbar_DropdownMenu_BackgroundColor_Property::ctor_3(::g::DropdownMenu* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_DropdownMenu_BackgroundColor_Property New(DropdownMenu obj, Uno.UX.Selector name) [static] :466
dynamictabbar_DropdownMenu_BackgroundColor_Property* dynamictabbar_DropdownMenu_BackgroundColor_Property::New1(::g::DropdownMenu* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_DropdownMenu_BackgroundColor_Property* obj1 = (dynamictabbar_DropdownMenu_BackgroundColor_Property*)uNew(dynamictabbar_DropdownMenu_BackgroundColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
