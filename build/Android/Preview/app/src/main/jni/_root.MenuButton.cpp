// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/MenuButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.dynamictabbar_bundle.h>
#include <_root.dynamictabbar_F-9f61a29.h>
#include <_root.dynamictabbar_F-c936eebb.h>
#include <_root.dynamictabbar_F-ec9d78b9.h>
#include <_root.MenuButton.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Scaling.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.LayoutAnimation.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.Visual.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[19];
static uType* TYPES[5];

namespace g{

// public partial sealed class MenuButton :2
// {
// static MenuButton() :26
static void MenuButton__cctor_4_fn(uType* __type)
{
    MenuButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Alignment"*/]);
    MenuButton::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"Factor"*/]);
    MenuButton::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"Opacity"*/]);
    MenuButton::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"menuButtons"*/]);
    MenuButton::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"refundScaling"*/]);
    MenuButton::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"shareScaling"*/]);
    MenuButton::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"sp"*/]);
    MenuButton::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"dividerRect"*/]);
    MenuButton::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"arrow"*/]);
    MenuButton::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"c1"*/]);
    MenuButton::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"circleScale1"*/]);
    MenuButton::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"c2"*/]);
    MenuButton::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"circleScale2"*/]);
    MenuButton::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"c3"*/]);
    MenuButton::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"circleScale3"*/]);
    MenuButton::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"menuLayout"*/]);
}

static void MenuButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Alignment");
    ::STRINGS[1] = uString::Const("Factor");
    ::STRINGS[2] = uString::Const("Opacity");
    ::STRINGS[3] = uString::Const("menuButtons");
    ::STRINGS[4] = uString::Const("refundScaling");
    ::STRINGS[5] = uString::Const("shareScaling");
    ::STRINGS[6] = uString::Const("sp");
    ::STRINGS[7] = uString::Const("dividerRect");
    ::STRINGS[8] = uString::Const("arrow");
    ::STRINGS[9] = uString::Const("c1");
    ::STRINGS[10] = uString::Const("circleScale1");
    ::STRINGS[11] = uString::Const("c2");
    ::STRINGS[12] = uString::Const("circleScale2");
    ::STRINGS[13] = uString::Const("c3");
    ::STRINGS[14] = uString::Const("circleScale3");
    ::STRINGS[15] = uString::Const("menuLayout");
    ::STRINGS[16] = uString::Const("40,1.5*,1*");
    ::STRINGS[17] = uString::Const("Refund");
    ::STRINGS[18] = uString::Const("Share");
    ::TYPES[0] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL);
    ::TYPES[1] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
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
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16));
    type->SetFields(110,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MenuButton, arrow), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, arrow_Opacity_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MenuButton, c1), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MenuButton, c2), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MenuButton, c3), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MenuButton, circleScale1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, circleScale1_Factor_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MenuButton, circleScale2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, circleScale2_Factor_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MenuButton, circleScale3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, circleScale3_Factor_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MenuButton, dividerRect), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, dividerRect_Opacity_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MenuButton, menuButtons), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, menuButtons_Opacity_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MenuButton, menuLayout), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MenuButton, refundScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, refundScaling_Factor_inst), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MenuButton, shareScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MenuButton, shareScaling_Factor_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MenuButton, sp), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Alignment_typeof(), NULL), offsetof(::g::MenuButton, sp_Alignment_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MenuButton::__selector9_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MenuButton__New4_fn, 0, true, type, 0));
}

