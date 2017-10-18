// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_F-9f61a29.h>
#include <Fuse.Scaling.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseScaling_Factor_Property :297
// {
static void dynamictabbar_FuseScaling_Factor_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Scaling_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Scaling*/], offsetof(::g::dynamictabbar_FuseScaling_Factor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseScaling_Factor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseScaling_Factor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseScaling_Factor_Property", options);
    type->fp_build_ = dynamictabbar_FuseScaling_Factor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseScaling_Factor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseScaling_Factor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseScaling_Factor_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseScaling_Factor_Property(Fuse.Scaling obj, Uno.UX.Selector name) :300
void dynamictabbar_FuseScaling_Factor_Property__ctor_3_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float Get(Uno.UX.PropertyObject obj) :302
void dynamictabbar_FuseScaling_Factor_Property__Get1_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Scaling*>(obj, ::TYPES[0/*Fuse.Scaling*/]))->Factor(), void();
}

// public dynamictabbar_FuseScaling_Factor_Property New(Fuse.Scaling obj, Uno.UX.Selector name) :300
void dynamictabbar_FuseScaling_Factor_Property__New1_fn(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseScaling_Factor_Property** __retval)
{
    *__retval = dynamictabbar_FuseScaling_Factor_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :301
void dynamictabbar_FuseScaling_Factor_Property__get_Object_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin) :303
void dynamictabbar_FuseScaling_Factor_Property__Set1_fn(dynamictabbar_FuseScaling_Factor_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Scaling*>(obj, ::TYPES[0/*Fuse.Scaling*/]))->Factor(v_);
}

// public dynamictabbar_FuseScaling_Factor_Property(Fuse.Scaling obj, Uno.UX.Selector name) [instance] :300
void dynamictabbar_FuseScaling_Factor_Property::ctor_3(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseScaling_Factor_Property New(Fuse.Scaling obj, Uno.UX.Selector name) [static] :300
dynamictabbar_FuseScaling_Factor_Property* dynamictabbar_FuseScaling_Factor_Property::New1(::g::Fuse::Scaling* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseScaling_Factor_Property* obj1 = (dynamictabbar_FuseScaling_Factor_Property*)uNew(dynamictabbar_FuseScaling_Factor_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
