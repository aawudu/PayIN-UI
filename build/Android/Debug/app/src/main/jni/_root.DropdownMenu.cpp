// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/DropdownMenu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.DropdownMenu.Template.h>
#include <_root.DropdownSelectedItem.h>
#include <_root.dynamictabbar_a-7febe368.h>
#include <_root.dynamictabbar_a-9f2166e.h>
#include <_root.dynamictabbar_a-a21186f7.h>
#include <_root.dynamictabbar_a-c043b8b5.h>
#include <_root.dynamictabbar_a-c1cc018e.h>
#include <_root.dynamictabbar_D-3c05cb60.h>
#include <_root.dynamictabbar_D-3c6ab0ae.h>
#include <_root.dynamictabbar_D-47947198.h>
#include <_root.dynamictabbar_D-7f776561.h>
#include <_root.dynamictabbar_D-862dda43.h>
#include <_root.dynamictabbar_D-87296a6d.h>
#include <_root.dynamictabbar_D-aa70e946.h>
#include <_root.dynamictabbar_D-aa96d15c.h>
#include <_root.dynamictabbar_D-b3fae039.h>
#include <_root.dynamictabbar_D-bc69bab7.h>
#include <_root.dynamictabbar_D-d9f76fd4.h>
#include <_root.dynamictabbar_F-840d2787.h>
#include <_root.dynamictabbar_F-8833ebf3.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.NodeGroupBase.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[14];
static uType* TYPES[8];

namespace g{

// public partial sealed class DropdownMenu :2
// {
// static DropdownMenu() :176
static void DropdownMenu__cctor_4_fn(uType* __type)
{
    DropdownMenu::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 1, ::STRINGS[0/*"expandDropd...*/]);
    DropdownMenu::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ListItems"*/]);
    DropdownMenu::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Selected"*/]);
    DropdownMenu::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"TextColor"*/]);
    DropdownMenu::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BackgroundC...*/]);
    DropdownMenu::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BorderColor"*/]);
    DropdownMenu::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"FontSize"*/]);
    DropdownMenu::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"Brush"*/]);
    DropdownMenu::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"Text"*/]);
    DropdownMenu::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"Items"*/]);
    DropdownMenu::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"menu"*/]);
    DropdownMenu::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"expandDropd...*/]);
}

static void DropdownMenu_build(uType* type)
{
    ::STRINGS[0] = uString::Const("expandDropdown");
    ::STRINGS[1] = uString::Const("ListItems");
    ::STRINGS[2] = uString::Const("Selected");
    ::STRINGS[3] = uString::Const("TextColor");
    ::STRINGS[4] = uString::Const("BackgroundColor");
    ::STRINGS[5] = uString::Const("BorderColor");
    ::STRINGS[6] = uString::Const("FontSize");
    ::STRINGS[7] = uString::Const("Brush");
    ::STRINGS[8] = uString::Const("Text");
    ::STRINGS[9] = uString::Const("Items");
    ::STRINGS[10] = uString::Const("menu");
    ::STRINGS[11] = uString::Const("selected");
    ::STRINGS[12] = uString::Const("\n"
        "\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "\tvar selected = Observable();\n"
        "\n"
        "\tfunction onSelected(arg) {\n"
        "\t\tselected.value = arg.data.name;\n"
        "\t\t//console.log(menu.Selected);\n"
        "\t}\n"
        "\n"
        "\tmodule.exports = {\n"
        "\t\tselected: selected,\n"
        "\t\tonSelected: onSelected\n"
        "\t}\n"
        "\t");
    ::STRINGS[13] = uString::Const("DropdownMenu.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
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
        ::g::Uno::Float4_typeof(), offsetof(::g::DropdownMenu, _field_TextColor), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::DropdownMenu, expandDropdown), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu, temp_Brush_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu, temp1_BackgroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu, temp1_BorderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DropdownMenu, temp1_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownMenu, temp1_Text_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::DropdownMenu, temp1_TextColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::DropdownMenu, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu, this_BackgroundColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL), offsetof(::g::DropdownMenu, this_BorderColor_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::DropdownMenu, this_FontSize_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::DropdownMenu, this_ListItems_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownMenu, this_Selected_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::DropdownMenu, this_TextColor_inst), 0,
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
    options.FieldCount = 139;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(DropdownMenu);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("DropdownMenu", options);
    type->fp_build_ = DropdownMenu_build;
    type->fp_ctor_ = (void*)DropdownMenu__New4_fn;
    type->fp_cctor_ = DropdownMenu__cctor_4_fn;
    type->interface16.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface16.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
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

