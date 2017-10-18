// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_F-8833ebf3.h>
#include <Fuse.Drawing.Stroke.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseDrawingStroke_Brush_Property :158
// {
static void dynamictabbar_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.Stroke*/], offsetof(::g::dynamictabbar_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = dynamictabbar_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :161
void dynamictabbar_FuseDrawingStroke_Brush_Property__ctor_3_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj) :163
void dynamictabbar_FuseDrawingStroke_Brush_Property__Get1_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    uStackFrame __("dynamictabbar_FuseDrawingStroke_Brush_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[0/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public dynamictabbar_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) :161
void dynamictabbar_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseDrawingStroke_Brush_Property** __retval)
{
    *__retval = dynamictabbar_FuseDrawingStroke_Brush_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :162
void dynamictabbar_FuseDrawingStroke_Brush_Property__get_Object_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin) :164
void dynamictabbar_FuseDrawingStroke_Brush_Property__Set1_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_FuseDrawingStroke_Brush_Property", "Set(Uno.UX.PropertyObject,Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[0/*Fuse.Drawing.Stroke*/]))->Brush(v);
}

// public dynamictabbar_FuseDrawingStroke_Brush_Property(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [instance] :161
void dynamictabbar_FuseDrawingStroke_Brush_Property::ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseDrawingStroke_Brush_Property New(Fuse.Drawing.Stroke obj, Uno.UX.Selector name) [static] :161
dynamictabbar_FuseDrawingStroke_Brush_Property* dynamictabbar_FuseDrawingStroke_Brush_Property::New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseDrawingStroke_Brush_Property* obj1 = (dynamictabbar_FuseDrawingStroke_Brush_Property*)uNew(dynamictabbar_FuseDrawingStroke_Brush_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
