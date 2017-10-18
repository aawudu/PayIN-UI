// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/DropdownSelectedItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownSelectedItem.h>
#include <_root.dynamictabbar_a-43a2c6ca.h>
#include <_root.dynamictabbar_a-a19f2744.h>
#include <_root.dynamictabbar_a-a29f5fff.h>
#include <_root.dynamictabbar_a-a754b7c5.h>
#include <_root.dynamictabbar_D-3c6ab0ae.h>
#include <_root.dynamictabbar_D-47947198.h>
#include <_root.dynamictabbar_D-862dda43.h>
#include <_root.dynamictabbar_D-b3fae039.h>
#include <_root.dynamictabbar_D-d9f76fd4.h>
#include <_root.dynamictabbar_F-3aeef84b.h>
#include <_root.dynamictabbar_F-885c4681.h>
#include <_root.dynamictabbar_F-b916297c.h>
#include <_root.dynamictabbar_F-bc011cbd.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[10];
static uType* TYPES[6];

namespace g{

// public partial sealed class DropdownSelectedItem :2
// {
// static DropdownSelectedItem() :93
static void DropdownSelectedItem__cctor_4_fn(uType* __type)
{
    DropdownSelectedItem::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"temp_eb0"*/]);
    DropdownSelectedItem::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"FontSize"*/]);
    DropdownSelectedItem::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]);
    DropdownSelectedItem::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]);
    DropdownSelectedItem::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]);
    DropdownSelectedItem::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"TextColor"*/]);
    DropdownSelectedItem::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Value"*/]);
    DropdownSelectedItem::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Fill"*/]);
    DropdownSelectedItem::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"self"*/]);
}

static void DropdownSelectedItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb0");
    ::STRINGS[1] = uString::Const("FontSize");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("BackgroundColor");
    ::STRINGS[4] = uString::Const("BorderColor");
    ::STRINGS[5] = uString::Const("TextColor");
    ::STRINGS[6] = uString::Const("Value");
    ::STRINGS[7] = uString::Const("Fill");
    ::STRINGS[8] = uString::Const("self");
    ::STRINGS[9] = uString::Const("onSelected");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(110,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::DropdownSelectedItem, __g_nametable1), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownSelectedItem, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownSelectedItem, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::DropdownSelectedItem, _field_FontSize), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownSelectedItem, _field_Text), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::DropdownSelectedItem, _field_TextColor), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(::g::DropdownSelectedItem, temp_eb0), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DropdownSelectedItem, temp_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::DropdownSelectedItem, temp_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownSelectedItem, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownSelectedItem, temp1_Fill_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownSelectedItem, this_BackgroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownSelectedItem, this_BorderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DropdownSelectedItem, this_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownSelectedItem, this_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::DropdownSelectedItem, this_TextColor_inst), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::DropdownSelectedItem::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector7_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(16,
        new uFunction("get_BackgroundColor", NULL, (void*)DropdownSelectedItem__get_BackgroundColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)DropdownSelectedItem__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_BorderColor", NULL, (void*)DropdownSelectedItem__get_BorderColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BorderColor", NULL, (void*)DropdownSelectedItem__set_BorderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_FontSize", NULL, (void*)DropdownSelectedItem__get_FontSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FontSize", NULL, (void*)DropdownSelectedItem__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)DropdownSelectedItem__New4_fn, 0, true, type, 0),
        new uFunction("SetBackgroundColor", NULL, (void*)DropdownSelectedItem__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetBorderColor", NULL, (void*)DropdownSelectedItem__SetBorderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetFontSize", NULL, (void*)DropdownSelectedItem__SetFontSize_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetText", NULL, (void*)DropdownSelectedItem__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTextColor", NULL, (void*)DropdownSelectedItem__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)DropdownSelectedItem__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)DropdownSelectedItem__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_TextColor", NULL, (void*)DropdownSelectedItem__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)DropdownSelectedItem__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::Panel_type* DropdownSelectedItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 135;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(DropdownSelectedItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownSelectedItem", options);
    type->fp_build_ = DropdownSelectedItem_build;
    type->fp_ctor_ = (void*)DropdownSelectedItem__New4_fn;
    type->fp_cctor_ = DropdownSelectedItem__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface14.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface14.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface14.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface9.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface9.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface6.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface9.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface6.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface6.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface8.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface9.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface9.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface4.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface4.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface5.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface4.fp_get_Count = (void(*)(uObject*, int*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface4.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public DropdownSelectedItem() :97
void DropdownSelectedItem__ctor_7_fn(DropdownSelectedItem* __this)
{
    __this->ctor_7();
}

// public Fuse.Drawing.Brush get_BackgroundColor() :23
void DropdownSelectedItem__get_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) :24
void DropdownSelectedItem__set_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BackgroundColor(value);
}

