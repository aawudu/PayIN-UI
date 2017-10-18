// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/iOS/Preview/cache/ux11/DropdownMenu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.DropdownMenu.h>
#include <_root.DropdownMenu.Template.h>
#include <_root.DropdownSelectedItem.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_BackgroundColor.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_BorderColor.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_FontSize.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_ListItems.h>
#include <_root.dynamictabbar_accessor_DropdownMenu_TextColor.h>
#include <_root.dynamictabbar_DropdownMenu_BackgroundColor_Property.h>
#include <_root.dynamictabbar_DropdownMenu_BorderColor_Property.h>
#include <_root.dynamictabbar_DropdownMenu_FontSize_Property.h>
#include <_root.dynamictabbar_DropdownMenu_ListItems_Property.h>
#include <_root.dynamictabbar_DropdownMenu_Selected_Property.h>
#include <_root.dynamictabbar_DropdownMenu_Text_Property.h>
#include <_root.dynamictabbar_DropdownMenu_TextColor_Property.h>
#include <_root.dynamictabbar_DropdownSelectedItem_BackgroundColor_Property.h>
#include <_root.dynamictabbar_DropdownSelectedItem_BorderColor_Property.h>
#include <_root.dynamictabbar_DropdownSelectedItem_FontSize_Property.h>
#include <_root.dynamictabbar_DropdownSelectedItem_Text_Property.h>
#include <_root.dynamictabbar_DropdownSelectedItem_TextColor_Property.h>
#include <_root.dynamictabbar_FuseDrawingStroke_Brush_Property.h>
#include <_root.dynamictabbar_FuseReactiveEach_Items_Property.h>
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
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.ConstantExpression.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Property.h>
#include <Fuse.Triggers.Actions.IToggleable.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions.TriggerAction.h>
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
    ::STRINGS[11] = uString::Const("selected");
    ::STRINGS[12] = uString::Const("\n"
        "\t\t\t\t\t\tvar Observable = require('FuseJS/Observable');\n"
        "\n"
        "\t\t\t\t\t\tvar selected = Observable();\n"
        "\n"
        "\t\t\t\t\t\tfunction onSelected(arg) {\n"
        "\t\t\t\t\t\t\tselected.value = arg.data.name;\n"
        "\t\t\t\t    //console.log(menu.Selected);\n"
        "\t\t\t\t}\n"
        "\n"
        "\t\t\t\tmodule.exports = {\n"
        "\t\t\t\t\tselected: selected,\n"
        "\t\t\t\t\tonSelected: onSelected\n"
        "\t\t\t\t}\n"
        "\t\t\t\t");
    ::STRINGS[13] = uString::Const("MainView.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Property_typeof(), NULL);
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
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(110,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::DropdownMenu, __g_nametable1), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownMenu, _field_BackgroundColor), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::DropdownMenu, _field_BorderColor), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::DropdownMenu, _field_FontSize), 0,
        uObject_typeof(), offsetof(::g::DropdownMenu, _field_ListItems), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownMenu, _field_Selected), 0,
        ::g::Uno::String_typeof(), offsetof(::g::DropdownMenu, _field_Text), 0,
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
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::DropdownMenu, this_Text_inst), 0,
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
    type->Reflection.SetFunctions(22,
        new uFunction("get_BackgroundColor", NULL, (void*)DropdownMenu__get_BackgroundColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BackgroundColor", NULL, (void*)DropdownMenu__set_BackgroundColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_BorderColor", NULL, (void*)DropdownMenu__get_BorderColor_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_BorderColor", NULL, (void*)DropdownMenu__set_BorderColor_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_FontSize", NULL, (void*)DropdownMenu__get_FontSize_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_FontSize", NULL, (void*)DropdownMenu__set_FontSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_ListItems", NULL, (void*)DropdownMenu__get_ListItems_fn, 0, false, uObject_typeof(), 0),
        new uFunction("set_ListItems", NULL, (void*)DropdownMenu__set_ListItems_fn, 0, false, uVoid_typeof(), 1, uObject_typeof()),
        new uFunction(".ctor", NULL, (void*)DropdownMenu__New4_fn, 0, true, type, 0),
        new uFunction("get_Selected", NULL, (void*)DropdownMenu__get_Selected_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Selected", NULL, (void*)DropdownMenu__set_Selected_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("SetBackgroundColor", NULL, (void*)DropdownMenu__SetBackgroundColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetBorderColor", NULL, (void*)DropdownMenu__SetBorderColor_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetFontSize", NULL, (void*)DropdownMenu__SetFontSize_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetListItems", NULL, (void*)DropdownMenu__SetListItems_fn, 0, false, uVoid_typeof(), 2, uObject_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetSelected", NULL, (void*)DropdownMenu__SetSelected_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetText", NULL, (void*)DropdownMenu__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetTextColor", NULL, (void*)DropdownMenu__SetTextColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)DropdownMenu__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)DropdownMenu__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_TextColor", NULL, (void*)DropdownMenu__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)DropdownMenu__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
}

