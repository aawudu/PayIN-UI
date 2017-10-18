// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_F-8da1d66b.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property :372
// {
static void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Animations.Attractor<float4>*/], offsetof(::g::dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property", options);
    type->fp_build_ = dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) :375
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__ctor_3_fn(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :377
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__Get1_fn(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 ret2;
    return *__retval = (::g::Fuse::Animations::Attractor__get_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Attractor*>(obj, ::TYPES[0/*Fuse.Animations.Attractor<float4>*/])), &ret2), ret2), void();
}

// public dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property New(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) :375
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__New1_fn(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property** __retval)
{
    *__retval = dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :376
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__get_Object_fn(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :378
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property__Set1_fn(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(uCast< ::g::Fuse::Animations::Attractor*>(obj, ::TYPES[0/*Fuse.Animations.Attractor<float4>*/])), uCRef(v_));
}

// public dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) [instance] :375
void dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property::ctor_3(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property New(Fuse.Animations.Attractor<float4> obj, Uno.UX.Selector name) [static] :375
dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property::New1(::g::Fuse::Animations::Attractor* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property* obj1 = (dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property*)uNew(dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