// public Fuse.Drawing.Brush get_BorderColor() :38
void DropdownSelectedItem__get_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BorderColor();
}

// public void set_BorderColor(Fuse.Drawing.Brush value) :39
void DropdownSelectedItem__set_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BorderColor(value);
}

// public float get_FontSize() :53
void DropdownSelectedItem__get_FontSize_fn(DropdownSelectedItem* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :54
void DropdownSelectedItem__set_FontSize_fn(DropdownSelectedItem* __this, float* value)
{
    __this->FontSize(*value);
}

// private void InitializeUX() :101
void DropdownSelectedItem__InitializeUX_fn(DropdownSelectedItem* __this)
{
    __this->InitializeUX();
}

// public DropdownSelectedItem New() :97
void DropdownSelectedItem__New4_fn(DropdownSelectedItem** __retval)
{
    *__retval = DropdownSelectedItem::New4();
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :26
void DropdownSelectedItem__SetBackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBackgroundColor(value, origin);
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :41
void DropdownSelectedItem__SetBorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBorderColor(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :56
void DropdownSelectedItem__SetFontSize_fn(DropdownSelectedItem* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :11
void DropdownSelectedItem__SetText_fn(DropdownSelectedItem* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :71
void DropdownSelectedItem__SetTextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public string get_Text() :8
void DropdownSelectedItem__get_Text_fn(DropdownSelectedItem* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :9
void DropdownSelectedItem__set_Text_fn(DropdownSelectedItem* __this, uString* value)
{
    __this->Text(value);
}

// public float4 get_TextColor() :68
void DropdownSelectedItem__get_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :69
void DropdownSelectedItem__set_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong<uArray*> DropdownSelectedItem::__g_static_nametable1_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector0_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector1_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector2_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector3_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector4_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector5_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector6_;
::g::Uno::UX::Selector DropdownSelectedItem::__selector7_;

// public DropdownSelectedItem() [instance] :97
void DropdownSelectedItem::ctor_7()
{
    uStackFrame __("DropdownSelectedItem", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public Fuse.Drawing.Brush get_BackgroundColor() [instance] :23
::g::Fuse::Drawing::Brush* DropdownSelectedItem::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance] :24
void DropdownSelectedItem::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownSelectedItem", "set_BackgroundColor(Fuse.Drawing.Brush)");
    SetBackgroundColor(value, NULL);
}

// public Fuse.Drawing.Brush get_BorderColor() [instance] :38
::g::Fuse::Drawing::Brush* DropdownSelectedItem::BorderColor()
{
    return _field_BorderColor;
}

// public void set_BorderColor(Fuse.Drawing.Brush value) [instance] :39
void DropdownSelectedItem::BorderColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownSelectedItem", "set_BorderColor(Fuse.Drawing.Brush)");
    SetBorderColor(value, NULL);
}

// public float get_FontSize() [instance] :53
float DropdownSelectedItem::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :54
void DropdownSelectedItem::FontSize(float value)
{
    uStackFrame __("DropdownSelectedItem", "set_FontSize(float)");
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance] :101
void DropdownSelectedItem::InitializeUX()
{
    uStackFrame __("DropdownSelectedItem", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp2 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_FontSize_inst = ::g::dynamictabbar_FuseControlsTextControl_FontSize_Property::New1(temp, DropdownSelectedItem::__selector0());
    ::g::Fuse::Reactive::Property* temp3 = ::g::Fuse::Reactive::Property::New1(temp2, ::g::dynamictabbar_accessor_DropdownSelectedItem_FontSize::Singleton());
    this_Text_inst = ::g::dynamictabbar_DropdownSelectedItem_Text_Property::New1(this, DropdownSelectedItem::__selector1());
    this_BackgroundColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::New1(this, DropdownSelectedItem::__selector2());
    this_BorderColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BorderColor_Property::New1(this, DropdownSelectedItem::__selector3());
    this_FontSize_inst = ::g::dynamictabbar_DropdownSelectedItem_FontSize_Property::New1(this, DropdownSelectedItem::__selector0());
    this_TextColor_inst = ::g::dynamictabbar_DropdownSelectedItem_TextColor_Property::New1(this, DropdownSelectedItem::__selector4());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DropdownSelectedItem::__g_static_nametable1());
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_TextColor_inst = ::g::dynamictabbar_FuseControlsTextControl_TextColor_Property::New1(temp, DropdownSelectedItem::__selector4());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::dynamictabbar_accessor_DropdownSelectedItem_TextColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    temp_Value_inst = ::g::dynamictabbar_FuseControlsTextControl_Value_Property::New1(temp, DropdownSelectedItem::__selector5());
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::dynamictabbar_accessor_DropdownSelectedItem_Text::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Rectangle* temp1 = ::g::Fuse::Controls::Rectangle::New3();
    temp1_Fill_inst = ::g::dynamictabbar_FuseControlsShape_Fill_Property::New1(temp1, DropdownSelectedItem::__selector6());
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::dynamictabbar_accessor_DropdownSelectedItem_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[9/*"onSelected"*/]);
    ::g::Fuse::Reactive::DataBinding* temp11 = ::g::Fuse::Reactive::DataBinding::New1(temp_FontSize_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp_TextColor_inst, (uObject*)temp5, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp13 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp7, __g_nametable1, 3);
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp15 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Fill_inst, (uObject*)temp9, __g_nametable1, 3);
    temp_eb0 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp10, __g_nametable1);
    Height(::g::Uno::UX::Size__New1(30.0f, 1));
    Name(DropdownSelectedItem::__selector7());
    ::g::Fuse::Gestures::Clicked::AddHandler(this, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb0)));
    temp->Alignment(9);
    temp->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 0.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp11);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp13);
    temp14->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp1->Height(::g::Uno::UX::Size__New1(100.0f, 4));
    temp1->Alignment(4);
    temp1->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp15);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb0);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Text_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BackgroundColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BorderColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_FontSize_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_TextColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb0);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :26