// public DropdownMenu() :180
void DropdownMenu__ctor_7_fn(DropdownMenu* __this)
{
    __this->ctor_7();
}

// public Fuse.Drawing.Brush get_BackgroundColor() :53
void DropdownMenu__get_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BackgroundColor();
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) :54
void DropdownMenu__set_BackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BackgroundColor(value);
}

// public Fuse.Drawing.Brush get_BorderColor() :68
void DropdownMenu__get_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->BorderColor();
}

// public void set_BorderColor(Fuse.Drawing.Brush value) :69
void DropdownMenu__set_BorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->BorderColor(value);
}

// public float get_FontSize() :83
void DropdownMenu__get_FontSize_fn(DropdownMenu* __this, float* __retval)
{
    *__retval = __this->FontSize();
}

// public void set_FontSize(float value) :84
void DropdownMenu__set_FontSize_fn(DropdownMenu* __this, float* value)
{
    __this->FontSize(*value);
}

// private void InitializeUX() :184
void DropdownMenu__InitializeUX_fn(DropdownMenu* __this)
{
    __this->InitializeUX();
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

// public DropdownMenu New() :180
void DropdownMenu__New4_fn(DropdownMenu** __retval)
{
    *__retval = DropdownMenu::New4();
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

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :56
void DropdownMenu__SetBackgroundColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBackgroundColor(value, origin);
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) :71
void DropdownMenu__SetBorderColor_fn(DropdownMenu* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    __this->SetBorderColor(value, origin);
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) :86
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

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) :41
void DropdownMenu__SetTextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* value, uObject* origin)
{
    __this->SetTextColor(*value, origin);
}

// public float4 get_TextColor() :38
void DropdownMenu__get_TextColor_fn(DropdownMenu* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :39
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

// public DropdownMenu() [instance] :180
void DropdownMenu::ctor_7()
{
    ctor_6();
    InitializeUX();
}

// public Fuse.Drawing.Brush get_BackgroundColor() [instance] :53
::g::Fuse::Drawing::Brush* DropdownMenu::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance] :54
void DropdownMenu::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    SetBackgroundColor(value, NULL);
}

// public Fuse.Drawing.Brush get_BorderColor() [instance] :68
::g::Fuse::Drawing::Brush* DropdownMenu::BorderColor()
{
    return _field_BorderColor;
}

// public void set_BorderColor(Fuse.Drawing.Brush value) [instance] :69
void DropdownMenu::BorderColor(::g::Fuse::Drawing::Brush* value)
{
    SetBorderColor(value, NULL);
}

// public float get_FontSize() [instance] :83
float DropdownMenu::FontSize()
{
    return _field_FontSize;
}

