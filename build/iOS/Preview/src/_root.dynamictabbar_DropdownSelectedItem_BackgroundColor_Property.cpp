// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/iOS/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownSelectedItem.h>
#include <_root.dynamictabbar_DropdownSelectedItem_BackgroundColor_Property.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_DropdownSelectedItem_BackgroundColor_Property :302
// {
static void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::DropdownSelectedItem_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*DropdownSelectedItem*/], offsetof(::g::dynamictabbar_DropdownSelectedItem_BackgroundColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_DropdownSelectedItem_BackgroundColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_DropdownSelectedItem_BackgroundColor_Property", options);
    type->fp_build_ = dynamictabbar_DropdownSelectedItem_BackgroundColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public dynamictabbar_DropdownSelectedItem_BackgroundColor_Property(DropdownSelectedItem obj, Uno.UX.Selector name) :305
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__ctor_3_fn(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* __this, ::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :307
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__Get1_fn(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("dynamictabbar_DropdownSelectedItem_BackgroundColor_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->BackgroundColor(), void();
}

// public dynamictabbar_DropdownSelectedItem_BackgroundColor_Property New(DropdownSelectedItem obj, Uno.UX.Selector name) :305
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__New1_fn(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector* name, dynamictabbar_DropdownSelectedItem_BackgroundColor_Property** __retval)
{
    *__retval = dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :306
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__get_Object_fn(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :308
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__Set1_fn(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_DropdownSelectedItem_BackgroundColor_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::DropdownSelectedItem*>(obj, ::TYPES[0/*DropdownSelectedItem*/]))->SetBackgroundColor(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :309
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property__get_SupportsOriginSetter_fn(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public dynamictabbar_DropdownSelectedItem_BackgroundColor_Property(DropdownSelectedItem obj, Uno.UX.Selector name) [instance] :305
void dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::ctor_3(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_DropdownSelectedItem_BackgroundColor_Property New(DropdownSelectedItem obj, Uno.UX.Selector name) [static] :305
dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::New1(::g::DropdownSelectedItem* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_DropdownSelectedItem_BackgroundColor_Property* obj1 = (dynamictabbar_DropdownSelectedItem_BackgroundColor_Property*)uNew(dynamictabbar_DropdownSelectedItem_BackgroundColor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