::g::Fuse::Controls::Panel_type* MenuButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 148;
    options.InterfaceCount = 17;
    options.ObjectSize = sizeof(MenuButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("MenuButton", options);
    type->fp_build_ = MenuButton_build;
    type->fp_ctor_ = (void*)MenuButton__New4_fn;
    type->fp_cctor_ = MenuButton__cctor_4_fn;
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

// public MenuButton() :30
void MenuButton__ctor_7_fn(MenuButton* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :34
void MenuButton__InitializeUX_fn(MenuButton* __this)
{
    __this->InitializeUX();
}

// public MenuButton New() :30
void MenuButton__New4_fn(MenuButton** __retval)
{
    *__retval = MenuButton::New4();
}

::g::Uno::UX::Selector MenuButton::__selector0_;
::g::Uno::UX::Selector MenuButton::__selector1_;
::g::Uno::UX::Selector MenuButton::__selector10_;
::g::Uno::UX::Selector MenuButton::__selector11_;
::g::Uno::UX::Selector MenuButton::__selector12_;
::g::Uno::UX::Selector MenuButton::__selector13_;
::g::Uno::UX::Selector MenuButton::__selector14_;
::g::Uno::UX::Selector MenuButton::__selector15_;
::g::Uno::UX::Selector MenuButton::__selector2_;
::g::Uno::UX::Selector MenuButton::__selector3_;
::g::Uno::UX::Selector MenuButton::__selector4_;
::g::Uno::UX::Selector MenuButton::__selector5_;
::g::Uno::UX::Selector MenuButton::__selector6_;
::g::Uno::UX::Selector MenuButton::__selector7_;
::g::Uno::UX::Selector MenuButton::__selector8_;
::g::Uno::UX::Selector MenuButton::__selector9_;

// public MenuButton() [instance] :30
void MenuButton::ctor_7()
{
    uStackFrame __("MenuButton", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :34
void MenuButton::InitializeUX()
{
    uStackFrame __("MenuButton", "InitializeUX()");
    sp = ::g::Fuse::Controls::Panel::New3();
    sp_Alignment_inst = ::g::dynamictabbar_FuseElementsElement_Alignment_Property::New1(sp, MenuButton::__selector0());
    circleScale1 = ::g::Fuse::Scaling::New2();
    circleScale1_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(circleScale1, MenuButton::__selector1());
    circleScale2 = ::g::Fuse::Scaling::New2();
    circleScale2_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(circleScale2, MenuButton::__selector1());
    circleScale3 = ::g::Fuse::Scaling::New2();
    circleScale3_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(circleScale3, MenuButton::__selector1());
    menuButtons = ::g::Fuse::Controls::Grid::New4();
    menuButtons_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(menuButtons, MenuButton::__selector2());
    shareScaling = ::g::Fuse::Scaling::New2();
    shareScaling_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(shareScaling, MenuButton::__selector1());
    refundScaling = ::g::Fuse::Scaling::New2();
    refundScaling_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(refundScaling, MenuButton::__selector1());
    arrow = ::g::Fuse::Controls::Image::New3();
    arrow_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(arrow, MenuButton::__selector2());
    dividerRect = ::g::Fuse::Controls::Rectangle::New3();
    dividerRect_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(dividerRect, MenuButton::__selector2());
    ::g::Fuse::Controls::DockPanel* temp = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp1 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp2 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp3 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp4 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Controls::DockPanel* temp5 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp6 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Text* temp7 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Gestures::Clicked* temp8 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp9 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::LayoutAnimation* temp10 = ::g::Fuse::Triggers::LayoutAnimation::New2();
    ::g::Fuse::Animations::Move* temp11 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::Panel* temp12 = ::g::Fuse::Controls::Panel::New3();
    c1 = ::g::Fuse::Controls::Circle::New3();
    c2 = ::g::Fuse::Controls::Circle::New3();
    c3 = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Gestures::Clicked* temp13 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp14 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    menuLayout = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp15 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[0/*Fuse.Animations.Change<Fuse.Elements.Alignment>*/], sp_Alignment_inst);
    ::g::Fuse::Animations::Change* temp16 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], circleScale1_Factor_inst);
    ::g::Fuse::Animations::Change* temp17 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], circleScale2_Factor_inst);
    ::g::Fuse::Animations::Change* temp18 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], circleScale3_Factor_inst);
    ::g::Fuse::Animations::Move* temp19 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp20 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Change* temp21 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], menuButtons_Opacity_inst);
    ::g::Fuse::Animations::Change* temp22 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], shareScaling_Factor_inst);
    ::g::Fuse::Animations::Change* temp23 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], refundScaling_Factor_inst);
    ::g::Fuse::Animations::Change* temp24 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], arrow_Opacity_inst);
    ::g::Fuse::Animations::Change* temp25 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[1/*Fuse.Animations.Change<float>*/], dividerRect_Opacity_inst);
    uPtr(menuButtons)->Columns(::STRINGS[16/*"40,1.5*,1*"*/]);
    uPtr(menuButtons)->Opacity(0.0f);
    uPtr(menuButtons)->Name(MenuButton::__selector3());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButtons)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuButtons)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    temp->HitTestMode(6);
    temp->Alignment(11);
    ::g::Fuse::Controls::Grid::SetColumn(temp, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), refundScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp1->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    temp1->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp1, 0);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::refund5cfaedbd()));
    temp2->Value(::STRINGS[17/*"Refund"*/]);
    temp2->FontSize(14.0f);
    temp2->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    temp2->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(refundScaling)->Factor(0.2f);
    uPtr(refundScaling)->Name(MenuButton::__selector4());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp4);
    temp4->Target((uObject*)menuLayout);
    temp5->HitTestMode(6);
    temp5->Alignment(11);
    temp5->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    ::g::Fuse::Controls::Grid::SetColumn(temp5, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), shareScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
    temp6->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    temp6->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp6, 0);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::sharee5313d44()));
    temp7->Value(::STRINGS[18/*"Share"*/]);
    temp7->FontSize(14.0f);
    temp7->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    temp7->Margin(::g::Uno::Float4__New2(5.0f, 0.0f, 5.0f, 0.0f));
    uPtr(shareScaling)->Factor(0.2f);
    uPtr(shareScaling)->Name(MenuButton::__selector5());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp9);
    temp9->Target((uObject*)menuLayout);
    uPtr(sp)->Alignment(3);
    uPtr(sp)->Name(MenuButton::__selector6());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sp)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), menuLayout);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    temp11->X(1.0f);
    temp11->Duration(0.3);
    temp11->RelativeTo(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange());
    temp11->Easing(::g::Fuse::Animations::Easing::BackIn());
    temp12->HitTestMode(6);
    temp12->Width(::g::Uno::UX::Size__New1(40.0f, 1));
    temp12->Alignment(3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), dividerRect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), arrow);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), c1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), c2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), c3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    uPtr(dividerRect)->Color(::g::Uno::Float4__New2(0.8666667f, 0.8666667f, 0.8666667f, 1.0f));
    uPtr(dividerRect)->Width(::g::Uno::UX::Size__New1(1.0f, 1));
    uPtr(dividerRect)->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    uPtr(dividerRect)->Alignment(3);
    uPtr(dividerRect)->Offset(::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(10.0f, 1), ::g::Uno::UX::Size__New1(0.0f, 1)));
    uPtr(dividerRect)->Opacity(0.0f);
    uPtr(dividerRect)->Name(MenuButton::__selector7());
    uPtr(arrow)->Width(::g::Uno::UX::Size__New1(16.0f, 1));
    uPtr(arrow)->Opacity(0.0f);
    uPtr(arrow)->Name(MenuButton::__selector8());
    uPtr(arrow)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::arrow46ba79c2()));
    uPtr(c1)->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    uPtr(c1)->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c1)->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c1)->Alignment(1);
    uPtr(c1)->Name(MenuButton::__selector9());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(c1)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), circleScale1);
    uPtr(circleScale1)->Factor(0.25f);
    uPtr(circleScale1)->Name(MenuButton::__selector10());
    uPtr(c2)->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    uPtr(c2)->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c2)->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c2)->Alignment(2);
    uPtr(c2)->Name(MenuButton::__selector11());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(c2)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), circleScale2);
    uPtr(circleScale2)->Factor(0.25f);
    uPtr(circleScale2)->Name(MenuButton::__selector12());
    uPtr(c3)->Color(::g::Uno::Float4__New2(0.003921569f, 0.5450981f, 0.8588235f, 1.0f));
    uPtr(c3)->Width(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c3)->Height(::g::Uno::UX::Size__New1(20.0f, 1));
    uPtr(c3)->Alignment(3);
    uPtr(c3)->Name(MenuButton::__selector13());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(c3)->Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), circleScale3);
    uPtr(circleScale3)->Factor(0.25f);
    uPtr(circleScale3)->Name(MenuButton::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp13->Actions()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp14);
    temp14->Target((uObject*)menuLayout);
    uPtr(menuLayout)->Name(MenuButton::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp17);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp19);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp20);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp21);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp22);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp23);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp24);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(menuLayout)->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp25);
    ::g::Fuse::Animations::Change__set_Value_fn(temp15, uCRef<int>(1));
    temp15->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp16, uCRef(1.0f));
    temp16->Duration(0.3);
    temp16->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp17, uCRef(1.0f));
    temp17->Duration(0.3);
    temp17->DelayBack(0.025);
    ::g::Fuse::Animations::Change__set_Value_fn(temp18, uCRef(1.0f));
    temp18->Duration(0.3);
    temp18->DelayBack(0.05);
    temp19->X(0.5f);
    temp19->Duration(0.3);
    temp19->DelayBack(0.0);
    temp19->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp19->Target(c1);
    temp20->X(-0.5f);
    temp20->Duration(0.3);
    temp20->DelayBack(0.0);
    temp20->RelativeTo(::g::Fuse::TranslationModes::Size());
    temp20->Target(c3);
    ::g::Fuse::Animations::Change__set_Value_fn(temp21, uCRef(1.0f));
    temp21->Duration(0.4);
    temp21->DurationBack(0.2);
    ::g::Fuse::Animations::Change__set_Value_fn(temp22, uCRef(1.0f));
    temp22->Duration(0.5);
    temp22->DurationBack(0.1);
    temp22->DelayBack(0.1);
    temp22->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp23, uCRef(1.0f));
    temp23->Duration(0.5);
    temp23->DurationBack(0.1);
    temp23->DelayBack(0.0);
    temp23->Delay(0.1);
    temp23->Easing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp24, uCRef(1.0f));
    temp24->Duration(0.4);
    temp24->DurationBack(0.15);
    temp24->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp25, uCRef(1.0f));
    temp25->Duration(0.2);
    temp25->DurationBack(0.15);
    temp25->DelayBack(0.0);
    temp25->Delay(0.2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), menuButtons);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Node>*/]), sp);
}

// public MenuButton New() [static] :30
MenuButton* MenuButton::New4()
{
    MenuButton* obj1 = (MenuButton*)uNew(MenuButton_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
