// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/DropdownMenu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <Fuse.Drawing.Brush.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[11];
static uType* TYPES[1];

namespace g{

// public partial sealed class DropdownMenu :2
// {
// static DropdownMenu() :192
static void DropdownMenu__cctor_4_fn(uType* __type)
{
    DropdownMenu::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"expandDropd...*/]);
    DropdownMenu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ListItems"*/]);
    DropdownMenu::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Selected"*/]);
    DropdownMenu::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]);
    DropdownMenu::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"TextColor"*/]);
    DropdownMenu::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BackgroundC...*/]);
    DropdownMenu::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"BorderColor"*/]);
    DropdownMenu::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"FontSize"*/]);
    DropdownMenu::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Brush"*/]);
    DropdownMenu::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Items"*/]);
    DropdownMenu::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"menu"*/]);
    DropdownMenu::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"expandDropd...*/]);
}

static void DropdownMenu_build(uType* type)
{
    ::STRINGS[0] = uString::Const("expandDropdown");
    ::STRINGS[1] = uString::Const("ListItems");
    ::STRINGS[2] = uString::Const("Selected");
    ::STRINGS[3] = uString::Const("Text");
    ::STRINGS[4] = uString::Const("TextColor");
    ::STRINGS[5] = uString::Const("BackgroundColor");
    ::STRINGS[6] = uString::Const("BorderColor");
    ::STRINGS[7] = uString::Const("FontSize");
    ::STRINGS[8] = uString::Const("Brush");
    ::STRINGS[9] = uString::Const("Items");
    ::STRINGS[10] = uString::Const("menu");
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
    type->SetFields(106,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::DropdownMenu, __g_nametable1), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownMenu, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownMenu, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::DropdownMenu, _field_FontSize), 0,
        uObject_typeof(), offsetof(::g::DropdownMenu, _field_ListItems), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownMenu, _field_Selected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownMenu, _field_Text), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::DropdownMenu, _field_TextColor), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::DropdownMenu::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::DropdownMenu::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::Controls::Panel_type* DropdownMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 126;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(DropdownMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownMenu", options);
    type->fp_build_ = DropdownMenu_build;
    type->fp_cctor_ = DropdownMenu__cctor_4_fn;
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

// public Fuse.Drawing.Brush get_BackgroundColor() :68
void DropdownMenu__get_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) :69
void DropdownMenu__set_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BackgroundColor(value);
}

// public Fuse.Drawing.Brush get_BorderColor() :83
void DropdownMenu__get_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BorderColor();
}

// public void set_BorderColor(Fuse.Drawing.Brush value) :84
void DropdownMenu__set_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BorderColor(value);
}