// public void set_FontSize(float value) [instance] :84
void DropdownMenu::FontSize(float value)
{
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance] :184
void DropdownMenu::InitializeUX()
{
    this_ListItems_inst = ::g::dynamictabbar_DropdownMenu_ListItems_Property::New1(this, DropdownMenu::__selector0());
    this_Selected_inst = ::g::dynamictabbar_DropdownMenu_Selected_Property::New1(this, DropdownMenu::__selector1());
    this_TextColor_inst = ::g::dynamictabbar_DropdownMenu_TextColor_Property::New1(this, DropdownMenu::__selector2());
    this_BackgroundColor_inst = ::g::dynamictabbar_DropdownMenu_BackgroundColor_Property::New1(this, DropdownMenu::__selector3());
    this_BorderColor_inst = ::g::dynamictabbar_DropdownMenu_BorderColor_Property::New1(this, DropdownMenu::__selector4());
    this_FontSize_inst = ::g::dynamictabbar_DropdownMenu_FontSize_Property::New1(this, DropdownMenu::__selector5());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DropdownMenu::__g_static_nametable1());
    ::g::Fuse::Reactive::Constant* temp3 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    temp_Brush_inst = ::g::dynamictabbar_FuseDrawingStroke_Brush_Property::New1(temp, DropdownMenu::__selector6());
    ::g::Fuse::Reactive::Property* temp4 = ::g::Fuse::Reactive::Property::New1(temp3, ::g::dynamictabbar_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp5 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::DropdownSelectedItem* temp1 = ::g::DropdownSelectedItem::New4();
    temp1_TextColor_inst = ::g::dynamictabbar_DropdownSelectedItem_TextColor_Property::New1(temp1, DropdownMenu::__selector2());
    ::g::Fuse::Reactive::Property* temp6 = ::g::Fuse::Reactive::Property::New1(temp5, ::g::dynamictabbar_accessor_DropdownMenu_TextColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp7 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_FontSize_inst = ::g::dynamictabbar_DropdownSelectedItem_FontSize_Property::New1(temp1, DropdownMenu::__selector5());
    ::g::Fuse::Reactive::Property* temp8 = ::g::Fuse::Reactive::Property::New1(temp7, ::g::dynamictabbar_accessor_DropdownMenu_FontSize::Singleton());
    temp1_Text_inst = ::g::dynamictabbar_DropdownSelectedItem_Text_Property::New1(temp1, DropdownMenu::__selector7());
    ::g::Fuse::Reactive::Data* temp9 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"selected"*/]);
    ::g::Fuse::Reactive::Constant* temp10 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BackgroundColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::New1(temp1, DropdownMenu::__selector3());
    ::g::Fuse::Reactive::Property* temp11 = ::g::Fuse::Reactive::Property::New1(temp10, ::g::dynamictabbar_accessor_DropdownMenu_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp12 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BorderColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BorderColor_Property::New1(temp1, DropdownMenu::__selector4());
    ::g::Fuse::Reactive::Property* temp13 = ::g::Fuse::Reactive::Property::New1(temp12, ::g::dynamictabbar_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp14 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp2, DropdownMenu::__selector8());
    ::g::Fuse::Reactive::Property* temp15 = ::g::Fuse::Reactive::Property::New1(temp14, ::g::dynamictabbar_accessor_DropdownMenu_ListItems::Singleton());
    ::g::Fuse::Reactive::Data* temp16 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"selected"*/]);
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp19 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp20 = ::g::Fuse::Reactive::DataBinding::New1(temp_Brush_inst, (uObject*)temp4, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp1_TextColor_inst, (uObject*)temp6, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp1_FontSize_inst, (uObject*)temp8, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Text_inst, (uObject*)temp9, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BackgroundColor_inst, (uObject*)temp11, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BorderColor_inst, (uObject*)temp13, __g_nametable1, 3);
    ::g::Fuse::Gestures::Clicked* temp26 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp27 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    expandDropdown = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::StackPanel* temp28 = ::g::Fuse::Controls::StackPanel::New4();
    DropdownMenu__Template* temp29 = DropdownMenu__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp30 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp15, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(this_Selected_inst, (uObject*)temp16, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9921569f, 0.9921569f, 0.9921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7490196f, 0.7490196f, 0.7490196f, 1.0f));
    Name(DropdownMenu::__selector9());
    TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    FontSize(14.0f);
    temp17->Code(::STRINGS[12/*"\n\tvar Obs...*/]);
    temp17->LineNumber(12);
    temp17->FileName(::STRINGS[13/*"DropdownMen...*/]);
    temp18->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp18->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Strokes()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp19->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp20);
    temp->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp26->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp27);
    temp27->Target((uObject*)expandDropdown);
    uPtr(expandDropdown)->Name(DropdownMenu::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(expandDropdown)->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp28);
    temp28->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(30.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp28->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp29);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp30);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_ListItems_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Selected_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_TextColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BackgroundColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BorderColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_FontSize_inst);
    BackgroundColor(temp32);
    BorderColor(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Bindings()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
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

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :56
void DropdownMenu::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :71
void DropdownMenu::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :86
void DropdownMenu::SetFontSize(float value, uObject* origin)
{
    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"FontSize"*/]), origin);
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

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :41
void DropdownMenu::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(value, _field_TextColor))
    {
        _field_TextColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"TextColor"*/]), origin);
    }
}

// public float4 get_TextColor() [instance] :38
::g::Uno::Float4 DropdownMenu::TextColor()
{
    return _field_TextColor;
}

// public void set_TextColor(float4 value) [instance] :39
void DropdownMenu::TextColor(::g::Uno::Float4 value)
{
    SetTextColor(value, NULL);
}

// public DropdownMenu New() [static] :180
DropdownMenu* DropdownMenu::New4()
{
    DropdownMenu* obj1 = (DropdownMenu*)uNew(DropdownMenu_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g