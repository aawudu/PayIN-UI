// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_F-fd296813.h>
#include <Fuse.Controls.Image.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseControlsImage_Color_Property :388
// {
static void dynamictabbar_FuseControlsImage_Color_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::Image_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.Image*/], offsetof(::g::dynamictabbar_FuseControlsImage_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseControlsImage_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseControlsImage_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseControlsImage_Color_Property", options);
    type->fp_build_ = dynamictabbar_FuseControlsImage_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseControlsImage_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseControlsImage_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseControlsImage_Color_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseControlsImage_Color_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) :391
void dynamictabbar_FuseControlsImage_Color_Property__ctor_3_fn(dynamictabbar_FuseControlsImage_Color_Property* __this, ::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj) :393
void dynamictabbar_FuseControlsImage_Color_Property__Get1_fn(dynamictabbar_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    uStackFrame __("dynamictabbar_FuseControlsImage_Color_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Color(), void();
}

// public dynamictabbar_FuseControlsImage_Color_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) :391
void dynamictabbar_FuseControlsImage_Color_Property__New1_fn(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseControlsImage_Color_Property** __retval)
{
    *__retval = dynamictabbar_FuseControlsImage_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :392
void dynamictabbar_FuseControlsImage_Color_Property__get_Object_fn(dynamictabbar_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin) :394
void dynamictabbar_FuseControlsImage_Color_Property__Set1_fn(dynamictabbar_FuseControlsImage_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_FuseControlsImage_Color_Property", "Set(Uno.UX.PropertyObject,float4,Uno.UX.IPropertyListener)");
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Image*>(obj, ::TYPES[0/*Fuse.Controls.Image*/]))->Color(v_);
}

// public dynamictabbar_FuseControlsImage_Color_Property(Fuse.Controls.Image obj, Uno.UX.Selector name) [instance] :391
void dynamictabbar_FuseControlsImage_Color_Property::ctor_3(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseControlsImage_Color_Property New(Fuse.Controls.Image obj, Uno.UX.Selector name) [static] :391
dynamictabbar_FuseControlsImage_Color_Property* dynamictabbar_FuseControlsImage_Color_Property::New1(::g::Fuse::Controls::Image* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseControlsImage_Color_Property* obj1 = (dynamictabbar_FuseControlsImage_Color_Property*)uNew(dynamictabbar_FuseControlsImage_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
