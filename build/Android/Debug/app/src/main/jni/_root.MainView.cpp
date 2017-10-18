// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ColorPalette.h>
#include <_root.DropdownMenu.h>
#include <_root.dynamictabbar_bundle.h>
#include <_root.dynamictabbar_D-aa96d15c.h>
#include <_root.dynamictabbar_F-10a52eac.h>
#include <_root.dynamictabbar_F-15e34268.h>
#include <_root.dynamictabbar_F-31c4cd7c.h>
#include <_root.dynamictabbar_F-42fe069c.h>
#include <_root.dynamictabbar_F-63c3abea.h>
#include <_root.dynamictabbar_F-840d2787.h>
#include <_root.dynamictabbar_F-8aa6b07f.h>
#include <_root.dynamictabbar_F-8da1d66b.h>
#include <_root.dynamictabbar_F-9e997f2.h>
#include <_root.dynamictabbar_F-9f61a29.h>
#include <_root.dynamictabbar_F-a9b2e67.h>
#include <_root.dynamictabbar_F-aab15e8.h>
#include <_root.dynamictabbar_F-b1f4bf63.h>
#include <_root.dynamictabbar_F-c936eebb.h>
#include <_root.dynamictabbar_F-cba8534a.h>
#include <_root.dynamictabbar_F-fd296813.h>
#include <_root.MainView.h>
#include <_root.MainView.Template.h>
#include <_root.MainView.Template1.h>
#include <_root.MainView.Template2.h>
#include <_root.MainView.Template3.h>
#include <_root.MainView.Template4.h>
#include <_root.MyTextInput.h>
#include <_root.TabHeader.h>
#include <_root.TabIcon.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Attractor-1.h>
#include <Fuse.Animations.Change-1.h>
#include <Fuse.Animations.Cycle-1.h>
#include <Fuse.Animations.Easing.h>
#include <Fuse.Animations.IResizeMode.h>
#include <Fuse.Animations.Move.h>
#include <Fuse.Animations.Nothing.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.Spin.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.BottomB-f0a90651.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ClientPanel.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.EllipticalShape.h>
#include <Fuse.Controls.Grid.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Controls.Navigat-70e90308.h>
#include <Fuse.Controls.Page.h>
#include <Fuse.Controls.PageControl.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Controls.TextInputHint.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Element-bd497d56.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Elements.ITransformOrigin.h>
#include <Fuse.Elements.TransformOrigins.h>
#include <Fuse.Elements.TranslationModes.h>
#include <Fuse.Elements.Visibility.h>
#include <Fuse.FileSystem.FileS-3c9ac41b.h>
#include <Fuse.Font.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.iOS.StatusBarConfig.h>
#include <Fuse.IScalingMode.h>
#include <Fuse.ITranslationMode.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.NavigationMotion.h>
#include <Fuse.Navigation.Activ-5bc1c951.h>
#include <Fuse.Navigation.Navig-ae9e86c7.h>
#include <Fuse.Navigation.While-89f5a828.h>
#include <Fuse.Navigation.WhileActive.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Each.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.FuseJS.-61f763fd.h>
#include <Fuse.Reactive.FuseJS.-97046318.h>
#include <Fuse.Reactive.FuseJS.Http.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Instantiator.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Reactive.Member.h>
#include <Fuse.RelativeTransform-1.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Scaling.h>
#include <Fuse.ScalingModes.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Testing.UnoTestingHelper.h>
#include <Fuse.Translation.h>
#include <Fuse.TranslationModes.h>
#include <Fuse.Triggers.Actions.Set-1.h>
#include <Fuse.Triggers.Actions.Toggle.h>
#include <Fuse.Triggers.Actions-38f4649e.h>
#include <Fuse.Triggers.Actions-7ea0e0be.h>
#include <Fuse.Triggers.Actions-b5190bae.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.BusyTaskModule.h>
#include <Fuse.Triggers.IScrolledLength.h>
#include <Fuse.Triggers.IScrolledLengths.h>
#include <Fuse.Triggers.LayoutTransition.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Fuse.Triggers.WhileKe-99bafeca.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Fuse.UserEvent.h>
#include <Fuse.Visual.h>
#include <Fuse.WebSocket.WebSoc-2254f404.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.UserEvents.h>
#include <Polyfills.Window.WindowModule.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property-1.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Template.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[204];
static uType* TYPES[21];

namespace g{

// public partial sealed class MainView :2
// {
// static MainView() :286
static void MainView__cctor_1_fn(uType* __type)
{
    MainView::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 64, ::STRINGS[0/*"transitionS...*/], ::STRINGS[1/*"ToggleLogge...*/], ::STRINGS[2/*"plusButton"*/], ::STRINGS[3/*"cross"*/], ::STRINGS[4/*"showPlusBut...*/], ::STRINGS[5/*"plusButtonS...*/], ::STRINGS[6/*"scalePlusBu...*/], ::STRINGS[7/*"plusButtonT...*/], ::STRINGS[8/*"plusButtonT...*/], ::STRINGS[9/*"plusButtonC...*/], ::STRINGS[10/*"plusButtonB...*/], ::STRINGS[11/*"loggedInView"*/], ::STRINGS[12/*"indicator"*/], ::STRINGS[13/*"p1"*/], ::STRINGS[14/*"p4"*/], ::STRINGS[15/*"col1"*/], ::STRINGS[16/*"col2"*/], ::STRINGS[17/*"col3"*/], ::STRINGS[18/*"col4"*/], ::STRINGS[19/*"c1"*/], ::STRINGS[20/*"h1"*/], ::STRINGS[21/*"c2"*/], ::STRINGS[22/*"h2"*/], ::STRINGS[23/*"c3"*/], ::STRINGS[24/*"h3"*/], ::STRINGS[25/*"c4"*/], ::STRINGS[26/*"h4"*/], ::STRINGS[27/*"nav"*/], ::STRINGS[28/*"indicatorCo...*/], ::STRINGS[29/*"bgColor"*/], ::STRINGS[30/*"bgColorAttr...*/], ::STRINGS[31/*"shrinkIndic...*/], ::STRINGS[32/*"page1"*/], ::STRINGS[33/*"page2"*/], ::STRINGS[34/*"text"*/], ::STRINGS[35/*"page3"*/], ::STRINGS[36/*"page4"*/], ::STRINGS[37/*"util"*/], ::STRINGS[38/*"montran"*/], ::STRINGS[39/*"moneytransf...*/], ::STRINGS[40/*"dropOne"*/], ::STRINGS[41/*"airtime"*/], ::STRINGS[42/*"airtimeform"*/], ::STRINGS[43/*"internet"*/], ::STRINGS[44/*"internetform"*/], ::STRINGS[45/*"utility"*/], ::STRINGS[46/*"utilityform"*/], ::STRINGS[47/*"sharebill"*/], ::STRINGS[48/*"sharebillform"*/], ::STRINGS[49/*"payinServices"*/], ::STRINGS[50/*"payinservic...*/], ::STRINGS[51/*"loading"*/], ::STRINGS[52/*"changeWidth"*/], ::STRINGS[53/*"loadCircle"*/], ::STRINGS[54/*"scaleAndFade"*/], ::STRINGS[55/*"showLoggedIn"*/], ::STRINGS[56/*"loggedOutView"*/], ::STRINGS[57/*"text1"*/], ::STRINGS[58/*"loadingCirc...*/], ::STRINGS[59/*"loadingCircle"*/], ::STRINGS[60/*"rectNormalS...*/], ::STRINGS[61/*"loadingButton"*/], ::STRINGS[62/*"mark"*/], ::STRINGS[63/*"loginArea"*/]);
    MainView::__selector0_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[64/*"Factor"*/]);
    MainView::__selector1_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[65/*"Value"*/]);
    MainView::__selector2_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[66/*"Opacity"*/]);
    MainView::__selector3_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[67/*"Y"*/]);
    MainView::__selector4_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[68/*"X"*/]);
    MainView::__selector5_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[69/*"Visibility"*/]);
    MainView::__selector6_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[70/*"Active"*/]);
    MainView::__selector7_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[71/*"Color"*/]);
    MainView::__selector8_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[72/*"Width"*/]);
    MainView::__selector9_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[73/*"Items"*/]);
    MainView::__selector10_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[74/*"ListItems"*/]);
    MainView::__selector11_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[75/*"LengthAngle...*/]);
    MainView::__selector12_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[76/*"IsEnabled"*/]);
    MainView::__selector13_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"transitionS...*/]);
    MainView::__selector14_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[1/*"ToggleLogge...*/]);
    MainView::__selector15_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[2/*"plusButton"*/]);
    MainView::__selector16_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"cross"*/]);
    MainView::__selector17_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"showPlusBut...*/]);
    MainView::__selector18_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[5/*"plusButtonS...*/]);
    MainView::__selector19_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[6/*"scalePlusBu...*/]);
    MainView::__selector20_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[7/*"plusButtonT...*/]);
    MainView::__selector21_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[8/*"plusButtonT...*/]);
    MainView::__selector22_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[9/*"plusButtonC...*/]);
    MainView::__selector23_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[10/*"plusButtonB...*/]);
    MainView::__selector24_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[11/*"loggedInView"*/]);
    MainView::__selector25_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[12/*"indicator"*/]);
    MainView::__selector26_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"p1"*/]);
    MainView::__selector27_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"p4"*/]);
    MainView::__selector28_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"c1"*/]);
    MainView::__selector29_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"h1"*/]);
    MainView::__selector30_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"c2"*/]);
    MainView::__selector31_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"h2"*/]);
    MainView::__selector32_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[23/*"c3"*/]);
    MainView::__selector33_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"h3"*/]);
    MainView::__selector34_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"c4"*/]);
    MainView::__selector35_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"h4"*/]);
    MainView::__selector36_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"nav"*/]);
    MainView::__selector37_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"indicatorCo...*/]);
    MainView::__selector38_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"bgColor"*/]);
    MainView::__selector39_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"bgColorAttr...*/]);
    MainView::__selector40_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"shrinkIndic...*/]);
    MainView::__selector41_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"page1"*/]);
    MainView::__selector42_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"page2"*/]);
    MainView::__selector43_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"text"*/]);
    MainView::__selector44_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"page3"*/]);
    MainView::__selector45_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[36/*"page4"*/]);
    MainView::__selector46_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[37/*"util"*/]);
    MainView::__selector47_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[38/*"montran"*/]);
    MainView::__selector48_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"moneytransf...*/]);
    MainView::__selector49_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"dropOne"*/]);
    MainView::__selector50_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"airtime"*/]);
    MainView::__selector51_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"airtimeform"*/]);
    MainView::__selector52_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"internet"*/]);
    MainView::__selector53_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"internetform"*/]);
    MainView::__selector54_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"utility"*/]);
    MainView::__selector55_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[46/*"utilityform"*/]);
    MainView::__selector56_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[47/*"sharebill"*/]);
    MainView::__selector57_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[48/*"sharebillform"*/]);
    MainView::__selector58_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[49/*"payinServices"*/]);
    MainView::__selector59_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[50/*"payinservic...*/]);
    MainView::__selector60_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[51/*"loading"*/]);
    MainView::__selector61_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[52/*"changeWidth"*/]);
    MainView::__selector62_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[53/*"loadCircle"*/]);
    MainView::__selector63_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[54/*"scaleAndFade"*/]);
    MainView::__selector64_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[55/*"showLoggedIn"*/]);
    MainView::__selector65_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[56/*"loggedOutView"*/]);
    MainView::__selector66_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[57/*"text1"*/]);
    MainView::__selector67_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[58/*"loadingCirc...*/]);
    MainView::__selector68_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[59/*"loadingCircle"*/]);
    MainView::__selector69_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[60/*"rectNormalS...*/]);
    MainView::__selector70_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[61/*"loadingButton"*/]);
    MainView::__selector71_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[62/*"mark"*/]);
    MainView::__selector72_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[63/*"loginArea"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::Linear(), ::STRINGS[77/*"Linear"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticIn(), ::STRINGS[78/*"QuadraticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticOut(), ::STRINGS[79/*"QuadraticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuadraticInOut(), ::STRINGS[80/*"QuadraticIn...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicIn(), ::STRINGS[81/*"CubicIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicOut(), ::STRINGS[82/*"CubicOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CubicInOut(), ::STRINGS[83/*"CubicInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticIn(), ::STRINGS[84/*"QuarticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticOut(), ::STRINGS[85/*"QuarticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuarticInOut(), ::STRINGS[86/*"QuarticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticIn(), ::STRINGS[87/*"QuinticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticOut(), ::STRINGS[88/*"QuinticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::QuinticInOut(), ::STRINGS[89/*"QuinticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalIn(), ::STRINGS[90/*"SinusoidalIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalOut(), ::STRINGS[91/*"SinusoidalOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::SinusoidalInOut(), ::STRINGS[92/*"SinusoidalI...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialIn(), ::STRINGS[93/*"ExponentialIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialOut(), ::STRINGS[94/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ExponentialInOut(), ::STRINGS[95/*"Exponential...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularIn(), ::STRINGS[96/*"CircularIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularOut(), ::STRINGS[97/*"CircularOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::CircularInOut(), ::STRINGS[98/*"CircularInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticIn(), ::STRINGS[99/*"ElasticIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticOut(), ::STRINGS[100/*"ElasticOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::ElasticInOut(), ::STRINGS[101/*"ElasticInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackIn(), ::STRINGS[102/*"BackIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackOut(), ::STRINGS[103/*"BackOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BackInOut(), ::STRINGS[104/*"BackInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceIn(), ::STRINGS[105/*"BounceIn"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceOut(), ::STRINGS[106/*"BounceOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Animations::Easing::BounceInOut(), ::STRINGS[107/*"BounceInOut"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Transparent()), ::STRINGS[108/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Transparent(), ::STRINGS[108/*"Transparent"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Black()), ::STRINGS[109/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Black(), ::STRINGS[109/*"Black"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Silver()), ::STRINGS[110/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Silver(), ::STRINGS[110/*"Silver"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Gray()), ::STRINGS[111/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Gray(), ::STRINGS[111/*"Gray"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::White()), ::STRINGS[112/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::White(), ::STRINGS[112/*"White"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Maroon()), ::STRINGS[113/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Maroon(), ::STRINGS[113/*"Maroon"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Red()), ::STRINGS[114/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Red(), ::STRINGS[114/*"Red"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Purple()), ::STRINGS[115/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Purple(), ::STRINGS[115/*"Purple"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Fuchsia()), ::STRINGS[116/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Fuchsia(), ::STRINGS[116/*"Fuchsia"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Green()), ::STRINGS[117/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Green(), ::STRINGS[117/*"Green"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Lime()), ::STRINGS[118/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Lime(), ::STRINGS[118/*"Lime"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Olive()), ::STRINGS[119/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Olive(), ::STRINGS[119/*"Olive"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Yellow()), ::STRINGS[120/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Yellow(), ::STRINGS[120/*"Yellow"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Navy()), ::STRINGS[121/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Navy(), ::STRINGS[121/*"Navy"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Blue()), ::STRINGS[122/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Blue(), ::STRINGS[122/*"Blue"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Teal()), ::STRINGS[123/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Teal(), ::STRINGS[123/*"Teal"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::Fuse::Drawing::Colors::Aqua()), ::STRINGS[124/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Drawing::Brushes::Aqua(), ::STRINGS[124/*"Aqua"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::TopLeft(), ::STRINGS[125/*"TopLeft"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Center(), ::STRINGS[126/*"Center"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::Anchor(), ::STRINGS[127/*"Anchor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::HorizontalBoxCenter(), ::STRINGS[128/*"HorizontalB...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TransformOrigins::VerticalBoxCenter(), ::STRINGS[129/*"VerticalBox...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::TransformOriginOffset(), ::STRINGS[130/*"TransformOr...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::PositionOffset(), ::STRINGS[131/*"PositionOff...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::SizeFactor(), ::STRINGS[132/*"SizeFactor"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Elements::TranslationModes::Size(), ::STRINGS[133/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Size(), ::STRINGS[133/*"Size"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::Actions::GiveFocus::Singleton(), ::STRINGS[134/*"GiveFocus"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::WhileKeyboardVisible::Keyboard(), ::STRINGS[135/*"Keyboard"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionLayoutChange(), ::STRINGS[136/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::SizeLayoutChange(), ::STRINGS[136/*"LayoutChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::WorldPositionChange(), ::STRINGS[137/*"WorldPositi...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::PositionChange(), ::STRINGS[138/*"PositionCha...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ResizeSizeChange(), ::STRINGS[139/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::LayoutTransition::ScalingSizeChange(), ::STRINGS[139/*"SizeChange"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Points(), ::STRINGS[140/*"Points"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::Pixels(), ::STRINGS[141/*"Pixels"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ContentSize(), ::STRINGS[142/*"ContentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Triggers::IScrolledLengths::ScrollViewSize(), ::STRINGS[143/*"ScrollViewS...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::PreloadRetain(), ::STRINGS[144/*"PreloadRetain"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadUnused(), ::STRINGS[145/*"UnloadUnused"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::QuickUnload(), ::STRINGS[146/*"QuickUnload"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Resources::MemoryPolicy::UnloadInBackgroundPolicy(), ::STRINGS[147/*"UnloadInBac...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Thin(), ::STRINGS[148/*"Thin"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Light(), ::STRINGS[149/*"Light"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Regular(), ::STRINGS[150/*"Regular"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Medium(), ::STRINGS[151/*"Medium"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Bold(), ::STRINGS[152/*"Bold"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::ThinItalic(), ::STRINGS[153/*"ThinItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::LightItalic(), ::STRINGS[154/*"LightItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::Italic(), ::STRINGS[155/*"Italic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::MediumItalic(), ::STRINGS[156/*"MediumItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::BoldItalic(), ::STRINGS[157/*"BoldItalic"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::Font::PlatformDefault(), ::STRINGS[158/*"PlatformDef...*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::ScalingModes::Identity(), ::STRINGS[159/*"Identity"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Local(), ::STRINGS[160/*"Local"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::ParentSize(), ::STRINGS[161/*"ParentSize"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Width(), ::STRINGS[72/*"Width"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(::g::Fuse::TranslationModes::Height(), ::STRINGS[162/*"Height"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color0()), ::STRINGS[163/*"color0"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color1()), ::STRINGS[164/*"color1"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color2()), ::STRINGS[165/*"color2"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color3()), ::STRINGS[166/*"color3"*/]);
    ::g::Uno::UX::Resource::SetGlobalKey(uBox(::g::Uno::Float4_typeof(), ::g::ColorPalette::color4()), ::STRINGS[167/*"color4"*/]);
}

