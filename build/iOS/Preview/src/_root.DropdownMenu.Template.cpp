// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/iOS/Preview/cache/ux11/DropdownMenu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.DropdownMenu.Template.h>
#include <_root.DropdownOption.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_BackgroundColor.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_BorderColor.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_FontSize.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_TextColor.h>
#include <_root.dynamictabbar_DropdownOption_BackgroundColor_Property.h>
#include <_root.dynamictabbar_DropdownOption_BorderColor_Property.h>
#include <_root.dynamictabbar_DropdownOption_FontSize_Property.h>
#include <_root.dynamictabbar_DropdownOption_Text_Property.h>
#include <_root.dynamictabbar_DropdownOption_TextColor_Property.h>
#include <Fuse.Binding.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[8];
static uType* TYPES[4];

namespace g{

// public partial sealed class DropdownMenu.Template :110
// {
// static Template() :129
static void DropdownMenu__Template__cctor__fn(uType* __type)
{
    DropdownMenu__Template::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb1"*/]);
    DropdownMenu__Template::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"FontSize"*/]);
    DropdownMenu__Template::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"TextColor"*/]);
    DropdownMenu__Template::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]);
    DropdownMenu__Template::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BackgroundC...*/]);
    DropdownMenu__Template::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BorderColor"*/]);
}

static void DropdownMenu__Template_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb1");
    ::STRINGS[1] = uString::Const("FontSize");
    ::STRINGS[2] = uString::Const("TextColor");
    ::STRINGS[3] = uString::Const("Text");
    ::STRINGS[4] = uString::Const("BackgroundColor");
    ::STRINGS[5] = uString::Const("BorderColor");
    ::STRINGS[6] = uString::Const("name");
    ::STRINGS[7] = uString::Const("onSelected");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    type->SetFields(2,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::DropdownMenu__Template, __g_nametable1), 0,
        ::g::DropdownMenu_typeof(), offsetof(::g::DropdownMenu__Template, __parent1), uFieldFlagsWeak,
        ::g::DropdownMenu_typeof(), offsetof(::g::DropdownMenu__Template, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu__Template, __self_BackgroundColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu__Template, __self_BorderColor_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DropdownMenu__Template, __self_FontSize_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownMenu__Template, __self_Text_inst1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::DropdownMenu__Template, __self_TextColor_inst1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::DropdownMenu__Template::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu__Template::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu__Template::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu__Template::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu__Template::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu__Template::__selector4_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)DropdownMenu__Template__New2_fn, 0, true, type, 2, ::g::DropdownMenu_typeof(), ::g::DropdownMenu_typeof()));
}

::g::Uno::UX::Template_type* DropdownMenu__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 16;
    options.ObjectSize = sizeof(DropdownMenu__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("DropdownMenu.Template", options);
    type->fp_build_ = DropdownMenu__Template_build;
    type->fp_cctor_ = DropdownMenu__Template__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))DropdownMenu__Template__New1_fn;
    return type;
}

// public Template(DropdownMenu parent, DropdownMenu parentInstance) :114
void DropdownMenu__Template__ctor_1_fn(DropdownMenu__Template* __this, ::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :132
void DropdownMenu__Template__New1_fn(DropdownMenu__Template* __this, uObject** __retval)
{
    uStackFrame __("DropdownMenu.Template", "New()");
    ::g::DropdownOption* __self1 = ::g::DropdownOption::New4();
    ::g::Fuse::Reactive::Constant* temp = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_FontSize_inst1 = ::g::dynamictabbar_DropdownOption_FontSize_Property::New1(__self1, DropdownMenu__Template::__selector0());
    ::g::Fuse::Reactive::Property* temp1 = ::g::Fuse::Reactive::Property::New1(temp, ::g::dynamictabbar_accessor_DropdownMenu_FontSize::Singleton());
    __this->__g_nametable1 = ::g::Uno::UX::NameTable::New1(uPtr(__this->__parent1)->__g_nametable1, DropdownMenu__Template::__g_static_nametable1());
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_TextColor_inst1 = ::g::dynamictabbar_DropdownOption_TextColor_Property::New1(__self1, DropdownMenu__Template::__selector1());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::dynamictabbar_accessor_DropdownMenu_TextColor::Singleton());
    __this->__self_Text_inst1 = ::g::dynamictabbar_DropdownOption_Text_Property::New1(__self1, DropdownMenu__Template::__selector2());
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"name"*/]);
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_BackgroundColor_inst1 = ::g::dynamictabbar_DropdownOption_BackgroundColor_Property::New1(__self1, DropdownMenu__Template::__selector3());
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::dynamictabbar_accessor_DropdownMenu_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Data* temp7 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"onSelected"*/]);
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(__this->__parent1);
    __this->__self_BorderColor_inst1 = ::g::dynamictabbar_DropdownOption_BorderColor_Property::New1(__self1, DropdownMenu__Template::__selector4());
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::dynamictabbar_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_FontSize_inst1, (uObject*)temp1, __this->__g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_TextColor_inst1, (uObject*)temp3, __this->__g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_Text_inst1, (uObject*)temp4, __this->__g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_BackgroundColor_inst1, (uObject*)temp6, __this->__g_nametable1, 1);
    ::g::Fuse::Reactive::EventBinding* temp_eb11 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp7, __this->__g_nametable1);
    ::g::Fuse::Reactive::DataBinding* temp14 = ::g::Fuse::Reactive::DataBinding::New1(__this->__self_BorderColor_inst1, (uObject*)temp9, __this->__g_nametable1, 1);
    ::g::Fuse::Gestures::Clicked::AddHandler(__self1, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, temp_eb11));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__this->__g_nametable1)->Objects()), ::TYPES[2/*Uno.Collections.ICollection<object>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(__self1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp14);
    return *__retval = __self1, void();
}

// public Template New(DropdownMenu parent, DropdownMenu parentInstance) :114
void DropdownMenu__Template__New2_fn(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance, DropdownMenu__Template** __retval)
{
    *__retval = DropdownMenu__Template::New2(parent, parentInstance);
}

uSStrong<uArray*> DropdownMenu__Template::__g_static_nametable1_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector0_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector1_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector2_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector3_;
::g::Uno::UX::Selector DropdownMenu__Template::__selector4_;

// public Template(DropdownMenu parent, DropdownMenu parentInstance) [instance] :114
void DropdownMenu__Template::ctor_1(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    ctor_(NULL, false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template New(DropdownMenu parent, DropdownMenu parentInstance) [static] :114
DropdownMenu__Template* DropdownMenu__Template::New2(::g::DropdownMenu* parent, ::g::DropdownMenu* parentInstance)
{
    DropdownMenu__Template* obj1 = (DropdownMenu__Template*)uNew(DropdownMenu__Template_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