::g::Fuse::Controls::Panel_type* DropdownMenu_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 145;
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

// public DropdownMenu() :196
void DropdownMenu__ctor_7_fn(DropdownMenu* __this)
{
    __this->ctor_7();
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

// private void InitializeUX() :200
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

// public DropdownMenu New() :196
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

// public DropdownMenu() [instance] :196
void DropdownMenu::ctor_7()
{
    uStackFrame __("DropdownMenu", ".ctor()");
    ctor_6();
    InitializeUX();
}

// public Fuse.Drawing.Brush get_BackgroundColor() [instance] :68
::g::Fuse::Drawing::Brush* DropdownMenu::BackgroundColor()
{
    return _field_BackgroundColor;
}

// public void set_BackgroundColor(Fuse.Drawing.Brush value) [instance] :69
void DropdownMenu::BackgroundColor(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("DropdownMenu", "set_BackgroundColor(Fuse.Drawing.Brush)");
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
    uStackFrame __("DropdownMenu", "set_BorderColor(Fuse.Drawing.Brush)");
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
    uStackFrame __("DropdownMenu", "set_FontSize(float)");
    SetFontSize(value, NULL);
}

// private void InitializeUX() [instance] :200
void DropdownMenu::InitializeUX()
{
    uStackFrame __("DropdownMenu", "InitializeUX()");
    this_ListItems_inst = ::g::dynamictabbar_DropdownMenu_ListItems_Property::New1(this, DropdownMenu::__selector0());
    this_Selected_inst = ::g::dynamictabbar_DropdownMenu_Selected_Property::New1(this, DropdownMenu::__selector1());
    this_Text_inst = ::g::dynamictabbar_DropdownMenu_Text_Property::New1(this, DropdownMenu::__selector2());
    this_TextColor_inst = ::g::dynamictabbar_DropdownMenu_TextColor_Property::New1(this, DropdownMenu::__selector3());
    this_BackgroundColor_inst = ::g::dynamictabbar_DropdownMenu_BackgroundColor_Property::New1(this, DropdownMenu::__selector4());
    this_BorderColor_inst = ::g::dynamictabbar_DropdownMenu_BorderColor_Property::New1(this, DropdownMenu::__selector5());
    this_FontSize_inst = ::g::dynamictabbar_DropdownMenu_FontSize_Property::New1(this, DropdownMenu::__selector6());
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, DropdownMenu::__g_static_nametable1());
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"selected"*/]);
    ::g::Fuse::Reactive::Constant* temp4 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Drawing::Stroke* temp = ::g::Fuse::Drawing::Stroke::New2();
    temp_Brush_inst = ::g::dynamictabbar_FuseDrawingStroke_Brush_Property::New1(temp, DropdownMenu::__selector7());
    ::g::Fuse::Reactive::Property* temp5 = ::g::Fuse::Reactive::Property::New1(temp4, ::g::dynamictabbar_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp6 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::DropdownSelectedItem* temp1 = ::g::DropdownSelectedItem::New5();
    temp1_TextColor_inst = ::g::dynamictabbar_DropdownSelectedItem_TextColor_Property::New1(temp1, DropdownMenu::__selector3());
    ::g::Fuse::Reactive::Property* temp7 = ::g::Fuse::Reactive::Property::New1(temp6, ::g::dynamictabbar_accessor_DropdownMenu_TextColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp8 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_FontSize_inst = ::g::dynamictabbar_DropdownSelectedItem_FontSize_Property::New1(temp1, DropdownMenu::__selector6());
    ::g::Fuse::Reactive::Property* temp9 = ::g::Fuse::Reactive::Property::New1(temp8, ::g::dynamictabbar_accessor_DropdownMenu_FontSize::Singleton());
    temp1_Text_inst = ::g::dynamictabbar_DropdownSelectedItem_Text_Property::New1(temp1, DropdownMenu::__selector2());
    ::g::Fuse::Reactive::Data* temp10 = ::g::Fuse::Reactive::Data::New1(::STRINGS[11/*"selected"*/]);
    ::g::Fuse::Reactive::Constant* temp11 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BackgroundColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BackgroundColor_Property::New1(temp1, DropdownMenu::__selector4());
    ::g::Fuse::Reactive::Property* temp12 = ::g::Fuse::Reactive::Property::New1(temp11, ::g::dynamictabbar_accessor_DropdownMenu_BackgroundColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp13 = ::g::Fuse::Reactive::Constant::New1(this);
    temp1_BorderColor_inst = ::g::dynamictabbar_DropdownSelectedItem_BorderColor_Property::New1(temp1, DropdownMenu::__selector5());
    ::g::Fuse::Reactive::Property* temp14 = ::g::Fuse::Reactive::Property::New1(temp13, ::g::dynamictabbar_accessor_DropdownMenu_BorderColor::Singleton());
    ::g::Fuse::Reactive::Constant* temp15 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp2, DropdownMenu::__selector8());
    ::g::Fuse::Reactive::Property* temp16 = ::g::Fuse::Reactive::Property::New1(temp15, ::g::dynamictabbar_accessor_DropdownMenu_ListItems::Singleton());
    ::g::Fuse::Reactive::JavaScript* temp17 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp18 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Reactive::DataBinding* temp19 = ::g::Fuse::Reactive::DataBinding::New1(this_Selected_inst, (uObject*)temp3, __g_nametable1, 3);
    ::g::Fuse::Controls::Rectangle* temp20 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Reactive::DataBinding* temp21 = ::g::Fuse::Reactive::DataBinding::New1(temp_Brush_inst, (uObject*)temp5, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp22 = ::g::Fuse::Reactive::DataBinding::New1(temp1_TextColor_inst, (uObject*)temp7, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp23 = ::g::Fuse::Reactive::DataBinding::New1(temp1_FontSize_inst, (uObject*)temp9, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp24 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Text_inst, (uObject*)temp10, __g_nametable1, 3);
    ::g::Fuse::Reactive::DataBinding* temp25 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BackgroundColor_inst, (uObject*)temp12, __g_nametable1, 1);
    ::g::Fuse::Reactive::DataBinding* temp26 = ::g::Fuse::Reactive::DataBinding::New1(temp1_BorderColor_inst, (uObject*)temp14, __g_nametable1, 1);
    ::g::Fuse::Gestures::Clicked* temp27 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp28 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    expandDropdown = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Controls::StackPanel* temp29 = ::g::Fuse::Controls::StackPanel::New4();
    DropdownMenu__Template* temp30 = DropdownMenu__Template::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp31 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp16, __g_nametable1, 1);
    ::g::Fuse::Drawing::StaticSolidColor* temp32 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp33 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    Name(DropdownMenu::__selector9());
    TextColor(::g::Uno::Float4__New2(0.2f, 0.2f, 0.2f, 1.0f));
    FontSize(14.0f);
    temp17->Code(::STRINGS[12/*"\n\t\t\t\t\...*/]);
    temp17->LineNumber(392);
    temp17->FileName(::STRINGS[13/*"MainView.ux"*/]);
    temp18->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp18->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp27);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp18->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp20->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp21);
    temp->Width(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp25);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp26);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp27->Actions()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp28);
    temp28->Target((uObject*)expandDropdown);
    uPtr(expandDropdown)->Name(DropdownMenu::__selector10());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(expandDropdown)->Nodes()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp29);
    temp29->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(0.0f, 1), ::g::Uno::UX::Size__New1(40.0f, 1)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp29->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[5/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp31);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[6/*Uno.Collections.ICollection<object>*/]), expandDropdown);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_ListItems_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Selected_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_Text_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_TextColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BackgroundColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_BorderColor_inst);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Properties()), ::TYPES[7/*Uno.Collections.ICollection<Uno.UX.Property>*/]), this_FontSize_inst);
    BackgroundColor(temp32);
    BorderColor(temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp18);
}