static void MainView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("transitionScaleGuide");
    ::STRINGS[1] = uString::Const("ToggleLoggedIn");
    ::STRINGS[2] = uString::Const("plusButton");
    ::STRINGS[3] = uString::Const("cross");
    ::STRINGS[4] = uString::Const("showPlusButton");
    ::STRINGS[5] = uString::Const("plusButtonScaling");
    ::STRINGS[6] = uString::Const("scalePlusButton");
    ::STRINGS[7] = uString::Const("plusButtonTranslation");
    ::STRINGS[8] = uString::Const("plusButtonTransitionCircle");
    ::STRINGS[9] = uString::Const("plusButtonCircleScaling");
    ::STRINGS[10] = uString::Const("plusButtonBackgroundCircle");
    ::STRINGS[11] = uString::Const("loggedInView");
    ::STRINGS[12] = uString::Const("indicator");
    ::STRINGS[13] = uString::Const("p1");
    ::STRINGS[14] = uString::Const("p4");
    ::STRINGS[15] = uString::Const("col1");
    ::STRINGS[16] = uString::Const("col2");
    ::STRINGS[17] = uString::Const("col3");
    ::STRINGS[18] = uString::Const("col4");
    ::STRINGS[19] = uString::Const("c1");
    ::STRINGS[20] = uString::Const("h1");
    ::STRINGS[21] = uString::Const("c2");
    ::STRINGS[22] = uString::Const("h2");
    ::STRINGS[23] = uString::Const("c3");
    ::STRINGS[24] = uString::Const("h3");
    ::STRINGS[25] = uString::Const("c4");
    ::STRINGS[26] = uString::Const("h4");
    ::STRINGS[27] = uString::Const("nav");
    ::STRINGS[28] = uString::Const("indicatorColorAttractor");
    ::STRINGS[29] = uString::Const("bgColor");
    ::STRINGS[30] = uString::Const("bgColorAttractor");
    ::STRINGS[31] = uString::Const("shrinkIndicatorWidth");
    ::STRINGS[32] = uString::Const("page1");
    ::STRINGS[33] = uString::Const("page2");
    ::STRINGS[34] = uString::Const("text");
    ::STRINGS[35] = uString::Const("page3");
    ::STRINGS[36] = uString::Const("page4");
    ::STRINGS[37] = uString::Const("util");
    ::STRINGS[38] = uString::Const("montran");
    ::STRINGS[39] = uString::Const("moneytransform");
    ::STRINGS[40] = uString::Const("dropOne");
    ::STRINGS[41] = uString::Const("airtime");
    ::STRINGS[42] = uString::Const("airtimeform");
    ::STRINGS[43] = uString::Const("internet");
    ::STRINGS[44] = uString::Const("internetform");
    ::STRINGS[45] = uString::Const("utility");
    ::STRINGS[46] = uString::Const("utilityform");
    ::STRINGS[47] = uString::Const("sharebill");
    ::STRINGS[48] = uString::Const("sharebillform");
    ::STRINGS[49] = uString::Const("payinServices");
    ::STRINGS[50] = uString::Const("payinservicesform");
    ::STRINGS[51] = uString::Const("loading");
    ::STRINGS[52] = uString::Const("changeWidth");
    ::STRINGS[53] = uString::Const("loadCircle");
    ::STRINGS[54] = uString::Const("scaleAndFade");
    ::STRINGS[55] = uString::Const("showLoggedIn");
    ::STRINGS[56] = uString::Const("loggedOutView");
    ::STRINGS[57] = uString::Const("text1");
    ::STRINGS[58] = uString::Const("loadingCirclePanel");
    ::STRINGS[59] = uString::Const("loadingCircle");
    ::STRINGS[60] = uString::Const("rectNormalScale");
    ::STRINGS[61] = uString::Const("loadingButton");
    ::STRINGS[62] = uString::Const("mark");
    ::STRINGS[63] = uString::Const("loginArea");
    ::STRINGS[64] = uString::Const("Factor");
    ::STRINGS[65] = uString::Const("Value");
    ::STRINGS[66] = uString::Const("Opacity");
    ::STRINGS[67] = uString::Const("Y");
    ::STRINGS[68] = uString::Const("X");
    ::STRINGS[69] = uString::Const("Visibility");
    ::STRINGS[70] = uString::Const("Active");
    ::STRINGS[71] = uString::Const("Color");
    ::STRINGS[72] = uString::Const("Width");
    ::STRINGS[73] = uString::Const("Items");
    ::STRINGS[74] = uString::Const("ListItems");
    ::STRINGS[75] = uString::Const("LengthAngleDegrees");
    ::STRINGS[76] = uString::Const("IsEnabled");
    ::STRINGS[77] = uString::Const("Linear");
    ::STRINGS[78] = uString::Const("QuadraticIn");
    ::STRINGS[79] = uString::Const("QuadraticOut");
    ::STRINGS[80] = uString::Const("QuadraticInOut");
    ::STRINGS[81] = uString::Const("CubicIn");
    ::STRINGS[82] = uString::Const("CubicOut");
    ::STRINGS[83] = uString::Const("CubicInOut");
    ::STRINGS[84] = uString::Const("QuarticIn");
    ::STRINGS[85] = uString::Const("QuarticOut");
    ::STRINGS[86] = uString::Const("QuarticInOut");
    ::STRINGS[87] = uString::Const("QuinticIn");
    ::STRINGS[88] = uString::Const("QuinticOut");
    ::STRINGS[89] = uString::Const("QuinticInOut");
    ::STRINGS[90] = uString::Const("SinusoidalIn");
    ::STRINGS[91] = uString::Const("SinusoidalOut");
    ::STRINGS[92] = uString::Const("SinusoidalInOut");
    ::STRINGS[93] = uString::Const("ExponentialIn");
    ::STRINGS[94] = uString::Const("ExponentialOut");
    ::STRINGS[95] = uString::Const("ExponentialInOut");
    ::STRINGS[96] = uString::Const("CircularIn");
    ::STRINGS[97] = uString::Const("CircularOut");
    ::STRINGS[98] = uString::Const("CircularInOut");
    ::STRINGS[99] = uString::Const("ElasticIn");
    ::STRINGS[100] = uString::Const("ElasticOut");
    ::STRINGS[101] = uString::Const("ElasticInOut");
    ::STRINGS[102] = uString::Const("BackIn");
    ::STRINGS[103] = uString::Const("BackOut");
    ::STRINGS[104] = uString::Const("BackInOut");
    ::STRINGS[105] = uString::Const("BounceIn");
    ::STRINGS[106] = uString::Const("BounceOut");
    ::STRINGS[107] = uString::Const("BounceInOut");
    ::STRINGS[108] = uString::Const("Transparent");
    ::STRINGS[109] = uString::Const("Black");
    ::STRINGS[110] = uString::Const("Silver");
    ::STRINGS[111] = uString::Const("Gray");
    ::STRINGS[112] = uString::Const("White");
    ::STRINGS[113] = uString::Const("Maroon");
    ::STRINGS[114] = uString::Const("Red");
    ::STRINGS[115] = uString::Const("Purple");
    ::STRINGS[116] = uString::Const("Fuchsia");
    ::STRINGS[117] = uString::Const("Green");
    ::STRINGS[118] = uString::Const("Lime");
    ::STRINGS[119] = uString::Const("Olive");
    ::STRINGS[120] = uString::Const("Yellow");
    ::STRINGS[121] = uString::Const("Navy");
    ::STRINGS[122] = uString::Const("Blue");
    ::STRINGS[123] = uString::Const("Teal");
    ::STRINGS[124] = uString::Const("Aqua");
    ::STRINGS[125] = uString::Const("TopLeft");
    ::STRINGS[126] = uString::Const("Center");
    ::STRINGS[127] = uString::Const("Anchor");
    ::STRINGS[128] = uString::Const("HorizontalBoxCenter");
    ::STRINGS[129] = uString::Const("VerticalBoxCenter");
    ::STRINGS[130] = uString::Const("TransformOriginOffset");
    ::STRINGS[131] = uString::Const("PositionOffset");
    ::STRINGS[132] = uString::Const("SizeFactor");
    ::STRINGS[133] = uString::Const("Size");
    ::STRINGS[134] = uString::Const("GiveFocus");
    ::STRINGS[135] = uString::Const("Keyboard");
    ::STRINGS[136] = uString::Const("LayoutChange");
    ::STRINGS[137] = uString::Const("WorldPositionChange");
    ::STRINGS[138] = uString::Const("PositionChange");
    ::STRINGS[139] = uString::Const("SizeChange");
    ::STRINGS[140] = uString::Const("Points");
    ::STRINGS[141] = uString::Const("Pixels");
    ::STRINGS[142] = uString::Const("ContentSize");
    ::STRINGS[143] = uString::Const("ScrollViewSize");
    ::STRINGS[144] = uString::Const("PreloadRetain");
    ::STRINGS[145] = uString::Const("UnloadUnused");
    ::STRINGS[146] = uString::Const("QuickUnload");
    ::STRINGS[147] = uString::Const("UnloadInBackground");
    ::STRINGS[148] = uString::Const("Thin");
    ::STRINGS[149] = uString::Const("Light");
    ::STRINGS[150] = uString::Const("Regular");
    ::STRINGS[151] = uString::Const("Medium");
    ::STRINGS[152] = uString::Const("Bold");
    ::STRINGS[153] = uString::Const("ThinItalic");
    ::STRINGS[154] = uString::Const("LightItalic");
    ::STRINGS[155] = uString::Const("Italic");
    ::STRINGS[156] = uString::Const("MediumItalic");
    ::STRINGS[157] = uString::Const("BoldItalic");
    ::STRINGS[158] = uString::Const("PlatformDefault");
    ::STRINGS[159] = uString::Const("Identity");
    ::STRINGS[160] = uString::Const("Local");
    ::STRINGS[161] = uString::Const("ParentSize");
    ::STRINGS[162] = uString::Const("Height");
    ::STRINGS[163] = uString::Const("color0");
    ::STRINGS[164] = uString::Const("color1");
    ::STRINGS[165] = uString::Const("color2");
    ::STRINGS[166] = uString::Const("color3");
    ::STRINGS[167] = uString::Const("color4");
    ::STRINGS[168] = uString::Const("data");
    ::STRINGS[169] = uString::Const("responseData");
    ::STRINGS[170] = uString::Const("items");
    ::STRINGS[171] = uString::Const("user");
    ::STRINGS[172] = uString::Const("userdata");
    ::STRINGS[173] = uString::Const("historydata");
    ::STRINGS[174] = uString::Const("item1s");
    ::STRINGS[175] = uString::Const("\n"
        "\tvar Observable = require(\"FuseJS/Observable\");\n"
        "\n"
        "\tvar data = Observable();\n"
        "\tvar items = Observable();\n"
        "\tvar user = Observable();\n"
        "\tvar item1s = Observable({name: \"Autos\"}, {name: \"Juniors\"});\n"
        "\tvar itemsTwo = Observable({name: \"Small Wheels\"}, {name: \"Big Wheels\"});\n"
        "\n"
        "\n"
        "\tfetch('http://techloftgh.com/payInRegistration/payin_news.json')\n"
        "\t.then(function(response) { return response.json(); })\n"
        "\t.then(function(responseObject) { data.value = responseObject; });\n"
        "\n"
        "\tfetch('http://techloftgh.com/payInRegistration/payin_social.json')\n"
        "\t.then(function(response) { return response.json(); })\n"
        "\t.then(function(responseObject) { items.value = responseObject; });\n"
        "\n"
        "\tfetch('http://techloftgh.com/payInRegistration/payin_user.json')\n"
        "\t.then(function(response) { return response.json(); })\n"
        "\t.then(function(responseObject) { user.value = responseObject; });\n"
        "\n"
        "\n"
        "\tmodule.exports = {\n"
        "\t\tdata: data,\n"
        "\t\titems: items,\n"
        "\t\tuser: user,\n"
        "\t\titem1s: items,\n"
        "\t\titemsTwo: itemsTwo\n"
        "\t};\n"
        "\t");
    ::STRINGS[176] = uString::Const("MainView.ux");
    ::STRINGS[177] = uString::Const("auto,1*,auto");
    ::STRINGS[178] = uString::Const("auto,1*");
    ::STRINGS[179] = uString::Const("Pay");
    ::STRINGS[180] = uString::Const("Social");
    ::STRINGS[181] = uString::Const("Notice");
    ::STRINGS[182] = uString::Const("User");
    ::STRINGS[183] = uString::Const("-- Hello Kuuku Aboagye --");
    ::STRINGS[184] = uString::Const("Transfer money from your mobile money, credit card and bank account from here");
    ::STRINGS[185] = uString::Const("-- your most frequent purchased utility here --");
    ::STRINGS[186] = uString::Const("-- your most frequent purchased utility here too--");
    ::STRINGS[187] = uString::Const("Send");
    ::STRINGS[188] = uString::Const("");
    ::STRINGS[189] = uString::Const("Text field");
    ::STRINGS[190] = uString::Const("This is Util Page");
    ::STRINGS[191] = uString::Const("Account Number");
    ::STRINGS[192] = uString::Const("Destination Account");
    ::STRINGS[193] = uString::Const("Amount");
    ::STRINGS[194] = uString::Const("pay");
    ::STRINGS[195] = uString::Const("This is pay in ENROLL  Page 1.2.2.2.2");
    ::STRINGS[196] = uString::Const("This is Internet Page");
    ::STRINGS[197] = uString::Const("This is pay in services Page");
    ::STRINGS[198] = uString::Const("1.5*,auto,1*");
    ::STRINGS[199] = uString::Const("Register");
    ::STRINGS[200] = uString::Const("full name");
    ::STRINGS[201] = uString::Const("mobile number");
    ::STRINGS[202] = uString::Const("email");
    ::STRINGS[203] = uString::Const("Password");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Animations::Attractor_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[2] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[3] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[4] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL);
    ::TYPES[5] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL);
    ::TYPES[6] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[9] = ::g::Fuse::Animations::Change_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL);
    ::TYPES[10] = ::g::Fuse::Triggers::Actions::Set_typeof()->MakeType(::g::Uno::String_typeof(), NULL);
    ::TYPES[11] = ::g::Fuse::Animations::Cycle_typeof()->MakeType(::g::Uno::Float_typeof(), NULL);
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[13] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[14] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Uno::UX::Template_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[19] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[20] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetInterfaces(
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::AppBase_type, interface0));
    type->SetFields(9,
        ::g::Uno::UX::NameTable_typeof(), offsetof(::g::MainView, __g_nametable1), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, airtime), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, airtime_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, airtime_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, airtimeform), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, bgColor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, bgColor_Color_inst), 0,
        ::TYPES[1/*Fuse.Animations.Attractor<float4>*/], offsetof(::g::MainView, bgColorAttractor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, bgColorAttractor_Value_inst), 0,
        ::g::TabIcon_typeof(), offsetof(::g::MainView, c1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, c1_Color_inst), 0,
        ::g::TabIcon_typeof(), offsetof(::g::MainView, c2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, c2_Color_inst), 0,
        ::g::TabIcon_typeof(), offsetof(::g::MainView, c3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, c3_Color_inst), 0,
        ::g::TabIcon_typeof(), offsetof(::g::MainView, c4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, c4_Color_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, changeWidth), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, changeWidth_Value_inst), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::MainView, col1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, col1_Width_inst), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::MainView, col2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, col2_Width_inst), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::MainView, col3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, col3_Width_inst), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(::g::MainView, col4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, col4_Width_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, cross), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, cross_Opacity_inst), 0,
        ::g::DropdownMenu_typeof(), offsetof(::g::MainView, dropOne), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, dropOne_ListItems_inst), 0,
        ::g::TabHeader_typeof(), offsetof(::g::MainView, h1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, h1_Opacity_inst), 0,
        ::g::TabHeader_typeof(), offsetof(::g::MainView, h2), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, h2_Opacity_inst), 0,
        ::g::TabHeader_typeof(), offsetof(::g::MainView, h3), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, h3_Opacity_inst), 0,
        ::g::TabHeader_typeof(), offsetof(::g::MainView, h4), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, h4_Opacity_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, indicator), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, indicator_Color_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::MainView, indicator_Width_inst), 0,
        ::TYPES[1/*Fuse.Animations.Attractor<float4>*/], offsetof(::g::MainView, indicatorColorAttractor), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), NULL), offsetof(::g::MainView, indicatorColorAttractor_Value_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, internet), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, internet_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, internet_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, internetform), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, loadCircle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, loadCircle_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, loading), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, loadingButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, loadingButton_Opacity_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, loadingCircle), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, loadingCircle_LengthAngleDegrees_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, loadingCircle_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, loadingCirclePanel), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, loadingCirclePanel_Opacity_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, loggedInView), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, loggedInView_IsEnabled_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, loggedInView_Opacity_inst), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, loggedOutView), 0,
        ::g::Fuse::Controls::Grid_typeof(), offsetof(::g::MainView, loginArea), 0,
        ::g::Fuse::Controls::Image_typeof(), offsetof(::g::MainView, mark), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, moneytransform), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, montran), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, montran_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, montran_Visibility_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, nav), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, nav_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, nav_Visibility_inst), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, p1), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, p4), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page1), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page2), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page3), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, page4), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, payinServices), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, payinservicesform), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, plusButton), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, plusButtonBackgroundCircle), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MainView, plusButtonCircleScaling), 0,
        ::g::Fuse::Scaling_typeof(), offsetof(::g::MainView, plusButtonScaling), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, plusButtonScaling_Factor_inst), 0,
        ::g::Fuse::Controls::Circle_typeof(), offsetof(::g::MainView, plusButtonTransitionCircle), 0,
        ::g::Fuse::Translation_typeof(), offsetof(::g::MainView, plusButtonTranslation), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, plusButtonTranslation_X_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, plusButtonTranslation_Y_inst), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(::g::MainView, rectNormalScale), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, rectNormalScale_Opacity_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::UX::Size_typeof(), NULL), offsetof(::g::MainView, rectNormalScale_Width_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, scaleAndFade), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, scaleAndFade_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, scalePlusButton), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, scalePlusButton_Value_inst), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, sharebill), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, sharebill_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, sharebill_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, sharebillform), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showLoggedIn), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, showLoggedIn_Value_inst), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, showPlusButton), 0,
        ::g::Fuse::Triggers::WhileTrue_typeof(), offsetof(::g::MainView, shrinkIndicatorWidth), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), NULL), offsetof(::g::MainView, shrinkIndicatorWidth_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp1_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp2_Items_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(uObject_typeof(), NULL), offsetof(::g::MainView, temp3_Items_inst), 0,
        ::g::Fuse::Controls::TextInput_typeof(), offsetof(::g::MainView, text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(::g::MainView, text_Value_inst), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(::g::MainView, text1), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), NULL), offsetof(::g::MainView, text1_Opacity_inst), 0,
        ::g::Fuse::UserEvent_typeof(), offsetof(::g::MainView, ToggleLoggedIn), 0,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::MainView, transitionScaleGuide), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, util), 0,
        ::g::Fuse::Controls::PageControl_typeof(), offsetof(::g::MainView, utility), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::MainView, utility_Active_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::Visibility_typeof(), NULL), offsetof(::g::MainView, utility_Visibility_inst), 0,
        ::g::Fuse::Controls::Page_typeof(), offsetof(::g::MainView, utilityform), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&::g::MainView::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector10_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector11_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector12_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector13_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector14_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector15_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector16_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector17_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector18_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector19_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector20_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector21_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector22_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector23_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector24_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector25_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector26_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector27_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector28_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector29_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector30_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector31_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector32_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector33_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector34_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector35_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector36_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector37_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector38_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector39_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector40_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector41_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector42_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector43_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector44_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector45_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector46_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector47_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector48_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector49_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector5_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector50_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector51_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector52_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector53_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector54_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector55_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector56_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector57_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector58_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector59_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector6_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector60_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector61_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector62_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector63_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector64_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector65_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector66_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector67_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector68_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector69_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector7_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector70_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector71_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector72_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector8_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::MainView::__selector9_, uFieldFlagsStatic);
}