// public float get_FontSize() :98
void DropdownMenu__get_FontSize_fn(DropdownMenu* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :99
void DropdownMenu__set_FontSize_fn(DropdownMenu* __this, float* value)
{
    __this->FontSize(*value);
}

// public object get_ListItems() :8
void DropdownMenu__get_ListItems_fn(DropdownMenu* __this, uObject** __retval)
{
    *__retval = __this->ListItems();
}

// public void set_ListItems(object value) :9
void DropdownMenu__set_ListItems_fn(DropdownMenu* __this, uObject* value)
{
    __this->ListItems(value);
}

// public string get_Selected() :23
void DropdownMenu__get_Selected_fn(DropdownMenu* __this, uString** __retval)
{
    *__retval = __this->Selected();
}

// public void set_Selected(string value) :24
void DropdownMenu__set_Selected_fn(DropdownMenu* __this, uString* value)
{
    __this->Selected(value);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :71
void DropdownMenu__SetBackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBackgroundColor(value, origin);
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :86
void DropdownMenu__SetBorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBorderColor(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :101
void DropdownMenu__SetFontSize_fn(DropdownMenu* __this, float* value, uObject* origin)
{
    __this->SetFontSize(*value, origin);
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin) :11
void DropdownMenu__SetListItems_fn(DropdownMenu* __this, uObject* value, uObject* origin)
{
    __this->SetListItems(value, origin);
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin) :26
void DropdownMenu__SetSelected_fn(DropdownMenu* __this, uString* value, uObject* origin)
{
    __this->SetSelected(value, origin);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :41
void DropdownMenu__SetText_fn(DropdownMenu* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :56
void DropdownMenu__SetTextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public string get_Text() :38
void DropdownMenu__get_Text_fn(DropdownMenu* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :39
void DropdownMenu__set_Text_fn(DropdownMenu* __this, uString* value)
{
    __this->Text(value);
}

// public float4 get_TextColor() :53
void DropdownMenu__get_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :54
void DropdownMenu__set_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong<uArray*> DropdownMenu::__g_static_nametable1_;
::g::Uno::UX::Selector DropdownMenu::__selector0_;
::g::Uno::UX::Selector DropdownMenu::__selector1_;
::g::Uno::UX::Selector DropdownMenu::__selector10_;
::g::Uno::UX::Selector DropdownMenu::__selector2_;
::g::Uno::UX::Selector DropdownMenu::__selector3_;
::g::Uno::UX::Selector DropdownMenu::__selector4_;
::g::Uno::UX::Selector DropdownMenu::__selector5_;
::g::Uno::UX::Selector DropdownMenu::__selector6_;
::g::Uno::UX::Selector DropdownMenu::__selector7_;
::g::Uno::UX::Selector DropdownMenu::__selector8_;
::g::Uno::UX::Selector DropdownMenu::__selector9_;

// public Fuse.Drawing.Brush get_BackgroundColor() [instance] :68
::g::Fuse::Drawing::Brush* DropdownMenu::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance] :69
void DropdownMenu::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    SetBackgroundColor(value, NULL);
}

// public Fuse.Drawing.Brush get_BorderColor() [instance] :83
::g::Fuse::Drawing::Brush* DropdownMenu::BorderColor()
{
    return _field_BorderColor;
}

// public void set_BorderColor(Fuse.Drawing.Brush value) [instance] :84
void DropdownMenu::BorderColor(::g::Fuse::Drawing::Brush* value)
{
    SetBorderColor(value, NULL);
}

// public float get_FontSize() [instance] :98
float DropdownMenu::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :99
void DropdownMenu::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// public object get_ListItems() [instance] :8
uObject* DropdownMenu::ListItems()
{
    return _field_ListItems;
}

// public void set_ListItems(object value) [instance] :9
void DropdownMenu::ListItems(uObject* value)
{
    SetListItems(value, NULL);
}

// public string get_Selected() [instance] :23
uString* DropdownMenu::Selected()
{
    return _field_Selected;
}

// public void set_Selected(string value) [instance] :24
void DropdownMenu::Selected(uString* value)
{
    SetSelected(value, NULL);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :71
void DropdownMenu::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :86
void DropdownMenu::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :101
void DropdownMenu::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"FontSize"*/]), origin);
    }
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin) [instance] :11
void DropdownMenu::SetListItems(uObject* value, uObject* origin)
{
    if (value != _field_ListItems)
    {
        _field_ListItems = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ListItems"*/]), origin);
    }
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin) [instance] :26
void DropdownMenu::SetSelected(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Selected))
    {
        _field_Selected = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Selected"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :41
void DropdownMenu::SetText(uString* value, uObject* origin)
{
    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :56
void DropdownMenu::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"TextColor"*/]), origin);
    }
}

// public string get_Text() [instance] :38
uString* DropdownMenu::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :39
void DropdownMenu::Text(uString* value)
{
    SetText(value, NULL);
}

// public float4 get_TextColor() [instance] :53
::g::Uno::Float4 DropdownMenu::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :54
void DropdownMenu::TextColor(::g::Uno::Float4 value)
{
    SetTextColor(value, NULL);
}
// }

} // ::g