void DropdownSelectedItem::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownSelectedItem", "SetBackgroundColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :41
void DropdownSelectedItem::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownSelectedItem", "SetBorderColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :56
void DropdownSelectedItem::SetFontSize(float value, uObject* origin)
{
    uStackFrame __("DropdownSelectedItem", "SetFontSize(float,Uno.UX.IPropertyListener)");

    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"FontSize"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void DropdownSelectedItem::SetText(uString* value, uObject* origin)
{
    uStackFrame __("DropdownSelectedItem", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :71
void DropdownSelectedItem::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("DropdownSelectedItem", "SetTextColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"TextColor"*/]), origin);
    }
}

// public string get_Text() [instance] :8
uString* DropdownSelectedItem::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :9
void DropdownSelectedItem::Text(uString* value)
{
    uStackFrame __("DropdownSelectedItem", "set_Text(string)");
    SetText(value, NULL);
}

// public float4 get_TextColor() [instance] :68
::g::Uno::Float4 DropdownSelectedItem::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :69
void DropdownSelectedItem::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("DropdownSelectedItem", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public DropdownSelectedItem New() [static] :97
DropdownSelectedItem* DropdownSelectedItem::New4()
{
    DropdownSelectedItem* obj1 = (DropdownSelectedItem*)uNew(DropdownSelectedItem_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