// public object get_ListItems() [instance] :8
uObject* DropdownMenu::ListItems()
{
    return _field_ListItems;
}

// public void set_ListItems(object value) [instance] :9
void DropdownMenu::ListItems(uObject* value)
{
    uStackFrame __("DropdownMenu", "set_ListItems(object)");
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
    uStackFrame __("DropdownMenu", "set_Selected(string)");
    SetSelected(value, NULL);
}

// public void SetBackgroundColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :71
void DropdownMenu::SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetBackgroundColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BackgroundColor)
    {
        _field_BackgroundColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"BackgroundC...*/]), origin);
    }
}

// public void SetBorderColor(Fuse.Drawing.Brush value, Uno.UX.IPropertyListener origin) [instance] :86
void DropdownMenu::SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetBorderColor(Fuse.Drawing.Brush,Uno.UX.IPropertyListener)");

    if (value != _field_BorderColor)
    {
        _field_BorderColor = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"BorderColor"*/]), origin);
    }
}

// public void SetFontSize(float value, Uno.UX.IPropertyListener origin) [instance] :101
void DropdownMenu::SetFontSize(float value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetFontSize(float,Uno.UX.IPropertyListener)");

    if (value != _field_FontSize)
    {
        _field_FontSize = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"FontSize"*/]), origin);
    }
}

