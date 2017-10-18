// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_FuseControlsNavigationControl_Active_Property.h>
#include <Fuse.Controls.NavigationControl.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseControlsNavigationControl_Active_Property :141
// {
static void dynamictabbar_FuseControlsNavigationControl_Active_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::NavigationControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.NavigationControl*/], offsetof(::g::dynamictabbar_FuseControlsNavigationControl_Active_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseControlsNavigationControl_Active_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseControlsNavigationControl_Active_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseControlsNavigationControl_Active_Property", options);
    type->fp_build_ = dynamictabbar_FuseControlsNavigationControl_Active_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseControlsNavigationControl_Active_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseControlsNavigationControl_Active_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseControlsNavigationControl_Active_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) :144
void dynamictabbar_FuseControlsNavigationControl_Active_Property__ctor_3_fn(dynamictabbar_FuseControlsNavigationControl_Active_Property* __this, ::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Visual Get(Uno.UX.PropertyObject obj) :146
void dynamictabbar_FuseControlsNavigationControl_Active_Property__Get1_fn(dynamictabbar_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::NavigationControl*>(obj, ::TYPES[0/*Fuse.Controls.NavigationControl*/]))->Active(), void();
}

// public dynamictabbar_FuseControlsNavigationControl_Active_Property New(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) :144
void dynamictabbar_FuseControlsNavigationControl_Active_Property__New1_fn(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseControlsNavigationControl_Active_Property** __retval)
{
    *__retval = dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :145
void dynamictabbar_FuseControlsNavigationControl_Active_Property__get_Object_fn(dynamictabbar_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Visual v, Uno.UX.IPropertyListener origin) :147
void dynamictabbar_FuseControlsNavigationControl_Active_Property__Set1_fn(dynamictabbar_FuseControlsNavigationControl_Active_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Visual* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::NavigationControl*>(obj, ::TYPES[0/*Fuse.Controls.NavigationControl*/]))->Active(v);
}

// public dynamictabbar_FuseControlsNavigationControl_Active_Property(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) [instance] :144
void dynamictabbar_FuseControlsNavigationControl_Active_Property::ctor_3(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseControlsNavigationControl_Active_Property New(Fuse.Controls.NavigationControl obj, Uno.UX.Selector name) [static] :144
dynamictabbar_FuseControlsNavigationControl_Active_Property* dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(::g::Fuse::Controls::NavigationControl* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseControlsNavigationControl_Active_Property* obj1 = (dynamictabbar_FuseControlsNavigationControl_Active_Property*)uNew(dynamictabbar_FuseControlsNavigationControl_Active_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