::g::Fuse::AppBase_type* MainView_typeof()
{
    static uSStrong< ::g::Fuse::AppBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::App_typeof();
    options.FieldCount = 202;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(MainView);
    options.TypeSize = sizeof(::g::Fuse::AppBase_type);
    type = (::g::Fuse::AppBase_type*)uClassType::New("MainView", options);
    type->fp_build_ = MainView_build;
    type->fp_ctor_ = (void*)MainView__New1_fn;
    type->fp_cctor_ = MainView__cctor_1_fn;
    type->interface0.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::AppBase__get_Properties_fn;
    return type;
}

// public MainView() :402
void MainView__ctor_4_fn(MainView* __this)
{
    __this->ctor_4();
}

// private void InitializeUX() :406
void MainView__InitializeUX_fn(MainView* __this)
{
    __this->InitializeUX();
}

// public MainView New() :402
void MainView__New1_fn(MainView** __retval)
{
    *__retval = MainView::New1();
}

uSStrong<uArray*> MainView::__g_static_nametable1_;
::g::Uno::UX::Selector MainView::__selector0_;
::g::Uno::UX::Selector MainView::__selector1_;
::g::Uno::UX::Selector MainView::__selector10_;
::g::Uno::UX::Selector MainView::__selector11_;
::g::Uno::UX::Selector MainView::__selector12_;
::g::Uno::UX::Selector MainView::__selector13_;
::g::Uno::UX::Selector MainView::__selector14_;
::g::Uno::UX::Selector MainView::__selector15_;
::g::Uno::UX::Selector MainView::__selector16_;
::g::Uno::UX::Selector MainView::__selector17_;
::g::Uno::UX::Selector MainView::__selector18_;
::g::Uno::UX::Selector MainView::__selector19_;
::g::Uno::UX::Selector MainView::__selector2_;
::g::Uno::UX::Selector MainView::__selector20_;
::g::Uno::UX::Selector MainView::__selector21_;
::g::Uno::UX::Selector MainView::__selector22_;
::g::Uno::UX::Selector MainView::__selector23_;
::g::Uno::UX::Selector MainView::__selector24_;
::g::Uno::UX::Selector MainView::__selector25_;
::g::Uno::UX::Selector MainView::__selector26_;
::g::Uno::UX::Selector MainView::__selector27_;
::g::Uno::UX::Selector MainView::__selector28_;
::g::Uno::UX::Selector MainView::__selector29_;
::g::Uno::UX::Selector MainView::__selector3_;
::g::Uno::UX::Selector MainView::__selector30_;
::g::Uno::UX::Selector MainView::__selector31_;
::g::Uno::UX::Selector MainView::__selector32_;
::g::Uno::UX::Selector MainView::__selector33_;
::g::Uno::UX::Selector MainView::__selector34_;
::g::Uno::UX::Selector MainView::__selector35_;
::g::Uno::UX::Selector MainView::__selector36_;
::g::Uno::UX::Selector MainView::__selector37_;
::g::Uno::UX::Selector MainView::__selector38_;
::g::Uno::UX::Selector MainView::__selector39_;
::g::Uno::UX::Selector MainView::__selector4_;
::g::Uno::UX::Selector MainView::__selector40_;
::g::Uno::UX::Selector MainView::__selector41_;
::g::Uno::UX::Selector MainView::__selector42_;
::g::Uno::UX::Selector MainView::__selector43_;
::g::Uno::UX::Selector MainView::__selector44_;
::g::Uno::UX::Selector MainView::__selector45_;
::g::Uno::UX::Selector MainView::__selector46_;
::g::Uno::UX::Selector MainView::__selector47_;
::g::Uno::UX::Selector MainView::__selector48_;
::g::Uno::UX::Selector MainView::__selector49_;
::g::Uno::UX::Selector MainView::__selector5_;
::g::Uno::UX::Selector MainView::__selector50_;
::g::Uno::UX::Selector MainView::__selector51_;
::g::Uno::UX::Selector MainView::__selector52_;
::g::Uno::UX::Selector MainView::__selector53_;
::g::Uno::UX::Selector MainView::__selector54_;
::g::Uno::UX::Selector MainView::__selector55_;
::g::Uno::UX::Selector MainView::__selector56_;
::g::Uno::UX::Selector MainView::__selector57_;
::g::Uno::UX::Selector MainView::__selector58_;
::g::Uno::UX::Selector MainView::__selector59_;
::g::Uno::UX::Selector MainView::__selector6_;
::g::Uno::UX::Selector MainView::__selector60_;
::g::Uno::UX::Selector MainView::__selector61_;
::g::Uno::UX::Selector MainView::__selector62_;
::g::Uno::UX::Selector MainView::__selector63_;
::g::Uno::UX::Selector MainView::__selector64_;
::g::Uno::UX::Selector MainView::__selector65_;
::g::Uno::UX::Selector MainView::__selector66_;
::g::Uno::UX::Selector MainView::__selector67_;
::g::Uno::UX::Selector MainView::__selector68_;
::g::Uno::UX::Selector MainView::__selector69_;
::g::Uno::UX::Selector MainView::__selector7_;
::g::Uno::UX::Selector MainView::__selector70_;
::g::Uno::UX::Selector MainView::__selector71_;
::g::Uno::UX::Selector MainView::__selector72_;
::g::Uno::UX::Selector MainView::__selector8_;
::g::Uno::UX::Selector MainView::__selector9_;

