// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/MenuButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct Circle;}}}
namespace g{namespace Fuse{namespace Controls{struct Grid;}}}
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Triggers{struct WhileTrue;}}}
namespace g{namespace Fuse{struct Scaling;}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct MenuButton;}

namespace g{

// public partial sealed class MenuButton :2
// {
::g::Fuse::Controls::Panel_type* MenuButton_typeof();
void MenuButton__ctor_7_fn(MenuButton* __this);
void MenuButton__InitializeUX_fn(MenuButton* __this);
void MenuButton__New4_fn(MenuButton** __retval);

struct MenuButton : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return MenuButton_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return MenuButton_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector10_;
    static ::g::Uno::UX::Selector& __selector10() { return MenuButton_typeof()->Init(), __selector10_; }
    static ::g::Uno::UX::Selector __selector11_;
    static ::g::Uno::UX::Selector& __selector11() { return MenuButton_typeof()->Init(), __selector11_; }
    static ::g::Uno::UX::Selector __selector12_;
    static ::g::Uno::UX::Selector& __selector12() { return MenuButton_typeof()->Init(), __selector12_; }
    static ::g::Uno::UX::Selector __selector13_;
    static ::g::Uno::UX::Selector& __selector13() { return MenuButton_typeof()->Init(), __selector13_; }
    static ::g::Uno::UX::Selector __selector14_;
    static ::g::Uno::UX::Selector& __selector14() { return MenuButton_typeof()->Init(), __selector14_; }
    static ::g::Uno::UX::Selector __selector15_;
    static ::g::Uno::UX::Selector& __selector15() { return MenuButton_typeof()->Init(), __selector15_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return MenuButton_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return MenuButton_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return MenuButton_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return MenuButton_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return MenuButton_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return MenuButton_typeof()->Init(), __selector7_; }
    static ::g::Uno::UX::Selector __selector8_;
    static ::g::Uno::UX::Selector& __selector8() { return MenuButton_typeof()->Init(), __selector8_; }
    static ::g::Uno::UX::Selector __selector9_;
    static ::g::Uno::UX::Selector& __selector9() { return MenuButton_typeof()->Init(), __selector9_; }
    uStrong< ::g::Fuse::Controls::Image*> arrow;
    uStrong< ::g::Uno::UX::Property1*> arrow_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Circle*> c1;
    uStrong< ::g::Fuse::Controls::Circle*> c2;
    uStrong< ::g::Fuse::Controls::Circle*> c3;
    uStrong< ::g::Fuse::Scaling*> circleScale1;
    uStrong< ::g::Uno::UX::Property1*> circleScale1_Factor_inst;
    uStrong< ::g::Fuse::Scaling*> circleScale2;
    uStrong< ::g::Uno::UX::Property1*> circleScale2_Factor_inst;
    uStrong< ::g::Fuse::Scaling*> circleScale3;
    uStrong< ::g::Uno::UX::Property1*> circleScale3_Factor_inst;
    uStrong< ::g::Fuse::Controls::Rectangle*> dividerRect;
    uStrong< ::g::Uno::UX::Property1*> dividerRect_Opacity_inst;
    uStrong< ::g::Fuse::Controls::Grid*> menuButtons;
    uStrong< ::g::Uno::UX::Property1*> menuButtons_Opacity_inst;
    uStrong< ::g::Fuse::Triggers::WhileTrue*> menuLayout;
    uStrong< ::g::Fuse::Scaling*> refundScaling;
    uStrong< ::g::Uno::UX::Property1*> refundScaling_Factor_inst;
    uStrong< ::g::Fuse::Scaling*> shareScaling;
    uStrong< ::g::Uno::UX::Property1*> shareScaling_Factor_inst;
    uStrong< ::g::Fuse::Controls::Panel*> sp;
    uStrong< ::g::Uno::UX::Property1*> sp_Alignment_inst;

    void ctor_7();
    void InitializeUX();
    static MenuButton* New4();
};
// }

} // ::g
