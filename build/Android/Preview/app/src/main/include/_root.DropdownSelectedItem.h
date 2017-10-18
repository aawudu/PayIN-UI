// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/build/Android/Preview/cache/ux11/DropdownSelectedItem.g.uno.
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
#include <Uno.Float4.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct DropdownSelectedItem;}

namespace g{

// public partial sealed class DropdownSelectedItem :2
// {
::g::Fuse::Controls::Panel_type* DropdownSelectedItem_typeof();
void DropdownSelectedItem__ctor_7_fn(DropdownSelectedItem* __this);
void DropdownSelectedItem__get_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownSelectedItem__set_BackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownSelectedItem__get_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush** __retval);
void DropdownSelectedItem__set_BorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value);
void DropdownSelectedItem__get_FontSize_fn(DropdownSelectedItem* __this, float* __retval);
void DropdownSelectedItem__set_FontSize_fn(DropdownSelectedItem* __this, float* value);
void DropdownSelectedItem__InitializeUX_fn(DropdownSelectedItem* __this);
void DropdownSelectedItem__New4_fn(DropdownSelectedItem** __retval);
void DropdownSelectedItem__SetBackgroundColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownSelectedItem__SetBorderColor_fn(DropdownSelectedItem* __this, ::g::Fuse::Drawing::Brush* value, uObject* origin);
void DropdownSelectedItem__SetFontSize_fn(DropdownSelectedItem* __this, float* value, uObject* origin);
void DropdownSelectedItem__SetText_fn(DropdownSelectedItem* __this, uString* value, uObject* origin);
void DropdownSelectedItem__SetTextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value, uObject* origin);
void DropdownSelectedItem__get_Text_fn(DropdownSelectedItem* __this, uString** __retval);
void DropdownSelectedItem__set_Text_fn(DropdownSelectedItem* __this, uString* value);
void DropdownSelectedItem__get_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* __retval);
void DropdownSelectedItem__set_TextColor_fn(DropdownSelectedItem* __this, ::g::Uno::Float4* value);

struct DropdownSelectedItem : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return DropdownSelectedItem_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return DropdownSelectedItem_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return DropdownSelectedItem_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return DropdownSelectedItem_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return DropdownSelectedItem_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return DropdownSelectedItem_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return DropdownSelectedItem_typeof()->Init(), __selector5_; }
    static ::g::Uno::UX::Selector __selector6_;
    static ::g::Uno::UX::Selector& __selector6() { return DropdownSelectedItem_typeof()->Init(), __selector6_; }
    static ::g::Uno::UX::Selector __selector7_;
    static ::g::Uno::UX::Selector& __selector7() { return DropdownSelectedItem_typeof()->Init(), __selector7_; }
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BackgroundColor;
    uStrong< ::g::Fuse::Drawing::Brush*> _field_BorderColor;
    float _field_FontSize;
    uStrong<uString*> _field_Text;
    ::g::Uno::Float4 _field_TextColor;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Uno::UX::Property1*> temp_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_TextColor_inst;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    uStrong< ::g::Uno::UX::Property1*> temp1_Fill_inst;
    uStrong< ::g::Uno::UX::Property1*> this_BackgroundColor_inst;
    uStrong< ::g::Uno::UX::Property1*> this_BorderColor_inst;
    uStrong< ::g::Uno::UX::Property1*> this_FontSize_inst;
    uStrong< ::g::Uno::UX::Property1*> this_Text_inst;
    uStrong< ::g::Uno::UX::Property1*> this_TextColor_inst;

    void ctor_7();
    ::g::Fuse::Drawing::Brush* BackgroundColor();
    void BackgroundColor(::g::Fuse::Drawing::Brush* value);
    ::g::Fuse::Drawing::Brush* BorderColor();
    void BorderColor(::g::Fuse::Drawing::Brush* value);
    float FontSize();
    void FontSize(float value);
    void InitializeUX();
    void SetBackgroundColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetBorderColor(::g::Fuse::Drawing::Brush* value, uObject* origin);
    void SetFontSize(float value, uObject* origin);
    void SetText(uString* value, uObject* origin);
    void SetTextColor(::g::Uno::Float4 value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    ::g::Uno::Float4 TextColor();
    void TextColor(::g::Uno::Float4 value);
    static DropdownSelectedItem* New4();
};
// }

} // ::g