// public MainView() [instance] :402
void MainView::ctor_4()
{
    ctor_3();
    InitializeUX();
}

// private void InitializeUX() [instance] :406
void MainView::InitializeUX()
{
    ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule* temp4 = ::g::Fuse::Reactive::FuseJS::DiagnosticsImplModule::New2();
    ::g::Fuse::Reactive::FuseJS::Http* temp5 = ::g::Fuse::Reactive::FuseJS::Http::New2();
    ::g::Fuse::Reactive::FuseJS::TimerModule* temp6 = ::g::Fuse::Reactive::FuseJS::TimerModule::New2();
    ::g::Fuse::Drawing::BrushConverter* temp7 = ::g::Fuse::Drawing::BrushConverter::New1();
    ::g::Fuse::Triggers::BusyTaskModule* temp8 = ::g::Fuse::Triggers::BusyTaskModule::New2();
    ::g::Fuse::Testing::UnoTestingHelper* temp9 = ::g::Fuse::Testing::UnoTestingHelper::New2();
    ::g::Fuse::FileSystem::FileSystemModule* temp10 = ::g::Fuse::FileSystem::FileSystemModule::New2();
    ::g::Fuse::Storage::StorageModule* temp11 = ::g::Fuse::Storage::StorageModule::New2();
    ::g::Fuse::WebSocket::WebSocketClientModule* temp12 = ::g::Fuse::WebSocket::WebSocketClientModule::New2();
    ::g::Polyfills::Window::WindowModule* temp13 = ::g::Polyfills::Window::WindowModule::New3();
    ::g::FuseJS::Globals* temp14 = ::g::FuseJS::Globals::New2();
    ::g::FuseJS::Lifecycle* temp15 = ::g::FuseJS::Lifecycle::New3();
    ::g::FuseJS::Environment* temp16 = ::g::FuseJS::Environment::New2();
    ::g::FuseJS::Base64* temp17 = ::g::FuseJS::Base64::New2();
    ::g::FuseJS::Bundle* temp18 = ::g::FuseJS::Bundle::New2();
    ::g::FuseJS::FileReaderImpl* temp19 = ::g::FuseJS::FileReaderImpl::New2();
    ::g::FuseJS::UserEvents* temp20 = ::g::FuseJS::UserEvents::New2();
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, MainView::__g_static_nametable1());
    plusButtonScaling = ::g::Fuse::Scaling::New2();
    plusButtonScaling_Factor_inst = ::g::dynamictabbar_FuseScaling_Factor_Property::New1(plusButtonScaling, MainView::__selector0());
    scalePlusButton = ::g::Fuse::Triggers::WhileTrue::New2();
    scalePlusButton_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(scalePlusButton, MainView::__selector1());
    cross = ::g::Fuse::Controls::Panel::New3();
    cross_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(cross, MainView::__selector2());
    plusButtonTranslation = ::g::Fuse::Translation::New2();
    plusButtonTranslation_Y_inst = ::g::dynamictabbar_FuseTranslation_Y_Property::New1(plusButtonTranslation, MainView::__selector3());
    plusButtonTranslation_X_inst = ::g::dynamictabbar_FuseTranslation_X_Property::New1(plusButtonTranslation, MainView::__selector4());
    nav = ::g::Fuse::Controls::PageControl::New4();
    nav_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(nav, MainView::__selector5());
    montran = ::g::Fuse::Controls::PageControl::New4();
    montran_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(montran, MainView::__selector5());
    airtime = ::g::Fuse::Controls::PageControl::New4();
    airtime_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(airtime, MainView::__selector5());
    internet = ::g::Fuse::Controls::PageControl::New4();
    internet_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(internet, MainView::__selector5());
    utility = ::g::Fuse::Controls::PageControl::New4();
    utility_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(utility, MainView::__selector5());
    sharebill = ::g::Fuse::Controls::PageControl::New4();
    sharebill_Visibility_inst = ::g::dynamictabbar_FuseElementsElement_Visibility_Property::New1(sharebill, MainView::__selector5());
    nav_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(nav, MainView::__selector6());
    indicator = ::g::Fuse::Controls::Rectangle::New3();
    indicator_Color_inst = ::g::dynamictabbar_FuseControlsShape_Color_Property::New1(indicator, MainView::__selector7());
    bgColor = ::g::Fuse::Controls::Rectangle::New3();
    bgColor_Color_inst = ::g::dynamictabbar_FuseControlsShape_Color_Property::New1(bgColor, MainView::__selector7());
    indicator_Width_inst = ::g::dynamictabbar_FuseElementsElement_Width_Property::New1(indicator, MainView::__selector8());
    montran_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(montran, MainView::__selector6());
    airtime_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(airtime, MainView::__selector6());
    internet_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(internet, MainView::__selector6());
    utility_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(utility, MainView::__selector6());
    sharebill_Active_inst = ::g::dynamictabbar_FuseControlsNavigationControl_Active_Property::New1(sharebill, MainView::__selector6());
    shrinkIndicatorWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    shrinkIndicatorWidth_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(shrinkIndicatorWidth, MainView::__selector1());
    indicatorColorAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::TYPES[1/*Fuse.Animations.Attractor<float4>*/], indicator_Color_inst));
    indicatorColorAttractor_Value_inst = ::g::dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property::New1(indicatorColorAttractor, MainView::__selector1());
    bgColorAttractor = ((::g::Fuse::Animations::Attractor*)::g::Fuse::Animations::Attractor::New3(::TYPES[1/*Fuse.Animations.Attractor<float4>*/], bgColor_Color_inst));
    bgColorAttractor_Value_inst = ::g::dynamictabbar_FuseAnimationsAttractorfloat4_Value_Property::New1(bgColorAttractor, MainView::__selector1());
    h1 = ::g::TabHeader::New4();
    h1_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(h1, MainView::__selector2());
    col1 = ::g::Fuse::Layouts::Column::New2();
    col1_Width_inst = ::g::dynamictabbar_FuseLayoutsColumn_Width_Property::New1(col1, MainView::__selector8());
    c1 = ::g::TabIcon::New4();
    c1_Color_inst = ::g::dynamictabbar_FuseControlsImage_Color_Property::New1(c1, MainView::__selector7());
    text = ::g::Fuse::Controls::TextInput::New3();
    text_Value_inst = ::g::dynamictabbar_FuseControlsTextInputControl_Value_Property::New1(text, MainView::__selector1());
    ::g::Fuse::Reactive::Data* temp21 = ::g::Fuse::Reactive::Data::New1(::STRINGS[168/*"data"*/]);
    ::g::Fuse::Reactive::Each* temp = ::g::Fuse::Reactive::Each::New4();
    temp_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp, MainView::__selector9());
    ::g::Fuse::Reactive::Member* temp22 = ::g::Fuse::Reactive::Member::New1(temp21, ::STRINGS[169/*"responseData"*/]);
    h2 = ::g::TabHeader::New4();
    h2_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(h2, MainView::__selector2());
    col2 = ::g::Fuse::Layouts::Column::New2();
    col2_Width_inst = ::g::dynamictabbar_FuseLayoutsColumn_Width_Property::New1(col2, MainView::__selector8());
    c2 = ::g::TabIcon::New4();
    c2_Color_inst = ::g::dynamictabbar_FuseControlsImage_Color_Property::New1(c2, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp23 = ::g::Fuse::Reactive::Data::New1(::STRINGS[170/*"items"*/]);
    ::g::Fuse::Reactive::Each* temp1 = ::g::Fuse::Reactive::Each::New4();
    temp1_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp1, MainView::__selector9());
    ::g::Fuse::Reactive::Member* temp24 = ::g::Fuse::Reactive::Member::New1(temp23, ::STRINGS[169/*"responseData"*/]);
    h3 = ::g::TabHeader::New4();
    h3_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(h3, MainView::__selector2());
    col3 = ::g::Fuse::Layouts::Column::New2();
    col3_Width_inst = ::g::dynamictabbar_FuseLayoutsColumn_Width_Property::New1(col3, MainView::__selector8());
    c3 = ::g::TabIcon::New4();
    c3_Color_inst = ::g::dynamictabbar_FuseControlsImage_Color_Property::New1(c3, MainView::__selector7());
    ::g::Fuse::Reactive::Data* temp25 = ::g::Fuse::Reactive::Data::New1(::STRINGS[171/*"user"*/]);
    ::g::Fuse::Reactive::Each* temp2 = ::g::Fuse::Reactive::Each::New4();
    temp2_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp2, MainView::__selector9());
    ::g::Fuse::Reactive::Member* temp26 = ::g::Fuse::Reactive::Member::New1(temp25, ::STRINGS[172/*"userdata"*/]);
    ::g::Fuse::Reactive::Data* temp27 = ::g::Fuse::Reactive::Data::New1(::STRINGS[171/*"user"*/]);
    ::g::Fuse::Reactive::Each* temp3 = ::g::Fuse::Reactive::Each::New4();
    temp3_Items_inst = ::g::dynamictabbar_FuseReactiveEach_Items_Property::New1(temp3, MainView::__selector9());
    ::g::Fuse::Reactive::Member* temp28 = ::g::Fuse::Reactive::Member::New1(temp27, ::STRINGS[173/*"historydata"*/]);
    h4 = ::g::TabHeader::New4();
    h4_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(h4, MainView::__selector2());
    col4 = ::g::Fuse::Layouts::Column::New2();
    col4_Width_inst = ::g::dynamictabbar_FuseLayoutsColumn_Width_Property::New1(col4, MainView::__selector8());
    c4 = ::g::TabIcon::New4();
    c4_Color_inst = ::g::dynamictabbar_FuseControlsImage_Color_Property::New1(c4, MainView::__selector7());
    dropOne = ::g::DropdownMenu::New4();
    dropOne_ListItems_inst = ::g::dynamictabbar_DropdownMenu_ListItems_Property::New1(dropOne, MainView::__selector10());
    ::g::Fuse::Reactive::Data* temp29 = ::g::Fuse::Reactive::Data::New1(::STRINGS[174/*"item1s"*/]);
    changeWidth = ::g::Fuse::Triggers::WhileTrue::New2();
    changeWidth_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(changeWidth, MainView::__selector1());
    loadCircle = ::g::Fuse::Triggers::WhileTrue::New2();
    loadCircle_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(loadCircle, MainView::__selector1());
    scaleAndFade = ::g::Fuse::Triggers::WhileTrue::New2();
    scaleAndFade_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(scaleAndFade, MainView::__selector1());
    showLoggedIn = ::g::Fuse::Triggers::WhileTrue::New2();
    showLoggedIn_Value_inst = ::g::dynamictabbar_FuseTriggersWhileBool_Value_Property::New1(showLoggedIn, MainView::__selector1());
    rectNormalScale = ::g::Fuse::Controls::Rectangle::New3();
    rectNormalScale_Width_inst = ::g::dynamictabbar_FuseElementsElement_Width_Property::New1(rectNormalScale, MainView::__selector8());
    text1 = ::g::Fuse::Controls::Text::New3();
    text1_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(text1, MainView::__selector2());
    loadingCircle = ::g::Fuse::Controls::Circle::New3();
    loadingCircle_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(loadingCircle, MainView::__selector2());
    loadingCircle_LengthAngleDegrees_inst = ::g::dynamictabbar_FuseControlsEllipticalShape_LengthAngleDegrees_Property::New1(loadingCircle, MainView::__selector11());
    loadingCirclePanel = ::g::Fuse::Controls::Panel::New3();
    loadingCirclePanel_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(loadingCirclePanel, MainView::__selector2());
    loadingButton = ::g::Fuse::Controls::Circle::New3();
    loadingButton_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(loadingButton, MainView::__selector2());
    rectNormalScale_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(rectNormalScale, MainView::__selector2());
    loggedInView = ::g::Fuse::Controls::Panel::New3();
    loggedInView_Opacity_inst = ::g::dynamictabbar_FuseElementsElement_Opacity_Property::New1(loggedInView, MainView::__selector2());
    loggedInView_IsEnabled_inst = ::g::dynamictabbar_FuseVisual_IsEnabled_Property::New1(loggedInView, MainView::__selector12());
    ::g::Fuse::Reactive::JavaScript* temp30 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp31 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::iOS::StatusBarConfig* temp32 = ::g::Fuse::iOS::StatusBarConfig::New2();
    transitionScaleGuide = ::g::Fuse::Controls::Panel::New3();
    ToggleLoggedIn = ::g::Fuse::UserEvent::New2();
    ::g::Fuse::Controls::DockPanel* temp33 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Panel* temp34 = ::g::Fuse::Controls::Panel::New3();
    plusButton = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Rectangle* temp35 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Rectangle* temp36 = ::g::Fuse::Controls::Rectangle::New3();
    showPlusButton = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp37 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], plusButtonScaling_Factor_inst);
    ::g::Fuse::Gestures::Clicked* temp38 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp39 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Triggers::Actions::RaiseUserEvent* temp40 = ::g::Fuse::Triggers::Actions::RaiseUserEvent::New2();
    ::g::Fuse::Animations::Change* temp41 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], scalePlusButton_Value_inst);
    ::g::Fuse::Animations::Nothing* temp42 = ::g::Fuse::Animations::Nothing::New2();
    ::g::Fuse::Animations::Change* temp43 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], cross_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp44 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp45 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], plusButtonTranslation_Y_inst);
    ::g::Fuse::Animations::Change* temp46 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], plusButtonTranslation_X_inst);
    plusButtonTransitionCircle = ::g::Fuse::Controls::Circle::New3();
    plusButtonCircleScaling = ::g::Fuse::Scaling::New2();
    plusButtonBackgroundCircle = ::g::Fuse::Controls::Circle::New3();
    ::g::Fuse::Controls::ClientPanel* temp47 = ::g::Fuse::Controls::ClientPanel::New5();
    ::g::Fuse::Controls::Grid* temp48 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Grid* temp49 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Reactive::Each* temp50 = ::g::Fuse::Reactive::Each::New4();
    MainView__Template* temp51 = MainView__Template::New2(this, this);
    ::g::Fuse::Controls::Image* temp52 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Panel* temp53 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp54 = ::g::Fuse::Controls::Grid::New4();
    p1 = ::g::Fuse::Controls::Panel::New3();
    p4 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp55 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::Panel* temp56 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp57 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp58 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp59 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp60 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], montran_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp61 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], airtime_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp62 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], internet_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp63 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], utility_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp64 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], sharebill_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp65 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp66 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp67 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp68 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp69 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp70 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], montran_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp71 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], airtime_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp72 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], internet_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp73 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], utility_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp74 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], sharebill_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp75 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp76 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp77 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp78 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp79 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp80 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], montran_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp81 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], airtime_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp82 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], internet_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp83 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], utility_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp84 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], sharebill_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp85 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], nav_Active_inst);
    ::g::Fuse::Controls::Panel* temp86 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Grid* temp87 = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Gestures::Clicked* temp88 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp89 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp90 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], montran_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp91 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], airtime_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp92 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], internet_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp93 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], utility_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp94 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], sharebill_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp95 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], nav_Active_inst);
    ::g::Fuse::Motion::NavigationMotion* temp96 = ::g::Fuse::Motion::NavigationMotion::New2();
    ::g::Fuse::Animations::Change* temp97 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[6/*Fuse.Animations.Change<Uno.UX.Size>*/], indicator_Width_inst);
    page1 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp98 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::DockPanel* temp99 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Image* temp100 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Controls::Rectangle* temp101 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp102 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::DockPanel* temp103 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp104 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp105 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp106 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp107 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp108 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp109 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp110 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], montran_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp111 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], montran_Active_inst);
    ::g::Fuse::Controls::DockPanel* temp112 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp113 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp114 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp115 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp116 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp117 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp118 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp119 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], airtime_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp120 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], airtime_Active_inst);
    ::g::Fuse::Controls::DockPanel* temp121 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp122 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp123 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp124 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp125 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp126 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp127 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp128 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], internet_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp129 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], internet_Active_inst);
    ::g::Fuse::Controls::DockPanel* temp130 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp131 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp132 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp133 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp134 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp135 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp136 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp137 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], utility_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp138 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], utility_Active_inst);
    ::g::Fuse::Controls::DockPanel* temp139 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp140 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Text* temp141 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Controls::Rectangle* temp142 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Image* temp143 = ::g::Fuse::Controls::Image::New3();
    ::g::Fuse::Gestures::Clicked* temp144 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp145 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], nav_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp146 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[4/*Fuse.Triggers.Actions.Set<Fuse.Elements.Visibility>*/], sharebill_Visibility_inst);
    ::g::Fuse::Triggers::Actions::Set* temp147 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[5/*Fuse.Triggers.Actions.Set<Fuse.Visual>*/], sharebill_Active_inst);
    ::g::Fuse::Controls::DockPanel* temp148 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::Rectangle* temp149 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Navigation::WhileActive* temp150 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp151 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp152 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp153 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp154 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp155 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp156 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp157 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    page2 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp158 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp159 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Controls::Button* temp160 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Gestures::Clicked* temp161 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Set* temp162 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[10/*Fuse.Triggers.Actions.Set<string>*/], text_Value_inst);
    ::g::Fuse::Controls::Rectangle* temp163 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::Stroke* temp164 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp165 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7333333f, 0.7333333f, 0.7333333f, 1.0f));
    ::g::Fuse::Controls::ScrollView* temp166 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp167 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp168 = ::g::Fuse::Controls::Panel::New3();
    MainView__Template1* temp169 = MainView__Template1::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp170 = ::g::Fuse::Reactive::DataBinding::New1(temp_Items_inst, (uObject*)temp22, __g_nametable1, 3);
    ::g::Fuse::Navigation::WhileActive* temp171 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp172 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp173 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp174 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp175 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp176 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h2_Opacity_inst);
    ::g::Fuse::Animations::Change* temp177 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col2_Width_inst);
    ::g::Fuse::Animations::Change* temp178 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c2_Color_inst);
    page3 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::ScrollView* temp179 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp180 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp181 = ::g::Fuse::Controls::Panel::New3();
    MainView__Template2* temp182 = MainView__Template2::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp183 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Items_inst, (uObject*)temp24, __g_nametable1, 3);
    ::g::Fuse::Navigation::WhileActive* temp184 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp185 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp186 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp187 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp188 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp189 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h3_Opacity_inst);
    ::g::Fuse::Animations::Change* temp190 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col3_Width_inst);
    ::g::Fuse::Animations::Change* temp191 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c3_Color_inst);
    page4 = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp192 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp193 = ::g::Fuse::Controls::Panel::New3();
    MainView__Template3* temp194 = MainView__Template3::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp195 = ::g::Fuse::Reactive::DataBinding::New1(temp2_Items_inst, (uObject*)temp26, __g_nametable1, 3);
    ::g::Fuse::Controls::ScrollView* temp196 = ::g::Fuse::Controls::ScrollView::New4();
    ::g::Fuse::Controls::StackPanel* temp197 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Controls::Panel* temp198 = ::g::Fuse::Controls::Panel::New3();
    MainView__Template4* temp199 = MainView__Template4::New2(this, this);
    ::g::Fuse::Reactive::DataBinding* temp200 = ::g::Fuse::Reactive::DataBinding::New1(temp3_Items_inst, (uObject*)temp28, __g_nametable1, 3);
    ::g::Fuse::Navigation::WhileActive* temp201 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp202 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp203 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp204 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp205 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp206 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp207 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp208 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h4_Opacity_inst);
    ::g::Fuse::Animations::Change* temp209 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col4_Width_inst);
    ::g::Fuse::Animations::Change* temp210 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c4_Color_inst);
    util = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp211 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp212 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp213 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp214 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp215 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp216 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp217 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp218 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp219 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp220 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp221 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    moneytransform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::StackPanel* temp222 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::MyTextInput* temp223 = ::g::MyTextInput::New4();
    ::g::MyTextInput* temp224 = ::g::MyTextInput::New4();
    ::g::MyTextInput* temp225 = ::g::MyTextInput::New4();
    ::g::Fuse::Reactive::DataBinding* temp226 = ::g::Fuse::Reactive::DataBinding::New1(dropOne_ListItems_inst, (uObject*)temp29, __g_nametable1, 3);
    ::g::Fuse::Drawing::StaticSolidColor* temp227 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.9921569f, 0.9921569f, 0.9921569f, 1.0f));
    ::g::Fuse::Drawing::StaticSolidColor* temp228 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.7490196f, 0.7490196f, 0.7490196f, 1.0f));
    ::g::Fuse::Controls::Button* temp229 = ::g::Fuse::Controls::Button::New5();
    ::g::Fuse::Navigation::WhileActive* temp230 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp231 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp232 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp233 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp234 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp235 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp236 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp237 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp238 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp239 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    airtimeform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp240 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp241 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp242 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp243 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp244 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp245 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp246 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp247 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp248 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp249 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp250 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    internetform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp251 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp252 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp253 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp254 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp255 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp256 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp257 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp258 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp259 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp260 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp261 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    utilityform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp262 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp263 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp264 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp265 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp266 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp267 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp268 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp269 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp270 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp271 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp272 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    sharebillform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp273 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp274 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp275 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp276 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp277 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp278 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp279 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp280 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp281 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp282 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp283 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    payinServices = ::g::Fuse::Controls::PageControl::New4();
    payinservicesform = ::g::Fuse::Controls::Page::New4();
    ::g::Fuse::Controls::Text* temp284 = ::g::Fuse::Controls::Text::New3();
    ::g::Fuse::Navigation::WhileActive* temp285 = ::g::Fuse::Navigation::WhileActive::New2();
    ::g::Fuse::Triggers::Actions::Set* temp286 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[7/*Fuse.Triggers.Actions.Set<bool>*/], shrinkIndicatorWidth_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp287 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], indicatorColorAttractor_Value_inst);
    ::g::Fuse::Triggers::Actions::Set* temp288 = (::g::Fuse::Triggers::Actions::Set*)::g::Fuse::Triggers::Actions::Set::New2(::TYPES[8/*Fuse.Triggers.Actions.Set<float4>*/], bgColorAttractor_Value_inst);
    ::g::Fuse::Navigation::ActivatingAnimation* temp289 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Move* temp290 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Navigation::ActivatingAnimation* temp291 = ::g::Fuse::Navigation::ActivatingAnimation::New2();
    ::g::Fuse::Animations::Change* temp292 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], h1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp293 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], col1_Width_inst);
    ::g::Fuse::Animations::Change* temp294 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[9/*Fuse.Animations.Change<float4>*/], c1_Color_inst);
    ::g::Fuse::Controls::BottomBarBackground* temp295 = ::g::Fuse::Controls::BottomBarBackground::New3();
    loading = ::g::Fuse::Triggers::WhileTrue::New2();
    ::g::Fuse::Animations::Change* temp296 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], changeWidth_Value_inst);
    ::g::Fuse::Animations::Change* temp297 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], loadCircle_Value_inst);
    ::g::Fuse::Animations::Change* temp298 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], scaleAndFade_Value_inst);
    ::g::Fuse::Animations::Change* temp299 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], showLoggedIn_Value_inst);
    ::g::Fuse::Animations::Change* temp300 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[6/*Fuse.Animations.Change<Uno.UX.Size>*/], rectNormalScale_Width_inst);
    ::g::Fuse::Animations::Change* temp301 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], text1_Opacity_inst);
    ::g::Fuse::Animations::Change* temp302 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], loadingCircle_Opacity_inst);
    ::g::Fuse::Animations::Spin* temp303 = ::g::Fuse::Animations::Spin::New2();
    ::g::Fuse::Animations::Cycle* temp304 = (::g::Fuse::Animations::Cycle*)::g::Fuse::Animations::Cycle::New2(::TYPES[11/*Fuse.Animations.Cycle<float>*/], loadingCircle_LengthAngleDegrees_inst);
    ::g::Fuse::Animations::Change* temp305 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], loadingCirclePanel_Opacity_inst);
    ::g::Fuse::Animations::Change* temp306 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], loadingButton_Opacity_inst);
    ::g::Fuse::Animations::Change* temp307 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], rectNormalScale_Opacity_inst);
    ::g::Fuse::Animations::Scale* temp308 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Animations::Change* temp309 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[2/*Fuse.Animations.Change<float>*/], loggedInView_Opacity_inst);
    ::g::Fuse::Animations::Change* temp310 = (::g::Fuse::Animations::Change*)::g::Fuse::Animations::Change::New2(::TYPES[3/*Fuse.Animations.Change<bool>*/], loggedInView_IsEnabled_inst);
    loggedOutView = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Triggers::WhileKeyboardVisible* temp311 = ::g::Fuse::Triggers::WhileKeyboardVisible::New2();
    ::g::Fuse::Animations::Move* temp312 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Animations::Move* temp313 = ::g::Fuse::Animations::Move::New2();
    ::g::Fuse::Controls::Rectangle* temp314 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Drawing::ImageFill* temp315 = ::g::Fuse::Drawing::ImageFill::New2();
    ::g::Fuse::Controls::Panel* temp316 = ::g::Fuse::Controls::Panel::New3();
    ::g::Fuse::Drawing::Stroke* temp317 = ::g::Fuse::Drawing::Stroke::New2();
    ::g::Fuse::Drawing::StaticSolidColor* temp318 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Gestures::Clicked* temp319 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Toggle* temp320 = ::g::Fuse::Triggers::Actions::Toggle::New2();
    ::g::Fuse::Scaling* temp321 = ::g::Fuse::Scaling::New2();
    mark = ::g::Fuse::Controls::Image::New3();
    loginArea = ::g::Fuse::Controls::Grid::New4();
    ::g::Fuse::Controls::TextInput* temp322 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp323 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::TextInput* temp324 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp325 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::TextInput* temp326 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp327 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::TextInput* temp328 = ::g::Fuse::Controls::TextInput::New3();
    ::g::Fuse::Controls::Rectangle* temp329 = ::g::Fuse::Controls::Rectangle::New3();
    temp30->Code(::STRINGS[175/*"\n\tvar Obs...*/]);
    temp30->LineNumber(2);
    temp30->FileName(::STRINGS[176/*"MainView.ux"*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp32);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), ToggleLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp33);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp31->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loggedOutView);
    temp32->Style(1);
    uPtr(transitionScaleGuide)->Aspect(1.0f);
    uPtr(transitionScaleGuide)->HitTestMode(0);
    uPtr(transitionScaleGuide)->Width(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Height(::g::Uno::UX::Size__New1(500.0f, 4));
    uPtr(transitionScaleGuide)->Alignment(10);
    uPtr(transitionScaleGuide)->BoxSizing(4);
    uPtr(transitionScaleGuide)->Name(MainView::__selector13());
    uPtr(ToggleLoggedIn)->Name(MainView::__selector14());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp34);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp33->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp295);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp34->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loggedInView);
    uPtr(plusButton)->Width(::g::Uno::UX::Size__New1(60.0f, 1));
    uPtr(plusButton)->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    uPtr(plusButton)->Alignment(15);
    uPtr(plusButton)->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(plusButton)->Opacity(0.0f);
    uPtr(plusButton)->IsEnabled(false);
    uPtr(plusButton)->Name(MainView::__selector15());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), cross);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), showPlusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButtonScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp38);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), scalePlusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButtonTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButtonTransitionCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButtonBackgroundCircle);
    uPtr(cross)->Name(MainView::__selector16());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cross)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp35);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(cross)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp36);
    temp35->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp35->Width(::g::Uno::UX::Size__New1(30.0f, 4));
    temp35->Height(::g::Uno::UX::Size__New1(2.0f, 1));
    temp36->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp36->Width(::g::Uno::UX::Size__New1(2.0f, 1));
    temp36->Height(::g::Uno::UX::Size__New1(30.0f, 4));
    uPtr(showPlusButton)->Name(MainView::__selector17());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showPlusButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp37);
    ::g::Fuse::Animations::Change__set_Value_fn(temp37, uCRef(1.0f));
    temp37->Duration(0.4);
    temp37->DurationBack(0.0);
    temp37->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    uPtr(plusButtonScaling)->Factor(0.1f);
    uPtr(plusButtonScaling)->Name(MainView::__selector18());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp41);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp42);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp39);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp38->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp40);
    temp39->Delay(0.2f);
    temp39->Target((uObject*)loading);
    temp40->EventName(MainView::__selector14());
    temp40->Delay(0.3f);
    ::g::Fuse::Animations::Change__set_Value_fn(temp41, uCRef(true));
    temp42->Duration(0.8);
    uPtr(scalePlusButton)->Name(MainView::__selector19());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scalePlusButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp43);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scalePlusButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp44);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scalePlusButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp45);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scalePlusButton)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp46);
    ::g::Fuse::Animations::Change__set_Value_fn(temp43, uCRef(0.0f));
    temp43->Duration(0.1);
    temp44->Factor(2.5f);
    temp44->Duration(0.6);
    temp44->DurationBack(0.0);
    temp44->RelativeTo(::g::Fuse::Elements::TranslationModes::SizeFactor());
    temp44->RelativeNode(transitionScaleGuide);
    temp44->Target(plusButtonTransitionCircle);
    temp44->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp45, uCRef(-0.5f));
    temp45->Duration(0.6);
    temp45->DurationBack(0.0);
    temp45->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp46, uCRef(-0.5f));
    temp46->Duration(0.6);
    temp46->DurationBack(0.0);
    temp46->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    uPtr(plusButtonTranslation)->Name(MainView::__selector20());
    uPtr(plusButtonTranslation)->RelativeTo(::g::Fuse::TranslationModes::ParentSize());
    uPtr(plusButtonTransitionCircle)->Width(::g::Uno::UX::Size__New1(236.0f, 1));
    uPtr(plusButtonTransitionCircle)->Height(::g::Uno::UX::Size__New1(236.0f, 1));
    uPtr(plusButtonTransitionCircle)->Layer(1);
    uPtr(plusButtonTransitionCircle)->Name(MainView::__selector21());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(plusButtonTransitionCircle)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), plusButtonCircleScaling);
    uPtr(plusButtonCircleScaling)->Factor(0.25f);
    uPtr(plusButtonCircleScaling)->Name(MainView::__selector22());
    uPtr(plusButtonBackgroundCircle)->Layer(1);
    uPtr(plusButtonBackgroundCircle)->Name(MainView::__selector23());
    uPtr(loggedInView)->Opacity(0.0f);
    uPtr(loggedInView)->IsEnabled(false);
    uPtr(loggedInView)->Name(MainView::__selector24());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedInView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp47);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp48);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp53);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), nav);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), montran);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), airtime);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), internet);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), utility);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), sharebill);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp47->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), payinServices);
    temp48->Columns(::STRINGS[177/*"auto,1*,auto"*/]);
    temp48->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    temp48->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Fuse::Controls::DockPanel::SetDock(temp48, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp49);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp48->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp52);
    temp49->RowCount(2);
    temp49->ColumnCount(2);
    temp49->Width(::g::Uno::UX::Size__New1(22.0f, 1));
    temp49->Height(::g::Uno::UX::Size__New1(22.0f, 1));
    temp49->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp49->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp50);
    temp50->Count1(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp50->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp51);
    temp52->Color(::g::Uno::Float4__New2(0.5215687f, 0.5333334f, 0.5294118f, 1.0f));
    temp52->Width(::g::Uno::UX::Size__New1(60.0f, 4));
    temp52->Height(::g::Uno::UX::Size__New1(60.0f, 4));
    temp52->Alignment(10);
    temp52->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::marklogin06fe0371()));
    temp53->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    ::g::Fuse::Controls::DockPanel::SetDock(temp53, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp54);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp53->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp55);
    uPtr(indicator)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(indicator)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(indicator)->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    uPtr(indicator)->Margin(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    uPtr(indicator)->ZOffset(0.1f);
    uPtr(indicator)->Name(MainView::__selector25());
    ::g::Fuse::Controls::LayoutControl::SetLayoutMaster(indicator, p1);
    temp54->ColumnCount(5);
    temp54->Margin(::g::Uno::Float4__New2(-30.0f, 0.0f, -30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), p1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp54->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), p4);
    uPtr(p1)->Name(MainView::__selector26());
    ::g::Fuse::Controls::Grid::SetColumn(p1, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(p1, 2);
    uPtr(p4)->Name(MainView::__selector27());
    ::g::Fuse::Controls::Grid::SetColumn(p4, 3);
    ::g::Fuse::Controls::Grid::SetColumnSpan(p4, 2);
    temp55->Margin(::g::Uno::Float4__New2(-20.0f, 0.0f, -20.0f, 0.0f));
    temp55->ZOffset(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->ColumnList()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), col1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->ColumnList()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), col2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->ColumnList()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), col3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->ColumnList()), ::TYPES[16/*Uno.Collections.ICollection<Fuse.Layouts.Column>*/]), col4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp56);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp66);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp76);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp55->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp86);
    uPtr(col1)->WidthMetric(1);
    uPtr(col1)->Width(1.0f);
    uPtr(col2)->WidthMetric(1);
    uPtr(col2)->Width(1.0f);
    uPtr(col3)->WidthMetric(1);
    uPtr(col3)->Width(1.0f);
    uPtr(col4)->WidthMetric(1);
    uPtr(col4)->Width(1.0f);
    temp56->HitTestMode(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp57);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp56->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp58);
    temp57->Columns(::STRINGS[178/*"auto,1*"*/]);
    temp57->Alignment(1);
    temp57->Margin(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), c1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp57->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), h1);
    uPtr(c1)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(c1)->Name(MainView::__selector28());
    uPtr(c1)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::basketb1603ff1()));
    uPtr(h1)->Value(::STRINGS[179/*"Pay"*/]);
    uPtr(h1)->Name(MainView::__selector29());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp59);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp60);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp61);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp62);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp63);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp64);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp58->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp65);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp59, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp60, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp61, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp62, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp63, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp64, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp65, page1);
    temp66->HitTestMode(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp67);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp66->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp68);
    temp67->Columns(::STRINGS[178/*"auto,1*"*/]);
    temp67->Alignment(1);
    temp67->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), c2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp67->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), h2);
    uPtr(c2)->Color(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f));
    uPtr(c2)->Name(MainView::__selector30());
    uPtr(c2)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::accountbalance5dbac75c()));
    uPtr(h2)->Value(::STRINGS[180/*"Social"*/]);
    uPtr(h2)->Name(MainView::__selector31());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp69);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp70);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp71);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp72);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp73);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp74);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp68->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp75);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp69, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp70, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp71, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp72, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp73, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp74, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp75, page2);
    temp76->HitTestMode(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp77);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp76->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp78);
    temp77->Columns(::STRINGS[178/*"auto,1*"*/]);
    temp77->Alignment(1);
    temp77->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), c3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp77->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), h3);
    uPtr(c3)->Color(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f));
    uPtr(c3)->Name(MainView::__selector32());
    uPtr(c3)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::play5d20ef5f()));
    uPtr(h3)->Value(::STRINGS[181/*"Notice"*/]);
    uPtr(h3)->Name(MainView::__selector33());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp79);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp80);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp81);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp82);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp83);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp84);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp78->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp85);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp79, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp80, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp81, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp82, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp83, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp84, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp85, page3);
    temp86->HitTestMode(2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp87);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp86->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp88);
    temp87->Columns(::STRINGS[178/*"auto,1*"*/]);
    temp87->Alignment(1);
    temp87->Margin(::g::Uno::Float4__New2(30.0f, 0.0f, 30.0f, 0.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), c4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp87->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), h4);
    uPtr(c4)->Color(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f));
    uPtr(c4)->Name(MainView::__selector34());
    uPtr(c4)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::person9620f6d0()));
    uPtr(h4)->Value(::STRINGS[182/*"User"*/]);
    uPtr(h4)->Name(MainView::__selector35());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp89);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp90);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp91);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp92);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp93);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp94);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp88->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp95);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp89, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp90, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp91, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp92, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp93, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp94, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp95, page4);
    uPtr(nav)->Name(MainView::__selector36());
    uPtr(nav)->Motion(temp96);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), indicatorColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), bgColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), bgColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), shrinkIndicatorWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), page4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(nav)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), util);
    temp96->GotoEasing(::g::Fuse::Animations::Easing::BackOut());
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(indicatorColorAttractor), uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    uPtr(indicatorColorAttractor)->Name(MainView::__selector37());
    uPtr(bgColor)->Color(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f));
    uPtr(bgColor)->Opacity(0.12f);
    uPtr(bgColor)->Layer(1);
    uPtr(bgColor)->Name(MainView::__selector38());
    ::g::Fuse::Animations::Attractor__set_Value_fn(uPtr(bgColorAttractor), uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    uPtr(bgColorAttractor)->Name(MainView::__selector39());
    uPtr(shrinkIndicatorWidth)->Name(MainView::__selector40());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(shrinkIndicatorWidth)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp97);
    ::g::Fuse::Animations::Change__set_Value_fn(temp97, uCRef(::g::Uno::UX::Size__New1(90.0f, 1)));
    temp97->Duration(0.25);
    uPtr(page1)->Name(MainView::__selector41());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp98);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp150);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page1)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp154);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp99);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp103);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp112);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp121);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp130);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp139);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp98->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp148);
    temp99->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp100);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp99->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp101);
    temp100->Width(::g::Uno::UX::Size__New1(70.0f, 1));
    temp100->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp100->Alignment(9);
    temp100->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp100->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::userlogod6bbff3d()));
    temp101->CornerRadius(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp101->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp101->Height(::g::Uno::UX::Size__New1(35.0f, 1));
    temp101->Alignment(9);
    temp101->X(::g::Uno::UX::Size__New1(70.0f, 1));
    temp101->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    temp101->Opacity(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp101->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp102);
    temp102->Value(::STRINGS[183/*"-- Hello Ku...*/]);
    temp102->FontSize(10.0f);
    temp102->Alignment(10);
    temp102->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp103->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp104);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp106);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp103->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp108);
    temp104->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp104->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp104->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp104->X(::g::Uno::UX::Size__New1(105.0f, 1));
    temp104->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    temp104->Opacity(1.0f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp104->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp105);
    temp105->Value(::STRINGS[184/*"Transfer mo...*/]);
    temp105->TextWrapping(1);
    temp105->FontSize(10.0f);
    temp105->Alignment(10);
    temp105->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    temp106->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp106->Color(::g::Uno::Float4__New2(0.2235294f, 0.7058824f, 0.2901961f, 1.0f));
    temp106->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp106->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp106->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp106->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp106->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp107);
    temp107->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp107->Alignment(9);
    temp107->X(::g::Uno::UX::Size__New1(10.0f, 1));
    temp107->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::moneytransfer6aedf754()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp109);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp110);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp108->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp111);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp109, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp110, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp111, moneytransform);
    temp112->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp113);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp115);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp112->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp117);
    temp113->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp113->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp113->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp113->X(::g::Uno::UX::Size__New1(105.0f, 1));
    temp113->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp113->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp114);
    temp114->Value(::STRINGS[185/*"-- your mos...*/]);
    temp114->TextWrapping(1);
    temp114->FontSize(10.0f);
    temp114->Alignment(10);
    temp115->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp115->Color(::g::Uno::Float4__New2(0.9098039f, 0.7058824f, 0.007843138f, 1.0f));
    temp115->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp115->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp115->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp115->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp115->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp116);
    temp116->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp116->Alignment(9);
    temp116->X(::g::Uno::UX::Size__New1(10.0f, 1));
    temp116->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::airtimecbcbb5ee()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp118);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp119);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp117->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp120);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp118, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp119, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp120, airtimeform);
    temp121->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp122);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp124);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp121->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp126);
    temp122->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp122->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp122->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp122->X(::g::Uno::UX::Size__New1(105.0f, 1));
    temp122->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp122->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp123);
    temp123->Value(::STRINGS[185/*"-- your mos...*/]);
    temp123->TextWrapping(1);
    temp123->FontSize(10.0f);
    temp123->Alignment(10);
    temp124->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp124->Color(::g::Uno::Float4__New2(0.0f, 0.4431373f, 0.7333333f, 1.0f));
    temp124->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp124->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp124->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp124->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp124->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp125);
    temp125->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    temp125->Alignment(9);
    temp125->X(::g::Uno::UX::Size__New1(10.0f, 1));
    temp125->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::internet34df871e()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp127);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp128);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp126->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp129);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp127, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp128, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp129, internetform);
    temp130->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp131);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp133);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp130->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp135);
    temp131->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp131->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp131->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp131->X(::g::Uno::UX::Size__New1(105.0f, 1));
    temp131->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp131->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp132);
    temp132->Value(::STRINGS[185/*"-- your mos...*/]);
    temp132->TextWrapping(1);
    temp132->FontSize(10.0f);
    temp132->Alignment(10);
    temp133->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp133->Color(::g::Uno::Float4__New2(0.572549f, 0.1529412f, 0.5568628f, 1.0f));
    temp133->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp133->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp133->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp133->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp133->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp134);
    temp134->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp134->Alignment(9);
    temp134->X(::g::Uno::UX::Size__New1(20.0f, 1));
    temp134->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::utilityb657d6af()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp136);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp137);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp135->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp138);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp136, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp137, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp138, utilityform);
    temp139->Height(::g::Uno::UX::Size__New1(80.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp140);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp142);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp139->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp144);
    temp140->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp140->Width(::g::Uno::UX::Size__New1(250.0f, 1));
    temp140->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp140->X(::g::Uno::UX::Size__New1(105.0f, 1));
    temp140->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp140->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp141);
    temp141->Value(::STRINGS[186/*"-- your mos...*/]);
    temp141->TextWrapping(1);
    temp141->FontSize(10.0f);
    temp141->Alignment(10);
    temp142->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp142->Color(::g::Uno::Float4__New2(0.827451f, 0.07843138f, 0.3529412f, 1.0f));
    temp142->Width(::g::Uno::UX::Size__New1(120.0f, 1));
    temp142->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp142->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp142->Y(::g::Uno::UX::Size__New1(5.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp142->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp143);
    temp143->Width(::g::Uno::UX::Size__New1(50.0f, 4));
    temp143->Alignment(9);
    temp143->X(::g::Uno::UX::Size__New1(20.0f, 1));
    temp143->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::sharebillb2ec8bdd()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp145);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp146);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp144->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp147);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp145, uCRef<int>(2));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp146, uCRef<int>(0));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp147, sharebillform);
    temp148->Alignment(14);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp148->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp149);
    temp149->CornerRadius(::g::Uno::Float4__New2(15.0f, 15.0f, 15.0f, 15.0f));
    temp149->Color(::g::Uno::Float4__New2(0.0f, 0.4862745f, 0.7019608f, 1.0f));
    temp149->Width(::g::Uno::UX::Size__New1(320.0f, 1));
    temp149->Height(::g::Uno::UX::Size__New1(70.0f, 1));
    temp149->Alignment(14);
    temp149->X(::g::Uno::UX::Size__New1(5.0f, 1));
    temp150->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp151);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp152);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp150->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp153);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp151, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp152, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp153, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp155);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp156);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp154->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp157);
    ::g::Fuse::Animations::Change__set_Value_fn(temp155, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp156, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp157, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page2)->Name(MainView::__selector42());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp158);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp171);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page2)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp175);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp159);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp158->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp166);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp160);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp159->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), text);
    temp160->Text(::STRINGS[187/*"Send"*/]);
    temp160->Alignment(11);
    temp160->Margin(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp160->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp161);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp161->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp162);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp162, ::STRINGS[188/*""*/]);
    uPtr(text)->PlaceholderText(::STRINGS[189/*"Text field"*/]);
    uPtr(text)->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    uPtr(text)->Height(::g::Uno::UX::Size__New1(50.0f, 1));
    uPtr(text)->Padding(::g::Uno::Float4__New2(5.0f, 5.0f, 5.0f, 5.0f));
    uPtr(text)->Name(MainView::__selector43());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(text)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp163);
    temp163->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp163->Strokes()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp164);
    temp164->Width(2.0f);
    temp164->Brush(temp165);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp166->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp167);
    temp167->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp168);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp167->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp168->Height(::g::Uno::UX::Size__New1(7.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp169);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp170);
    temp171->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp172);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp173);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp171->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp174);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp172, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp173, uCRef(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp174, uCRef(::g::Uno::Float4__New2(0.2156863f, 0.6313726f, 0.8431373f, 1.0f)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp176);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp177);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp175->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp178);
    ::g::Fuse::Animations::Change__set_Value_fn(temp176, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp177, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp178, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page3)->Name(MainView::__selector44());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp179);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp184);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page3)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp188);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp179->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp180);
    temp180->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp181);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp180->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    temp181->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp182);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp183);
    temp184->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp185);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp186);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp184->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp187);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp185, uCRef(true));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp186, uCRef(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp187, uCRef(::g::Uno::Float4__New2(1.0f, 0.5960785f, 0.01176471f, 1.0f)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp189);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp190);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp188->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp191);
    ::g::Fuse::Animations::Change__set_Value_fn(temp189, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp190, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp191, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(page4)->Name(MainView::__selector45());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp192);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp201);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp205);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(page4)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp207);
    temp192->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp193);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp192->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp196);
    temp193->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp194);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp195);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp196->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp197);
    temp197->Alignment(4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp198);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp197->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    temp198->Height(::g::Uno::UX::Size__New1(3.0f, 1));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Templates()), ::TYPES[15/*Uno.Collections.ICollection<Uno.UX.Template>*/]), temp199);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp3->Bindings()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp200);
    temp201->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp202);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp203);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp201->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp204);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp202, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp203, uCRef(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp204, uCRef(::g::Uno::Float4__New2(0.9607843f, 0.5607843f, 0.5294118f, 1.0f)));
    temp205->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp205->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp206);
    temp206->X(1.0f);
    temp206->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp206->RelativeNode(p4);
    temp206->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp208);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp209);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp207->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp210);
    ::g::Fuse::Animations::Change__set_Value_fn(temp208, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp209, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp210, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(util)->Name(MainView::__selector46());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(util)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp211);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(util)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp212);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(util)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp216);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(util)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp218);
    temp211->Value(::STRINGS[190/*"This is Uti...*/]);
    temp212->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp213);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp214);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp212->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp215);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp213, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp214, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp215, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp216->Scale(-0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp216->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp217);
    temp217->X(1.0f);
    temp217->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp217->RelativeNode(p1);
    temp217->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp218->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp219);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp218->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp220);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp218->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp221);
    ::g::Fuse::Animations::Change__set_Value_fn(temp219, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp220, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp221, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(montran)->Visibility(2);
    uPtr(montran)->Name(MainView::__selector47());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(montran)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), moneytransform);
    uPtr(moneytransform)->Name(MainView::__selector48());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moneytransform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp222);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moneytransform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp230);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moneytransform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp234);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(moneytransform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp236);
    temp222->ItemSpacing(10.0f);
    temp222->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp223);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp224);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp225);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), dropOne);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp222->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp229);
    temp223->PlaceholderText(::STRINGS[191/*"Account Num...*/]);
    temp223->InputHint(4);
    temp224->PlaceholderText(::STRINGS[192/*"Destination...*/]);
    temp224->InputHint(4);
    temp225->PlaceholderText(::STRINGS[193/*"Amount"*/]);
    temp225->InputHint(5);
    uPtr(dropOne)->Name(MainView::__selector49());
    uPtr(dropOne)->BackgroundColor(temp227);
    uPtr(dropOne)->BorderColor(temp228);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(dropOne)->Bindings()), ::TYPES[18/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp226);
    temp229->Text(::STRINGS[194/*"pay"*/]);
    temp230->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp231);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp232);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp230->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp233);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp231, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp232, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp233, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp234->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp234->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp235);
    temp235->X(1.0f);
    temp235->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp235->RelativeNode(p1);
    temp235->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp236->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp237);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp236->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp238);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp236->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp239);
    ::g::Fuse::Animations::Change__set_Value_fn(temp237, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp238, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp239, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(airtime)->Visibility(2);
    uPtr(airtime)->Name(MainView::__selector50());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(airtime)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), airtimeform);
    uPtr(airtimeform)->Name(MainView::__selector51());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(airtimeform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp240);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(airtimeform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp241);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(airtimeform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp245);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(airtimeform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp247);
    temp240->Value(::STRINGS[195/*"This is pay...*/]);
    temp241->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp241->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp242);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp241->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp243);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp241->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp244);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp242, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp243, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp244, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp245->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp245->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp246);
    temp246->X(1.0f);
    temp246->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp246->RelativeNode(p1);
    temp246->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp248);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp249);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp247->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp250);
    ::g::Fuse::Animations::Change__set_Value_fn(temp248, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp249, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp250, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(internet)->Visibility(2);
    uPtr(internet)->Name(MainView::__selector52());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(internet)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), internetform);
    uPtr(internetform)->Name(MainView::__selector53());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(internetform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp251);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(internetform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp252);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(internetform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp256);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(internetform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp258);
    temp251->Value(::STRINGS[196/*"This is Int...*/]);
    temp252->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp252->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp253);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp252->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp254);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp252->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp255);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp253, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp254, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp255, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp256->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp256->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp257);
    temp257->X(1.0f);
    temp257->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp257->RelativeNode(p1);
    temp257->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp259);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp260);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp258->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp261);
    ::g::Fuse::Animations::Change__set_Value_fn(temp259, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp260, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp261, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(utility)->Visibility(2);
    uPtr(utility)->Name(MainView::__selector54());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(utility)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), utilityform);
    uPtr(utilityform)->Name(MainView::__selector55());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(utilityform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp262);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(utilityform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp263);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(utilityform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp267);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(utilityform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp269);
    temp262->Value(::STRINGS[195/*"This is pay...*/]);
    temp263->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp264);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp265);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp263->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp266);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp264, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp265, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp266, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp267->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp267->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp268);
    temp268->X(1.0f);
    temp268->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp268->RelativeNode(p1);
    temp268->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp269->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp270);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp269->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp271);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp269->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp272);
    ::g::Fuse::Animations::Change__set_Value_fn(temp270, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp271, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp272, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(sharebill)->Visibility(2);
    uPtr(sharebill)->Name(MainView::__selector56());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sharebill)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), sharebillform);
    uPtr(sharebillform)->Name(MainView::__selector57());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sharebillform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp273);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sharebillform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp274);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sharebillform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp278);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(sharebillform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp280);
    temp273->Value(::STRINGS[195/*"This is pay...*/]);
    temp274->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp274->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp275);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp274->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp276);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp274->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp277);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp275, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp276, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp277, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp278->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp278->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp279);
    temp279->X(1.0f);
    temp279->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp279->RelativeNode(p1);
    temp279->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp281);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp282);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp280->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp283);
    ::g::Fuse::Animations::Change__set_Value_fn(temp281, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp282, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp283, uCRef(::g::Fuse::Drawing::Colors::White()));
    uPtr(payinServices)->Visibility(2);
    uPtr(payinServices)->Name(MainView::__selector58());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payinServices)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), payinservicesform);
    uPtr(payinservicesform)->Name(MainView::__selector59());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payinservicesform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp284);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payinservicesform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp285);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payinservicesform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp289);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(payinservicesform)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp291);
    temp284->Value(::STRINGS[197/*"This is pay...*/]);
    temp285->Threshold(0.5f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp285->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp286);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp285->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp287);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp285->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp288);
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp286, uCRef(false));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp287, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    ::g::Fuse::Triggers::Actions::Set__set_Value_fn(temp288, uCRef(::g::Uno::Float4__New2(0.4588235f, 0.682353f, 0.1882353f, 1.0f)));
    temp289->Scale(0.333f);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp289->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp290);
    temp290->X(1.0f);
    temp290->RelativeTo(::g::Fuse::Elements::TranslationModes::PositionOffset());
    temp290->RelativeNode(p1);
    temp290->Target(indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp291->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp292);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp291->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp293);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp291->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp294);
    ::g::Fuse::Animations::Change__set_Value_fn(temp292, uCRef(1.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp293, uCRef(2.0f));
    ::g::Fuse::Animations::Change__set_Value_fn(temp294, uCRef(::g::Fuse::Drawing::Colors::White()));
    ::g::Fuse::Controls::DockPanel::SetDock(temp295, 3);
    uPtr(loading)->Name(MainView::__selector60());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp296);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp297);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp298);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loading)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp299);
    ::g::Fuse::Animations::Change__set_Value_fn(temp296, uCRef(true));
    temp296->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp297, uCRef(true));
    temp297->DelayBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp298, uCRef(true));
    temp298->DelayBack(0.0);
    temp298->Delay(2.5);
    ::g::Fuse::Animations::Change__set_Value_fn(temp299, uCRef(true));
    temp299->Delay(2.9);
    uPtr(changeWidth)->Name(MainView::__selector61());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(changeWidth)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp300);
    ::g::Fuse::Animations::Change__set_Value_fn(temp300, uCRef(::g::Uno::UX::Size__New1(60.0f, 1)));
    temp300->Duration(0.5);
    temp300->DurationBack(0.0);
    temp300->Easing(::g::Fuse::Animations::Easing::CircularInOut());
    uPtr(loadCircle)->Name(MainView::__selector62());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp301);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp302);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp303);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadCircle)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp304);
    ::g::Fuse::Animations::Change__set_Value_fn(temp301, uCRef(0.0f));
    temp301->Duration(0.2);
    temp301->DurationBack(0.0);
    ::g::Fuse::Animations::Change__set_Value_fn(temp302, uCRef(1.0f));
    temp302->Duration(0.3);
    temp302->DurationBack(0.0);
    temp302->DelayBack(0.0);
    temp302->Delay(0.2);
    temp303->Frequency(2.0);
    temp303->Target(loadingCircle);
    temp304->Low(30.0f);
    temp304->High(300.0f);
    temp304->Frequency(0.7);
    uPtr(scaleAndFade)->Name(MainView::__selector63());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp305);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp306);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp307);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(scaleAndFade)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp308);
    ::g::Fuse::Animations::Change__set_Value_fn(temp305, uCRef(0.0f));
    temp305->Duration(0.1);
    ::g::Fuse::Animations::Change__set_Value_fn(temp306, uCRef(1.0f));
    temp306->Duration(0.01);
    ::g::Fuse::Animations::Change__set_Value_fn(temp307, uCRef(0.0f));
    temp307->Duration(0.01);
    temp308->Factor(3.0f);
    temp308->Duration(0.7);
    temp308->DurationBack(0.0);
    temp308->Delay(0.01);
    temp308->RelativeTo(::g::Fuse::Elements::TranslationModes::SizeFactor());
    temp308->RelativeNode(transitionScaleGuide);
    temp308->Target(loadingButton);
    temp308->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    uPtr(showLoggedIn)->Name(MainView::__selector64());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp309);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(showLoggedIn)->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp310);
    ::g::Fuse::Animations::Change__set_Value_fn(temp309, uCRef(1.0f));
    temp309->Duration(0.65);
    temp309->DurationBack(0.35);
    temp309->DelayBack(0.2);
    temp309->Delay(0.1);
    temp309->Easing(::g::Fuse::Animations::Easing::CubicInOut());
    ::g::Fuse::Animations::Change__set_Value_fn(temp310, uCRef(true));
    uPtr(loggedOutView)->Rows(::STRINGS[198/*"1.5*,auto,1*"*/]);
    uPtr(loggedOutView)->Padding(::g::Uno::Float4__New2(40.0f, 0.0f, 40.0f, 0.0f));
    uPtr(loggedOutView)->Name(MainView::__selector65());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp311);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp314);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp316);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), mark);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loggedOutView)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp311->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp312);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp311->Animators()), ::TYPES[13/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp313);
    temp312->Y(-200.0f);
    temp312->Duration(0.6);
    temp312->Target(mark);
    temp312->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp313->Y(-200.0f);
    temp313->Duration(0.6);
    temp313->Target(loginArea);
    temp313->Easing(::g::Fuse::Animations::Easing::ExponentialInOut());
    temp314->Layer(1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp314->Fills()), ::TYPES[19/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), temp315);
    temp315->WrapMode(1);
    temp315->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::bgloginc4bead9d()));
    temp316->Width(::g::Uno::UX::Size__New1(150.0f, 1));
    temp316->Height(::g::Uno::UX::Size__New1(60.0f, 1));
    ::g::Fuse::Controls::Grid::SetRow(temp316, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), text1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp319);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp316->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingButton);
    uPtr(text1)->Value(::STRINGS[199/*"Register"*/]);
    uPtr(text1)->FontSize(18.0f);
    uPtr(text1)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(text1)->Alignment(10);
    uPtr(text1)->Name(MainView::__selector66());
    uPtr(loadingCirclePanel)->Name(MainView::__selector67());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCirclePanel)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), loadingCircle);
    uPtr(loadingCircle)->StartAngleDegrees(0.0f);
    uPtr(loadingCircle)->LengthAngleDegrees(90.0f);
    uPtr(loadingCircle)->Width(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(loadingCircle)->Height(::g::Uno::UX::Size__New1(70.0f, 4));
    uPtr(loadingCircle)->Opacity(0.0f);
    uPtr(loadingCircle)->Name(MainView::__selector68());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingCircle)->Strokes()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), temp317);
    temp317->Width(1.0f);
    temp317->Brush(temp318);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp319->Actions()), ::TYPES[14/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp320);
    temp320->Target((uObject*)loading);
    uPtr(rectNormalScale)->CornerRadius(::g::Uno::Float4__New2(20.0f, 20.0f, 20.0f, 20.0f));
    uPtr(rectNormalScale)->Color(::g::Uno::Float4__New2(0.0f, 0.4862745f, 0.7137255f, 1.0f));
    uPtr(rectNormalScale)->Width(::g::Uno::UX::Size__New1(300.0f, 1));
    uPtr(rectNormalScale)->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    uPtr(rectNormalScale)->Opacity(0.8f);
    uPtr(rectNormalScale)->Name(MainView::__selector69());
    uPtr(loadingButton)->Color(::g::Uno::Float4__New2(0.9137255f, 0.9137255f, 0.9137255f, 1.0f));
    uPtr(loadingButton)->Width(::g::Uno::UX::Size__New1(240.0f, 1));
    uPtr(loadingButton)->Height(::g::Uno::UX::Size__New1(240.0f, 1));
    uPtr(loadingButton)->Alignment(10);
    uPtr(loadingButton)->Opacity(0.0f);
    uPtr(loadingButton)->Layer(1);
    uPtr(loadingButton)->Name(MainView::__selector70());
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loadingButton)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp321);
    temp321->Factor(0.25f);
    uPtr(mark)->Margin(::g::Uno::Float4__New2(40.0f, 40.0f, 40.0f, 40.0f));
    uPtr(mark)->Name(MainView::__selector71());
    ::g::Fuse::Controls::Grid::SetRow(mark, 0);
    uPtr(mark)->File(::g::Uno::UX::BundleFileSource::New1(::g::dynamictabbar_bundle::marklogin06fe0371()));
    uPtr(loginArea)->RowCount(4);
    uPtr(loginArea)->Columns(::STRINGS[178/*"auto,1*"*/]);
    uPtr(loginArea)->Height(::g::Uno::UX::Size__New1(160.0f, 1));
    uPtr(loginArea)->MaxWidth(::g::Uno::UX::Size__New1(400.0f, 1));
    uPtr(loginArea)->Padding(::g::Uno::Float4__New2(0.0f, 10.0f, 0.0f, 10.0f));
    uPtr(loginArea)->Name(MainView::__selector72());
    ::g::Fuse::Controls::Grid::SetRow(loginArea, 1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp322);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp323);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp324);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp325);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp326);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp327);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp328);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(loginArea)->Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp329);
    temp322->PlaceholderText(::STRINGS[200/*"full name"*/]);
    temp322->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp322->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp322->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp322, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp322, 1);
    temp323->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp323->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp323->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp323, 0);
    ::g::Fuse::Controls::Grid::SetColumn(temp323, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp323, 2);
    temp324->PlaceholderText(::STRINGS[201/*"mobile number"*/]);
    temp324->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp324->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp324->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp324, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp324, 1);
    temp325->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp325->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp325->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp325, 1);
    ::g::Fuse::Controls::Grid::SetColumn(temp325, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp325, 2);
    temp326->PlaceholderText(::STRINGS[202/*"email"*/]);
    temp326->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp326->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp326->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp326, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp326, 1);
    temp327->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp327->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp327->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp327, 2);
    ::g::Fuse::Controls::Grid::SetColumn(temp327, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp327, 2);
    temp328->IsPassword(true);
    temp328->PlaceholderText(::STRINGS[203/*"Password"*/]);
    temp328->PlaceholderColor(::g::Uno::Float4__New2(0.6f, 0.6f, 0.6f, 1.0f));
    temp328->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp328->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    ::g::Fuse::Controls::Grid::SetRow(temp328, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp328, 1);
    temp329->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp329->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp329->Alignment(12);
    ::g::Fuse::Controls::Grid::SetRow(temp329, 3);
    ::g::Fuse::Controls::Grid::SetColumn(temp329, 0);
    ::g::Fuse::Controls::Grid::SetColumnSpan(temp329, 2);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), transitionScaleGuide);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), ToggleLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), cross);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showPlusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButtonScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), scalePlusButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButtonTranslation);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButtonTransitionCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButtonCircleScaling);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), plusButtonBackgroundCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loggedInView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), indicator);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), p1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), p4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), col1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), col2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), col3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), col4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), c1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), h1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), c2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), h2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), c3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), h3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), c4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), h4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), nav);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), indicatorColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), bgColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), bgColorAttractor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), shrinkIndicatorWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), page1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), page2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), text);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), page3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), page4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), util);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), montran);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), moneytransform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), dropOne);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), airtime);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), airtimeform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), internet);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), internetform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), utility);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), utilityform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), sharebill);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), sharebillform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), payinServices);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), payinservicesform);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loading);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), changeWidth);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loadCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), scaleAndFade);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), showLoggedIn);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loggedOutView);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), text1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loadingCirclePanel);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loadingCircle);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), rectNormalScale);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loadingButton);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), mark);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[20/*Uno.Collections.ICollection<object>*/]), loginArea);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp30);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[12/*Uno.Collections.ICollection<Fuse.Node>*/]), temp31);
}

// public MainView New() [static] :402
MainView* MainView::New1()
{
    MainView* obj1 = (MainView*)uNew(MainView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

} // ::g
