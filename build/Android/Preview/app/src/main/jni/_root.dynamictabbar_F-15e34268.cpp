// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_F-15e34268.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class dynamictabbar_FuseTriggersWhileBool_Value_Property :305
// {
static void dynamictabbar_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Triggers.WhileBool*/], offsetof(::g::dynamictabbar_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* dynamictabbar_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(dynamictabbar_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("dynamictabbar_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = dynamictabbar_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))dynamictabbar_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))dynamictabbar_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))dynamictabbar_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public dynamictabbar_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :308
void dynamictabbar_FuseTriggersWhileBool_Value_Property__ctor_3_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj) :310
void dynamictabbar_FuseTriggersWhileBool_Value_Property__Get1_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    uStackFrame __("dynamictabbar_FuseTriggersWhileBool_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public dynamictabbar_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) :308
void dynamictabbar_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :309
void dynamictabbar_FuseTriggersWhileBool_Value_Property__get_Object_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin) :311
void dynamictabbar_FuseTriggersWhileBool_Value_Property__Set1_fn(dynamictabbar_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    uStackFrame __("dynamictabbar_FuseTriggersWhileBool_Value_Property", "Set(Uno.UX.PropertyObject,bool,Uno.UX.IPropertyListener)");
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[0/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public dynamictabbar_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance] :308
void dynamictabbar_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public dynamictabbar_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static] :308
dynamictabbar_FuseTriggersWhileBool_Value_Property* dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    dynamictabbar_FuseTriggersWhileBool_Value_Property* obj1 = (dynamictabbar_FuseTriggersWhileBool_Value_Property*)uNew(dynamictabbar_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g