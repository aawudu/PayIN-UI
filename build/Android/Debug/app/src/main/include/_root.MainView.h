// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.App.h>
#include <Fuse.IProperties.h>
#include <Uno.Float4.h>
#include <Uno.UX.Size.h>
namespace g{namespace Fuse{namespace Animations{struct Attractor;}}}
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Page;}}}
namespace g{namespace Fuse{namespace Controls{struct PageControl;}}}
namespace g{namespace Fuse{namespace Controls{struct Panel;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Controls{struct TextInput;}}}
namespace g{namespace Fuse{namespace Layouts{struct Column;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Fuse{struct Translation;}}
namespace g{namespace Fuse{struct UserEvent;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownMenu;}
namespace g{struct MainView;}
namespace g{struct TabHeader;}
namespace g{struct TabIcon;}

namespace g{

// public partial sealed class MainView :2
// {
::g::Fuse::AppBase_type* MainView_typeof();
void MainView__ctor_4_fn(MainView* __this);
void MainView__InitializeUX_fn(MainView* __this);
void MainView__New1_fn(MainView** __retval);

struct MainView : ::g::Fuse::App
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return MainView_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MainView_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MainView_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MainView_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MainView_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MainView_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MainView_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MainView_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MainView_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector16_;
    static ::g::Uno::UX::Selector& __selector16() { return MainView_typeof()->Init(), __selector16_; }
    static ::g::Uno::UX::Selector __selector17_;
    static ::g::Uno::UX::Selector& __selector17() { return MainView_typeof()->Init(), __selector17_; }
    static ::g::Uno::UX::Selector __selector18_;
    static ::g::Uno::UX::Selector& __selector18() { return MainView_typeof()->Init(), __selector18_; }
    static ::g::Uno::UX::Selector __selector19_;
    static ::g::Uno::UX::Selector& __selector19() { return MainView_typeof()->Init(), __selector19_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MainView_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector20_;
    static ::g::Uno::UX::Selector& __selector20() { return MainView_typeof()->Init(), __selector20_; }
    static ::g::Uno::UX::Selector __selector21_;
    static ::g::Uno::UX::Selector& __selector21() { return MainView_typeof()->Init(), __selector21_; }
    static ::g::Uno::UX::Selector __selector22_;
    static ::g::Uno::UX::Selector& __selector22() { return MainView_typeof()->Init(), __selector22_; }
    static ::g::Uno::UX::Selector __selector23_;
    static ::g::Uno::UX::Selector& __selector23() { return MainView_typeof()->Init(), __selector23_; }
    static ::g::Uno::UX::Selector __selector24_;
    static ::g::Uno::UX::Selector& __selector24() { return MainView_typeof()->Init(), __selector24_; }
    static ::g::Uno::UX::Selector __selector25_;
    static ::g::Uno::UX::Selector& __selector25() { return MainView_typeof()->Init(), __selector25_; }
    static ::g::Uno::UX::Selector __selector26_;
    static ::g::Uno::UX::Selector& __selector26() { return MainView_typeof()->Init(), __selector26_; }
    static ::g::Uno::UX::Selector __selector27_;
    static ::g::Uno::UX::Selector& __selector27() { return MainView_typeof()->Init(), __selector27_; }
    static ::g::Uno::UX::Selector __selector28_;
    static ::g::Uno::UX::Selector& __selector28() { return MainView_typeof()->Init(), __selector28_; }
    static ::g::Uno::UX::Selector __selector29_;
    static ::g::Uno::UX::Selector& __selector29() { return MainView_typeof()->Init(), __selector29_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MainView_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector30_;
    static ::g::Uno::UX::Selector& __selector30() { return MainView_typeof()->Init(), __selector30_; }
    static ::g::Uno::UX::Selector __selector31_;
    static ::g::Uno::UX::Selector& __selector31() { return MainView_typeof()->Init(), __selector31_; }
    static ::g::Uno::UX::Selector __selector32_;
    static ::g::Uno::UX::Selector& __selector32() { return MainView_typeof()->Init(), __selector32_; }
    static ::g::Uno::UX::Selector __selector33_;
    static ::g::Uno::UX::Selector& __selector33() { return MainView_typeof()->Init(), __selector33_; }
    static ::g::Uno::UX::Selector __selector34_;
    static ::g::Uno::UX::Selector& __selector34() { return MainView_typeof()->Init(), __selector34_; }
    static ::g::Uno::UX::Selector __selector35_;
    static ::g::Uno::UX::Selector& __selector35() { return MainView_typeof()->Init(), __selector35_; }
    static ::g::Uno::UX::Selector __selector36_;
    static ::g::Uno::UX::Selector& __selector36() { return MainView_typeof()->Init(), __selector36_; }
    static ::g::Uno::UX::Selector __selector37_;
    static ::g::Uno::UX::Selector& __selector37() { return MainView_typeof()->Init(), __selector37_; }
    static ::g::Uno::UX::Selector __selector38_;
    static ::g::Uno::UX::Selector& __selector38() { return MainView_typeof()->Init(), __selector38_; }
    static ::g::Uno::UX::Selector __selector39_;
    static ::g::Uno::UX::Selector& __selector39() { return MainView_typeof()->Init(), __selector39_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MainView_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector40_;
    static ::g::Uno::UX::Selector& __selector40() { return MainView_typeof()->Init(), __selector40_; }
    static ::g::Uno::UX::Selector __selector41_;
    static ::g::Uno::UX::Selector& __selector41() { return MainView_typeof()->Init(), __selector41_; }
    static ::g::Uno::UX::Selector __selector42_;
    static ::g::Uno::UX::Selector& __selector42() { return MainView_typeof()->Init(), __selector42_; }
    static ::g::Uno::UX::Selector __selector43_;
    static ::g::Uno::UX::Selector& __selector43() { return MainView_typeof()->Init(), __selector43_; }
    static ::g::Uno::UX::Selector __selector44_;
    static ::g::Uno::UX::Selector& __selector44() { return MainView_typeof()->Init(), __selector44_; }
    static ::g::Uno::UX::Selector __selector45_;
    static ::g::Uno::UX::Selector& __selector45() { return MainView_typeof()->Init(), __selector45_; }
    static ::g::Uno::UX::Selector __selector46_;
    static ::g::Uno::UX::Selector& __selector46() { return MainView_typeof()->Init(), __selector46_; }
    static ::g::Uno::UX::Selector __selector47_;
    static ::g::Uno::UX::Selector& __selector47() { return MainView_typeof()->Init(), __selector47_; }
    static ::g::Uno::UX::Selector __selector48_;
    static ::g::Uno::UX::Selector& __selector48() { return MainView_typeof()->Init(), __selector48_; }
    static ::g::Uno::UX::Selector __selector49_;
    static ::g::Uno::UX::Selector& __selector49() { return MainView_typeof()->Init(), __selector49_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MainView_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector50_;
    static ::g::Uno::UX::Selector& __selector50() { return MainView_typeof()->Init(), __selector50_; }
    static ::g::Uno::UX::Selector __selector51_;
    static ::g::Uno::UX::Selector& __selector51() { return MainView_typeof()->Init(), __selector51_; }
    static ::g::Uno::UX::Selector __selector52_;
    static ::g::Uno::UX::Selector& __selector52() { return MainView_typeof()->Init(), __selector52_; }
    static ::g::Uno::UX::Selector __selector53_;
    static ::g::Uno::UX::Selector& __selector53() { return MainView_typeof()->Init(), __selector53_; }
    static ::g::Uno::UX::Selector __selector54_;
    static ::g::Uno::UX::Selector& __selector54() { return MainView_typeof()->Init(), __selector54_; }
    static ::g::Uno::UX::Selector __selector55_;
    static ::g::Uno::UX::Selector& __selector55() { return MainView_typeof()->Init(), __selector55_; }
    static ::g::Uno::UX::Selector __selector56_;
    static ::g::Uno::UX::Selector& __selector56() { return MainView_typeof()->Init(), __selector56_; }
    static ::g::Uno::UX::Selector __selector57_;
    static ::g::Uno::UX::Selector& __selector57() { return MainView_typeof()->Init(), __selector57_; }
    static ::g::Uno::UX::Selector __selector58_;
    static ::g::Uno::UX::Selector& __selector58() { return MainView_typeof()->Init(), __selector58_; }
    static ::g::Uno::UX::Selector __selector59_;
    static ::g::Uno::UX::Selector& __selector59() { return MainView_typeof()->Init(), __selector59_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MainView_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector60_;
    static ::g::Uno::UX::Selector& __selector60() { return MainView_typeof()->Init(), __selector60_; }
    static ::g::Uno::UX::Selector __selector61_;
    static ::g::Uno::UX::Selector& __selector61() { return MainView_typeof()->Init(), __selector61_; }
    static ::g::Uno::UX::Selector __selector62_;
    static ::g::Uno::UX::Selector& __selector62() { return MainView_typeof()->Init(), __selector62_; }
    static ::g::Uno::UX::Selector __selector63_;
    static ::g::Uno::UX::Selector& __selector63() { return MainView_typeof()->Init(), __selector63_; }
    static ::g::Uno::UX::Selector __selector64_;
    static ::g::Uno::UX::Selector& __selector64() { return MainView_typeof()->Init(), __selector64_; }
    static ::g::Uno::UX::Selector __selector65_;
    static ::g::Uno::UX::Selector& __selector65() { return MainView_typeof()->Init(), __selector65_; }
    static ::g::Uno::UX::Selector __selector66_;
    static ::g::Uno::UX::Selector& __selector66() { return MainView_typeof()->Init(), __selector66_; }
    static ::g::Uno::UX::Selector __selector67_;
    static ::g::Uno::UX::Selector& __selector67() { return MainView_typeof()->Init(), __selector67_; }
    static ::g::Uno::UX::Selector __selector68_;
    static ::g::Uno::UX::Selector& __selector68() { return MainView_typeof()->Init(), __selector68_; }
    static ::g::Uno::UX::Selector __selector69_;
    static ::g::Uno::UX::Selector& __selector69() { return MainView_typeof()->Init(), __selector69_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MainView_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector70_;
    static ::g::Uno::UX::Selector& __selector70() { return MainView_typeof()->Init(), __selector70_; }
    static ::g::Uno::UX::Selector __selector71_;
    static ::g::Uno::UX::Selector& __selector71() { return MainView_typeof()->Init(), __selector71_; }
    static ::g::Uno::UX::Selector __selector72_;
    static ::g::Uno::UX::Selector& __selector72() { return MainView_typeof()->Init(), __selector72_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MainView_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MainView_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::PageControl*> airtime;
    uStrong< ::g::Uno::UX::Property1*> airtime_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> airtime_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> airtimeform;
    uStrong< ::g::Fuse::Controls::Rectangle*> bgColor;
    uStrong< ::g::Uno::UX::Property1*> bgColor_Color_inst;
    uStrong< ::g::Fuse::Animations::Attractor*> bgColorAttractor;
    uStrong< ::g::Uno::UX::Property1*> bgColorAttractor_Value_inst;
    uStrong< ::g::TabIcon*> c1;
    uStrong< ::g::Uno::UX::Property1*> c1_Color_inst;
    uStrong< ::g::TabIcon*> c2;
    uStrong< ::g::Uno::UX::Property1*> c2_Color_inst;
    uStrong< ::g::TabIcon*> c3;
    uStrong< ::g::Uno::UX::Property1*> c3_Color_inst;
    uStrong< ::g::TabIcon*> c4;
    uStrong< ::g::Uno::UX::Property1*> c4_Color_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> changeWidth;
    uStrong< ::g::Uno::UX::Property1*> changeWidth_Value_inst;
    uStrong< ::g::Fuse::Layouts::Column*> col1;
    uStrong< ::g::Uno::UX::Property1*> col1_Width_inst;
    uStrong< ::g::Fuse::Layouts::Column*> col2;
    uStrong< ::g::Uno::UX::Property1*> col2_Width_inst;
    uStrong< ::g::Fuse::Layouts::Column*> col3;
    uStrong< ::g::Uno::UX::Property1*> col3_Width_inst;
    uStrong< ::g::Fuse::Layouts::Column*> col4;
    uStrong< ::g::Uno::UX::Property1*> col4_Width_inst;
    uStrong< ::g::Fuse::Controls::Panel*> cross;
    uStrong< ::g::Uno::UX::Property1*> cross_Opacity_inst;
    uStrong< ::g::DropdownMenu*> dropOne;
    uStrong< ::g::Uno::UX::Property1*> dropOne_ListItems_inst;
    uStrong< ::g::TabHeader*> h1;
    uStrong< ::g::Uno::UX::Property1*> h1_Opacity_inst;
    uStrong< ::g::TabHeader*> h2;
    uStrong< ::g::Uno::UX::Property1*> h2_Opacity_inst;
    uStrong< ::g::TabHeader*> h3;
    uStrong< ::g::Uno::UX::Property1*> h3_Opacity_inst;
    uStrong< ::g::TabHeader*> h4;
    uStrong< ::g::Uno::UX::Property1*> h4_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> indicator;
    uStrong< ::g::Uno::UX::Property1*> indicator_Color_inst;
    uStrong< ::g::Uno::UX::Property1*> indicator_Width_inst;
    uStrong< ::g::Fuse::Animations::Attractor*> indicatorColorAttractor;
    uStrong< ::g::Uno::UX::Property1*> indicatorColorAttractor_Value_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> internet;
    uStrong< ::g::Uno::UX::Property1*> internet_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> internet_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> internetform;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loadCircle;
    uStrong< ::g::Uno::UX::Property1*> loadCircle_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> loading;
    uStrong< ::g::Fuse::Controls::Circle*> loadingButton;
    uStrong< ::g::Uno::UX::Property1*> loadingButton_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Circle*> loadingCircle;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_LengthAngleDegrees_inst;
    uStrong< ::g::Uno::UX::Property1*> loadingCircle_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> loadingCirclePanel;
    uStrong< ::g::Uno::UX::Property1*> loadingCirclePanel_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Panel*> loggedInView;
    uStrong< ::g::Uno::UX::Property1*> loggedInView_IsEnabled_inst;
    uStrong< ::g::Uno::UX::Property1*> loggedInView_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Grid*> loggedOutView;
    uStrong< ::g::Fuse::Controls::Grid*> loginArea;
    uStrong< ::g::Fuse::Controls::Image*> mark;
    uStrong< ::g::Fuse::Controls::Page*> moneytransform;
    uStrong< ::g::Fuse::Controls::PageControl*> montran;
    uStrong< ::g::Uno::UX::Property1*> montran_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> montran_Visibility_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> nav;
    uStrong< ::g::Uno::UX::Property1*> nav_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> nav_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Panel*> p1;
    uStrong< ::g::Fuse::Controls::Panel*> p4;
    uStrong< ::g::Fuse::Controls::Page*> page1;
    uStrong< ::g::Fuse::Controls::Page*> page2;
    uStrong< ::g::Fuse::Controls::Page*> page3;
    uStrong< ::g::Fuse::Controls::Page*> page4;
    uStrong< ::g::Fuse::Controls::PageControl*> payinServices;
    uStrong< ::g::Fuse::Controls::Page*> payinservicesform;
    uStrong< ::g::Fuse::Controls::Panel*> plusButton;
    uStrong< ::g::Fuse::Controls::Circle*> plusButtonBackgroundCircle;
    uStrong< ::g::Fuse::Scaling*> plusButtonCircleScaling;
    uStrong< ::g::Fuse::Scaling*> plusButtonScaling;
    uStrong< ::g::Uno::UX::Property1*> plusButtonScaling_Factor_inst;
    uStrong< ::g::Fuse::Controls::Circle*> plusButtonTransitionCircle;
    uStrong< ::g::Fuse::Translation*> plusButtonTranslation;
    uStrong< ::g::Uno::UX::Property1*> plusButtonTranslation_X_inst;
    uStrong< ::g::Uno::UX::Property1*> plusButtonTranslation_Y_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> rectNormalScale;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Opacity_inst;
    uStrong< ::g::Uno::UX::Property1*> rectNormalScale_Width_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scaleAndFade;
    uStrong< ::g::Uno::UX::Property1*> scaleAndFade_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> scalePlusButton;
    uStrong< ::g::Uno::UX::Property1*> scalePlusButton_Value_inst;
    uStrong< ::g::Fuse::Controls::PageControl*> sharebill;
    uStrong< ::g::Uno::UX::Property1*> sharebill_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> sharebill_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> sharebillform;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showLoggedIn;
    uStrong< ::g::Uno::UX::Property1*> showLoggedIn_Value_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> showPlusButton;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> shrinkIndicatorWidth;
    uStrong< ::g::Uno::UX::Property1*> shrinkIndicatorWidth_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp2_Items_inst;
    uStrong< ::g::Uno::UX::Property1*> temp3_Items_inst;
    uStrong< ::g::Fuse::Controls::TextInput*> text;
    uStrong< ::g::Uno::UX::Property1*> text_Value_inst;
    uStrong< ::g::Fuse::Controls::Text*> text1;
    uStrong< ::g::Uno::UX::Property1*> text1_Opacity_inst;
    uStrong< ::g::Fuse::UserEvent*> ToggleLoggedIn;
    uStrong< ::g::Fuse::Controls::Panel*> transitionScaleGuide;
    uStrong< ::g::Fuse::Controls::Page*> util;
    uStrong< ::g::Fuse::Controls::PageControl*> utility;
    uStrong< ::g::Uno::UX::Property1*> utility_Active_inst;
    uStrong< ::g::Uno::UX::Property1*> utility_Visibility_inst;
    uStrong< ::g::Fuse::Controls::Page*> utilityform;

    void ctor_4();
    void InitializeUX();
    static MainView* New1();
};
// }

} // ::g
