// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/DropdownSelectedItem.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownSelectedItem.h>
#include <Fuse.Drawing.Brush.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[10];
static uType* TYPES[1];

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
    DropdownSelectedItem::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"Color"*/]);
    DropdownSelectedItem::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Value"*/]);
    DropdownSelectedItem::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Fill"*/]);
    DropdownSelectedItem::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"self"*/]);
}

static void DropdownSelectedItem_build(uType* type)
{
    ::STRINGS[0] = uString::Const("temp_eb0");
    ::STRINGS[1] = uString::Const("FontSize");
    ::STRINGS[2] = uString::Const("Text");
    ::STRINGS[3] = uString::Const("BackgroundColor");
    ::STRINGS[4] = uString::Const("BorderColor");
    ::STRINGS[5] = uString::Const("TextColor");
    ::STRINGS[6] = uString::Const("Color");
    ::STRINGS[7] = uString::Const("Value");
    ::STRINGS[8] = uString::Const("Fill");
    ::STRINGS[9] = uString::Const("self");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(107,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownSelectedItem, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownSelectedItem, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::DropdownSelectedItem, _field_FontSize), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownSelectedItem, _field_Text), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::DropdownSelectedItem, _field_TextColor), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::DropdownSelectedItem::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownSelectedItem::__selector8_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* DropdownSelectedItem_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::DockPanel_typeof();
    options.FieldCount = 122;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(DropdownSelectedItem);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownSelectedItem", options);
    type->fp_build_ = DropdownSelectedItem_build;
    type->fp_cctor_ = DropdownSelectedItem__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface11.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface13.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface12.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface15.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface14.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
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
::g::Uno::UX::Selector DropdownSelectedItem::__selector8_;

// public Fuse.Drawing.Brush get_BackgroundColor() [instance] :23
::g::Fuse::Drawing::Brush* DropdownSelectedItem::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance] :24
void DropdownSelectedItem::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
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
    SetFontSize(value, NULL);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :26
void DropdownSelectedItem::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :41
void DropdownSelectedItem::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :56
void DropdownSelectedItem::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"FontSize"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void DropdownSelectedItem::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :71
void DropdownSelectedItem::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
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
    SetTextColor(value, NULL);
}
// }

} // ::g