// public void SetListItems(object value, Uno.UX.IPropertyListener origin) [instance] :11
void DropdownMenu::SetListItems(uObject* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetListItems(object,Uno.UX.IPropertyListener)");

    if (value != _field_ListItems)
    {
        _field_ListItems = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ListItems"*/]), origin);
    }
}

// public void SetSelected(string value, Uno.UX.IPropertyListener origin) [instance] :26
void DropdownMenu::SetSelected(uString* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetSelected(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Selected))
    {
        _field_Selected = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Selected"*/]), origin);
    }
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :41
void DropdownMenu::SetText(uString* value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"Text"*/]), origin);
    }
}

// public void SetTextColor(float4 value, Uno.UX.IPropertyListener origin) [instance] :56
void DropdownMenu::SetTextColor(::g::Uno::Float4 value, uObject* origin)
{
    uStackFrame __("DropdownMenu", "SetTextColor(float4,Uno.UX.IPropertyListener)");

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
    uStackFrame __("DropdownMenu", "set_Text(string)");
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
    uStackFrame __("DropdownMenu", "set_TextColor(float4)");
    SetTextColor(value, NULL);
}

// public DropdownMenu New() [static] :196
DropdownMenu* DropdownMenu::New4()
{
    DropdownMenu* obj1 = (DropdownMenu*)uNew(DropdownMenu_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
