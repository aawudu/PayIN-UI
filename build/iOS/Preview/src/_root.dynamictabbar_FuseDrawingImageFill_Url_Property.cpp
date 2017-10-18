// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/iOS/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_FuseDrawingImageFill_Url_Property.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseDrawingImageFill_Url_Property :365
// {
static void dynamictabbar_FuseDrawingImageFill_Url_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Drawing.ImageFill*/], offsetof(::g::dynamictabbar_FuseDrawingImageFill_Url_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseDrawingImageFill_Url_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseDrawingImageFill_Url_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseDrawingImageFill_Url_Property", options);
    type->fp_build_ = dynamictabbar_FuseDrawingImageFill_Url_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseDrawingImageFill_Url_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseDrawingImageFill_Url_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseDrawingImageFill_Url_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :368
void dynamictabbar_FuseDrawingImageFill_Url_Property__ctor_3_fn(dynamictabbar_FuseDrawingImageFill_Url_Property* __this, ::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :370
void dynamictabbar_FuseDrawingImageFill_Url_Property__Get1_fn(dynamictabbar_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("dynamictabbar_FuseDrawingImageFill_Url_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Url(), void();
}

// public dynamictabbar_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) :368
void dynamictabbar_FuseDrawingImageFill_Url_Property__New1_fn(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseDrawingImageFill_Url_Property** __retval)
{
    *__retval = dynamictabbar_FuseDrawingImageFill_Url_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :369
void dynamictabbar_FuseDrawingImageFill_Url_Property__get_Object_fn(dynamictabbar_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :371
void dynamictabbar_FuseDrawingImageFill_Url_Property__Set1_fn(dynamictabbar_FuseDrawingImageFill_Url_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_FuseDrawingImageFill_Url_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Drawing::ImageFill*>(obj, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Url(v);
}

// public dynamictabbar_FuseDrawingImageFill_Url_Property(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [instance] :368
void dynamictabbar_FuseDrawingImageFill_Url_Property::ctor_3(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseDrawingImageFill_Url_Property New(Fuse.Drawing.ImageFill obj, Uno.UX.Selector name) [static] :368
dynamictabbar_FuseDrawingImageFill_Url_Property* dynamictabbar_FuseDrawingImageFill_Url_Property::New1(::g::Fuse::Drawing::ImageFill* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseDrawingImageFill_Url_Property* obj1 = (dynamictabbar_FuseDrawingImageFill_Url_Property*)uNew(dynamictabbar_FuseDrawingImageFill_Url_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
