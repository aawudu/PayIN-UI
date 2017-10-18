// This file was generated based on /Users/phoenix/Fuse/app_payin/dynamic-tab-bar/.uno/ux11/dynamic-tab-bar.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.Brush.h>
#include <Uno.UX.Property-1.h>
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct dynamictabbar_FuseDrawingStroke_Brush_Property;}

namespace g{

// internal sealed class dynamictabbar_FuseDrawingStroke_Brush_Property :241
// {
::g::Uno::UX::Property1_type* dynamictabbar_FuseDrawingStroke_Brush_Property_typeof();
void dynamictabbar_FuseDrawingStroke_Brush_Property__ctor_3_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name);
void dynamictabbar_FuseDrawingStroke_Brush_Property__Get1_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval);
void dynamictabbar_FuseDrawingStroke_Brush_Property__New1_fn(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector* name, dynamictabbar_FuseDrawingStroke_Brush_Property** __retval);
void dynamictabbar_FuseDrawingStroke_Brush_Property__get_Object_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void dynamictabbar_FuseDrawingStroke_Brush_Property__Set1_fn(dynamictabbar_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin);

struct dynamictabbar_FuseDrawingStroke_Brush_Property : ::g::Uno::UX::Property1
{
    uWeak< ::g::Fuse::Drawing::Stroke*> _obj;

    void ctor_3(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
    static dynamictabbar_FuseDrawingStroke_Brush_Property* New1(::g::Fuse::Drawing::Stroke* obj, ::g::Uno::UX::Selector name);
};
// }

} // ::g
