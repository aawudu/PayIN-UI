// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/DropdownMenu.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4.h>
#include <Uno.UX.Template.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownMenu;}
namespace g{struct DropdownMenu__Template;}

namespace g{

// public partial sealed class DropdownMenu.Template :110
// {
::g::Uno::UX::Template_type* DropdownMenu__Template_typeof();
void DropdownMenu__Template__New1_fn(DropdownMenu__Template* __this, uObject** __retval);

struct DropdownMenu__Template : ::g::Uno::UX::Template
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return DropdownMenu__Template_typeof()->Init(), __g_static_nametable1_; }
    uWeak< ::g::DropdownMenu*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DropdownMenu__Template_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DropdownMenu__Template_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DropdownMenu__Template_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DropdownMenu__Template_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DropdownMenu__Template_typeof()->Init(), __selector4_; }
    uStrong< ::g::Uno::UX::Property1*> __self_BackgroundColor_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_BorderColor_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_FontSize_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_Text_inst1;
    uStrong< ::g::Uno::UX::Property1*> __self_TextColor_inst1;
};
// }

} // ::g
