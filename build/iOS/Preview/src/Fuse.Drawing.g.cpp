// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingSurface_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <CoreGraphicsLib.h>
#include <Fuse.Controls.Native.ViewHandle.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Antialiasing.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.CoreGraphicsDrawHelper.h>
#include <Fuse.Drawing.CoreGraphicsSurface.h>
#include <Fuse.Drawing.CoreGraphicsSurfacePath.h>
#include <Fuse.Drawing.DrawObjectWatcher.h>
#include <Fuse.Drawing.DrawObjectWatcher.Item.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.FillRule.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.IDrawObjectWatcherFeedback.h>
#include <Fuse.Drawing.ImageFill.DrawParams.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.INativeSurfaceOwner.h>
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.ISurfaceProvider.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.LinearGradientDrawable.h>
#include <Fuse.Drawing.LinearGradientInterpolation.h>
#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.LineJoin.h>
#include <Fuse.Drawing.LineMetrics.h>
#include <Fuse.Drawing.LineMetricsImpl.h>
#include <Fuse.Drawing.LineParser.h>
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.LineSegmentFlags.h>
#include <Fuse.Drawing.LineSegments.h>
#include <Fuse.Drawing.LineSegmentType.h>
#include <Fuse.Drawing.RepeatBaker.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAdjustment.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Drawing.SurfaceManager.h>
#include <Fuse.Drawing.SurfacePath.h>
#include <Fuse.Drawing.SurfaceUtil.h>
#include <Fuse.Drawing.SVGPathParser.h>
#include <Fuse.Drawing.Token.h>
#include <Fuse.Drawing.WindingRules.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.Internal.Curves.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.IViewport.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.ImageSourceState.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualContext.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGLES/ES2/gl.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.Enumerator.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.EnumerableExtensions.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Color.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IntPtr.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[48];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Drawing{

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum Antialiasing :207
uEnumType* Antialiasing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.Antialiasing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "Gradient", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public abstract class Brush :34
// {
static void Brush_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Brush is not pinned, preparation invalid");
    ::STRINGS[1] = uString::Const("/usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno");
    ::STRINGS[2] = uString::Const("Prepare");
    type->SetFields(2,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Brush, _pinCount), 0);
    type->Reflection.SetFunctions(5,
        new uFunction("get_IsCompletelyTransparent", NULL, NULL, offsetof(Brush_type, fp_get_IsCompletelyTransparent), false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_IsPinned", NULL, (void*)Brush__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Pin", NULL, (void*)Brush__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Prepare", NULL, (void*)Brush__Prepare_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Unpin", NULL, (void*)Brush__Unpin_fn, 0, false, uVoid_typeof(), 0));
}

Brush_type* Brush_typeof()
{
    static uSStrong<Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Brush);
    options.TypeSize = sizeof(Brush_type);
    type = (Brush_type*)uClassType::New("Fuse.Drawing.Brush", options);
    type->fp_build_ = Brush_build;
    type->fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent_fn;
    type->fp_OnPinned = Brush__OnPinned_fn;
    type->fp_OnPrepare = Brush__OnPrepare_fn;
    type->fp_OnUnpinned = Brush__OnUnpinned_fn;
    return type;
}

// internal Brush() :49
void Brush__ctor_1_fn(Brush* __this)
{
    __this->ctor_1();
}

// public virtual bool get_IsCompletelyTransparent() :38
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bool get_IsPinned() :66
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected virtual void OnPinned() :77
void Brush__OnPinned_fn(Brush* __this)
{
}

// protected virtual void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :75
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
}

// protected virtual void OnUnpinned() :78
void Brush__OnUnpinned_fn(Brush* __this)
{
}

// public void Pin() :52
void Brush__Pin_fn(Brush* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :68
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void Unpin() :59
void Brush__Unpin_fn(Brush* __this)
{
    __this->Unpin();
}

// internal Brush() [instance] :49
void Brush::ctor_1()
{
    ctor_();
}

// public bool get_IsPinned() [instance] :66
bool Brush::IsPinned()
{
    return _pinCount > 0;
}

// public void Pin() [instance] :52
void Brush::Pin()
{
    uStackFrame __("Fuse.Drawing.Brush", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :68
void Brush::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    uStackFrame __("Fuse.Drawing.Brush", "Prepare(Fuse.DrawContext,float2)");

    if (!IsPinned())
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Brush is no...*/], this, ::STRINGS[1/*"/usr/local/...*/], 71, ::STRINGS[2/*"Prepare"*/]);

    OnPrepare(dc, canvasSize);
}

// public void Unpin() [instance] :59
void Brush::Unpin()
{
    uStackFrame __("Fuse.Drawing.Brush", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public sealed class BrushConverter :11
// {
// static BrushConverter() :28
static void BrushConverter__cctor__fn(uType* __type)
{
    ::g::Fuse::Marshal::AddConverter((uObject*)BrushConverter::New1());
}

static void BrushConverter_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Type_typeof();
    type->SetInterfaces(
        ::g::Fuse::Marshal__IConverter_typeof(), offsetof(BrushConverter_type, interface0));
    type->Reflection.SetFunctions(3,
        new uFunction("CanConvert", NULL, (void*)BrushConverter__CanConvert_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::TYPES[0/*Uno.Type*/]),
        new uFunction(".ctor", NULL, (void*)BrushConverter__New1_fn, 0, true, type, 0),
        new uFunction("TryConvert", NULL, (void*)BrushConverter__TryConvert_fn, 0, false, uObject_typeof(), 2, ::TYPES[0/*Uno.Type*/], uObject_typeof()));
}

BrushConverter_type* BrushConverter_typeof()
{
    static uSStrong<BrushConverter_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BrushConverter);
    options.TypeSize = sizeof(BrushConverter_type);
    type = (BrushConverter_type*)uClassType::New("Fuse.Drawing.BrushConverter", options);
    type->fp_build_ = BrushConverter_build;
    type->fp_ctor_ = (void*)BrushConverter__New1_fn;
    type->fp_cctor_ = BrushConverter__cctor__fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))BrushConverter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))BrushConverter__TryConvert_fn;
    return type;
}

// public generated BrushConverter() :11
void BrushConverter__ctor__fn(BrushConverter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t) :13
void BrushConverter__CanConvert_fn(BrushConverter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated BrushConverter New() :11
void BrushConverter__New1_fn(BrushConverter** __retval)
{
    *__retval = BrushConverter::New1();
}

// public object TryConvert(Uno.Type t, object o) :17
void BrushConverter__TryConvert_fn(BrushConverter* __this, uType* t, uObject* o, uObject** __retval)
{
    *__retval = __this->TryConvert(t, o);
}

// public generated BrushConverter() [instance] :11
void BrushConverter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance] :13
bool BrushConverter::CanConvert(uType* t)
{
    uStackFrame __("Fuse.Drawing.BrushConverter", "CanConvert(Uno.Type)");
    return ::g::Uno::Type::op_Equality(t, ::g::Fuse::Drawing::Brush_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Fuse::Drawing::Brush_typeof());
}

// public object TryConvert(Uno.Type t, object o) [instance] :17
uObject* BrushConverter::TryConvert(uType* t, uObject* o)
{
    uStackFrame __("Fuse.Drawing.BrushConverter", "TryConvert(Uno.Type,object)");

    if (CanConvert(t))
    {
        ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New2();
        b->SetColor(::g::Fuse::Marshal::ToFloat4(o));
        return b;
    }

    return NULL;
}

// public generated BrushConverter New() [static] :11
BrushConverter* BrushConverter::New1()
{
    BrushConverter* obj1 = (BrushConverter*)uNew(BrushConverter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public static class Brushes :132
// {
// static Brushes() :132
static void Brushes__cctor__fn(uType* __type)
{
    Brushes::Transparent_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Black_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Silver_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Silver());
    Brushes::Gray_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Gray());
    Brushes::White_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::White());
    Brushes::Maroon_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Maroon());
    Brushes::Red_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Red());
    Brushes::Purple_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Purple());
    Brushes::Fuchsia_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Fuchsia());
    Brushes::Green_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Green());
    Brushes::Lime_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Lime());
    Brushes::Olive_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Olive());
    Brushes::Yellow_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Yellow());
    Brushes::Navy_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Navy());
    Brushes::Blue_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Blue());
    Brushes::Teal_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Teal());
    Brushes::Aqua_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Aqua());
}

static void Brushes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Aqua_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Black_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Blue_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Fuchsia_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Gray_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Green_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Lime_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Maroon_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Navy_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Olive_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Purple_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Red_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Silver_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Teal_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Transparent_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::White_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&::g::Fuse::Drawing::Brushes::Yellow_, uFieldFlagsStatic);
    type->Reflection.SetFields(17,
        new uField("Aqua", 0),
        new uField("Black", 1),
        new uField("Blue", 2),
        new uField("Fuchsia", 3),
        new uField("Gray", 4),
        new uField("Green", 5),
        new uField("Lime", 6),
        new uField("Maroon", 7),
        new uField("Navy", 8),
        new uField("Olive", 9),
        new uField("Purple", 10),
        new uField("Red", 11),
        new uField("Silver", 12),
        new uField("Teal", 13),
        new uField("Transparent", 14),
        new uField("White", 15),
        new uField("Yellow", 16));
}

uClassType* Brushes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Brushes", options);
    type->fp_build_ = Brushes_build;
    type->fp_cctor_ = Brushes__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Aqua_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Black_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Blue_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Fuchsia_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Gray_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Green_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Lime_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Maroon_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Navy_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Olive_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Purple_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Red_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Silver_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Teal_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Transparent_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::White_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Yellow_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public static class Colors :111
// {
// static Colors() :111
static void Colors__cctor__fn(uType* __type)
{
    Colors::Transparent_ = ::g::Uno::Color::FromRgba(0U);
    Colors::Black_ = ::g::Uno::Color::FromRgba(255U);
    Colors::Silver_ = ::g::Uno::Color::FromRgba(3233857791U);
    Colors::Gray_ = ::g::Uno::Color::FromRgba(2155905279U);
    Colors::White_ = ::g::Uno::Color::FromRgba(4294967295U);
    Colors::Maroon_ = ::g::Uno::Color::FromRgba(2147483903U);
    Colors::Red_ = ::g::Uno::Color::FromRgba(4278190335U);
    Colors::Purple_ = ::g::Uno::Color::FromRgba(2147516671U);
    Colors::Fuchsia_ = ::g::Uno::Color::FromRgba(4278255615U);
    Colors::Green_ = ::g::Uno::Color::FromRgba(8388863U);
    Colors::Lime_ = ::g::Uno::Color::FromRgba(16711935U);
    Colors::Olive_ = ::g::Uno::Color::FromRgba(2155872511U);
    Colors::Yellow_ = ::g::Uno::Color::FromRgba(4294902015U);
    Colors::Navy_ = ::g::Uno::Color::FromRgba(33023U);
    Colors::Blue_ = ::g::Uno::Color::FromRgba(65535U);
    Colors::Teal_ = ::g::Uno::Color::FromRgba(8421631U);
    Colors::Aqua_ = ::g::Uno::Color::FromRgba(16777215U);
}

static void Colors_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Aqua_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Black_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Blue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Fuchsia_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Gray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Green_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Lime_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Maroon_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Navy_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Olive_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Purple_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Red_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Silver_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Teal_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Transparent_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::White_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&::g::Fuse::Drawing::Colors::Yellow_, uFieldFlagsStatic);
    type->Reflection.SetFields(17,
        new uField("Aqua", 0),
        new uField("Black", 1),
        new uField("Blue", 2),
        new uField("Fuchsia", 3),
        new uField("Gray", 4),
        new uField("Green", 5),
        new uField("Lime", 6),
        new uField("Maroon", 7),
        new uField("Navy", 8),
        new uField("Olive", 9),
        new uField("Purple", 10),
        new uField("Red", 11),
        new uField("Silver", 12),
        new uField("Teal", 13),
        new uField("Transparent", 14),
        new uField("White", 15),
        new uField("Yellow", 16));
}

uClassType* Colors_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Colors", options);
    type->fp_build_ = Colors_build;
    type->fp_cctor_ = Colors__cctor__fn;
    return type;
}

::g::Uno::Float4 Colors::Aqua_;
::g::Uno::Float4 Colors::Black_;
::g::Uno::Float4 Colors::Blue_;
::g::Uno::Float4 Colors::Fuchsia_;
::g::Uno::Float4 Colors::Gray_;
::g::Uno::Float4 Colors::Green_;
::g::Uno::Float4 Colors::Lime_;
::g::Uno::Float4 Colors::Maroon_;
::g::Uno::Float4 Colors::Navy_;
::g::Uno::Float4 Colors::Olive_;
::g::Uno::Float4 Colors::Purple_;
::g::Uno::Float4 Colors::Red_;
::g::Uno::Float4 Colors::Silver_;
::g::Uno::Float4 Colors::Teal_;
::g::Uno::Float4 Colors::Transparent_;
::g::Uno::Float4 Colors::White_;
::g::Uno::Float4 Colors::Yellow_;
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed extern class CoreGraphicsDrawHelper :673
// {
// static CoreGraphicsDrawHelper() :673
static void CoreGraphicsDrawHelper__cctor__fn(uType* __type)
{
    CoreGraphicsDrawHelper::Singleton_ = CoreGraphicsDrawHelper::New1();
}

static void CoreGraphicsDrawHelper_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsDrawHelper, _draw_2b8a7405), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsDrawHelper, DrawImageFill_VertexData_2b8a7405_1_1_1), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::CoreGraphicsDrawHelper::Singleton_, uFieldFlagsStatic);
}

uType* CoreGraphicsDrawHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(CoreGraphicsDrawHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.CoreGraphicsDrawHelper", options);
    type->fp_build_ = CoreGraphicsDrawHelper_build;
    type->fp_ctor_ = (void*)CoreGraphicsDrawHelper__New1_fn;
    type->fp_cctor_ = CoreGraphicsDrawHelper__cctor__fn;
    return type;
}

// public generated CoreGraphicsDrawHelper() :673
void CoreGraphicsDrawHelper__ctor__fn(CoreGraphicsDrawHelper* __this)
{
    __this->ctor_();
}

// public void DrawImageFill(texture2D texture) :677
void CoreGraphicsDrawHelper__DrawImageFill_fn(CoreGraphicsDrawHelper* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->DrawImageFill(texture);
}

// private generated void init_DrawCalls() :673
void CoreGraphicsDrawHelper__init_DrawCalls_fn(CoreGraphicsDrawHelper* __this)
{
    __this->init_DrawCalls();
}

// public generated CoreGraphicsDrawHelper New() :673
void CoreGraphicsDrawHelper__New1_fn(CoreGraphicsDrawHelper** __retval)
{
    *__retval = CoreGraphicsDrawHelper::New1();
}

uSStrong<CoreGraphicsDrawHelper*> CoreGraphicsDrawHelper::Singleton_;

// public generated CoreGraphicsDrawHelper() [instance] :673
void CoreGraphicsDrawHelper::ctor_()
{
    init_DrawCalls();
}

// public void DrawImageFill(texture2D texture) [instance] :677
void CoreGraphicsDrawHelper::DrawImageFill(::g::Uno::Graphics::Texture2D* texture)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsDrawHelper", "DrawImageFill(texture2D)");
    _draw_2b8a7405.DepthTestEnabled(false);
    _draw_2b8a7405.Use();
    _draw_2b8a7405.Attrib1(0, 2, DrawImageFill_VertexData_2b8a7405_1_1_1, 8, 0);
    _draw_2b8a7405.Sampler3(1, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_2b8a7405.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance] :673
void CoreGraphicsDrawHelper::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsDrawHelper", "init_DrawCalls()");
    DrawImageFill_VertexData_2b8a7405_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f))), 0);
    _draw_2b8a7405 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingSurface_bundle::CoreGraphicsDrawHelpere074f602());
}

// public generated CoreGraphicsDrawHelper New() [static] :673
CoreGraphicsDrawHelper* CoreGraphicsDrawHelper::New1()
{
    CoreGraphicsDrawHelper* obj1 = (CoreGraphicsDrawHelper*)uNew(CoreGraphicsDrawHelper_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed extern class CoreGraphicsSurface :26
// {
static void CoreGraphicsSurface_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Failed to create Surface object");
    ::STRINGS[4] = uString::Const("Non CoreGraphicSurfacePath used");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno");
    ::STRINGS[6] = uString::Const("DisposePath");
    ::STRINGS[7] = uString::Const("Duplicate dipose of SurfacePath");
    ::STRINGS[8] = uString::Const("FillPath");
    ::STRINGS[9] = uString::Const("Unprepared LinearGradient");
    ::STRINGS[10] = uString::Const("FillPathImpl");
    ::STRINGS[11] = uString::Const("Unprepared ImageFill");
    ::STRINGS[12] = uString::Const("Unsupported brush");
    ::STRINGS[2] = uString::Const("Prepare");
    ::STRINGS[13] = uString::Const("iOS/OSX does not support gradient stops outside of 0.0 to 1.0");
    ::STRINGS[14] = uString::Const("PrepareLinearGradient");
    ::STRINGS[15] = uString::Const("iOS/OSX does not support 3d or shear transforms for vector graphics");
    ::STRINGS[16] = uString::Const("PushTransform");
    ::STRINGS[17] = uString::Const("iOS/OSX does not support non-center alignment strokes");
    ::STRINGS[18] = uString::Const("StrokePath");
    ::STRINGS[19] = uString::Const("Surface.Begin was not called");
    ::STRINGS[20] = uString::Const("Object disposed");
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::IntPtr_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::IntPtr_typeof(), NULL);
    ::TYPES[7] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::IntPtr_typeof(), NULL);
    ::TYPES[8] = ::g::Fuse::Drawing::CoreGraphicsSurfacePath_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::ISolidColor_typeof();
    ::TYPES[10] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[11] = ::g::Fuse::Drawing::ImageFill_typeof();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Drawing::Surface_type, interface0));
    type->SetFields(6,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _buffer), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _context), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _drawContext), 0,
        ::TYPES[3/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>*/], offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _gradientBrushes), 0,
        ::TYPES[3/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>*/], offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _imageBrushes), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _pixelsPerPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _size), 0,
        ::TYPES[2/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/], offsetof(::g::Fuse::Drawing::CoreGraphicsSurface, _temp), 0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Drawing::CoreGraphicsSurface::_strokeWarning_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&::g::Fuse::Drawing::CoreGraphicsSurface::_transformWarn_, uFieldFlagsStatic);
}

::g::Fuse::Drawing::Surface_type* CoreGraphicsSurface_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Surface_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Surface_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CoreGraphicsSurface);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Surface_type);
    type = (::g::Fuse::Drawing::Surface_type*)uClassType::New("Fuse.Drawing.CoreGraphicsSurface", options);
    type->fp_build_ = CoreGraphicsSurface_build;
    type->fp_ctor_ = (void*)CoreGraphicsSurface__New1_fn;
    type->fp_Begin = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::DrawContext*, ::g::Uno::Graphics::Framebuffer*, float*))CoreGraphicsSurface__Begin_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::Drawing::Surface*, uObject*, int*, ::g::Fuse::Drawing::SurfacePath**))CoreGraphicsSurface__CreatePath_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Drawing::Surface*))CoreGraphicsSurface__Dispose_fn;
    type->fp_DisposePath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*))CoreGraphicsSurface__DisposePath_fn;
    type->fp_End = (void(*)(::g::Fuse::Drawing::Surface*))CoreGraphicsSurface__End_fn;
    type->fp_FillPath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Brush*))CoreGraphicsSurface__FillPath_fn;
    type->fp_PopTransform = (void(*)(::g::Fuse::Drawing::Surface*))CoreGraphicsSurface__PopTransform_fn;
    type->fp_Prepare = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*))CoreGraphicsSurface__Prepare_fn;
    type->fp_PushTransform = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Uno::Float4x4*))CoreGraphicsSurface__PushTransform_fn;
    type->fp_StrokePath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Stroke*))CoreGraphicsSurface__StrokePath_fn;
    type->fp_Unprepare = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*))CoreGraphicsSurface__Unprepare_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CoreGraphicsSurface__Dispose_fn;
    return type;
}

// public CoreGraphicsSurface() :35
void CoreGraphicsSurface__ctor_1_fn(CoreGraphicsSurface* __this)
{
    __this->ctor_1();
}

// private float2 AddSegments(Uno.IntPtr path, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, float2 prevPoint) :179
void CoreGraphicsSurface__AddSegments_fn(CoreGraphicsSurface* __this, void** path, uObject* segments, ::g::Uno::Float2* prevPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AddSegments(*path, segments, *prevPoint);
}

// public override sealed void Begin(Fuse.DrawContext dc, framebuffer fb, float pixelsPerPoint) :87
void CoreGraphicsSurface__Begin_fn(CoreGraphicsSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "Begin(Fuse.DrawContext,framebuffer,float)");
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->VerifyCreated();
    __this->_drawContext = dc;
    __this->_buffer = fb;
    __this->_pixelsPerPoint = pixelsPerPoint_;
    __this->_size = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(fb)->Size()), pixelsPerPoint_);

    if (!CoreGraphicsSurface::BeginImpl(__this->_context, fb->Size().X, fb->Size().Y, ::g::OpenGL::GLTextureHandle::op_Explicit2(uPtr(fb->ColorBuffer())->GLTextureHandle())))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Failed to c...*/]));
}

// private static bool BeginImpl(Uno.IntPtr cp, int width, int height, int glTexture) :99
void CoreGraphicsSurface__BeginImpl_fn(void** cp, int* width, int* height, int* glTexture, bool* __retval)
{
    *__retval = CoreGraphicsSurface::BeginImpl(*cp, *width, *height, *glTexture);
}

// private static void CGFloatDeleteArray(Uno.IntPtr a) :542
void CoreGraphicsSurface__CGFloatDeleteArray_fn(void** a)
{
    CoreGraphicsSurface::CGFloatDeleteArray(*a);
}

// private static Uno.IntPtr CGFloatNewArray(int size) :536
void CoreGraphicsSurface__CGFloatNewArray_fn(int* size, void** __retval)
{
    *__retval = CoreGraphicsSurface::CGFloatNewArray(*size);
}

// private static void CGFloatSet(Uno.IntPtr a, int index, double value) :548
void CoreGraphicsSurface__CGFloatSet_fn(void** a, int* index, double* value)
{
    CoreGraphicsSurface::CGFloatSet(*a, *index, *value);
}

// private static void ConcatTransform(Uno.IntPtr cp, float m11, float m12, float m21, float m22, float m31, float m32) :648
void CoreGraphicsSurface__ConcatTransform_fn(void** cp, float* m11, float* m12, float* m21, float* m22, float* m31, float* m32)
{
    CoreGraphicsSurface::ConcatTransform(*cp, *m11, *m12, *m21, *m22, *m31, *m32);
}

// private static Uno.IntPtr CreateLinearGradient(Uno.IntPtr cp, Uno.IntPtr colors, Uno.IntPtr stops, int count) :593
void CoreGraphicsSurface__CreateLinearGradient_fn(void** cp, void** colors, void** stops, int* count, void** __retval)
{
    *__retval = CoreGraphicsSurface::CreateLinearGradient(*cp, *colors, *stops, *count);
}

// public override sealed Fuse.Drawing.SurfacePath CreatePath(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, [Fuse.Drawing.FillRule fillRule]) :171
void CoreGraphicsSurface__CreatePath_fn(CoreGraphicsSurface* __this, uObject* segments, int* fillRule, ::g::Fuse::Drawing::SurfacePath** __retval)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "CreatePath(Uno.Collections.IList<Fuse.Drawing.LineSegment>,[Fuse.Drawing.FillRule])");
    ::g::Fuse::Drawing::CoreGraphicsSurfacePath* collection3;
    int fillRule_ = *fillRule;
    void* path = CoreGraphicsSurface::PathCreateMutable();
    __this->AddSegments(path, segments, ::g::Uno::Float2__New1(0.0f));
    return *__retval = (collection3 = ::g::Fuse::Drawing::CoreGraphicsSurfacePath::New1(), uPtr(collection3)->Path = path, uPtr(collection3)->FillRule = fillRule_, collection3), void();
}

// private static Uno.IntPtr CreateStrokedPath(Uno.IntPtr path, float width, int fjoin, int fcap, float miterLimit) :521
void CoreGraphicsSurface__CreateStrokedPath_fn(void** path, float* width, int* fjoin, int* fcap, float* miterLimit, void** __retval)
{
    *__retval = CoreGraphicsSurface::CreateStrokedPath(*path, *width, *fjoin, *fcap, *miterLimit);
}

// private static void DeleteContext(Uno.IntPtr cp) :77
void CoreGraphicsSurface__DeleteContext_fn(void** cp)
{
    CoreGraphicsSurface::DeleteContext(*cp);
}

// public override sealed void Dispose() :40
void CoreGraphicsSurface__Dispose_fn(CoreGraphicsSurface* __this)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "Dispose()");
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, void*> ret6;
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, void*> ret7;

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, void*> enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_gradientBrushes), &ret6), ret6); enum1.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Drawing::Brush*>, void*> item = enum1.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>.Enumerator*/]);
        CoreGraphicsSurface::ReleaseGradient(__this->_context, item.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Drawing.Brush, Uno.IntPtr>*/]));
    }

    uPtr(__this->_gradientBrushes)->Clear();

    for (::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, void*> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_imageBrushes), &ret7), ret7); enum2.MoveNext(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>.Enumerator*/]); )
    {
        ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Drawing::Brush*>, void*> item1 = enum2.Current(::TYPES[6/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>.Enumerator*/]);
        CoreGraphicsSurface::ReleaseImage(__this->_context, item1.Value(::TYPES[7/*Uno.Collections.KeyValuePair<Fuse.Drawing.Brush, Uno.IntPtr>*/]));
    }

    uPtr(__this->_imageBrushes)->Clear();
    CoreGraphicsSurface::DeleteContext(__this->_context);
    __this->_context = ::g::Uno::IntPtr::Zero_;
}

// public override sealed void DisposePath(Fuse.Drawing.SurfacePath path) :223
void CoreGraphicsSurface__DisposePath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "DisposePath(Fuse.Drawing.SurfacePath)");
    ::g::Fuse::Drawing::CoreGraphicsSurfacePath* cgPath = uAs< ::g::Fuse::Drawing::CoreGraphicsSurfacePath*>(path, ::TYPES[8/*Fuse.Drawing.CoreGraphicsSurfacePath*/]);

    if (cgPath == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"Non CoreGra...*/], path, ::STRINGS[5/*"/usr/local/...*/], 228, ::STRINGS[6/*"DisposePath"*/]);
        return;
    }

    if (::g::Uno::IntPtr::op_Equality(uPtr(cgPath)->Path, ::g::Uno::IntPtr::Zero_))
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[7/*"Duplicate d...*/], path, ::STRINGS[5/*"/usr/local/...*/], 234, ::STRINGS[6/*"DisposePath"*/]);
        return;
    }

    CoreGraphicsSurface::PathRelease(uPtr(cgPath)->Path);
    cgPath->Path = ::g::Uno::IntPtr::Zero_;
}

// public override sealed void End() :145
void CoreGraphicsSurface__End_fn(CoreGraphicsSurface* __this)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "End()");
    __this->VerifyBegun();
    CoreGraphicsSurface::EndImpl(__this->_context);
    __this->_buffer = NULL;
}

// private static void EndImpl(Uno.IntPtr cp) :153
void CoreGraphicsSurface__EndImpl_fn(void** cp)
{
    CoreGraphicsSurface::EndImpl(*cp);
}

// public override sealed void FillPath(Fuse.Drawing.SurfacePath path, Fuse.Drawing.Brush fill) :429
void CoreGraphicsSurface__FillPath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Brush* fill)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "FillPath(Fuse.Drawing.SurfacePath,Fuse.Drawing.Brush)");
    __this->VerifyBegun();
    ::g::Fuse::Drawing::CoreGraphicsSurfacePath* cgPath = uAs< ::g::Fuse::Drawing::CoreGraphicsSurfacePath*>(path, ::TYPES[8/*Fuse.Drawing.CoreGraphicsSurfacePath*/]);

    if (cgPath == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"Non CoreGra...*/], path, ::STRINGS[5/*"/usr/local/...*/], 435, ::STRINGS[8/*"FillPath"*/]);
        return;
    }

    __this->FillPathImpl(uPtr(cgPath)->Path, fill, uPtr(cgPath)->FillRule);
}

// private static void FillPathImage(Uno.IntPtr cp, Uno.IntPtr path, Uno.IntPtr image, float originX, float originY, float tileSizeX, float tileSizeY, bool eoFill) :577
void CoreGraphicsSurface__FillPathImage_fn(void** cp, void** path, void** image, float* originX, float* originY, float* tileSizeX, float* tileSizeY, bool* eoFill)
{
    CoreGraphicsSurface::FillPathImage(*cp, *path, *image, *originX, *originY, *tileSizeX, *tileSizeY, *eoFill);
}

// private void FillPathImpl(Uno.IntPtr path, Fuse.Drawing.Brush fill, Fuse.Drawing.FillRule fillRule) :441
void CoreGraphicsSurface__FillPathImpl_fn(CoreGraphicsSurface* __this, void** path, ::g::Fuse::Drawing::Brush* fill, int* fillRule)
{
    __this->FillPathImpl(*path, fill, *fillRule);
}

// private static void FillPathLinearGradient(Uno.IntPtr cp, Uno.IntPtr path, Uno.IntPtr gradient, float sx, float sy, float ex, float ey, bool eoFill) :564
void CoreGraphicsSurface__FillPathLinearGradient_fn(void** cp, void** path, void** gradient, float* sx, float* sy, float* ex, float* ey, bool* eoFill)
{
    CoreGraphicsSurface::FillPathLinearGradient(*cp, *path, *gradient, *sx, *sy, *ex, *ey, *eoFill);
}

// private static void FillPathSolidColor(Uno.IntPtr cp, Uno.IntPtr path, float r, float g, float b, float a, bool eoFill) :554
void CoreGraphicsSurface__FillPathSolidColor_fn(void** cp, void** path, float* r, float* g, float* b, float* a, bool* eoFill)
{
    CoreGraphicsSurface::FillPathSolidColor(*cp, *path, *r, *g, *b, *a, *eoFill);
}

// private static Uno.IntPtr LoadImagePoor(Uno.IntPtr cp, int width, int height) :394
void CoreGraphicsSurface__LoadImagePoor_fn(void** cp, int* width, int* height, void** __retval)
{
    *__retval = CoreGraphicsSurface::LoadImagePoor(*cp, *width, *height);
}

// public CoreGraphicsSurface New() :35
void CoreGraphicsSurface__New1_fn(CoreGraphicsSurface** __retval)
{
    *__retval = CoreGraphicsSurface::New1();
}

// private static Uno.IntPtr NewContext() :69
void CoreGraphicsSurface__NewContext_fn(void** __retval)
{
    *__retval = CoreGraphicsSurface::NewContext();
}

// private static void PathClose(Uno.IntPtr path) :273
void CoreGraphicsSurface__PathClose_fn(void** path)
{
    CoreGraphicsSurface::PathClose(*path);
}

// private static Uno.IntPtr PathCreateMutable() :243
void CoreGraphicsSurface__PathCreateMutable_fn(void** __retval)
{
    *__retval = CoreGraphicsSurface::PathCreateMutable();
}

// private static void PathCurveTo(Uno.IntPtr path, float x, float y, float ax, float ay, float bx, float by) :267
void CoreGraphicsSurface__PathCurveTo_fn(void** path, float* x, float* y, float* ax, float* ay, float* bx, float* by)
{
    CoreGraphicsSurface::PathCurveTo(*path, *x, *y, *ax, *ay, *bx, *by);
}

// private static void PathLineTo(Uno.IntPtr path, float x, float y) :261
void CoreGraphicsSurface__PathLineTo_fn(void** path, float* x, float* y)
{
    CoreGraphicsSurface::PathLineTo(*path, *x, *y);
}

// private static void PathMoveTo(Uno.IntPtr path, float x, float y) :255
void CoreGraphicsSurface__PathMoveTo_fn(void** path, float* x, float* y)
{
    CoreGraphicsSurface::PathMoveTo(*path, *x, *y);
}

// private static void PathRelease(Uno.IntPtr path) :249
void CoreGraphicsSurface__PathRelease_fn(void** path)
{
    CoreGraphicsSurface::PathRelease(*path);
}

// private float2 PixelFromPoint(float2 point) :165
void CoreGraphicsSurface__PixelFromPoint_fn(CoreGraphicsSurface* __this, ::g::Uno::Float2* point, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelFromPoint(*point);
}

// public override sealed void PopTransform() :655
void CoreGraphicsSurface__PopTransform_fn(CoreGraphicsSurface* __this)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "PopTransform()");
    __this->VerifyBegun();
    CoreGraphicsSurface::RestoreContextState(__this->_context);
}

// public override sealed void Prepare(Fuse.Drawing.Brush brush) :278
void CoreGraphicsSurface__Prepare_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "Prepare(Fuse.Drawing.Brush)");
    __this->VerifyCreated();
    __this->Unprepare(brush);

    if (uIs(brush, ::TYPES[9/*Fuse.Drawing.ISolidColor*/]))
        return;

    ::g::Fuse::Drawing::LinearGradient* linearGradient = uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[10/*Fuse.Drawing.LinearGradient*/]);

    if (linearGradient != NULL)
    {
        __this->PrepareLinearGradient(linearGradient);
        return;
    }

    ::g::Fuse::Drawing::ImageFill* imageFill = uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[11/*Fuse.Drawing.ImageFill*/]);

    if (imageFill != NULL)
    {
        __this->PrepareImageFill(imageFill);
        return;
    }

    ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Unsupported...*/], brush, ::STRINGS[5/*"/usr/local/...*/], 299, ::STRINGS[2/*"Prepare"*/], NULL);
}

// private void PrepareImageFill(Fuse.Drawing.ImageFill img) :334
void CoreGraphicsSurface__PrepareImageFill_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::ImageFill* img)
{
    __this->PrepareImageFill(img);
}

// private void PrepareLinearGradient(Fuse.Drawing.LinearGradient lg) :303
void CoreGraphicsSurface__PrepareLinearGradient_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::LinearGradient* lg)
{
    __this->PrepareLinearGradient(lg);
}

// public override sealed void PushTransform(float4x4 t) :613
void CoreGraphicsSurface__PushTransform_fn(CoreGraphicsSurface* __this, ::g::Uno::Float4x4* t)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "PushTransform(float4x4)");
    ::g::Uno::Float4x4 t_ = *t;
    __this->VerifyBegun();
    CoreGraphicsSurface::SaveContextState(__this->_context);
    float zeroTolerance = 1e-05f;

    if (!CoreGraphicsSurface::_transformWarn_ && (((((((((::g::Uno::Math::Abs1(t_.M13) > 1e-05f) || (::g::Uno::Math::Abs1(t_.M14) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M23) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M24) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M31) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M32) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M34) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M43) > 1e-05f)) || (::g::Uno::Math::Abs1(t_.M44 - 1.0f) > 1e-05f)))
    {
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[15/*"iOS/OSX doe...*/], __this, ::STRINGS[5/*"/usr/local/...*/], 631, ::STRINGS[16/*"PushTransform"*/]);
        CoreGraphicsSurface::_transformWarn_ = true;
    }

    CoreGraphicsSurface::ConcatTransform(__this->_context, t_.M11, t_.M12, t_.M21, t_.M22, t_.M41 * __this->_pixelsPerPoint, t_.M42 * __this->_pixelsPerPoint);
}

// private static void ReleaseGradient(Uno.IntPtr cp, Uno.IntPtr gradient) :601
void CoreGraphicsSurface__ReleaseGradient_fn(void** cp, void** gradient)
{
    CoreGraphicsSurface::ReleaseGradient(*cp, *gradient);
}

// private static void ReleaseImage(Uno.IntPtr cp, Uno.IntPtr gradient) :607
void CoreGraphicsSurface__ReleaseImage_fn(void** cp, void** gradient)
{
    CoreGraphicsSurface::ReleaseImage(*cp, *gradient);
}

// private static void RestoreContextState(Uno.IntPtr cp) :662
void CoreGraphicsSurface__RestoreContextState_fn(void** cp)
{
    CoreGraphicsSurface::RestoreContextState(*cp);
}

// private static void SaveContextState(Uno.IntPtr cp) :641
void CoreGraphicsSurface__SaveContextState_fn(void** cp)
{
    CoreGraphicsSurface::SaveContextState(*cp);
}

// public override sealed void StrokePath(Fuse.Drawing.SurfacePath path, Fuse.Drawing.Stroke stroke) :495
void CoreGraphicsSurface__StrokePath_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Stroke* stroke)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "StrokePath(Fuse.Drawing.SurfacePath,Fuse.Drawing.Stroke)");
    __this->VerifyBegun();

    if (((uPtr(stroke)->Offset() != 0.0f) || (uPtr(stroke)->Alignment() != 0)) && !CoreGraphicsSurface::_strokeWarning_)
    {
        CoreGraphicsSurface::_strokeWarning_ = true;
        ::g::Fuse::Diagnostics::UserWarning(::STRINGS[17/*"iOS/OSX doe...*/], stroke, ::STRINGS[5/*"/usr/local/...*/], 504, ::STRINGS[18/*"StrokePath"*/]);
    }

    ::g::Fuse::Drawing::CoreGraphicsSurfacePath* cgPath = uAs< ::g::Fuse::Drawing::CoreGraphicsSurfacePath*>(path, ::TYPES[8/*Fuse.Drawing.CoreGraphicsSurfacePath*/]);

    if (cgPath == NULL)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[4/*"Non CoreGra...*/], path, ::STRINGS[5/*"/usr/local/...*/], 510, ::STRINGS[18/*"StrokePath"*/]);
        return;
    }

    void* strokedPath = CoreGraphicsSurface::CreateStrokedPath(uPtr(cgPath)->Path, uPtr(stroke)->Width() * __this->_pixelsPerPoint, uPtr(stroke)->LineJoin(), uPtr(stroke)->LineCap(), uPtr(stroke)->LineJoinMiterLimit());
    __this->FillPathImpl(strokedPath, stroke->Brush(), 0);
    CoreGraphicsSurface::PathRelease(strokedPath);
}

// public override sealed void Unprepare(Fuse.Drawing.Brush brush) :412
void CoreGraphicsSurface__Unprepare_fn(CoreGraphicsSurface* __this, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "Unprepare(Fuse.Drawing.Brush)");
    bool ret10;
    bool ret11;
    bool ret12;
    bool ret13;
    void* ip;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_gradientBrushes), brush, &ip, &ret10), ret10))
    {
        __this->VerifyCreated();
        CoreGraphicsSurface::ReleaseGradient(__this->_context, ip);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_gradientBrushes), brush, &ret11);
    }

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_imageBrushes), brush, &ip, &ret12), ret12))
    {
        __this->VerifyCreated();
        CoreGraphicsSurface::ReleaseImage(__this->_context, ip);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_imageBrushes), brush, &ret13);
    }
}

// private void VerifyBegun() :62
void CoreGraphicsSurface__VerifyBegun_fn(CoreGraphicsSurface* __this)
{
    __this->VerifyBegun();
}

// private void VerifyCreated() :56
void CoreGraphicsSurface__VerifyCreated_fn(CoreGraphicsSurface* __this)
{
    __this->VerifyCreated();
}

bool CoreGraphicsSurface::_strokeWarning_;
bool CoreGraphicsSurface::_transformWarn_;

// public CoreGraphicsSurface() [instance] :35
void CoreGraphicsSurface::ctor_1()
{
    _temp = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/]));
    _gradientBrushes = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>*/]));
    _imageBrushes = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[3/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Uno.IntPtr>*/]));
    ctor_();
    _context = CoreGraphicsSurface::NewContext();
}

// private float2 AddSegments(Uno.IntPtr path, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, float2 prevPoint) [instance] :179
::g::Uno::Float2 CoreGraphicsSurface::AddSegments(void* path, uObject* segments, ::g::Uno::Float2 prevPoint)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "AddSegments(Uno.IntPtr,Uno.Collections.IList<Fuse.Drawing.LineSegment>,float2)");
    ::g::Fuse::Drawing::LineSegment ret5;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])); ++i)
    {
        ::g::Fuse::Drawing::LineSegment seg = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int>(i), &ret5), ret5);
        ::g::Uno::Float2 to = PixelFromPoint(seg.To);

        switch (seg.Type)
        {
            case 0:
            {
                CoreGraphicsSurface::PathMoveTo(path, to.X, to.Y);
                break;
            }
            case 1:
            {
                CoreGraphicsSurface::PathLineTo(path, to.X, to.Y);
                break;
            }
            case 2:
            {
                ::g::Uno::Float2 a = PixelFromPoint(seg.A);
                ::g::Uno::Float2 b = PixelFromPoint(seg.B);
                CoreGraphicsSurface::PathCurveTo(path, to.X, to.Y, a.X, a.Y, b.X, b.Y);
                break;
            }
            case 3:
            {
                uPtr(_temp)->Clear();
                ::g::Fuse::Drawing::SurfaceUtil::EllipticArcToBezierCurve1(prevPoint, seg, (uObject*)_temp);
                prevPoint = AddSegments(path, (uObject*)_temp, prevPoint);
                break;
            }
            case 4:
            {
                CoreGraphicsSurface::PathClose(path);
                break;
            }
        }

        prevPoint = seg.To;
    }

    return prevPoint;
}

// private void FillPathImpl(Uno.IntPtr path, Fuse.Drawing.Brush fill, Fuse.Drawing.FillRule fillRule) [instance] :441
void CoreGraphicsSurface::FillPathImpl(void* path, ::g::Fuse::Drawing::Brush* fill, int fillRule)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "FillPathImpl(Uno.IntPtr,Fuse.Drawing.Brush,Fuse.Drawing.FillRule)");
    bool ret8;
    bool ret9;
    bool eoFill = fillRule == 1;
    uObject* solidColor = uAs<uObject*>(fill, ::TYPES[9/*Fuse.Drawing.ISolidColor*/]);

    if (solidColor != NULL)
    {
        ::g::Uno::Float4 color = ::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr(solidColor), ::TYPES[9/*Fuse.Drawing.ISolidColor*/]));
        CoreGraphicsSurface::FillPathSolidColor(_context, path, color.X, color.Y, color.Z, color.W, eoFill);
        return;
    }

    ::g::Fuse::Drawing::LinearGradient* linearGradient = uAs< ::g::Fuse::Drawing::LinearGradient*>(fill, ::TYPES[10/*Fuse.Drawing.LinearGradient*/]);

    if (linearGradient != NULL)
    {
        void* gradient;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_gradientBrushes), fill, &gradient, &ret8), ret8))
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[9/*"Unprepared ...*/], fill, ::STRINGS[5/*"/usr/local/...*/], 459, ::STRINGS[10/*"FillPathImpl"*/]);
            return;
        }

        ::g::Uno::Float4 ends = ::g::Uno::Float4__op_Multiply1(uPtr(linearGradient)->GetEffectiveEndPoints(ElementSize()), _pixelsPerPoint);
        CoreGraphicsSurface::FillPathLinearGradient(_context, path, gradient, ends.Item(0), ends.Item(1), ends.Item(2), ends.Item(3), eoFill);
        return;
    }

    ::g::Fuse::Drawing::ImageFill* imageFill = uAs< ::g::Fuse::Drawing::ImageFill*>(fill, ::TYPES[11/*Fuse.Drawing.ImageFill*/]);

    if (imageFill != NULL)
    {
        void* image;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_imageBrushes), fill, &image, &ret9), ret9))
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[11/*"Unprepared ...*/], fill, ::STRINGS[5/*"/usr/local/...*/], 474, ::STRINGS[10/*"FillPathImpl"*/]);
            return;
        }

        ::g::Fuse::Internal::SizingContainer* sizing = uPtr(imageFill)->SizingContainer();
        uPtr(sizing)->absoluteZoom = _pixelsPerPoint;
        ::g::Uno::Float2 imageSize = uPtr(imageFill->Source())->Size();
        ::g::Uno::Float2 scale = sizing->CalcScale(ElementSize(), imageSize);
        ::g::Uno::Float2 origin = sizing->CalcOrigin(ElementSize(), ::g::Uno::Float2__op_Multiply2(imageSize, scale));
        ::g::Uno::Float2 tileSize = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply1(imageSize, _pixelsPerPoint), scale);
        ::g::Uno::Float2 pixelOrigin = ::g::Uno::Float2__op_Multiply1(origin, _pixelsPerPoint);
        CoreGraphicsSurface::FillPathImage(_context, path, image, pixelOrigin.X, pixelOrigin.Y, tileSize.X, tileSize.Y, eoFill);
        return;
    }

    ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Unsupported...*/], fill, ::STRINGS[5/*"/usr/local/...*/], 491, ::STRINGS[10/*"FillPathImpl"*/], NULL);
}

// private float2 PixelFromPoint(float2 point) [instance] :165
::g::Uno::Float2 CoreGraphicsSurface::PixelFromPoint(::g::Uno::Float2 point)
{
    return ::g::Uno::Float2__op_Multiply1(point, _pixelsPerPoint);
}

// private void PrepareImageFill(Fuse.Drawing.ImageFill img) [instance] :334
void CoreGraphicsSurface::PrepareImageFill(::g::Fuse::Drawing::ImageFill* img)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "PrepareImageFill(Fuse.Drawing.ImageFill)");
    ::g::Fuse::Resources::ImageSource* src = uPtr(img)->Source();
    ::g::Uno::Graphics::Texture2D* tex = uPtr(src)->GetTexture();

    if (tex == NULL)
        return;

    void* imageRef;
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(uPtr(src)->PixelSize(), 3, false);
    uPtr(_drawContext)->PushRenderTarget(fb);
    uPtr(::g::Fuse::Drawing::CoreGraphicsDrawHelper::Singleton())->DrawImageFill(tex);
    imageRef = CoreGraphicsSurface::LoadImagePoor(_context, src->PixelSize().X, src->PixelSize().Y);
    ::g::Fuse::FramebufferPool::Release(fb);
    uPtr(_drawContext)->PopRenderTarget();
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_imageBrushes), img, uCRef(imageRef));
}

// private void PrepareLinearGradient(Fuse.Drawing.LinearGradient lg) [instance] :303
void CoreGraphicsSurface::PrepareLinearGradient(::g::Fuse::Drawing::LinearGradient* lg)
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "PrepareLinearGradient(Fuse.Drawing.LinearGradient)");
    uArray* stops = uPtr(lg)->SortedStops();
    void* colors = CoreGraphicsSurface::CGFloatNewArray(uPtr(stops)->Length() * 4);
    void* offsets = CoreGraphicsSurface::CGFloatNewArray(stops->Length());

    for (int i = 0; i < stops->Length(); ++i)
    {
        ::g::Fuse::Drawing::GradientStop* stop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        CoreGraphicsSurface::CGFloatSet(colors, i * 4, (double)uPtr(stop)->Color().X);
        CoreGraphicsSurface::CGFloatSet(colors, (i * 4) + 1, (double)stop->Color().Y);
        CoreGraphicsSurface::CGFloatSet(colors, (i * 4) + 2, (double)stop->Color().Z);
        CoreGraphicsSurface::CGFloatSet(colors, (i * 4) + 3, (double)stop->Color().W);
        CoreGraphicsSurface::CGFloatSet(offsets, i, (double)::g::Uno::Math::Clamp1(stop->Offset(), 0.0f, 1.0f));

        if ((stop->Offset() > 1.0f) || (stop->Offset() < 0.0f))
            ::g::Fuse::Diagnostics::UserWarning(::STRINGS[13/*"iOS/OSX doe...*/], uBox(::g::Uno::Float_typeof(), uPtr(stop)->Offset()), ::STRINGS[5/*"/usr/local/...*/], 319, ::STRINGS[14/*"PrepareLine...*/]);
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_gradientBrushes), lg, uCRef(CoreGraphicsSurface::CreateLinearGradient(_context, colors, offsets, stops->Length())));
    CoreGraphicsSurface::CGFloatDeleteArray(colors);
    CoreGraphicsSurface::CGFloatDeleteArray(offsets);
}

// private void VerifyBegun() [instance] :62
void CoreGraphicsSurface::VerifyBegun()
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "VerifyBegun()");

    if (_buffer == NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[19/*"Surface.Beg...*/]));
}

// private void VerifyCreated() [instance] :56
void CoreGraphicsSurface::VerifyCreated()
{
    uStackFrame __("Fuse.Drawing.CoreGraphicsSurface", "VerifyCreated()");

    if (::g::Uno::IntPtr::op_Equality(_context, ::g::Uno::IntPtr::Zero_))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[20/*"Object disp...*/]));
}

// private static bool BeginImpl(Uno.IntPtr cp, int width, int height, int glTexture) [static] :99
bool CoreGraphicsSurface::BeginImpl(void* cp, int width, int height, int glTexture)
{
    auto ctx = (CGLib::Context*)cp;
    auto bytesPerRow = width * 4;
    auto byteCount = bytesPerRow * height;
    
    ctx->GLTexture = glTexture;
    
    //can we reuse the last context?
    if (ctx->Context && ctx->Width == width && ctx->Height == height)
    {
    	memset(ctx->BitmapData, 0, byteCount);
    	if (!ctx->ResetState())
    	{
    		::g::Fuse::Diagnostics::InternalError(uString::Utf8("Failed to reset  state"), NULL, uString::Utf8(__FILE__), __LINE__, uString::Utf8(""));
    	}
    	ctx->SaveState();
    	return true;
    }
    else if (ctx->Context)
    {
    	ctx->ReleaseContext();
    }
    
    ctx->Width = width;
    ctx->Height = height;
    
    ctx->BitmapData = malloc(byteCount);
    if (!ctx->BitmapData)
    {
    	::g::Fuse::Diagnostics::InternalError(uString::Utf8("Failed to allocate bitmap data"), NULL, uString::Utf8(__FILE__), __LINE__, uString::Utf8(""));
    	return false;
    }
    memset(ctx->BitmapData, 0, byteCount);
    
    ctx->Context = CGBitmapContextCreate(ctx->BitmapData, ctx->Width, ctx->Height, 8,
    	bytesPerRow, ctx->ColorSpace, kCGImageAlphaPremultipliedLast);
    if (!ctx->Context) 
    {
    	::g::Fuse::Diagnostics::InternalError(uString::Utf8("Failed to create CGBitmapContext"), NULL, uString::Utf8(__FILE__), __LINE__, uString::Utf8(""));
    	return false;
    }
    ctx->SaveState();
    return true;
}

// private static void CGFloatDeleteArray(Uno.IntPtr a) [static] :542
void CoreGraphicsSurface::CGFloatDeleteArray(void* a)
{
    return delete[]((CGFloat*)a);
}

// private static Uno.IntPtr CGFloatNewArray(int size) [static] :536
void* CoreGraphicsSurface::CGFloatNewArray(int size)
{
    return new CGFloat[size];
}

// private static void CGFloatSet(Uno.IntPtr a, int index, double value) [static] :548
void CoreGraphicsSurface::CGFloatSet(void* a, int index, double value)
{
    ((CGFloat*)a)[index] = (CGFloat)value;
}

// private static void ConcatTransform(Uno.IntPtr cp, float m11, float m12, float m21, float m22, float m31, float m32) [static] :648
void CoreGraphicsSurface::ConcatTransform(void* cp, float m11, float m12, float m21, float m22, float m31, float m32)
{
    auto ctx = (CGLib::Context*)cp;
    auto ctm = CGAffineTransformMake(m11, m12, m21, m22, m31, m32);
    CGContextConcatCTM(ctx->Context, ctm);
}

// private static Uno.IntPtr CreateLinearGradient(Uno.IntPtr cp, Uno.IntPtr colors, Uno.IntPtr stops, int count) [static] :593
void* CoreGraphicsSurface::CreateLinearGradient(void* cp, void* colors, void* stops, int count)
{
    auto ctx = (CGLib::Context*)cp;
    return CGGradientCreateWithColorComponents(ctx->ColorSpace, 
    	(CGFloat*)colors, (CGFloat*)stops, count);
}

// private static Uno.IntPtr CreateStrokedPath(Uno.IntPtr path, float width, int fjoin, int fcap, float miterLimit) [static] :521
void* CoreGraphicsSurface::CreateStrokedPath(void* path, float width, int fjoin, int fcap, float miterLimit)
{
    //supported by test SurfaceTest.EnumChecks
    CGLineJoin joinMap[] = { kCGLineJoinMiter, kCGLineJoinRound, kCGLineJoinBevel };
    auto join = joinMap[std::max(0,std::min(2,fjoin))];
    CGLineCap capMap[] = { kCGLineCapButt, kCGLineCapRound, kCGLineCapSquare };
    auto cap = capMap[std::max(0,std::min(2,fcap))];
    
    auto res = CGPathCreateCopyByStrokingPath( (CGPathRef)path, nullptr, 
    	width, cap, join, miterLimit);
    return (void*)res;
}

// private static void DeleteContext(Uno.IntPtr cp) [static] :77
void CoreGraphicsSurface::DeleteContext(void* cp)
{
    auto ctx = (CGLib::Context*)cp;
    CGColorSpaceRelease(ctx->ColorSpace);
    
    if (ctx->Context) 
    	ctx->ReleaseContext();
    delete ctx;
}

// private static void EndImpl(Uno.IntPtr cp) [static] :153
void CoreGraphicsSurface::EndImpl(void* cp)
{
    auto ctx = (CGLib::Context*)cp;
    glBindTexture(GL_TEXTURE_2D, ctx->GLTexture);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, ctx->Width, ctx->Height, 0, GL_RGBA, 
    	GL_UNSIGNED_BYTE, ctx->BitmapData);
    	
    //There's no indication the context reuse is actually faster, and since it keeps resources
    //around it's been disabled for now
    ctx->ReleaseContext();
}

// private static void FillPathImage(Uno.IntPtr cp, Uno.IntPtr path, Uno.IntPtr image, float originX, float originY, float tileSizeX, float tileSizeY, bool eoFill) [static] :577
void CoreGraphicsSurface::FillPathImage(void* cp, void* path, void* image, float originX, float originY, float tileSizeX, float tileSizeY, bool eoFill)
{
    auto ctx = (CGLib::Context*)cp;
    ctx->SaveState(); //no other way to restore clip
    
    ctx->ClipPath((CGPathRef)path, eoFill);
    
    CGContextDrawTiledImage(ctx->Context, 
    	CGRectMake(originX, originY, tileSizeX, tileSizeY), (CGImageRef)image );
    
    ctx->RestoreState();
}

// private static void FillPathLinearGradient(Uno.IntPtr cp, Uno.IntPtr path, Uno.IntPtr gradient, float sx, float sy, float ex, float ey, bool eoFill) [static] :564
void CoreGraphicsSurface::FillPathLinearGradient(void* cp, void* path, void* gradient, float sx, float sy, float ex, float ey, bool eoFill)
{
    auto ctx = (CGLib::Context*)cp;
    
    //clip to path
    ctx->ClipPath((CGPathRef)path, eoFill);
    
    CGContextDrawLinearGradient(ctx->Context, (CGGradientRef)gradient, CGPoint{sx,sy}, CGPoint{ex,ey},
    	kCGGradientDrawsBeforeStartLocation | kCGGradientDrawsAfterEndLocation);
}

// private static void FillPathSolidColor(Uno.IntPtr cp, Uno.IntPtr path, float r, float g, float b, float a, bool eoFill) [static] :554
void CoreGraphicsSurface::FillPathSolidColor(void* cp, void* path, float r, float g, float b, float a, bool eoFill)
{
    auto ctx = (CGLib::Context*)cp;
    CGFloat color[] = {r,g,b,a};
    CGContextSetFillColorWithColor(ctx->Context, CGColorCreate(ctx->ColorSpace, color));
    
    ctx->FillPath((CGPathRef)path, eoFill);
}

// private static Uno.IntPtr LoadImagePoor(Uno.IntPtr cp, int width, int height) [static] :394
void* CoreGraphicsSurface::LoadImagePoor(void* cp, int width, int height)
{
    auto ctx = (CGLib::Context*)cp;
    int size = width * height * 4;
    auto pixelData = new UInt8[size];
    glReadPixels(0,0, width, height, GL_RGBA, GL_UNSIGNED_BYTE, pixelData);
    
    CFDataRef data = CFDataCreate(NULL, pixelData, size);
    CGDataProviderRef provider = CGDataProviderCreateWithCFData(data);
    CGImageRef imageRef = CGImageCreate(width, height, 8, 32, width * 4, ctx->ColorSpace,
    	kCGBitmapByteOrderDefault, provider, NULL, true, kCGRenderingIntentDefault); 
    
    CGDataProviderRelease(provider);
    CFRelease(data);
    delete[] pixelData;
    return imageRef;
}

// public CoreGraphicsSurface New() [static] :35
CoreGraphicsSurface* CoreGraphicsSurface::New1()
{
    CoreGraphicsSurface* obj4 = (CoreGraphicsSurface*)uNew(CoreGraphicsSurface_typeof());
    obj4->ctor_1();
    return obj4;
}

// private static Uno.IntPtr NewContext() [static] :69
void* CoreGraphicsSurface::NewContext()
{
    auto c = new CGLib::Context();
    c->ColorSpace = CGColorSpaceCreateWithName(kCGColorSpaceGenericRGB);
    return c;
}

// private static void PathClose(Uno.IntPtr path) [static] :273
void CoreGraphicsSurface::PathClose(void* path)
{
    CGPathCloseSubpath( (CGMutablePathRef)path );
}

// private static Uno.IntPtr PathCreateMutable() [static] :243
void* CoreGraphicsSurface::PathCreateMutable()
{
    return CGPathCreateMutable();
}

// private static void PathCurveTo(Uno.IntPtr path, float x, float y, float ax, float ay, float bx, float by) [static] :267
void CoreGraphicsSurface::PathCurveTo(void* path, float x, float y, float ax, float ay, float bx, float by)
{
    CGPathAddCurveToPoint( (CGMutablePathRef)path, nullptr, ax, ay, bx, by, x, y );
}

// private static void PathLineTo(Uno.IntPtr path, float x, float y) [static] :261
void CoreGraphicsSurface::PathLineTo(void* path, float x, float y)
{
    CGPathAddLineToPoint( (CGMutablePathRef)path, nullptr, x, y );
}

// private static void PathMoveTo(Uno.IntPtr path, float x, float y) [static] :255
void CoreGraphicsSurface::PathMoveTo(void* path, float x, float y)
{
    CGPathMoveToPoint( (CGMutablePathRef)path, nullptr, x, y );
}

// private static void PathRelease(Uno.IntPtr path) [static] :249
void CoreGraphicsSurface::PathRelease(void* path)
{
    return CGPathRelease((CGPathRef)path);
}

// private static void ReleaseGradient(Uno.IntPtr cp, Uno.IntPtr gradient) [static] :601
void CoreGraphicsSurface::ReleaseGradient(void* cp, void* gradient)
{
    CGGradientRelease((CGGradientRef)gradient);
}

// private static void ReleaseImage(Uno.IntPtr cp, Uno.IntPtr gradient) [static] :607
void CoreGraphicsSurface::ReleaseImage(void* cp, void* gradient)
{
    CGImageRelease((CGImageRef)gradient);
}

// private static void RestoreContextState(Uno.IntPtr cp) [static] :662
void CoreGraphicsSurface::RestoreContextState(void* cp)
{
    auto ctx = (CGLib::Context*)cp;
    if (!ctx->RestoreState())
    {
    	::g::Fuse::Diagnostics::InternalError(uString::Utf8("Failed to restore state"), NULL, uString::Utf8(__FILE__), __LINE__, uString::Utf8(""));
    }
}

// private static void SaveContextState(Uno.IntPtr cp) [static] :641
void CoreGraphicsSurface::SaveContextState(void* cp)
{
    auto ctx = (CGLib::Context*)cp;
    ctx->SaveState();
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed extern class CoreGraphicsSurfacePath :14
// {
static void CoreGraphicsSurfacePath_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::FillRule_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurfacePath, FillRule), 0,
        ::g::Uno::IntPtr_typeof(), offsetof(::g::Fuse::Drawing::CoreGraphicsSurfacePath, Path), 0);
}

uType* CoreGraphicsSurfacePath_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::SurfacePath_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(CoreGraphicsSurfacePath);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.CoreGraphicsSurfacePath", options);
    type->fp_build_ = CoreGraphicsSurfacePath_build;
    type->fp_ctor_ = (void*)CoreGraphicsSurfacePath__New1_fn;
    return type;
}

// public generated CoreGraphicsSurfacePath() :14
void CoreGraphicsSurfacePath__ctor_1_fn(CoreGraphicsSurfacePath* __this)
{
    __this->ctor_1();
}

// public generated CoreGraphicsSurfacePath New() :14
void CoreGraphicsSurfacePath__New1_fn(CoreGraphicsSurfacePath** __retval)
{
    *__retval = CoreGraphicsSurfacePath::New1();
}

// public generated CoreGraphicsSurfacePath() [instance] :14
void CoreGraphicsSurfacePath::ctor_1()
{
    ctor_();
}

// public generated CoreGraphicsSurfacePath New() [static] :14
CoreGraphicsSurfacePath* CoreGraphicsSurfacePath::New1()
{
    CoreGraphicsSurfacePath* obj1 = (CoreGraphicsSurfacePath*)uNew(CoreGraphicsSurfacePath_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed class DrawObjectWatcher :2111
// {
// static DrawObjectWatcher() :2111
static void DrawObjectWatcher__cctor__fn(uType* __type)
{
    DrawObjectWatcher::ShadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"Shading"*/]);
}

static void DrawObjectWatcher_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Shading");
    ::STRINGS[22] = uString::Const("Sync while not rooted");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno");
    ::STRINGS[23] = uString::Const("Sync");
    ::TYPES[12] = ::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), NULL);
    ::TYPES[13] = ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DrawObjectWatcher_type, interface0));
    type->SetFields(0,
        ::TYPES[13/*Fuse.Drawing.IDrawObjectWatcherFeedback*/], offsetof(::g::Fuse::Drawing::DrawObjectWatcher, _feedback), 0,
        ::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], offsetof(::g::Fuse::Drawing::DrawObjectWatcher, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher, _rooted), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DrawObjectWatcher::ShadingName_, uFieldFlagsStatic);
}

DrawObjectWatcher_type* DrawObjectWatcher_typeof()
{
    static uSStrong<DrawObjectWatcher_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DrawObjectWatcher);
    options.TypeSize = sizeof(DrawObjectWatcher_type);
    type = (DrawObjectWatcher_type*)uClassType::New("Fuse.Drawing.DrawObjectWatcher", options);
    type->fp_build_ = DrawObjectWatcher_build;
    type->fp_ctor_ = (void*)DrawObjectWatcher__New1_fn;
    type->fp_cctor_ = DrawObjectWatcher__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DrawObjectWatcher__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public generated DrawObjectWatcher() :2111
void DrawObjectWatcher__ctor__fn(DrawObjectWatcher* __this)
{
    __this->ctor_();
}

// public void Add(Fuse.Drawing.Brush brush) :2203
void DrawObjectWatcher__Add_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Brush* brush)
{
    __this->Add(brush);
}

// public void Add(Fuse.Drawing.Stroke stroke) :2197
void DrawObjectWatcher__Add1_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->Add1(stroke);
}

// private void AddObject(Uno.UX.PropertyObject drawObject) :2208
void DrawObjectWatcher__AddObject_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* drawObject)
{
    __this->AddObject(drawObject);
}

// public generated DrawObjectWatcher New() :2111
void DrawObjectWatcher__New1_fn(DrawObjectWatcher** __retval)
{
    *__retval = DrawObjectWatcher::New1();
}

// public void OnRooted(Fuse.Drawing.IDrawObjectWatcherFeedback feedback) :2159
void DrawObjectWatcher__OnRooted_fn(DrawObjectWatcher* __this, uObject* feedback)
{
    __this->OnRooted(feedback);
}

// public void OnUnrooted() :2172
void DrawObjectWatcher__OnUnrooted_fn(DrawObjectWatcher* __this)
{
    __this->OnUnrooted();
}

// public void Reset() :2188
void DrawObjectWatcher__Reset_fn(DrawObjectWatcher* __this)
{
    __this->Reset();
}

// public void Sync() :2125
void DrawObjectWatcher__Sync_fn(DrawObjectWatcher* __this)
{
    __this->Sync();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :2234
void DrawObjectWatcher__UnoUXIPropertyListenerOnPropertyChanged_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, DrawObjectWatcher::ShadingName()))
        return;

    for (int i = 0; i < __this->_items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)__this->_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);

        if (uPtr(item)->DrawObject == obj)
        {
            uPtr(item)->Dirty = true;
            break;
        }
    }

    if (__this->_feedback != NULL)
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Changed(uInterface(uPtr(__this->_feedback), ::TYPES[13/*Fuse.Drawing.IDrawObjectWatcherFeedback*/]), obj);
}

::g::Uno::UX::Selector DrawObjectWatcher::ShadingName_;

// public generated DrawObjectWatcher() [instance] :2111
void DrawObjectWatcher::ctor_()
{
}

// public void Add(Fuse.Drawing.Brush brush) [instance] :2203
void DrawObjectWatcher::Add(::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "Add(Fuse.Drawing.Brush)");
    AddObject(brush);
}

// public void Add(Fuse.Drawing.Stroke stroke) [instance] :2197
void DrawObjectWatcher::Add1(::g::Fuse::Drawing::Stroke* stroke)
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "Add(Fuse.Drawing.Stroke)");
    AddObject(stroke);
    AddObject(uPtr(stroke)->Brush());
}

// private void AddObject(Uno.UX.PropertyObject drawObject) [instance] :2208
void DrawObjectWatcher::AddObject(::g::Uno::UX::PropertyObject* drawObject)
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "AddObject(Uno.UX.PropertyObject)");
    DrawObjectWatcher__Item* collection1;

    if (drawObject == NULL)
        return;

    for (int i = 0; i < _items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]); ++i)
        if (uPtr((DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i))->DrawObject == drawObject)
        {
            DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);
            uPtr(item)->Used = true;
            return;
        }

    if (_rooted)
        uPtr(drawObject)->AddPropertyListener((uObject*)this);

    _items.Add(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], (collection1 = DrawObjectWatcher__Item::New1(), uPtr(collection1)->Used = true, uPtr(collection1)->DrawObject = drawObject, uPtr(collection1)->Listening = _rooted, uPtr(collection1)->Dirty = true, collection1));
}

// public void OnRooted(Fuse.Drawing.IDrawObjectWatcherFeedback feedback) [instance] :2159
void DrawObjectWatcher::OnRooted(uObject* feedback)
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "OnRooted(Fuse.Drawing.IDrawObjectWatcherFeedback)");
    _feedback = feedback;
    _rooted = true;

    for (int i = 0; i < _items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);
        uPtr(item)->Dirty = true;
        item->Listening = true;
        uPtr(item->DrawObject)->AddPropertyListener((uObject*)this);
    }
}

// public void OnUnrooted() [instance] :2172
void DrawObjectWatcher::OnUnrooted()
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "OnUnrooted()");
    Reset();
    Sync();
    _rooted = false;

    for (int i = 0; i < _items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);

        if (uPtr(item)->Listening)
            uPtr(uPtr(item)->DrawObject)->RemovePropertyListener((uObject*)this);
    }

    _feedback = NULL;
}

// public void Reset() [instance] :2188
void DrawObjectWatcher::Reset()
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "Reset()");

    for (int i = 0; i < _items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);
        uPtr(item)->Used = false;
    }
}

// public void Sync() [instance] :2125
void DrawObjectWatcher::Sync()
{
    uStackFrame __("Fuse.Drawing.DrawObjectWatcher", "Sync()");

    if (!_rooted)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[22/*"Sync while ...*/], this, ::STRINGS[5/*"/usr/local/...*/], 2129, ::STRINGS[23/*"Sync"*/]);
        return;
    }

    for (int i = _items.Count(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/]) - 1; i >= 0; --i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);

        if (uPtr(item)->Used)
        {
            if (!uPtr(item)->Prepared || uPtr(item)->Dirty)
            {
                ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Prepare(uInterface(uPtr(_feedback), ::TYPES[13/*Fuse.Drawing.IDrawObjectWatcherFeedback*/]), uPtr(item)->DrawObject);
                item->Dirty = false;
                item->Prepared = true;
            }
        }
        else
        {
            if (uPtr(item)->Prepared)
            {
                ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Unprepare(uInterface(uPtr(_feedback), ::TYPES[13/*Fuse.Drawing.IDrawObjectWatcherFeedback*/]), uPtr(item)->DrawObject);
                item->Prepared = false;
            }

            _items.RemoveAt(::TYPES[12/*Fuse.Internal.MiniList<Fuse.Drawing.DrawObjectWatcher.Item>*/], i);
        }
    }
}

// public generated DrawObjectWatcher New() [static] :2111
DrawObjectWatcher* DrawObjectWatcher::New1()
{
    DrawObjectWatcher* obj2 = (DrawObjectWatcher*)uNew(DrawObjectWatcher_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.2.1/drawing/$.uno
// ---------------------------------------------------------------

// public struct ImageFill.DrawParams :110
// {
static void ImageFill__DrawParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Size), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, UVClip), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, Texture), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordBias1), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordBias2), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordScale1), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, TexCoordScale2), 0,
        ::g::Uno::Graphics::SamplerState_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, SamplerState), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::ImageFill__DrawParams, NeedFract), 0);
    type->Reflection.SetFields(10,
        new uField("NeedFract", 9),
        new uField("Origin", 0),
        new uField("SamplerState", 8),
        new uField("Size", 1),
        new uField("TexCoordBias1", 4),
        new uField("TexCoordBias2", 5),
        new uField("TexCoordScale1", 6),
        new uField("TexCoordScale2", 7),
        new uField("Texture", 3),
        new uField("UVClip", 2));
}

uStructType* ImageFill__DrawParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.ValueSize = sizeof(ImageFill__DrawParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.ImageFill.DrawParams", options);
    type->fp_build_ = ImageFill__DrawParams_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public abstract class DynamicBrush :83
// {
// static DynamicBrush() :83
static void DynamicBrush__cctor__fn(uType* __type)
{
    DynamicBrush::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[24/*"Opacity"*/]);
}

static void DynamicBrush_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Opacity");
    type->SetFields(3,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::DynamicBrush, _opacity), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::DynamicBrush::_opacityName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Opacity", NULL, (void*)DynamicBrush__get_Opacity_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Opacity", NULL, (void*)DynamicBrush__set_Opacity_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DynamicBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DynamicBrush", options);
    type->fp_build_ = DynamicBrush_build;
    type->fp_cctor_ = DynamicBrush__cctor__fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DynamicBrush__get_IsCompletelyTransparent_fn;
    return type;
}

// protected generated DynamicBrush() :83
void DynamicBrush__ctor_2_fn(DynamicBrush* __this)
{
    __this->ctor_2();
}

// public override bool get_IsCompletelyTransparent() :85
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval)
{
    return *__retval = __this->Opacity() == 0.0f, void();
}

// public float get_Opacity() :91
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value) :92
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value)
{
    __this->Opacity(*value);
}

::g::Uno::UX::Selector DynamicBrush::_opacityName_;

// protected generated DynamicBrush() [instance] :83
void DynamicBrush::ctor_2()
{
    _opacity = 1.0f;
    ctor_1();
}

// public float get_Opacity() [instance] :91
float DynamicBrush::Opacity()
{
    return _opacity;
}

// public void set_Opacity(float value) [instance] :92
void DynamicBrush::Opacity(float value)
{
    uStackFrame __("Fuse.Drawing.DynamicBrush", "set_Opacity(float)");

    if (value == _opacity)
        return;

    _opacity = value;
    OnPropertyChanged(DynamicBrush::_opacityName());
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum FillRule :202
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public sealed class GradientStop :13
// {
// static GradientStop() :13
static void GradientStop__cctor__fn(uType* __type)
{
    GradientStop::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"Offset"*/]);
    GradientStop::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Color"*/]);
}

static void GradientStop_build(uType* type)
{
    ::STRINGS[25] = uString::Const("Offset");
    ::STRINGS[26] = uString::Const("Color");
    type->SetFields(2,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::GradientStop, _offset), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::GradientStop::_offsetName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(6,
        new uFunction("get_Color", NULL, (void*)GradientStop__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)GradientStop__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)GradientStop__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)GradientStop__New3_fn, 0, true, type, 2, ::g::Uno::Float4_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("get_Offset", NULL, (void*)GradientStop__get_Offset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)GradientStop__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

uType* GradientStop_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(GradientStop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.GradientStop", options);
    type->fp_build_ = GradientStop_build;
    type->fp_ctor_ = (void*)GradientStop__New2_fn;
    type->fp_cctor_ = GradientStop__cctor__fn;
    return type;
}

// public GradientStop() :50
void GradientStop__ctor_1_fn(GradientStop* __this)
{
    __this->ctor_1();
}

// public GradientStop(float4 color, float offset) :52
void GradientStop__ctor_2_fn(GradientStop* __this, ::g::Uno::Float4* color, float* offset)
{
    __this->ctor_2(*color, *offset);
}

// public float4 get_Color() :39
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :40
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public GradientStop New() :50
void GradientStop__New2_fn(GradientStop** __retval)
{
    *__retval = GradientStop::New2();
}

// public GradientStop New(float4 color, float offset) :52
void GradientStop__New3_fn(::g::Uno::Float4* color, float* offset, GradientStop** __retval)
{
    *__retval = GradientStop::New3(*color, *offset);
}

// public float get_Offset() :19
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :20
void GradientStop__set_Offset_fn(GradientStop* __this, float* value)
{
    __this->Offset(*value);
}

::g::Uno::UX::Selector GradientStop::_colorName_;
::g::Uno::UX::Selector GradientStop::_offsetName_;

// public GradientStop() [instance] :50
void GradientStop::ctor_1()
{
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_();
}

// public GradientStop(float4 color, float offset) [instance] :52
void GradientStop::ctor_2(::g::Uno::Float4 color, float offset)
{
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_();
    _color = color;
    _offset = offset;
}

// public float4 get_Color() [instance] :39
::g::Uno::Float4 GradientStop::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :40
void GradientStop::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.GradientStop", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(GradientStop::_colorName());
    }
}

// public float get_Offset() [instance] :19
float GradientStop::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :20
void GradientStop::Offset(float value)
{
    uStackFrame __("Fuse.Drawing.GradientStop", "set_Offset(float)");

    if (_offset != value)
    {
        _offset = value;
        OnPropertyChanged(GradientStop::_offsetName());
    }
}

// public GradientStop New() [static] :50
GradientStop* GradientStop::New2()
{
    GradientStop* obj1 = (GradientStop*)uNew(GradientStop_typeof());
    obj1->ctor_1();
    return obj1;
}

// public GradientStop New(float4 color, float offset) [static] :52
GradientStop* GradientStop::New3(::g::Uno::Float4 color, float offset)
{
    GradientStop* obj2 = (GradientStop*)uNew(GradientStop_typeof());
    obj2->ctor_2(color, offset);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal abstract interface IDrawObjectWatcherFeedback :2100
// {
uInterfaceType* IDrawObjectWatcherFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.IDrawObjectWatcherFeedback", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Elements/1.2.1/drawing/$.uno
// ---------------------------------------------------------------

// public sealed class ImageFill :28
// {
// static ImageFill() :28
static void ImageFill__cctor_1_fn(uType* __type)
{
    ImageFill::_sourceName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"Source"*/]);
    ImageFill::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Color"*/]);
    ImageFill::_wrapModeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"WrapMode"*/]);
    ImageFill::_paramName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Param"*/]);
    ImageFill::_sizingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Sizing"*/]);
}

static void ImageFill_build(uType* type)
{
    ::STRINGS[27] = uString::Const("Source");
    ::STRINGS[26] = uString::Const("Color");
    ::STRINGS[28] = uString::Const("WrapMode");
    ::STRINGS[29] = uString::Const("Param");
    ::STRINGS[30] = uString::Const("Sizing");
    type->SetInterfaces(
        ::g::Fuse::ILoading_typeof(), offsetof(ImageFill_type, interface0),
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(ImageFill_type, interface1),
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(ImageFill_type, interface2));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _color), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _container), 0,
        ImageFill__DrawParams_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _drawParams), 0,
        ::g::Uno::Double_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _lastUsed), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _tempTexture), 0,
        ::g::Fuse::Drawing::WrapMode_typeof(), offsetof(::g::Fuse::Drawing::ImageFill, _wrapMode), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_paramName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sizingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_sourceName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::ImageFill::_wrapModeName_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("_tempTexture", 8));
    type->Reflection.SetFunctions(24,
        new uFunction("get_Color", NULL, (void*)ImageFill__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)ImageFill__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_ContentAlignment", NULL, (void*)ImageFill__get_ContentAlignment_fn, 0, false, ::g::Fuse::Elements::Alignment_typeof(), 0),
        new uFunction("set_ContentAlignment", NULL, (void*)ImageFill__set_ContentAlignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::Alignment_typeof()),
        new uFunction("get_Density", NULL, (void*)ImageFill__get_Density_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Density", NULL, (void*)ImageFill__set_Density_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_File", NULL, (void*)ImageFill__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)ImageFill__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GetDrawParams", NULL, (void*)ImageFill__GetDrawParams_fn, 0, false, ImageFill__DrawParams_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("get_MemoryPolicy", NULL, (void*)ImageFill__get_MemoryPolicy_fn, 0, false, ::g::Fuse::Resources::MemoryPolicy_typeof(), 0),
        new uFunction("set_MemoryPolicy", NULL, (void*)ImageFill__set_MemoryPolicy_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::MemoryPolicy_typeof()),
        new uFunction(".ctor", NULL, (void*)ImageFill__New2_fn, 0, true, type, 0),
        new uFunction("get_ResampleMode", NULL, (void*)ImageFill__get_ResampleMode_fn, 0, false, ::g::Fuse::Drawing::ResampleMode_typeof(), 0),
        new uFunction("set_ResampleMode", NULL, (void*)ImageFill__set_ResampleMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::ResampleMode_typeof()),
        new uFunction("get_Source", NULL, (void*)ImageFill__get_Source_fn, 0, false, ::g::Fuse::Resources::ImageSource_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)ImageFill__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Resources::ImageSource_typeof()),
        new uFunction("get_StretchDirection", NULL, (void*)ImageFill__get_StretchDirection_fn, 0, false, ::g::Fuse::Elements::StretchDirection_typeof(), 0),
        new uFunction("set_StretchDirection", NULL, (void*)ImageFill__set_StretchDirection_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchDirection_typeof()),
        new uFunction("get_StretchMode", NULL, (void*)ImageFill__get_StretchMode_fn, 0, false, ::g::Fuse::Elements::StretchMode_typeof(), 0),
        new uFunction("set_StretchMode", NULL, (void*)ImageFill__set_StretchMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Elements::StretchMode_typeof()),
        new uFunction("get_Url", NULL, (void*)ImageFill__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)ImageFill__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_WrapMode", NULL, (void*)ImageFill__get_WrapMode_fn, 0, false, ::g::Fuse::Drawing::WrapMode_typeof(), 0),
        new uFunction("set_WrapMode", NULL, (void*)ImageFill__set_WrapMode_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::WrapMode_typeof()));
}

ImageFill_type* ImageFill_typeof()
{
    static uSStrong<ImageFill_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ImageFill);
    options.TypeSize = sizeof(ImageFill_type);
    type = (ImageFill_type*)uClassType::New("Fuse.Drawing.ImageFill", options);
    type->fp_build_ = ImageFill_build;
    type->fp_ctor_ = (void*)ImageFill__New2_fn;
    type->fp_cctor_ = ImageFill__cctor_1_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnPinned_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))ImageFill__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnUnpinned_fn;
    type->interface1.fp_OnSourceChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface1.fp_OnParamChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface1.fp_OnSizingChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    type->interface2.fp_SoftDispose = (void(*)(uObject*))ImageFill__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_IsLoading = (void(*)(uObject*, bool*))ImageFill__FuseILoadingget_IsLoading_fn;
    type->interface2.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))ImageFill__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface2.fp_get_IsPinned = (void(*)(uObject*, bool*))ImageFill__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface2.fp_get_LastUsed = (void(*)(uObject*, double*))ImageFill__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public ImageFill() :30
void ImageFill__ctor_3_fn(ImageFill* __this)
{
    __this->ctor_3();
}

// private void CleanTempTexture() :123
void ImageFill__CleanTempTexture_fn(ImageFill* __this)
{
    __this->CleanTempTexture();
}

// public float4 get_Color() :92
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :93
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() :300
void ImageFill__get_ContentAlignment_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) :301
void ImageFill__set_ContentAlignment_fn(ImageFill* __this, int* value)
{
    __this->ContentAlignment(*value);
}

// public float get_Density() :236
void ImageFill__get_Density_fn(ImageFill* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value) :237
void ImageFill__set_Density_fn(ImageFill* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File() :219
void ImageFill__get_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :220
void ImageFill__set_File_fn(ImageFill* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// private bool Fuse.ILoading.get_IsLoading() :74
void ImageFill__FuseILoadingget_IsLoading_fn(ImageFill* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.ILoading.get_IsLoading()");
    ::g::Fuse::Resources::ImageSource* src = uPtr(__this->_container)->Source();

    if (src == NULL)
        return *__retval = false, void();

    return *__retval = (uPtr(src)->State() == 2) || (uPtr(src)->State() == 0), void();
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged() :275
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnParamChanged()");
    __this->OnPropertyChanged(ImageFill::_paramName());
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged() :287
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnSizingChanged()");
    __this->OnPropertyChanged(ImageFill::_sizingName());
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged() :64
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Internal.IImageContainerOwner.OnSourceChanged()");
    __this->CleanTempTexture();
    __this->OnPropertyChanged(ImageFill::_sourceName());
    __this->OnPropertyChanged(::g::Fuse::ILoadingStatic::IsLoadingName());
    __this->LoadNow();
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned() :306
void ImageFill__FuseResourcesIMemoryResourceget_IsPinned_fn(ImageFill* __this, bool* __retval)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Resources.IMemoryResource.get_IsPinned()");
    return *__retval = uPtr(__this->_container)->IsRooted(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed() :307
void ImageFill__FuseResourcesIMemoryResourceget_LastUsed_fn(ImageFill* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy() :305
void ImageFill__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Resources.IMemoryResource.get_MemoryPolicy()");
    return *__retval = uPtr(__this->_container)->MemoryPolicy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose() :308
void ImageFill__FuseResourcesIMemoryResourceSoftDispose_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "Fuse.Resources.IMemoryResource.SoftDispose()");
    __this->CleanTempTexture();
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) :190
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval)
{
    *__retval = __this->GetDrawParams(dc, *size);
}

// private float2 GetSize() :103
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// private void LoadNow() :42
void ImageFill__LoadNow_fn(ImageFill* __this)
{
    __this->LoadNow();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() :242
void ImageFill__get_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) :243
void ImageFill__set_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// public ImageFill New() :30
void ImageFill__New2_fn(ImageFill** __retval)
{
    *__retval = ImageFill::New2();
}

// protected override sealed void OnPinned() :35
void ImageFill__OnPinned_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "OnPinned()");
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
    __this->LoadNow();
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :133
void ImageFill__OnPrepare_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "OnPrepare(Fuse.DrawContext,float2)");
    ::g::Uno::Float2 canvasSize_ = *canvasSize;
    uPtr(uPtr(__this->_container)->Sizing)->absoluteZoom = ((dc == NULL) ? 1.0f : uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(__this->_container)->Sizing)->CalcScale(canvasSize_, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(uPtr(__this->_container)->Sizing)->CalcOrigin(canvasSize_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ImageFill__DrawParams dp = uDefault<ImageFill__DrawParams>();
    dp.Origin = origin;
    dp.Size = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    dp.UVClip = uPtr(uPtr(__this->_container)->Sizing)->CalcClip(canvasSize_, &dp.Origin, &dp.Size);
    dp.Texture = uPtr(__this->_container)->GetTexture();

    if ((((dp.Texture != NULL) && !uPtr(dp.Texture)->IsPow2()) && (__this->WrapMode() == 0)) && !::g::Uno::Graphics::Texture2D::HaveNonPow2Support())
    {
        if (__this->_tempTexture == NULL)
        {
            ::g::Uno::Int2 size = ::g::Uno::Int2__New2(uPtr(dp.Texture)->Size().X + 1, uPtr(dp.Texture)->Size().Y + 1);
            __this->_tempTexture = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
            ::g::Fuse::Resources::DisposalManager::Add((uObject*)__this);
            uPtr(::g::Fuse::Drawing::RepeatBaker::Singleton())->FillBuffer(dc, dp.Texture, __this->_tempTexture);
        }

        dp.TexCoordBias1 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_UnaryNegation(::g::Uno::Float2__New1(0.5f)), ::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()));
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New1(0.5f), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        dp.TexCoordScale2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        dp.Texture = uPtr(__this->_tempTexture)->ColorBuffer();
        dp.SamplerState = ::g::Uno::Graphics::SamplerState__LinearClamp();
        dp.NeedFract = true;
    }
    else
    {
        __this->CleanTempTexture();
        dp.TexCoordBias1 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale2 = ::g::Uno::Float2__New1(1.0f);
        dp.SamplerState = ((__this->WrapMode() == 0) ? ::g::Uno::Graphics::SamplerState__LinearWrap() : ::g::Uno::Graphics::SamplerState__LinearClamp());
        dp.NeedFract = false;
    }

    __this->_drawParams = dp;
    __this->_lastUsed = ::g::Fuse::Time::FrameTime();
}

// protected override sealed void OnUnpinned() :51
void ImageFill__OnUnpinned_fn(ImageFill* __this)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "OnUnpinned()");
    __this->CleanTempTexture();
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() :255
void ImageFill__get_ResampleMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) :256
void ImageFill__set_ResampleMode_fn(ImageFill* __this, int* value)
{
    __this->ResampleMode(*value);
}

// internal Fuse.Internal.SizingContainer get_SizingContainer() :225
void ImageFill__get_SizingContainer_fn(ImageFill* __this, ::g::Fuse::Internal::SizingContainer** __retval)
{
    *__retval = __this->SizingContainer();
}

// public Fuse.Resources.ImageSource get_Source() :249
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) :250
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() :294
void ImageFill__get_StretchDirection_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) :295
void ImageFill__set_StretchDirection_fn(ImageFill* __this, int* value)
{
    __this->StretchDirection(*value);
}

// public Fuse.Elements.StretchMode get_StretchMode() :282
void ImageFill__get_StretchMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) :283
void ImageFill__set_StretchMode_fn(ImageFill* __this, int* value)
{
    __this->StretchMode(*value);
}

// public string get_Url() :230
void ImageFill__get_Url_fn(ImageFill* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :231
void ImageFill__set_Url_fn(ImageFill* __this, uString* value)
{
    __this->Url(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode() :263
void ImageFill__get_WrapMode_fn(ImageFill* __this, int* __retval)
{
    *__retval = __this->WrapMode();
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value) :264
void ImageFill__set_WrapMode_fn(ImageFill* __this, int* value)
{
    __this->WrapMode(*value);
}

::g::Uno::UX::Selector ImageFill::_colorName_;
::g::Uno::UX::Selector ImageFill::_paramName_;
::g::Uno::UX::Selector ImageFill::_sizingName_;
::g::Uno::UX::Selector ImageFill::_sourceName_;
::g::Uno::UX::Selector ImageFill::_wrapModeName_;

// public ImageFill() [instance] :30
void ImageFill::ctor_3()
{
    uStackFrame __("Fuse.Drawing.ImageFill", ".ctor()");
    _color = ::g::Uno::Float4__New1(1.0f);
    ctor_2();
    _container = ::g::Fuse::Internal::ImageContainer::New1((uObject*)this);
}

// private void CleanTempTexture() [instance] :123
void ImageFill::CleanTempTexture()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "CleanTempTexture()");

    if (_tempTexture != NULL)
    {
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);
        ::g::Fuse::FramebufferPool::Release(_tempTexture);
        _tempTexture = NULL;
    }
}

// public float4 get_Color() [instance] :92
::g::Uno::Float4 ImageFill::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :93
void ImageFill::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(ImageFill::_colorName());
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance] :300
int ImageFill::ContentAlignment()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_ContentAlignment()");
    return uPtr(_container)->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance] :301
void ImageFill::ContentAlignment(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_ContentAlignment(Fuse.Elements.Alignment)");
    uPtr(_container)->ContentAlignment(value);
}

// public float get_Density() [instance] :236
float ImageFill::Density()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Density()");
    return uPtr(_container)->Density();
}

// public void set_Density(float value) [instance] :237
void ImageFill::Density(float value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Density(float)");
    uPtr(_container)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance] :219
::g::Uno::UX::FileSource* ImageFill::File()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_File()");
    return uPtr(_container)->File();
}

// public void set_File(Uno.UX.FileSource value) [instance] :220
void ImageFill::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_File(Uno.UX.FileSource)");
    uPtr(_container)->File(value);
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) [instance] :190
ImageFill__DrawParams ImageFill::GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size)
{
    return _drawParams;
}

// private float2 GetSize() [instance] :103
::g::Uno::Float2 ImageFill::GetSize()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "GetSize()");

    if (Source() != NULL)
        return uPtr(uPtr(_container)->Sizing)->CalcContentSize(uPtr(Source())->Size(), uPtr(Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// private void LoadNow() [instance] :42
void ImageFill::LoadNow()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "LoadNow()");

    if (uPtr(_container)->IsRooted())
        uPtr(_container)->GetTexture();
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance] :242
::g::Fuse::Resources::MemoryPolicy* ImageFill::MemoryPolicy()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_MemoryPolicy()");
    return uPtr(_container)->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance] :243
void ImageFill::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_MemoryPolicy(Fuse.Resources.MemoryPolicy)");
    uPtr(_container)->MemoryPolicy(value);
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance] :255
int ImageFill::ResampleMode()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_ResampleMode()");
    return uPtr(_container)->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance] :256
void ImageFill::ResampleMode(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_ResampleMode(Fuse.Drawing.ResampleMode)");
    uPtr(_container)->ResampleMode(value);
}

// internal Fuse.Internal.SizingContainer get_SizingContainer() [instance] :225
::g::Fuse::Internal::SizingContainer* ImageFill::SizingContainer()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_SizingContainer()");
    return uPtr(_container)->Sizing;
}

// public Fuse.Resources.ImageSource get_Source() [instance] :249
::g::Fuse::Resources::ImageSource* ImageFill::Source()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Source()");
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance] :250
void ImageFill::Source(::g::Fuse::Resources::ImageSource* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Source(Fuse.Resources.ImageSource)");
    uPtr(_container)->Source(value);
}

// public Fuse.Elements.StretchDirection get_StretchDirection() [instance] :294
int ImageFill::StretchDirection()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_StretchDirection()");
    return uPtr(_container)->StretchDirection();
}

// public void set_StretchDirection(Fuse.Elements.StretchDirection value) [instance] :295
void ImageFill::StretchDirection(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_StretchDirection(Fuse.Elements.StretchDirection)");
    uPtr(_container)->StretchDirection(value);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance] :282
int ImageFill::StretchMode()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_StretchMode()");
    return uPtr(_container)->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance] :283
void ImageFill::StretchMode(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_StretchMode(Fuse.Elements.StretchMode)");
    uPtr(_container)->StretchMode(value);
}

// public string get_Url() [instance] :230
uString* ImageFill::Url()
{
    uStackFrame __("Fuse.Drawing.ImageFill", "get_Url()");
    return uPtr(_container)->Url();
}

// public void set_Url(string value) [instance] :231
void ImageFill::Url(uString* value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_Url(string)");
    uPtr(_container)->Url(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode() [instance] :263
int ImageFill::WrapMode()
{
    return _wrapMode;
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value) [instance] :264
void ImageFill::WrapMode(int value)
{
    uStackFrame __("Fuse.Drawing.ImageFill", "set_WrapMode(Fuse.Drawing.WrapMode)");

    if (_wrapMode != value)
    {
        _wrapMode = value;
        OnPropertyChanged(ImageFill::_wrapModeName());
    }
}

// public ImageFill New() [static] :30
ImageFill* ImageFill::New2()
{
    ImageFill* obj1 = (ImageFill*)uNew(ImageFill_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal abstract interface INativeSurfaceOwner :3108
// {
uInterfaceType* INativeSurfaceOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.INativeSurfaceOwner", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public abstract interface ISolidColor :431
// {
uInterfaceType* ISolidColor_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISolidColor", 0, 0);
    type->Reflection.SetFunctions(1,
        new uFunction("get_Color", NULL, NULL, offsetof(ISolidColor, fp_get_Color), false, ::g::Uno::Float4_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public abstract interface ISurfaceDrawable :3076
// {
uInterfaceType* ISurfaceDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISurfaceDrawable", 0, 0);
    type->Reflection.SetFunctions(3,
        new uFunction("Draw", NULL, NULL, offsetof(ISurfaceDrawable, fp_Draw), false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Surface_typeof()),
        new uFunction("get_ElementSize", NULL, NULL, offsetof(ISurfaceDrawable, fp_get_ElementSize), false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("get_IsPrimary", NULL, NULL, offsetof(ISurfaceDrawable, fp_get_IsPrimary), false, ::g::Uno::Bool_typeof(), 0));
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal abstract interface ISurfaceProvider :3197
// {
uInterfaceType* ISurfaceProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != NULL) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISurfaceProvider", 0, 0);
    return type;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// private sealed class DrawObjectWatcher.Item :2113
// {
static void DrawObjectWatcher__Item_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher__Item, Dirty), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher__Item, DrawObject), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher__Item, Listening), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher__Item, Prepared), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::DrawObjectWatcher__Item, Used), 0);
}

uType* DrawObjectWatcher__Item_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DrawObjectWatcher__Item);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.DrawObjectWatcher.Item", options);
    type->fp_build_ = DrawObjectWatcher__Item_build;
    type->fp_ctor_ = (void*)DrawObjectWatcher__Item__New1_fn;
    return type;
}

// public generated Item() :2113
void DrawObjectWatcher__Item__ctor__fn(DrawObjectWatcher__Item* __this)
{
    __this->ctor_();
}

// public generated Item New() :2113
void DrawObjectWatcher__Item__New1_fn(DrawObjectWatcher__Item** __retval)
{
    *__retval = DrawObjectWatcher__Item::New1();
}

// public generated Item() [instance] :2113
void DrawObjectWatcher__Item::ctor_()
{
}

// public generated Item New() [static] :2113
DrawObjectWatcher__Item* DrawObjectWatcher__Item::New1()
{
    DrawObjectWatcher__Item* obj1 = (DrawObjectWatcher__Item*)uNew(DrawObjectWatcher__Item_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public sealed class LinearGradient :106
// {
// static LinearGradient() :271
static void LinearGradient__cctor_1_fn(uType* __type)
{
    LinearGradient::_stopsName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"Stops"*/]);
    LinearGradient::_stopOffsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"Offset"*/]);
    LinearGradient::_stopColorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Color"*/]);
    LinearGradient::_interpolationName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"Interpolation"*/]);
    LinearGradient::_emptySortedStops_ = uArray::New(::TYPES[14/*Fuse.Drawing.GradientStop[]*/], 0);
    LinearGradient::_startPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"StartPoint"*/]);
    LinearGradient::_endPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[34/*"EndPoint"*/]);
    LinearGradient::_angleName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[35/*"Angle"*/]);
    LinearGradient::_gradientSize_ = 256;
    LinearGradient::_gradientSize_ = ::g::Uno::Math::Min8(1028, ::g::Uno::Graphics::Texture2D::MaxSize());
}

static void LinearGradient_build(uType* type)
{
    ::STRINGS[31] = uString::Const("Stops");
    ::STRINGS[25] = uString::Const("Offset");
    ::STRINGS[26] = uString::Const("Color");
    ::STRINGS[32] = uString::Const("Interpolation");
    ::STRINGS[33] = uString::Const("StartPoint");
    ::STRINGS[34] = uString::Const("EndPoint");
    ::STRINGS[35] = uString::Const("Angle");
    ::STRINGS[36] = uString::Const("Gradient stop offsets must be in order! Expected something bigger or equal to {0}, but got {1}!");
    ::TYPES[14] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[16] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[18] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    ::TYPES[19] = uObject_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(10/*ToArray<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), NULL);
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LinearGradient_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _angle), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _endPoint), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientBuffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _gradientStart), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _hasAngle), 0,
        ::g::Fuse::Drawing::LinearGradientInterpolation_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _interpolation), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _invalid), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LinearGradient, _startPoint), 0,
        ::TYPES[15/*Uno.Collections.RootableList<Fuse.Drawing.GradientStop>*/], offsetof(::g::Fuse::Drawing::LinearGradient, _stops), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_angleName_, uFieldFlagsStatic,
        ::TYPES[14/*Fuse.Drawing.GradientStop[]*/], (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_emptySortedStops_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_endPointName_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_gradientSize_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_interpolationName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_startPointName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopColorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopOffsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::LinearGradient::_stopsName_, uFieldFlagsStatic);
    type->Reflection.SetFields(2,
        new uField("_gradientBuffer", 6),
        new uField("_gradientStart", 7));
    type->Reflection.SetFunctions(16,
        new uFunction("get_Angle", NULL, (void*)LinearGradient__get_Angle_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Angle", NULL, (void*)LinearGradient__set_Angle_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_AngleDegrees", NULL, (void*)LinearGradient__get_AngleDegrees_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_AngleDegrees", NULL, (void*)LinearGradient__set_AngleDegrees_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_EndPoint", NULL, (void*)LinearGradient__get_EndPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_EndPoint", NULL, (void*)LinearGradient__set_EndPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("GetEffectiveEndPoints", NULL, (void*)LinearGradient__GetEffectiveEndPoints_fn, 0, false, ::g::Uno::Float4_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_HasAngle", NULL, (void*)LinearGradient__get_HasAngle_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_Interpolation", NULL, (void*)LinearGradient__get_Interpolation_fn, 0, false, ::g::Fuse::Drawing::LinearGradientInterpolation_typeof(), 0),
        new uFunction("set_Interpolation", NULL, (void*)LinearGradient__set_Interpolation_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::LinearGradientInterpolation_typeof()),
        new uFunction(".ctor", NULL, (void*)LinearGradient__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LinearGradient__New3_fn, 0, true, type, 1, ::TYPES[14/*Fuse.Drawing.GradientStop[]*/]),
        new uFunction("get_SortedStops", NULL, (void*)LinearGradient__get_SortedStops_fn, 0, false, ::TYPES[14/*Fuse.Drawing.GradientStop[]*/], 0),
        new uFunction("get_StartPoint", NULL, (void*)LinearGradient__get_StartPoint_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("set_StartPoint", NULL, (void*)LinearGradient__set_StartPoint_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("get_Stops", NULL, (void*)LinearGradient__get_Stops_fn, 0, false, ::TYPES[18/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/], 0));
}

LinearGradient_type* LinearGradient_typeof()
{
    static uSStrong<LinearGradient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LinearGradient);
    options.TypeSize = sizeof(LinearGradient_type);
    type = (LinearGradient_type*)uClassType::New("Fuse.Drawing.LinearGradient", options);
    type->fp_build_ = LinearGradient_build;
    type->fp_ctor_ = (void*)LinearGradient__New2_fn;
    type->fp_cctor_ = LinearGradient__cctor_1_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnPinned_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))LinearGradient__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public LinearGradient() :256
void LinearGradient__ctor_3_fn(LinearGradient* __this)
{
    __this->ctor_3();
}

// public LinearGradient(Fuse.Drawing.GradientStop[] stops) :260
void LinearGradient__ctor_4_fn(LinearGradient* __this, uArray* stops)
{
    __this->ctor_4(stops);
}

// public float get_Angle() :190
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value) :191
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value)
{
    __this->Angle(*value);
}

// public float get_AngleDegrees() :205
void LinearGradient__get_AngleDegrees_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->AngleDegrees();
}

// public void set_AngleDegrees(float value) :206
void LinearGradient__set_AngleDegrees_fn(LinearGradient* __this, float* value)
{
    __this->AngleDegrees(*value);
}

// public float2 get_EndPoint() :173
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(float2 value) :174
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->EndPoint(*value);
}

// public float4 GetEffectiveEndPoints(float2 size) :311
void LinearGradient__GetEffectiveEndPoints_fn(LinearGradient* __this, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    *__retval = __this->GetEffectiveEndPoints(*size);
}

// public bool get_HasAngle() :209
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval)
{
    *__retval = __this->HasAngle();
}

// public Fuse.Drawing.LinearGradientInterpolation get_Interpolation() :219
void LinearGradient__get_Interpolation_fn(LinearGradient* __this, int* __retval)
{
    *__retval = __this->Interpolation();
}

// public void set_Interpolation(Fuse.Drawing.LinearGradientInterpolation value) :220
void LinearGradient__set_Interpolation_fn(LinearGradient* __this, int* value)
{
    __this->Interpolation(*value);
}

// public LinearGradient New() :256
void LinearGradient__New2_fn(LinearGradient** __retval)
{
    *__retval = LinearGradient::New2();
}

// public LinearGradient New(Fuse.Drawing.GradientStop[] stops) :260
void LinearGradient__New3_fn(uArray* stops, LinearGradient** __retval)
{
    *__retval = LinearGradient::New3(stops);
}

// private void OnAdded(Fuse.Drawing.GradientStop gs) :235
void LinearGradient__OnAdded_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnAdded(gs);
}

// protected override sealed void OnPinned() :265
void LinearGradient__OnPinned_fn(LinearGradient* __this)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnPinned()");
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_stops)->RootSubscribe(uDelegate::New(::TYPES[16/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnAdded_fn, __this), uDelegate::New(::TYPES[16/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnRemoved_fn, __this));
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize) :282
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnPrepare(Fuse.DrawContext,float2)");

    if (__this->_gradientBuffer == NULL)
    {
        __this->_gradientBuffer = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2(LinearGradient::_gradientSize(), 1), 3, false);
        __this->_invalid = true;
    }

    if (__this->_invalid)
    {
        __this->_gradientStart = uPtr(::g::Fuse::Drawing::LinearGradientDrawable::Singleton())->FillBuffer(dc, __this, __this->_gradientBuffer);
        __this->_invalid = false;
    }
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs) :247
void LinearGradient__OnRemoved_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnRemoved(gs);
}

// protected override sealed void OnUnpinned() :297
void LinearGradient__OnUnpinned_fn(LinearGradient* __this)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnUnpinned()");
    uPtr(__this->_stops)->RootUnsubscribe();

    if (__this->_gradientBuffer != NULL)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_gradientBuffer);
        __this->_gradientBuffer = NULL;
        __this->_invalid = true;
    }

    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() :125
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval)
{
    *__retval = __this->SortedStops();
}

// public float2 get_StartPoint() :152
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(float2 value) :153
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->StartPoint(*value);
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() :128
void LinearGradient__get_Stops_fn(LinearGradient* __this, uObject** __retval)
{
    *__retval = __this->Stops();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property) :113
void LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn(LinearGradient* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopOffsetName()) || ::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopColorName()))
        __this->_invalid = true;

    __this->OnPropertyChanged(LinearGradient::_stopsName());
}

// private static void ValidateStopsSorted(Uno.Collections.IList<Fuse.Drawing.GradientStop> stops) :136
void LinearGradient__ValidateStopsSorted_fn(uObject* stops)
{
    LinearGradient::ValidateStopsSorted(stops);
}

::g::Uno::UX::Selector LinearGradient::_angleName_;
uSStrong<uArray*> LinearGradient::_emptySortedStops_;
::g::Uno::UX::Selector LinearGradient::_endPointName_;
int LinearGradient::_gradientSize_;
::g::Uno::UX::Selector LinearGradient::_interpolationName_;
::g::Uno::UX::Selector LinearGradient::_startPointName_;
::g::Uno::UX::Selector LinearGradient::_stopColorName_;
::g::Uno::UX::Selector LinearGradient::_stopOffsetName_;
::g::Uno::UX::Selector LinearGradient::_stopsName_;

// public LinearGradient() [instance] :256
void LinearGradient::ctor_3()
{
    _stops = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[15/*Uno.Collections.RootableList<Fuse.Drawing.GradientStop>*/]));
    _endPoint = ::g::Uno::Float2__New2(0.0f, 1.0f);
    _invalid = true;
    ctor_2();
}

// public LinearGradient(Fuse.Drawing.GradientStop[] stops) [instance] :260
void LinearGradient::ctor_4(uArray* stops)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", ".ctor(Fuse.Drawing.GradientStop[])");
    uArray* array1;
    int index2;
    int length3;
    _stops = ((::g::Uno::Collections::RootableList*)::g::Uno::Collections::RootableList::New1(::TYPES[15/*Uno.Collections.RootableList<Fuse.Drawing.GradientStop>*/]));
    _endPoint = ::g::Uno::Float2__New2(0.0f, 1.0f);
    _invalid = true;
    ctor_2();

    for (array1 = stops, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        ::g::Fuse::Drawing::GradientStop* s = uPtr(array1)->Strong< ::g::Fuse::Drawing::GradientStop*>(index2);
        ::g::Uno::Collections::RootableList__Add_fn(uPtr(_stops), s);
    }
}

// public float get_Angle() [instance] :190
float LinearGradient::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance] :191
void LinearGradient::Angle(float value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_Angle(float)");

    if ((_angle != value) || !_hasAngle)
    {
        _angle = value;
        _hasAngle = true;
        OnPropertyChanged(LinearGradient::_angleName());
    }
}

// public float get_AngleDegrees() [instance] :205
float LinearGradient::AngleDegrees()
{
    return ::g::Uno::Math::RadiansToDegrees1(_angle);
}

// public void set_AngleDegrees(float value) [instance] :206
void LinearGradient::AngleDegrees(float value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_AngleDegrees(float)");
    Angle(::g::Uno::Math::DegreesToRadians1(value));
}

// public float2 get_EndPoint() [instance] :173
::g::Uno::Float2 LinearGradient::EndPoint()
{
    return _endPoint;
}

// public void set_EndPoint(float2 value) [instance] :174
void LinearGradient::EndPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_EndPoint(float2)");

    if (::g::Uno::Float2__op_Inequality(_endPoint, value))
    {
        _endPoint = value;
        OnPropertyChanged(LinearGradient::_endPointName());
    }
}

// public float4 GetEffectiveEndPoints(float2 size) [instance] :311
::g::Uno::Float4 LinearGradient::GetEffectiveEndPoints(::g::Uno::Float2 size)
{
    if (!HasAngle())
        return ::g::Uno::Float4__New7(::g::Uno::Float2__op_Multiply2(StartPoint(), size), ::g::Uno::Float2__op_Multiply2(EndPoint(), size));

    float angleLen = ::g::Uno::Math::Abs1(size.X * ::g::Uno::Math::Cos1(Angle())) + ::g::Uno::Math::Abs1(size.Y * ::g::Uno::Math::Sin1(Angle()));
    ::g::Uno::Float2 angleSlope = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(Angle()), ::g::Uno::Math::Sin1(Angle()));
    ::g::Uno::Float2 angleStartPoint = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(size, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope, angleLen), 2.0f));
    ::g::Uno::Float2 angleEndPoint = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(size, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope, angleLen), 2.0f));
    return ::g::Uno::Float4__New7(angleStartPoint, angleEndPoint);
}

// public bool get_HasAngle() [instance] :209
bool LinearGradient::HasAngle()
{
    return _hasAngle;
}

// public Fuse.Drawing.LinearGradientInterpolation get_Interpolation() [instance] :219
int LinearGradient::Interpolation()
{
    return _interpolation;
}

// public void set_Interpolation(Fuse.Drawing.LinearGradientInterpolation value) [instance] :220
void LinearGradient::Interpolation(int value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_Interpolation(Fuse.Drawing.LinearGradientInterpolation)");

    if (_interpolation == value)
        return;

    _interpolation = value;
    OnPropertyChanged(LinearGradient::_interpolationName());
}

// private void OnAdded(Fuse.Drawing.GradientStop gs) [instance] :235
void LinearGradient::OnAdded(::g::Fuse::Drawing::GradientStop* gs)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnAdded(Fuse.Drawing.GradientStop)");
    uPtr(gs)->AddPropertyListener((uObject*)this);
    _invalid = true;

    if (IsPinned())
    {
        OnPropertyChanged(LinearGradient::_stopsName());
        LinearGradient::ValidateStopsSorted((uObject*)_stops);
    }
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs) [instance] :247
void LinearGradient::OnRemoved(::g::Fuse::Drawing::GradientStop* gs)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "OnRemoved(Fuse.Drawing.GradientStop)");
    uPtr(gs)->RemovePropertyListener((uObject*)this);
    _invalid = true;

    if (IsPinned())
        OnPropertyChanged(LinearGradient::_stopsName());
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() [instance] :125
uArray* LinearGradient::SortedStops()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_SortedStops()");
    uArray* ind4 = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[20/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)_stops);
    return (ind4 != NULL) ? ind4 : (uArray*)LinearGradient::_emptySortedStops();
}

// public float2 get_StartPoint() [instance] :152
::g::Uno::Float2 LinearGradient::StartPoint()
{
    return _startPoint;
}

// public void set_StartPoint(float2 value) [instance] :153
void LinearGradient::StartPoint(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "set_StartPoint(float2)");

    if (::g::Uno::Float2__op_Inequality(_startPoint, value))
    {
        _startPoint = value;
        OnPropertyChanged(LinearGradient::_startPointName());
    }
}

// public Uno.Collections.IList<Fuse.Drawing.GradientStop> get_Stops() [instance] :128
uObject* LinearGradient::Stops()
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "get_Stops()");
    return (uObject*)_stops;
}

// public LinearGradient New() [static] :256
LinearGradient* LinearGradient::New2()
{
    LinearGradient* obj5 = (LinearGradient*)uNew(LinearGradient_typeof());
    obj5->ctor_3();
    return obj5;
}

// public LinearGradient New(Fuse.Drawing.GradientStop[] stops) [static] :260
LinearGradient* LinearGradient::New3(uArray* stops)
{
    LinearGradient* obj6 = (LinearGradient*)uNew(LinearGradient_typeof());
    obj6->ctor_4(stops);
    return obj6;
}

// private static void ValidateStopsSorted(Uno.Collections.IList<Fuse.Drawing.GradientStop> stops) [static] :136
void LinearGradient::ValidateStopsSorted(uObject* stops)
{
    uStackFrame __("Fuse.Drawing.LinearGradient", "ValidateStopsSorted(Uno.Collections.IList<Fuse.Drawing.GradientStop>)");
    LinearGradient_typeof()->Init();
    ::g::Fuse::Drawing::GradientStop* ret7;
    ::g::Fuse::Drawing::GradientStop* ret8;
    ::g::Fuse::Drawing::GradientStop* ret9;
    ::g::Fuse::Drawing::GradientStop* ret10;

    for (int i = 1; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(stops), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[18/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int>(i), &ret7), ret7))->Offset() < uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[18/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int>(i - 1), &ret8), ret8))->Offset())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::Format(::STRINGS[36/*"Gradient st...*/], uArray::Init<uObject*>(::TYPES[19/*object[]*/], 2, uBox(::g::Uno::Float_typeof(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[18/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int>(i - 1), &ret9), ret9))->Offset()), uBox(::g::Uno::Float_typeof(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[18/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int>(i), &ret10), ret10))->Offset())))));
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// internal sealed class LinearGradientDrawable :342
// {
// static LinearGradientDrawable() :342
static void LinearGradientDrawable__cctor__fn(uType* __type)
{
    LinearGradientDrawable::Singleton_ = LinearGradientDrawable::New1();
}

static void LinearGradientDrawable_build(uType* type)
{
    ::TYPES[21] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[22] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, _draw_ae3a1d65), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_TexCoord_ae3a1d65_1_1_1), 0,
        ::TYPES[1/*float2[]*/], offsetof(::g::Fuse::Drawing::LinearGradientDrawable, FillBuffer_Vertices_ae3a1d65_1_0_9), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::LinearGradientDrawable::Singleton_, uFieldFlagsStatic);
}

uType* LinearGradientDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(LinearGradientDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LinearGradientDrawable", options);
    type->fp_build_ = LinearGradientDrawable_build;
    type->fp_ctor_ = (void*)LinearGradientDrawable__New1_fn;
    type->fp_cctor_ = LinearGradientDrawable__cctor__fn;
    return type;
}

// public generated LinearGradientDrawable() :342
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this)
{
    __this->ctor_();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) :346
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FillBuffer(dc, lg, fb);
}

// private static generated float4[] FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) :376
void LinearGradientDrawable__FillBuffer_Colors_ae3a1d65_1_6_6_fn(int* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(*Colors_1_6_4, Colors_1_6_5);
}

// private static generated float[] FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) :369
void LinearGradientDrawable__FillBuffer_Offsets_ae3a1d65_1_5_4_fn(int* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(*Offsets_1_5_1, Offsets_1_5_2);
}

// private generated void init_DrawCalls() :342
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

// public static float LinearStep(float edge0, float edge1, float x) :413
void LinearGradientDrawable__LinearStep_fn(float* edge0, float* edge1, float* x, float* __retval)
{
    *__retval = LinearGradientDrawable::LinearStep(*edge0, *edge1, *x);
}

// public generated LinearGradientDrawable New() :342
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval)
{
    *__retval = LinearGradientDrawable::New1();
}

uSStrong<LinearGradientDrawable*> LinearGradientDrawable::Singleton_;

// public generated LinearGradientDrawable() [instance] :342
void LinearGradientDrawable::ctor_()
{
    init_DrawCalls();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) [instance] :346
::g::Uno::Float2 LinearGradientDrawable::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer(Fuse.DrawContext,Fuse.Drawing.LinearGradient,framebuffer)");
    uArray* stops = uPtr(lg)->SortedStops();

    if (uPtr(stops)->Length() < 2)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float length = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(uPtr(stops)->Length() - 1))->Offset() - uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset();
    uPtr(dc)->PushRenderTarget(fb);
    bool smooth = lg->Interpolation() == 1;
    uArray* Offsets_ae3a1d65_1_5_5 = LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(stops->Length(), stops);
    uArray* Colors_ae3a1d65_1_6_7 = LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(stops->Length(), stops);
    _draw_ae3a1d65.DepthTestEnabled(false);
    _draw_ae3a1d65.Const1(0, uPtr(Offsets_ae3a1d65_1_5_5)->Length());
    _draw_ae3a1d65.Const1(1, uPtr(Colors_ae3a1d65_1_6_7)->Length());
    _draw_ae3a1d65.Const(2, smooth);
    _draw_ae3a1d65.Use();
    _draw_ae3a1d65.Attrib1(3, 2, FillBuffer_TexCoord_ae3a1d65_1_1_1, 8, 0);
    _draw_ae3a1d65.Uniform1(4, Offsets_ae3a1d65_1_5_5);
    _draw_ae3a1d65.Uniform(5, length);
    _draw_ae3a1d65.Uniform11(6, Colors_ae3a1d65_1_6_7);
    _draw_ae3a1d65.DrawArrays(uPtr(FillBuffer_Vertices_ae3a1d65_1_0_9)->Length());
    dc->PopRenderTarget();
    return ::g::Uno::Float2__New2(uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

// private generated void init_DrawCalls() [instance] :342
void LinearGradientDrawable::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "init_DrawCalls()");
    uArray* Vertices_ae3a1d65_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_TexCoord_ae3a1d65_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_ae3a1d65_1_0_0), 0);
    FillBuffer_Vertices_ae3a1d65_1_0_9 = Vertices_ae3a1d65_1_0_0;
    _draw_ae3a1d65 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawing_bundle::LinearGradientDrawable479fd075());
}

// private static generated float4[] FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) [static] :376
uArray* LinearGradientDrawable::FillBuffer_Colors_ae3a1d65_1_6_6(int Colors_1_6_4, uArray* Colors_1_6_5)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer_Colors_ae3a1d65_1_6_6(int,Fuse.Drawing.GradientStop[])");
    LinearGradientDrawable_typeof()->Init();
    uArray* cols = uArray::New(::TYPES[21/*float4[]*/], ::g::Uno::Math::Max8(Colors_1_6_4, 1));

    for (int i = 0; i < Colors_1_6_4; i++)
        uPtr(cols)->Item< ::g::Uno::Float4>(i) = uPtr(uPtr(Colors_1_6_5)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color();

    return cols;
}

// private static generated float[] FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) [static] :369
uArray* LinearGradientDrawable::FillBuffer_Offsets_ae3a1d65_1_5_4(int Offsets_1_5_1, uArray* Offsets_1_5_2)
{
    uStackFrame __("Fuse.Drawing.LinearGradientDrawable", "FillBuffer_Offsets_ae3a1d65_1_5_4(int,Fuse.Drawing.GradientStop[])");
    LinearGradientDrawable_typeof()->Init();
    uArray* ofs = uArray::New(::TYPES[22/*float[]*/], ::g::Uno::Math::Max8(Offsets_1_5_1, 1));

    for (int i = 0; i < Offsets_1_5_1; i++)
        uPtr(ofs)->Item<float>(i) = uPtr(uPtr(Offsets_1_5_2)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();

    return ofs;
}

// public static float LinearStep(float edge0, float edge1, float x) [static] :413
float LinearGradientDrawable::LinearStep(float edge0, float edge1, float x)
{
    LinearGradientDrawable_typeof()->Init();
    return ::g::Uno::Math::Clamp1((x - edge0) / (edge1 - edge0), 0.0f, 1.0f);
}

// public generated LinearGradientDrawable New() [static] :342
LinearGradientDrawable* LinearGradientDrawable::New1()
{
    LinearGradientDrawable* obj1 = (LinearGradientDrawable*)uNew(LinearGradientDrawable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public enum LinearGradientInterpolation :59
uEnumType* LinearGradientInterpolation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LinearGradientInterpolation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Smooth", 1LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum LineCap :188
uEnumType* LineCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineCap", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL,
        "Square", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum LineJoin :195
uEnumType* LineJoin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineJoin", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Miter", 0LL,
        "Round", 1LL,
        "Bevel", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public static class LineMetrics :2266
// {
static void LineMetrics_build(uType* type)
{
    type->Reflection.SetFunctions(1,
        new uFunction("GetBounds", NULL, (void*)LineMetrics__GetBounds_fn, 0, true, ::g::Uno::Rect_typeof(), 1, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL)));
}

uClassType* LineMetrics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.LineMetrics", options);
    type->fp_build_ = LineMetrics_build;
    return type;
}

// public static Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2268
void LineMetrics__GetBounds_fn(uObject* segments, ::g::Uno::Rect* __retval)
{
    *__retval = LineMetrics::GetBounds(segments);
}

// public static Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static] :2268
::g::Uno::Rect LineMetrics::GetBounds(uObject* segments)
{
    uStackFrame __("Fuse.Drawing.LineMetrics", "GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    return ::g::Fuse::Drawing::LineMetricsImpl::New1()->GetBounds(segments);
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed class LineMetricsImpl :2274
// {
static void LineMetricsImpl_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(::g::Fuse::Drawing::LineMetricsImpl, _bounds), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineMetricsImpl, _curPos), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::LineMetricsImpl, _hasInit), 0);
}

uType* LineMetricsImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(LineMetricsImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineMetricsImpl", options);
    type->fp_build_ = LineMetricsImpl_build;
    type->fp_ctor_ = (void*)LineMetricsImpl__New1_fn;
    return type;
}

// public generated LineMetricsImpl() :2274
void LineMetricsImpl__ctor__fn(LineMetricsImpl* __this)
{
    __this->ctor_();
}

// private void AddPoint(float2 pt) :2280
void LineMetricsImpl__AddPoint_fn(LineMetricsImpl* __this, ::g::Uno::Float2* pt)
{
    __this->AddPoint(*pt);
}

// private void BezierBounds(float2 s, float2 e, float2 c1, float2 c2) :2336
void LineMetricsImpl__BezierBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* s, ::g::Uno::Float2* e, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2)
{
    __this->BezierBounds(*s, *e, *c1, *c2);
}

// private static float2 BezierMinMax(float p0, float p1, float p2, float p3) :2347
void LineMetricsImpl__BezierMinMax_fn(float* p0, float* p1, float* p2, float* p3, ::g::Uno::Float2* __retval)
{
    *__retval = LineMetricsImpl::BezierMinMax(*p0, *p1, *p2, *p3);
}

// private void EllipticBounds(float2 from, Fuse.Drawing.LineSegment seg) :2386
void LineMetricsImpl__EllipticBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* seg)
{
    __this->EllipticBounds(*from, *seg);
}

// public Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2300
void LineMetricsImpl__GetBounds_fn(LineMetricsImpl* __this, uObject* segments, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetBounds(segments);
}

// public generated LineMetricsImpl New() :2274
void LineMetricsImpl__New1_fn(LineMetricsImpl** __retval)
{
    *__retval = LineMetricsImpl::New1();
}

// public generated LineMetricsImpl() [instance] :2274
void LineMetricsImpl::ctor_()
{
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// private void AddPoint(float2 pt) [instance] :2280
void LineMetricsImpl::AddPoint(::g::Uno::Float2 pt)
{
    if (!_hasInit)
    {
        _bounds.Minimum(pt);
        _bounds.Maximum(pt);
        _hasInit = true;
        return;
    }

    _bounds.Minimum(::g::Uno::Math::Min3(_bounds.Minimum(), pt));
    _bounds.Maximum(::g::Uno::Math::Max3(_bounds.Maximum(), pt));
}

// private void BezierBounds(float2 s, float2 e, float2 c1, float2 c2) [instance] :2336
void LineMetricsImpl::BezierBounds(::g::Uno::Float2 s, ::g::Uno::Float2 e, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2)
{
    uStackFrame __("Fuse.Drawing.LineMetricsImpl", "BezierBounds(float2,float2,float2,float2)");
    ::g::Uno::Float2 x = LineMetricsImpl::BezierMinMax(s.X, c1.X, c2.X, e.X);
    ::g::Uno::Float2 y = LineMetricsImpl::BezierMinMax(s.Y, c1.Y, c2.Y, e.Y);
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, x.Item(0)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, x.Item(1)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, y.Item(0)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, y.Item(1)));
}

// private void EllipticBounds(float2 from, Fuse.Drawing.LineSegment seg) [instance] :2386
void LineMetricsImpl::EllipticBounds(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment seg)
{
    uStackFrame __("Fuse.Drawing.LineMetricsImpl", "EllipticBounds(float2,Fuse.Drawing.LineSegment)");

    if (::g::Fuse::Drawing::SurfaceUtil::EllipticArcOutOfRange(from, seg))
    {
        AddPoint(from);
        AddPoint(seg.To);
        return;
    }

    ::g::Uno::Float2 c, angles;
    ::g::Uno::Float2 radius = seg.A;
    float xAngle = seg.B.X;
    ::g::Fuse::Drawing::SurfaceUtil::EndpointToCenterArcParams(from, seg.To, &radius, xAngle, (seg.Flags & 1) == 1, (seg.Flags & 2) == 2, &c, &angles);
    ::g::Uno::Float4 ts = ::g::Uno::Float4__New1(0.0f);
    ts.Item(0, ::g::Uno::Math::Atan22(-radius.Y * ::g::Uno::Math::Sin1(xAngle), radius.X * ::g::Uno::Math::Cos1(xAngle)));
    ts.Item(1, ts.Item(0) + 3.14159274f);
    ts.Item(2, ::g::Uno::Math::Atan22(radius.Y * ::g::Uno::Math::Cos1(xAngle), radius.X * ::g::Uno::Math::Sin1(xAngle)));
    ts.Item(3, ts.Item(2) + 3.14159274f);

    for (int i = 0; i < 4; ++i)
    {
        float t = ts.Item(i);

        if (::g::Fuse::Drawing::SurfaceUtil::AngleInRange(t, angles.Item(0), angles.Item(0) + angles.Item(1)))
            AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, t));
    }

    AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, angles.Item(0)));
    AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, angles.Item(0) + angles.Item(1)));
}

// public Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [instance] :2300
::g::Uno::Rect LineMetricsImpl::GetBounds(uObject* segments)
{
    uStackFrame __("Fuse.Drawing.LineMetricsImpl", "GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    ::g::Fuse::Drawing::LineSegment ret2;

    for (int i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])); ++i)
    {
        ::g::Fuse::Drawing::LineSegment cur = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int>(i), &ret2), ret2);

        switch (cur.Type)
        {
            case 0:
            {
                _curPos = cur.To;
                break;
            }
            case 4:
                break;
            case 1:
            {
                AddPoint(cur.To);
                AddPoint(_curPos);
                _curPos = cur.To;
                break;
            }
            case 2:
            {
                BezierBounds(_curPos, cur.To, cur.A, cur.B);
                _curPos = cur.To;
                break;
            }
            case 3:
            {
                EllipticBounds(_curPos, cur);
                _curPos = cur.To;
                break;
            }
        }
    }

    return _bounds;
}

// private static float2 BezierMinMax(float p0, float p1, float p2, float p3) [static] :2347
::g::Uno::Float2 LineMetricsImpl::BezierMinMax(float p0, float p1, float p2, float p3)
{
    float b = ((2.0f * p0) - (4.0f * p1)) + (2.0f * p2);
    float a = ((-p0 + (3.0f * p1)) - (3.0f * p2)) + p3;
    float c = p1 - p0;
    float zeroTolerance = 1e-05f;

    if (::g::Uno::Math::Abs1(a) < 1e-05f)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float sqr = (b * b) - ((4.0f * a) * c);

    if (sqr < 0.0f)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float rt = ::g::Uno::Math::Sqrt1(sqr);
    float t1 = (-b + rt) / (2.0f * a);
    float t2 = (-b - rt) / (2.0f * a);
    return ::g::Uno::Float2__New2(::g::Uno::Math::Clamp1(t1, 0.0f, 1.0f), ::g::Uno::Math::Clamp1(t2, 0.0f, 1.0f));
}

// public generated LineMetricsImpl New() [static] :2274
LineMetricsImpl* LineMetricsImpl::New1()
{
    LineMetricsImpl* obj1 = (LineMetricsImpl*)uNew(LineMetricsImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public sealed class LineParser :2438
// {
static void LineParser_build(uType* type)
{
    ::STRINGS[37] = uString::Const("Unsupported SVG Path data");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno");
    ::STRINGS[38] = uString::Const("ParseSVGPath");
    ::TYPES[23] = ::g::Uno::Exception_typeof();
    type->Reflection.SetFunctions(2,
        new uFunction(".ctor", NULL, (void*)LineParser__New1_fn, 0, true, type, 0),
        new uFunction("ParseSVGPath", NULL, (void*)LineParser__ParseSVGPath_fn, 0, true, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL)));
}

uType* LineParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LineParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineParser", options);
    type->fp_build_ = LineParser_build;
    type->fp_ctor_ = (void*)LineParser__New1_fn;
    return type;
}

// public generated LineParser() :2438
void LineParser__ctor__fn(LineParser* __this)
{
    __this->ctor_();
}

// public generated LineParser New() :2438
void LineParser__New1_fn(LineParser** __retval)
{
    *__retval = LineParser::New1();
}

// public static void ParseSVGPath(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2440
void LineParser__ParseSVGPath_fn(uString* data, uObject* segments)
{
    LineParser::ParseSVGPath(data, segments);
}

// public generated LineParser() [instance] :2438
void LineParser::ctor_()
{
}

// public generated LineParser New() [static] :2438
LineParser* LineParser::New1()
{
    LineParser* obj1 = (LineParser*)uNew(LineParser_typeof());
    obj1->ctor_();
    return obj1;
}

// public static void ParseSVGPath(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static] :2440
void LineParser::ParseSVGPath(uString* data, uObject* segments)
{
    uStackFrame __("Fuse.Drawing.LineParser", "ParseSVGPath(string,Uno.Collections.IList<Fuse.Drawing.LineSegment>)");

    if (::g::Uno::String::op_Equality(data, NULL) || (uPtr(data)->Length() == 0))
        return;

    try
    {
        ::g::Fuse::Drawing::SVGPathParser::New1(data, segments)->Parse();
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
        ::g::Fuse::Diagnostics::UserError(::STRINGS[37/*"Unsupported...*/], data, ::STRINGS[5/*"/usr/local/...*/], 2451, ::STRINGS[38/*"ParseSVGPath"*/], NULL);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public struct LineSegment :2734
// {
static void LineSegment_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineSegment, To), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineSegment, A), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineSegment, B), 0,
        ::g::Fuse::Drawing::LineSegmentFlags_typeof(), offsetof(::g::Fuse::Drawing::LineSegment, Flags), 0,
        ::g::Fuse::Drawing::LineSegmentType_typeof(), offsetof(::g::Fuse::Drawing::LineSegment, Type), 0);
    type->Reflection.SetFields(5,
        new uField("A", 1),
        new uField("B", 2),
        new uField("Flags", 3),
        new uField("To", 0),
        new uField("Type", 4));
    type->Reflection.SetFunctions(3,
        new uFunction("get_HasTo", NULL, (void*)LineSegment__get_HasTo_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("Scale", NULL, (void*)LineSegment__Scale_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("Translate", NULL, (void*)LineSegment__Translate_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()));
}

uStructType* LineSegment_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ValueSize = sizeof(LineSegment);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.LineSegment", options);
    type->fp_build_ = LineSegment_build;
    return type;
}

// public bool get_HasTo() :2743
void LineSegment__get_HasTo_fn(LineSegment* __this, bool* __retval)
{
    *__retval = __this->HasTo();
}

// public void Scale(float2 factor) :2758
void LineSegment__Scale_fn(LineSegment* __this, ::g::Uno::Float2* factor)
{
    __this->Scale(*factor);
}

// public void Translate(float2 offset) :2746
void LineSegment__Translate_fn(LineSegment* __this, ::g::Uno::Float2* offset)
{
    __this->Translate(*offset);
}

// public bool get_HasTo() [instance] :2743
bool LineSegment::HasTo()
{
    return Type != 4;
}

// public void Scale(float2 factor) [instance] :2758
void LineSegment::Scale(::g::Uno::Float2 factor)
{
    if (Type != 4)
        To = ::g::Uno::Float2__op_Multiply2(To, factor);

    if (Type == 2)
    {
        A = ::g::Uno::Float2__op_Multiply2(A, factor);
        B = ::g::Uno::Float2__op_Multiply2(B, factor);
    }
    else if (Type == 3)
        A = ::g::Uno::Float2__op_Multiply2(A, factor);
}

// public void Translate(float2 offset) [instance] :2746
void LineSegment::Translate(::g::Uno::Float2 offset)
{
    if (Type != 4)
        To = ::g::Uno::Float2__op_Addition2(To, offset);

    if (Type == 2)
    {
        A = ::g::Uno::Float2__op_Addition2(A, offset);
        B = ::g::Uno::Float2__op_Addition2(B, offset);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public enum LineSegmentFlags :2724
uEnumType* LineSegmentFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineSegmentFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "EllipticArcLarge", 1LL,
        "EllipticArcSweep", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public sealed class LineSegments :2788
// {
static void LineSegments_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::LineSegments, _curPos), 0,
        ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/], offsetof(::g::Fuse::Drawing::LineSegments, _Segments), 0);
    type->Reflection.SetFunctions(20,
        new uFunction("BezierCurveTo", NULL, (void*)LineSegments__BezierCurveTo_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("BezierCurveToRel", NULL, (void*)LineSegments__BezierCurveToRel_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("Clear", NULL, (void*)LineSegments__Clear_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("ClosePath", NULL, (void*)LineSegments__ClosePath_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Count", NULL, (void*)LineSegments__get_Count_fn, 0, false, ::g::Uno::Int_typeof(), 0),
        new uFunction("get_CurPos", NULL, (void*)LineSegments__get_CurPos_fn, 0, false, ::g::Uno::Float2_typeof(), 0),
        new uFunction("EllipticArcTo", NULL, (void*)LineSegments__EllipticArcTo_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("EllipticArcToRel", NULL, (void*)LineSegments__EllipticArcToRel_fn, 0, false, uVoid_typeof(), 5, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("HorizLineTo", NULL, (void*)LineSegments__HorizLineTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("HorizLineToRel", NULL, (void*)LineSegments__HorizLineToRel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_Last", NULL, (void*)LineSegments__get_Last_fn, 0, false, ::g::Fuse::Drawing::LineSegment_typeof(), 0),
        new uFunction("LineTo", NULL, (void*)LineSegments__LineTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("LineToRel", NULL, (void*)LineSegments__LineToRel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("MoveTo", NULL, (void*)LineSegments__MoveTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("MoveToRel", NULL, (void*)LineSegments__MoveToRel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction(".ctor", NULL, (void*)LineSegments__New1_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)LineSegments__New2_fn, 0, true, type, 1, ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]),
        new uFunction("get_Segments", NULL, (void*)LineSegments__get_Segments_fn, 0, false, ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/], 0),
        new uFunction("VertLineTo", NULL, (void*)LineSegments__VertLineTo_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("VertLineToRel", NULL, (void*)LineSegments__VertLineToRel_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

uType* LineSegments_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LineSegments);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineSegments", options);
    type->fp_build_ = LineSegments_build;
    type->fp_ctor_ = (void*)LineSegments__New1_fn;
    return type;
}

// public LineSegments() :2815
void LineSegments__ctor__fn(LineSegments* __this)
{
    __this->ctor_();
}

// public LineSegments(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2821
void LineSegments__ctor_1_fn(LineSegments* __this, uObject* segments)
{
    __this->ctor_1(segments);
}

// private void Add(Fuse.Drawing.LineSegment seg) :2828
void LineSegments__Add_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* seg)
{
    __this->Add(*seg);
}

// public void BezierCurveTo(float2 pt, float2 controlA, float2 controlB) :2875
void LineSegments__BezierCurveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB)
{
    __this->BezierCurveTo(*pt, *controlA, *controlB);
}

// public void BezierCurveToRel(float2 pt, float2 controlA, float2 controlB) :2881
void LineSegments__BezierCurveToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB)
{
    __this->BezierCurveToRel(*pt, *controlA, *controlB);
}

// public void Clear() :2804
void LineSegments__Clear_fn(LineSegments* __this)
{
    __this->Clear();
}

// public void ClosePath() :2886
void LineSegments__ClosePath_fn(LineSegments* __this)
{
    __this->ClosePath();
}

// public int get_Count() :2812
void LineSegments__get_Count_fn(LineSegments* __this, int* __retval)
{
    *__retval = __this->Count();
}

// public float2 get_CurPos() :2801
void LineSegments__get_CurPos_fn(LineSegments* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CurPos();
}

// public void EllipticArcTo(float2 pt, float2 radius, float xAngle, bool large, bool sweep) :2891
void LineSegments__EllipticArcTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep)
{
    __this->EllipticArcTo(*pt, *radius, *xAngle, *large, *sweep);
}

// public void EllipticArcToRel(float2 pt, float2 radius, float xAngle, bool large, bool sweep) :2899
void LineSegments__EllipticArcToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep)
{
    __this->EllipticArcToRel(*pt, *radius, *xAngle, *large, *sweep);
}

// public void HorizLineTo(float x) :2855
void LineSegments__HorizLineTo_fn(LineSegments* __this, float* x)
{
    __this->HorizLineTo(*x);
}

// public void HorizLineToRel(float x) :2860
void LineSegments__HorizLineToRel_fn(LineSegments* __this, float* x)
{
    __this->HorizLineToRel(*x);
}

// public Fuse.Drawing.LineSegment get_Last() :2796
void LineSegments__get_Last_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* __retval)
{
    *__retval = __this->Last();
}

// public void LineTo(float2 pt) :2845
void LineSegments__LineTo_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->LineTo(*pt);
}

// public void LineToRel(float2 pt) :2850
void LineSegments__LineToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->LineToRel(*pt);
}

// public void MoveTo(float2 pt) :2835
void LineSegments__MoveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->MoveTo(*pt);
}

// public void MoveToRel(float2 pt) :2840
void LineSegments__MoveToRel_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->MoveToRel(*pt);
}

// public LineSegments New() :2815
void LineSegments__New1_fn(LineSegments** __retval)
{
    *__retval = LineSegments::New1();
}

// public LineSegments New(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2821
void LineSegments__New2_fn(uObject* segments, LineSegments** __retval)
{
    *__retval = LineSegments::New2(segments);
}

// public generated Uno.Collections.IList<Fuse.Drawing.LineSegment> get_Segments() :2790
void LineSegments__get_Segments_fn(LineSegments* __this, uObject** __retval)
{
    *__retval = __this->Segments();
}

// private generated void set_Segments(Uno.Collections.IList<Fuse.Drawing.LineSegment> value) :2790
void LineSegments__set_Segments_fn(LineSegments* __this, uObject* value)
{
    __this->Segments(value);
}

// public void VertLineTo(float y) :2865
void LineSegments__VertLineTo_fn(LineSegments* __this, float* y)
{
    __this->VertLineTo(*y);
}

// public void VertLineToRel(float y) :2870
void LineSegments__VertLineToRel_fn(LineSegments* __this, float* y)
{
    __this->VertLineToRel(*y);
}

// public LineSegments() [instance] :2815
void LineSegments::ctor_()
{
    uStackFrame __("Fuse.Drawing.LineSegments", ".ctor()");
    Segments((uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/])));
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// public LineSegments(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [instance] :2821
void LineSegments::ctor_1(uObject* segments)
{
    uStackFrame __("Fuse.Drawing.LineSegments", ".ctor(Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    ::g::Fuse::Drawing::LineSegment ret8;
    Segments(segments);

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])) > 0)
        _curPos = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int>(::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]))), &ret8), ret8).To;
}

// private void Add(Fuse.Drawing.LineSegment seg) [instance] :2828
void LineSegments::Add(::g::Fuse::Drawing::LineSegment seg)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "Add(Fuse.Drawing.LineSegment)");
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Segments()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(seg));

    if (seg.HasTo())
        _curPos = seg.To;
}

// public void BezierCurveTo(float2 pt, float2 controlA, float2 controlB) [instance] :2875
void LineSegments::BezierCurveTo(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "BezierCurveTo(float2,float2,float2)");
    ::g::Fuse::Drawing::LineSegment collection3;
    Add((collection3 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection3.Type = 2, collection3.To = pt, collection3.A = controlA, collection3.B = controlB, collection3));
}

// public void BezierCurveToRel(float2 pt, float2 controlA, float2 controlB) [instance] :2881
void LineSegments::BezierCurveToRel(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "BezierCurveToRel(float2,float2,float2)");
    BezierCurveTo(::g::Uno::Float2__op_Addition2(pt, _curPos), ::g::Uno::Float2__op_Addition2(controlA, _curPos), ::g::Uno::Float2__op_Addition2(controlB, _curPos));
}

// public void Clear() [instance] :2804
void LineSegments::Clear()
{
    uStackFrame __("Fuse.Drawing.LineSegments", "Clear()");
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Segments()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]));
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// public void ClosePath() [instance] :2886
void LineSegments::ClosePath()
{
    uStackFrame __("Fuse.Drawing.LineSegments", "ClosePath()");
    ::g::Fuse::Drawing::LineSegment collection4;
    Add((collection4 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection4.Type = 4, collection4));
}

// public int get_Count() [instance] :2812
int LineSegments::Count()
{
    uStackFrame __("Fuse.Drawing.LineSegments", "get_Count()");
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Segments()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]));
}

// public float2 get_CurPos() [instance] :2801
::g::Uno::Float2 LineSegments::CurPos()
{
    return _curPos;
}

// public void EllipticArcTo(float2 pt, float2 radius, float xAngle, bool large, bool sweep) [instance] :2891
void LineSegments::EllipticArcTo(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "EllipticArcTo(float2,float2,float,bool,bool)");
    ::g::Fuse::Drawing::LineSegment collection5;
    Add((collection5 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection5.Type = 3, collection5.To = pt, collection5.A = radius, collection5.B = ::g::Uno::Float2__New2(xAngle, 0.0f), collection5.Flags = ((large ? 1 : 0) | (sweep ? 2 : 0)), collection5));
}

// public void EllipticArcToRel(float2 pt, float2 radius, float xAngle, bool large, bool sweep) [instance] :2899
void LineSegments::EllipticArcToRel(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "EllipticArcToRel(float2,float2,float,bool,bool)");
    EllipticArcTo(::g::Uno::Float2__op_Addition2(pt, _curPos), radius, xAngle, large, sweep);
}

// public void HorizLineTo(float x) [instance] :2855
void LineSegments::HorizLineTo(float x)
{
    LineTo(::g::Uno::Float2__New2(x, _curPos.Y));
}

// public void HorizLineToRel(float x) [instance] :2860
void LineSegments::HorizLineToRel(float x)
{
    LineTo(::g::Uno::Float2__op_Addition2(_curPos, ::g::Uno::Float2__New2(x, 0.0f)));
}

// public Fuse.Drawing.LineSegment get_Last() [instance] :2796
::g::Fuse::Drawing::LineSegment LineSegments::Last()
{
    uStackFrame __("Fuse.Drawing.LineSegments", "get_Last()");
    ::g::Fuse::Drawing::LineSegment ret9;
    return (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(Segments()), ::TYPES[5/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int>(::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Segments()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])) - 1), &ret9), ret9);
}

// public void LineTo(float2 pt) [instance] :2845
void LineSegments::LineTo(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "LineTo(float2)");
    ::g::Fuse::Drawing::LineSegment collection2;
    Add((collection2 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection2.Type = 1, collection2.To = pt, collection2));
}

// public void LineToRel(float2 pt) [instance] :2850
void LineSegments::LineToRel(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "LineToRel(float2)");
    LineTo(::g::Uno::Float2__op_Addition2(pt, _curPos));
}

// public void MoveTo(float2 pt) [instance] :2835
void LineSegments::MoveTo(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "MoveTo(float2)");
    ::g::Fuse::Drawing::LineSegment collection1;
    Add((collection1 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection1.Type = 0, collection1.To = pt, collection1));
}

// public void MoveToRel(float2 pt) [instance] :2840
void LineSegments::MoveToRel(::g::Uno::Float2 pt)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "MoveToRel(float2)");
    MoveTo(::g::Uno::Float2__op_Addition2(pt, _curPos));
}

// public generated Uno.Collections.IList<Fuse.Drawing.LineSegment> get_Segments() [instance] :2790
uObject* LineSegments::Segments()
{
    return _Segments;
}

// private generated void set_Segments(Uno.Collections.IList<Fuse.Drawing.LineSegment> value) [instance] :2790
void LineSegments::Segments(uObject* value)
{
    _Segments = value;
}

// public void VertLineTo(float y) [instance] :2865
void LineSegments::VertLineTo(float y)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "VertLineTo(float)");
    LineTo(::g::Uno::Float2__New2(_curPos.X, y));
}

// public void VertLineToRel(float y) [instance] :2870
void LineSegments::VertLineToRel(float y)
{
    uStackFrame __("Fuse.Drawing.LineSegments", "VertLineToRel(float)");
    LineTo(::g::Uno::Float2__op_Addition2(_curPos, ::g::Uno::Float2__New2(0.0f, y)));
}

// public LineSegments New() [static] :2815
LineSegments* LineSegments::New1()
{
    LineSegments* obj6 = (LineSegments*)uNew(LineSegments_typeof());
    obj6->ctor_();
    return obj6;
}

// public LineSegments New(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static] :2821
LineSegments* LineSegments::New2(uObject* segments)
{
    LineSegments* obj7 = (LineSegments*)uNew(LineSegments_typeof());
    obj7->ctor_1(segments);
    return obj7;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public enum LineSegmentType :2706
uEnumType* LineSegmentType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.LineSegmentType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Move", 0LL,
        "Straight", 1LL,
        "BezierCurve", 2LL,
        "EllipticArc", 3LL,
        "Close", 4LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Elements/1.2.1/drawing/$.uno
// ---------------------------------------------------------------

// internal sealed class RepeatBaker :311
// {
// static RepeatBaker() :311
static void RepeatBaker__cctor__fn(uType* __type)
{
    RepeatBaker::Singleton_ = RepeatBaker::New1();
}

static void RepeatBaker_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::RepeatBaker, _draw_2972f423), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::RepeatBaker, FillBuffer_VertexPosition_2972f423_1_1_1), 0,
        ::TYPES[1/*float2[]*/], offsetof(::g::Fuse::Drawing::RepeatBaker, FillBuffer_Vertices_2972f423_1_0_6), 0,
        type, (uintptr_t)&::g::Fuse::Drawing::RepeatBaker::Singleton_, uFieldFlagsStatic);
}

uType* RepeatBaker_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(RepeatBaker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.RepeatBaker", options);
    type->fp_build_ = RepeatBaker_build;
    type->fp_ctor_ = (void*)RepeatBaker__New1_fn;
    type->fp_cctor_ = RepeatBaker__cctor__fn;
    return type;
}

// public generated RepeatBaker() :311
void RepeatBaker__ctor__fn(RepeatBaker* __this)
{
    __this->ctor_();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb) :315
void RepeatBaker__FillBuffer_fn(RepeatBaker* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->FillBuffer(dc, tex, fb);
}

// private generated void init_DrawCalls() :311
void RepeatBaker__init_DrawCalls_fn(RepeatBaker* __this)
{
    __this->init_DrawCalls();
}

// public generated RepeatBaker New() :311
void RepeatBaker__New1_fn(RepeatBaker** __retval)
{
    *__retval = RepeatBaker::New1();
}

uSStrong<RepeatBaker*> RepeatBaker::Singleton_;

// public generated RepeatBaker() [instance] :311
void RepeatBaker::ctor_()
{
    init_DrawCalls();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb) [instance] :315
void RepeatBaker::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    uStackFrame __("Fuse.Drawing.RepeatBaker", "FillBuffer(Fuse.DrawContext,texture2D,framebuffer)");
    uPtr(dc)->PushRenderTarget(fb);
    _draw_2972f423.DepthTestEnabled(false);
    _draw_2972f423.CullFace(0);
    _draw_2972f423.Use();
    _draw_2972f423.Attrib1(0, 2, FillBuffer_VertexPosition_2972f423_1_1_1, 8, 0);
    _draw_2972f423.Uniform2(1, ::g::Uno::Float2__op_Implicit1(uPtr(fb)->Size()));
    _draw_2972f423.Uniform2(2, ::g::Uno::Float2__op_Implicit1(uPtr(tex)->Size()));
    _draw_2972f423.Sampler3(3, tex, ::g::Uno::Graphics::SamplerState__NearestClamp());
    _draw_2972f423.DrawArrays(uPtr(FillBuffer_Vertices_2972f423_1_0_6)->Length());
    dc->PopRenderTarget();
}

// private generated void init_DrawCalls() [instance] :311
void RepeatBaker::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.RepeatBaker", "init_DrawCalls()");
    uArray* Vertices_2972f423_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_VertexPosition_2972f423_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(Vertices_2972f423_1_0_0), 0);
    FillBuffer_Vertices_2972f423_1_0_6 = Vertices_2972f423_1_0_0;
    _draw_2972f423 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::RepeatBaker447c61dc());
}

// public generated RepeatBaker New() [static] :311
RepeatBaker* RepeatBaker::New1()
{
    RepeatBaker* obj1 = (RepeatBaker*)uNew(RepeatBaker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum ResampleMode :212
uEnumType* ResampleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.ResampleMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public sealed class SolidColor :436
// {
// static SolidColor() :436
static void SolidColor__cctor_1_fn(uType* __type)
{
    SolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Color"*/]);
}

static void SolidColor_build(uType* type)
{
    ::STRINGS[26] = uString::Const("Color");
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(SolidColor_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::SolidColor, _color), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::SolidColor::_colorName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(5,
        new uFunction("get_Color", NULL, (void*)SolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)SolidColor__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction(".ctor", NULL, (void*)SolidColor__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)SolidColor__New3_fn, 0, true, type, 1, ::g::Uno::Float4_typeof()),
        new uFunction("SetColor", NULL, (void*)SolidColor__SetColor1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()));
}

SolidColor_type* SolidColor_typeof()
{
    static uSStrong<SolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SolidColor);
    options.TypeSize = sizeof(SolidColor_type);
    type = (SolidColor_type*)uClassType::New("Fuse.Drawing.SolidColor", options);
    type->fp_build_ = SolidColor_build;
    type->fp_ctor_ = (void*)SolidColor__New2_fn;
    type->fp_cctor_ = SolidColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))SolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))SolidColor__get_Color_fn;
    return type;
}

// public SolidColor() :479
void SolidColor__ctor_3_fn(SolidColor* __this)
{
    __this->ctor_3();
}

// public SolidColor(float4 color) :484
void SolidColor__ctor_4_fn(SolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color() :449
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :450
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed bool get_IsCompletelyTransparent() :475
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public SolidColor New() :479
void SolidColor__New2_fn(SolidColor** __retval)
{
    *__retval = SolidColor::New2();
}

// public SolidColor New(float4 color) :484
void SolidColor__New3_fn(::g::Uno::Float4* color, SolidColor** __retval)
{
    *__retval = SolidColor::New3(*color);
}

// internal void SetColor(float4 c) :470
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c)
{
    __this->SetColor(*c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) :460
void SolidColor__SetColor1_fn(SolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector SolidColor::_colorName_;

// public SolidColor() [instance] :479
void SolidColor::ctor_3()
{
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public SolidColor(float4 color) [instance] :484
void SolidColor::ctor_4(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :449
::g::Uno::Float4 SolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance] :450
void SolidColor::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "set_Color(float4)");

    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(SolidColor::_colorName());
    }
}

// internal void SetColor(float4 c) [instance] :470
void SolidColor::SetColor(::g::Uno::Float4 c)
{
    Color(c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance] :460
void SolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    uStackFrame __("Fuse.Drawing.SolidColor", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(SolidColor::_colorName(), origin);
    }
}

// public SolidColor New() [static] :479
SolidColor* SolidColor::New2()
{
    SolidColor* obj1 = (SolidColor*)uNew(SolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public SolidColor New(float4 color) [static] :484
SolidColor* SolidColor::New3(::g::Uno::Float4 color)
{
    SolidColor* obj2 = (SolidColor*)uNew(SolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public abstract class StaticBrush :81
// {
static void StaticBrush_build(uType* type)
{
    type->SetFields(3);
}

::g::Fuse::Drawing::Brush_type* StaticBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(StaticBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticBrush", options);
    type->fp_build_ = StaticBrush_build;
    return type;
}

// protected generated StaticBrush() :81
void StaticBrush__ctor_2_fn(StaticBrush* __this)
{
    __this->ctor_2();
}

// protected generated StaticBrush() [instance] :81
void StaticBrush::ctor_2()
{
    ctor_1();
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/brushes/$.uno
// --------------------------------------------------------------

// public sealed class StaticSolidColor :490
// {
static void StaticSolidColor_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(StaticSolidColor_type, interface0));
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Drawing::StaticSolidColor, _color), 0);
    type->Reflection.SetFunctions(2,
        new uFunction("get_Color", NULL, (void*)StaticSolidColor__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)StaticSolidColor__New2_fn, 0, true, type, 1, ::g::Uno::Float4_typeof()));
}

StaticSolidColor_type* StaticSolidColor_typeof()
{
    static uSStrong<StaticSolidColor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::StaticBrush_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StaticSolidColor);
    options.TypeSize = sizeof(StaticSolidColor_type);
    type = (StaticSolidColor_type*)uClassType::New("Fuse.Drawing.StaticSolidColor", options);
    type->fp_build_ = StaticSolidColor_build;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))StaticSolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))StaticSolidColor__get_Color_fn;
    return type;
}

// public StaticSolidColor(float4 color) :503
void StaticSolidColor__ctor_3_fn(StaticSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_3(*color);
}

// public float4 get_Color() :497
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public override sealed bool get_IsCompletelyTransparent() :492
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Fuse::Drawing::Brush__get_IsCompletelyTransparent_fn(__this, &ret2), ret2) || (__this->Color().W == 0.0f), void();
}

// public StaticSolidColor New(float4 color) :503
void StaticSolidColor__New2_fn(::g::Uno::Float4* color, StaticSolidColor** __retval)
{
    *__retval = StaticSolidColor::New2(*color);
}

// public StaticSolidColor(float4 color) [instance] :503
void StaticSolidColor::ctor_3(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance] :497
::g::Uno::Float4 StaticSolidColor::Color()
{
    return _color;
}

// public StaticSolidColor New(float4 color) [static] :503
StaticSolidColor* StaticSolidColor::New2(::g::Uno::Float4 color)
{
    StaticSolidColor* obj1 = (StaticSolidColor*)uNew(StaticSolidColor_typeof());
    obj1->ctor_3(color);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public sealed class Stroke :249
// {
// static Stroke() :249
static void Stroke__cctor__fn(uType* __type)
{
    Stroke::_shadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"Shading"*/]);
    Stroke::_brushName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[39/*"Brush"*/]);
    Stroke::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Color"*/]);
    Stroke::_widthName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[40/*"Width"*/]);
    Stroke::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[25/*"Offset"*/]);
    Stroke::_adjustmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[41/*"Adjustment"*/]);
    Stroke::_alignmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[42/*"Alignment"*/]);
    Stroke::_lineCapName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[43/*"LineCap"*/]);
    Stroke::_lineJoinName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[44/*"LineJoin"*/]);
    Stroke::_lineJoinMiterLimitName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[45/*"LineJoinMit...*/]);
}

static void Stroke_build(uType* type)
{
    ::STRINGS[21] = uString::Const("Shading");
    ::STRINGS[39] = uString::Const("Brush");
    ::STRINGS[26] = uString::Const("Color");
    ::STRINGS[40] = uString::Const("Width");
    ::STRINGS[25] = uString::Const("Offset");
    ::STRINGS[41] = uString::Const("Adjustment");
    ::STRINGS[42] = uString::Const("Alignment");
    ::STRINGS[43] = uString::Const("LineCap");
    ::STRINGS[44] = uString::Const("LineJoin");
    ::STRINGS[45] = uString::Const("LineJoinMiterLimit");
    ::TYPES[24] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::ISolidColor_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Stroke_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Drawing::StrokeAdjustment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _adjustment), 0,
        ::g::Fuse::Drawing::StrokeAlignment_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _alignment), 0,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _brush), 0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineCap), 0,
        ::g::Fuse::Drawing::LineJoin_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineJoin), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _lineJoinMiterLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _offset), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _pinCount), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Drawing::Stroke, _width), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_adjustmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_alignmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_brushName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineCapName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineJoinMiterLimitName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_lineJoinName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_offsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_shadingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&::g::Fuse::Drawing::Stroke::_widthName_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(26,
        new uFunction("get_Adjustment", NULL, (void*)Stroke__get_Adjustment_fn, 0, false, ::g::Fuse::Drawing::StrokeAdjustment_typeof(), 0),
        new uFunction("set_Adjustment", NULL, (void*)Stroke__set_Adjustment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::StrokeAdjustment_typeof()),
        new uFunction("get_Alignment", NULL, (void*)Stroke__get_Alignment_fn, 0, false, ::g::Fuse::Drawing::StrokeAlignment_typeof(), 0),
        new uFunction("set_Alignment", NULL, (void*)Stroke__set_Alignment_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::StrokeAlignment_typeof()),
        new uFunction("get_Brush", NULL, (void*)Stroke__get_Brush_fn, 0, false, ::g::Fuse::Drawing::Brush_typeof(), 0),
        new uFunction("set_Brush", NULL, (void*)Stroke__set_Brush_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("get_Color", NULL, (void*)Stroke__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)Stroke__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("GetDeviceAdjusted", NULL, (void*)Stroke__GetDeviceAdjusted_fn, 0, false, ::g::Uno::Float2_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_IsPinned", NULL, (void*)Stroke__get_IsPinned_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_LineCap", NULL, (void*)Stroke__get_LineCap_fn, 0, false, ::g::Fuse::Drawing::LineCap_typeof(), 0),
        new uFunction("set_LineCap", NULL, (void*)Stroke__set_LineCap_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::LineCap_typeof()),
        new uFunction("get_LineJoin", NULL, (void*)Stroke__get_LineJoin_fn, 0, false, ::g::Fuse::Drawing::LineJoin_typeof(), 0),
        new uFunction("set_LineJoin", NULL, (void*)Stroke__set_LineJoin_fn, 0, false, uVoid_typeof(), 1, ::g::Fuse::Drawing::LineJoin_typeof()),
        new uFunction("get_LineJoinMiterLimit", NULL, (void*)Stroke__get_LineJoinMiterLimit_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_LineJoinMiterLimit", NULL, (void*)Stroke__set_LineJoinMiterLimit_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Stroke__New2_fn, 0, true, type, 0),
        new uFunction(".ctor", NULL, (void*)Stroke__New3_fn, 0, true, type, 4, ::g::Fuse::Drawing::Brush_typeof(), ::g::Uno::Float_typeof(), ::g::Fuse::Drawing::LineCap_typeof(), ::g::Fuse::Drawing::LineJoin_typeof()),
        new uFunction("get_Offset", NULL, (void*)Stroke__get_Offset_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Offset", NULL, (void*)Stroke__set_Offset_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("Pin", NULL, (void*)Stroke__Pin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("Prepare", NULL, (void*)Stroke__Prepare_fn, 0, false, uVoid_typeof(), 2, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Float2_typeof()),
        new uFunction("SetColor", NULL, (void*)Stroke__SetColor_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Float4_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("Unpin", NULL, (void*)Stroke__Unpin_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Width", NULL, (void*)Stroke__get_Width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_Width", NULL, (void*)Stroke__set_Width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

Stroke_type* Stroke_typeof()
{
    static uSStrong<Stroke_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(Stroke_type);
    type = (Stroke_type*)uClassType::New("Fuse.Drawing.Stroke", options);
    type->fp_build_ = Stroke_build;
    type->fp_ctor_ = (void*)Stroke__New2_fn;
    type->fp_cctor_ = Stroke__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public Stroke() :480
void Stroke__ctor_1_fn(Stroke* __this)
{
    __this->ctor_1();
}

// public Stroke(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) :482
void Stroke__ctor_2_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin)
{
    __this->ctor_2(brush, *width, *lineCap, *lineJoin);
}

// private float Adjust(float w, float ppi) :428
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->Adjust(*w, *ppi);
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() :347
void Stroke__get_Adjustment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Adjustment();
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) :348
void Stroke__set_Adjustment_fn(Stroke* __this, int* value)
{
    __this->Adjustment(*value);
}

// private float AdjustPosition(float w, float ppi) :405
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->AdjustPosition(*w, *ppi);
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() :362
void Stroke__get_Alignment_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) :363
void Stroke__set_Alignment_fn(Stroke* __this, int* value)
{
    __this->Alignment(*value);
}

// public Fuse.Drawing.Brush get_Brush() :264
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Brush();
}

// public void set_Brush(Fuse.Drawing.Brush value) :265
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Brush(value);
}

// public float4 get_Color() :295
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :301
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float2 GetDeviceAdjusted(float pixelsPerPoint) :379
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* pixelsPerPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDeviceAdjusted(*pixelsPerPoint);
}

// public bool get_IsPinned() :505
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public Fuse.Drawing.LineCap get_LineCap() :440
void Stroke__get_LineCap_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->LineCap();
}

// public void set_LineCap(Fuse.Drawing.LineCap value) :441
void Stroke__set_LineCap_fn(Stroke* __this, int* value)
{
    __this->LineCap(*value);
}

// public Fuse.Drawing.LineJoin get_LineJoin() :453
void Stroke__get_LineJoin_fn(Stroke* __this, int* __retval)
{
    *__retval = __this->LineJoin();
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value) :454
void Stroke__set_LineJoin_fn(Stroke* __this, int* value)
{
    __this->LineJoin(*value);
}

// public float get_LineJoinMiterLimit() :471
void Stroke__get_LineJoinMiterLimit_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->LineJoinMiterLimit();
}

// public void set_LineJoinMiterLimit(float value) :472
void Stroke__set_LineJoinMiterLimit_fn(Stroke* __this, float* value)
{
    __this->LineJoinMiterLimit(*value);
}

// public Stroke New() :480
void Stroke__New2_fn(Stroke** __retval)
{
    *__retval = Stroke::New2();
}

// public Stroke New(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) :482
void Stroke__New3_fn(::g::Fuse::Drawing::Brush* brush, float* width, int* lineCap, int* lineJoin, Stroke** __retval)
{
    *__retval = Stroke::New3(brush, *width, *lineCap, *lineJoin);
}

// public float get_Offset() :335
void Stroke__get_Offset_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value) :336
void Stroke__set_Offset_fn(Stroke* __this, float* value)
{
    __this->Offset(*value);
}

// protected void OnPinned() :507
void Stroke__OnPinned_fn(Stroke* __this)
{
    __this->OnPinned();
}

// protected void OnUnpinned() :518
void Stroke__OnUnpinned_fn(Stroke* __this)
{
    __this->OnUnpinned();
}

// public void Pin() :491
void Stroke__Pin_fn(Stroke* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) :529
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin) :306
void Stroke__SetColor_fn(Stroke* __this, ::g::Uno::Float4* color, uObject* origin)
{
    __this->SetColor(*color, origin);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop) :253
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    uStackFrame __("Fuse.Drawing.Stroke", "Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject,Uno.UX.Selector)");

    if (obj == __this->Brush())
        __this->OnPropertyChanged(Stroke::_shadingName());
}

// public void Unpin() :498
void Stroke__Unpin_fn(Stroke* __this)
{
    __this->Unpin();
}

// public float get_Width() :323
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value) :324
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

::g::Uno::UX::Selector Stroke::_adjustmentName_;
::g::Uno::UX::Selector Stroke::_alignmentName_;
::g::Uno::UX::Selector Stroke::_brushName_;
::g::Uno::UX::Selector Stroke::_colorName_;
::g::Uno::UX::Selector Stroke::_lineCapName_;
::g::Uno::UX::Selector Stroke::_lineJoinMiterLimitName_;
::g::Uno::UX::Selector Stroke::_lineJoinName_;
::g::Uno::UX::Selector Stroke::_offsetName_;
::g::Uno::UX::Selector Stroke::_shadingName_;
::g::Uno::UX::Selector Stroke::_widthName_;

// public Stroke() [instance] :480
void Stroke::ctor_1()
{
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
    _lineJoinMiterLimit = 1.0f;
    ctor_();
}

// public Stroke(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) [instance] :482
void Stroke::ctor_2(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    uStackFrame __("Fuse.Drawing.Stroke", ".ctor(Fuse.Drawing.Brush,[float],[Fuse.Drawing.LineCap],[Fuse.Drawing.LineJoin])");
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
    _lineJoinMiterLimit = 1.0f;
    ctor_();
    Brush(brush);
    Width(width);
    LineCap(lineCap);
    LineJoin(lineJoin);
}

// private float Adjust(float w, float ppi) [instance] :428
float Stroke::Adjust(float w, float ppi)
{
    w = AdjustPosition(w, ppi);
    w = ::g::Uno::Math::Max1(w, 1.0f / ppi);
    return w;
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() [instance] :347
int Stroke::Adjustment()
{
    return _adjustment;
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) [instance] :348
void Stroke::Adjustment(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Adjustment(Fuse.Drawing.StrokeAdjustment)");

    if (_adjustment != value)
    {
        _adjustment = value;
        OnPropertyChanged(Stroke::_adjustmentName());
    }
}

// private float AdjustPosition(float w, float ppi) [instance] :405
float Stroke::AdjustPosition(float w, float ppi)
{
    switch (Adjustment())
    {
        case 0:
            return w;
        case 1:
        {
            w = ::g::Uno::Math::Ceil1(w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::g::Uno::Math::Floor1((w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::g::Uno::Math::Floor1(w * ppi) / ppi;
            break;
        }
    }

    return w;
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() [instance] :362
int Stroke::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) [instance] :363
void Stroke::Alignment(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Alignment(Fuse.Drawing.StrokeAlignment)");

    if (_alignment != value)
    {
        _alignment = value;
        OnPropertyChanged(Stroke::_alignmentName());
    }
}

// public Fuse.Drawing.Brush get_Brush() [instance] :264
::g::Fuse::Drawing::Brush* Stroke::Brush()
{
    return _brush;
}

// public void set_Brush(Fuse.Drawing.Brush value) [instance] :265
void Stroke::Brush(::g::Fuse::Drawing::Brush* value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Brush(Fuse.Drawing.Brush)");

    if (value == _brush)
        return;

    if (IsPinned() && (_brush != NULL))
        uPtr(_brush)->Unpin();

    if (IsPinned() && uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    _brush = value;

    if (IsPinned() && uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    if (IsPinned() && (_brush != NULL))
        uPtr(_brush)->Pin();

    OnPropertyChanged(Stroke::_brushName());
}

// public float4 get_Color() [instance] :295
::g::Uno::Float4 Stroke::Color()
{
    uStackFrame __("Fuse.Drawing.Stroke", "get_Color()");

    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[9/*Fuse.Drawing.ISolidColor*/]))
        return ::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr((uObject*)Brush()), ::TYPES[9/*Fuse.Drawing.ISolidColor*/]));

    return ::g::Uno::Float4__New1(0.0f);
}

// public void set_Color(float4 value) [instance] :301
void Stroke::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Color(float4)");
    SetColor(value, (uObject*)this);
}

// public float2 GetDeviceAdjusted(float pixelsPerPoint) [instance] :379
::g::Uno::Float2 Stroke::GetDeviceAdjusted(float pixelsPerPoint)
{
    float ppi = pixelsPerPoint;
    float lo = 0.0f, hi = 0.0f;

    switch (Alignment())
    {
        case 2:
        {
            lo = ::g::Uno::Math::Ceil1((_offset - 0.5f) * ppi) / ppi;
            hi = lo + Adjust(_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::g::Uno::Math::Floor1((_offset + 0.5f) * ppi) / ppi;
            lo = hi - Adjust(_width, ppi);
            break;
        }
        case 0:
        {
            lo = AdjustPosition(_offset - (_width / 2.0f), ppi);
            hi = lo + Adjust(_width, ppi);
            break;
        }
    }

    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(hi - lo, (hi + lo) / 2.0f);
    return r;
}

// public bool get_IsPinned() [instance] :505
bool Stroke::IsPinned()
{
    return _pinCount > 0;
}

// public Fuse.Drawing.LineCap get_LineCap() [instance] :440
int Stroke::LineCap()
{
    return _lineCap;
}

// public void set_LineCap(Fuse.Drawing.LineCap value) [instance] :441
void Stroke::LineCap(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_LineCap(Fuse.Drawing.LineCap)");

    if (value == _lineCap)
        return;

    _lineCap = value;
    OnPropertyChanged(Stroke::_lineCapName());
}

// public Fuse.Drawing.LineJoin get_LineJoin() [instance] :453
int Stroke::LineJoin()
{
    return _lineJoin;
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value) [instance] :454
void Stroke::LineJoin(int value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_LineJoin(Fuse.Drawing.LineJoin)");

    if (value == _lineJoin)
        return;

    _lineJoin = value;
    OnPropertyChanged(Stroke::_lineJoinName());
}

// public float get_LineJoinMiterLimit() [instance] :471
float Stroke::LineJoinMiterLimit()
{
    return _lineJoinMiterLimit;
}

// public void set_LineJoinMiterLimit(float value) [instance] :472
void Stroke::LineJoinMiterLimit(float value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_LineJoinMiterLimit(float)");

    if (value == _lineJoinMiterLimit)
        return;

    _lineJoinMiterLimit = value;
    OnPropertyChanged(Stroke::_lineJoinMiterLimitName());
}

// public float get_Offset() [instance] :335
float Stroke::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance] :336
void Stroke::Offset(float value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Offset(float)");
    _offset = value;
    OnPropertyChanged(Stroke::_offsetName());
}

// protected void OnPinned() [instance] :507
void Stroke::OnPinned()
{
    uStackFrame __("Fuse.Drawing.Stroke", "OnPinned()");

    if (Brush() != NULL)
    {
        uPtr(Brush())->Pin();
        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(Brush(), ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]);

        if (db != NULL)
            uPtr(db)->AddPropertyListener((uObject*)this);
    }
}

// protected void OnUnpinned() [instance] :518
void Stroke::OnUnpinned()
{
    uStackFrame __("Fuse.Drawing.Stroke", "OnUnpinned()");

    if (Brush() != NULL)
    {
        uPtr(Brush())->Unpin();
        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(Brush(), ::TYPES[24/*Fuse.Drawing.DynamicBrush*/]);

        if (db != NULL)
            uPtr(db)->RemovePropertyListener((uObject*)this);
    }
}

// public void Pin() [instance] :491
void Stroke::Pin()
{
    uStackFrame __("Fuse.Drawing.Stroke", "Pin()");
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance] :529
void Stroke::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    uStackFrame __("Fuse.Drawing.Stroke", "Prepare(Fuse.DrawContext,float2)");

    if (Brush() != NULL)
        uPtr(Brush())->Prepare(dc, canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin) [instance] :306
void Stroke::SetColor(::g::Uno::Float4 color, uObject* origin)
{
    uStackFrame __("Fuse.Drawing.Stroke", "SetColor(float4,Uno.UX.IPropertyListener)");

    if (::g::Uno::Float4__op_Inequality(color, Color()))
    {
        if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[25/*Fuse.Drawing.SolidColor*/]))
            Brush(::g::Fuse::Drawing::SolidColor::New3(color));
        else
            uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Brush(), ::TYPES[25/*Fuse.Drawing.SolidColor*/]))->Color(color);

        OnPropertyChanged1(Stroke::_colorName(), origin);
    }
}

// public void Unpin() [instance] :498
void Stroke::Unpin()
{
    uStackFrame __("Fuse.Drawing.Stroke", "Unpin()");
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}

// public float get_Width() [instance] :323
float Stroke::Width()
{
    return _width;
}

// public void set_Width(float value) [instance] :324
void Stroke::Width(float value)
{
    uStackFrame __("Fuse.Drawing.Stroke", "set_Width(float)");
    _width = value;
    OnPropertyChanged(Stroke::_widthName());
}

// public Stroke New() [static] :480
Stroke* Stroke::New2()
{
    Stroke* obj1 = (Stroke*)uNew(Stroke_typeof());
    obj1->ctor_1();
    return obj1;
}

// public Stroke New(Fuse.Drawing.Brush brush, [float width], [Fuse.Drawing.LineCap lineCap], [Fuse.Drawing.LineJoin lineJoin]) [static] :482
Stroke* Stroke::New3(::g::Fuse::Drawing::Brush* brush, float width, int lineCap, int lineJoin)
{
    Stroke* obj2 = (Stroke*)uNew(Stroke_typeof());
    obj2->ctor_2(brush, width, lineCap, lineJoin);
    return obj2;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum StrokeAdjustment :234
uEnumType* StrokeAdjustment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAdjustment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum StrokeAlignment :242
uEnumType* StrokeAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);
    return type;
}

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public abstract class Surface :2935
// {
static void Surface_build(uType* type)
{
    ::STRINGS[46] = uString::Const("GLDraw called with mismatched elements");
    ::STRINGS[5] = uString::Const("/usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno");
    ::STRINGS[47] = uString::Const("Draw");
    ::TYPES[26] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[27] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::ISurfaceDrawable_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Surface_type, interface0));
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Drawing::Surface, _draw_7678ae3a), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Drawing::Surface, Draw_LocalTransform_7678ae3a_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(::g::Fuse::Drawing::Surface, Draw_LocalTransform_7678ae3a_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Drawing::Surface, Draw_VertexData_7678ae3a_7_2_1), 0,
        uObject_typeof(), offsetof(::g::Fuse::Drawing::Surface, Owner), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::Surface, _ElementSize), 0);
    type->Reflection.SetFunctions(14,
        new uFunction("Begin", NULL, NULL, offsetof(Surface_type, fp_Begin), false, uVoid_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Uno::Graphics::Framebuffer_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("CreatePath", NULL, NULL, offsetof(Surface_type, fp_CreatePath), false, ::g::Fuse::Drawing::SurfacePath_typeof(), 2, ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL), ::g::Fuse::Drawing::FillRule_typeof()),
        new uFunction("Dispose", NULL, NULL, offsetof(Surface_type, fp_Dispose), false, uVoid_typeof(), 0),
        new uFunction("DisposePath", NULL, NULL, offsetof(Surface_type, fp_DisposePath), false, uVoid_typeof(), 1, ::g::Fuse::Drawing::SurfacePath_typeof()),
        new uFunction("Draw", NULL, (void*)Surface__Draw_fn, 0, false, uVoid_typeof(), 3, ::g::Fuse::DrawContext_typeof(), ::g::Fuse::Elements::Element_typeof(), ::TYPES[28/*Fuse.Drawing.ISurfaceDrawable*/]),
        new uFunction("DrawLocal", NULL, (void*)Surface__DrawLocal_fn, 0, false, uVoid_typeof(), 1, ::TYPES[28/*Fuse.Drawing.ISurfaceDrawable*/]),
        new uFunction("End", NULL, NULL, offsetof(Surface_type, fp_End), false, uVoid_typeof(), 0),
        new uFunction("FillPath", NULL, NULL, offsetof(Surface_type, fp_FillPath), false, uVoid_typeof(), 2, ::g::Fuse::Drawing::SurfacePath_typeof(), ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("PopTransform", NULL, NULL, offsetof(Surface_type, fp_PopTransform), false, uVoid_typeof(), 0),
        new uFunction("Prepare", NULL, NULL, offsetof(Surface_type, fp_Prepare), false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()),
        new uFunction("PushTransform", NULL, NULL, offsetof(Surface_type, fp_PushTransform), false, uVoid_typeof(), 1, ::g::Uno::Float4x4_typeof()),
        new uFunction("SetElementSize", NULL, (void*)Surface__SetElementSize_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float2_typeof()),
        new uFunction("StrokePath", NULL, NULL, offsetof(Surface_type, fp_StrokePath), false, uVoid_typeof(), 2, ::g::Fuse::Drawing::SurfacePath_typeof(), ::g::Fuse::Drawing::Stroke_typeof()),
        new uFunction("Unprepare", NULL, NULL, offsetof(Surface_type, fp_Unprepare), false, uVoid_typeof(), 1, ::g::Fuse::Drawing::Brush_typeof()));
}

Surface_type* Surface_typeof()
{
    static uSStrong<Surface_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Surface);
    options.TypeSize = sizeof(Surface_type);
    type = (Surface_type*)uClassType::New("Fuse.Drawing.Surface", options);
    type->fp_build_ = Surface_build;
    return type;
}

// internal Surface() :2938
void Surface__ctor__fn(Surface* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Elements.Element elm, Fuse.Drawing.ISurfaceDrawable drawable) :3023
void Surface__Draw_fn(Surface* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable)
{
    __this->Draw(dc, elm, drawable);
}

// public void DrawLocal(Fuse.Drawing.ISurfaceDrawable drawable) :3064
void Surface__DrawLocal_fn(Surface* __this, uObject* drawable)
{
    __this->DrawLocal(drawable);
}

// protected generated float2 get_ElementSize() :2942
void Surface__get_ElementSize_fn(Surface* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ElementSize();
}

// private generated void set_ElementSize(float2 value) :2942
void Surface__set_ElementSize_fn(Surface* __this, ::g::Uno::Float2* value)
{
    __this->ElementSize(*value);
}

// private generated void init_DrawCalls() :2935
void Surface__init_DrawCalls_fn(Surface* __this)
{
    __this->init_DrawCalls();
}

// public void SetElementSize(float2 size) :2944
void Surface__SetElementSize_fn(Surface* __this, ::g::Uno::Float2* size)
{
    __this->SetElementSize(*size);
}

// internal Surface() [instance] :2938
void Surface::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Elements.Element elm, Fuse.Drawing.ISurfaceDrawable drawable) [instance] :3023
void Surface::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable)
{
    uStackFrame __("Fuse.Drawing.Surface", "Draw(Fuse.DrawContext,Fuse.Elements.Element,Fuse.Drawing.ISurfaceDrawable)");
    ::g::Uno::Float3 ind1;
    ::g::Uno::Float3 ind2;
    ::g::Uno::Float3 ind3;

    if (elm != drawable)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[46/*"GLDraw call...*/], this, ::STRINGS[5/*"/usr/local/...*/], 3026, ::STRINGS[47/*"Draw"*/]);

    float pixelsPerPoint = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(elm)->Viewport()), ::TYPES[26/*Fuse.ICommonViewport*/]));
    ::g::Fuse::VisualBounds* bounds = elm->RenderBoundsWithoutEffects();
    float zeroTolerance = 1e-05f;
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1((ind1 = uPtr(bounds)->Size(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), pixelsPerPoint), 1e-05f)));
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock(pixelSize.X, pixelSize.Y, 3, true);
    Begin(dc, fb, pixelsPerPoint);
    ::g::Uno::Float4x4 m = ::g::Uno::Float4x4__Identity();
    m.M41 = -bounds->AxisMin().X;
    m.M42 = -bounds->AxisMin().Y;
    PushTransform(m);
    DrawLocal(drawable);
    End();
    ::g::Uno::Float4x4 LocalTransform_7678ae3a_4_9_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_7678ae3a_4_9_2, ::g::Uno::Matrix::Scaling1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), pixelsPerPoint).X, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), pixelsPerPoint).Y, 1.0f), Draw_LocalTransform_7678ae3a_4_9_3, ::g::Uno::Matrix::Translation((ind2 = bounds->AxisMin(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)).X, (ind3 = bounds->AxisMin(), ::g::Uno::Float2__New2(ind3.X, ind3.Y)).Y, 0.0f));
    _draw_7678ae3a.BlendEnabled(true);
    _draw_7678ae3a.DepthTestEnabled(false);
    _draw_7678ae3a.CullFace(uPtr(dc)->CullFace());
    _draw_7678ae3a.BlendSrcAlpha(7);
    _draw_7678ae3a.BlendDstRgb(3);
    _draw_7678ae3a.Use();
    _draw_7678ae3a.Attrib1(0, 2, Draw_VertexData_7678ae3a_7_2_1, 8, 0);
    _draw_7678ae3a.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[27/*Fuse.IRenderViewport*/])));
    _draw_7678ae3a.Uniform12(2, (elm != NULL) ? ::g::Uno::Matrix::Mul8(LocalTransform_7678ae3a_4_9_4, uPtr(elm)->WorldTransform()) : LocalTransform_7678ae3a_4_9_4);
    _draw_7678ae3a.Sampler3(3, uPtr(fb)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_7678ae3a.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(fb);
}

// public void DrawLocal(Fuse.Drawing.ISurfaceDrawable drawable) [instance] :3064
void Surface::DrawLocal(uObject* drawable)
{
    uStackFrame __("Fuse.Drawing.Surface", "DrawLocal(Fuse.Drawing.ISurfaceDrawable)");
    SetElementSize(::g::Fuse::Drawing::ISurfaceDrawable::ElementSize(uInterface(uPtr(drawable), ::TYPES[28/*Fuse.Drawing.ISurfaceDrawable*/])));
    ::g::Fuse::Drawing::ISurfaceDrawable::Draw(uInterface(drawable, ::TYPES[28/*Fuse.Drawing.ISurfaceDrawable*/]), this);
}

// protected generated float2 get_ElementSize() [instance] :2942
::g::Uno::Float2 Surface::ElementSize()
{
    return _ElementSize;
}

// private generated void set_ElementSize(float2 value) [instance] :2942
void Surface::ElementSize(::g::Uno::Float2 value)
{
    _ElementSize = value;
}

// private generated void init_DrawCalls() [instance] :2935
void Surface::init_DrawCalls()
{
    uStackFrame __("Fuse.Drawing.Surface", "init_DrawCalls()");
    Draw_VertexData_7678ae3a_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f))), 0);
    Draw_LocalTransform_7678ae3a_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_7678ae3a_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_7678ae3a = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseDrawingSurface_bundle::Surface541b21c2());
}

// public void SetElementSize(float2 size) [instance] :2944
void Surface::SetElementSize(::g::Uno::Float2 size)
{
    ElementSize(size);
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public static class SurfaceManager :3113
// {
// static SurfaceManager() :3113
static void SurfaceManager__cctor__fn(uType* __type)
{
    SurfaceManager::_owners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[29/*Uno.Collections.Dictionary<object, Fuse.Drawing.Surface>*/]));
}

static void SurfaceManager_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Drawing::Surface_typeof(), NULL);
    ::TYPES[30] = ::g::Fuse::Visual_typeof();
    ::TYPES[31] = ::g::Fuse::Drawing::INativeSurfaceOwner_typeof();
    ::TYPES[32] = ::g::Fuse::Drawing::ISurfaceProvider_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::ISurfaceDrawable_typeof();
    type->SetFields(0,
        ::TYPES[29/*Uno.Collections.Dictionary<object, Fuse.Drawing.Surface>*/], (uintptr_t)&::g::Fuse::Drawing::SurfaceManager::_owners_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction("Create", NULL, (void*)SurfaceManager__Create_fn, 0, true, ::g::Fuse::Drawing::Surface_typeof(), 1, uObject_typeof()),
        new uFunction("Find", NULL, (void*)SurfaceManager__Find_fn, 0, true, ::g::Fuse::Drawing::Surface_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("FindOrCreate", NULL, (void*)SurfaceManager__FindOrCreate_fn, 0, true, ::g::Fuse::Drawing::Surface_typeof(), 1, ::g::Fuse::Node_typeof()),
        new uFunction("Release", NULL, (void*)SurfaceManager__Release_fn, 0, true, uVoid_typeof(), 2, uObject_typeof(), ::g::Fuse::Drawing::Surface_typeof()));
}

uClassType* SurfaceManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.SurfaceManager", options);
    type->fp_build_ = SurfaceManager_build;
    type->fp_cctor_ = SurfaceManager__cctor__fn;
    return type;
}

// public static Fuse.Drawing.Surface Create(object owner) :3115
void SurfaceManager__Create_fn(uObject* owner, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::Create(owner);
}

// public static Fuse.Drawing.Surface Find(Fuse.Node source) :3148
void SurfaceManager__Find_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::Find(source);
}

// private static Fuse.Drawing.Surface FindImpl(Fuse.Node source, bool create) :3158
void SurfaceManager__FindImpl_fn(::g::Fuse::Node* source, bool* create, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::FindImpl(source, *create);
}

// public static Fuse.Drawing.Surface FindOrCreate(Fuse.Node source) :3153
void SurfaceManager__FindOrCreate_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::FindOrCreate(source);
}

// public static void Release(object owner, Fuse.Drawing.Surface c) :3187
void SurfaceManager__Release_fn(uObject* owner, ::g::Fuse::Drawing::Surface* c)
{
    SurfaceManager::Release(owner, c);
}

uSStrong< ::g::Uno::Collections::Dictionary*> SurfaceManager::_owners_;

// public static Fuse.Drawing.Surface Create(object owner) [static] :3115
::g::Fuse::Drawing::Surface* SurfaceManager::Create(uObject* owner)
{
    uStackFrame __("Fuse.Drawing.SurfaceManager", "Create(object)");
    SurfaceManager_typeof()->Init();
    ::g::Fuse::Drawing::Surface* c = NULL;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(owner, ::TYPES[30/*Fuse.Visual*/]);

    if ((v != NULL) && (uPtr(v)->VisualContext() == 2))
    {
        uObject* nativeOwner = uAs<uObject*>(uPtr(v)->ViewHandle(), ::TYPES[31/*Fuse.Drawing.INativeSurfaceOwner*/]);

        if (nativeOwner != NULL)
            c = ::g::Fuse::Drawing::INativeSurfaceOwner::GetSurface(uInterface(uPtr(nativeOwner), ::TYPES[31/*Fuse.Drawing.INativeSurfaceOwner*/]));
    }

    if (c == NULL)
        c = ::g::Fuse::Drawing::CoreGraphicsSurface::New1();

    uPtr(c)->Owner = owner;
    return c;
}

// public static Fuse.Drawing.Surface Find(Fuse.Node source) [static] :3148
::g::Fuse::Drawing::Surface* SurfaceManager::Find(::g::Fuse::Node* source)
{
    uStackFrame __("Fuse.Drawing.SurfaceManager", "Find(Fuse.Node)");
    SurfaceManager_typeof()->Init();
    return SurfaceManager::FindImpl(source, false);
}

// private static Fuse.Drawing.Surface FindImpl(Fuse.Node source, bool create) [static] :3158
::g::Fuse::Drawing::Surface* SurfaceManager::FindImpl(::g::Fuse::Node* source, bool create)
{
    uStackFrame __("Fuse.Drawing.SurfaceManager", "FindImpl(Fuse.Node,bool)");
    SurfaceManager_typeof()->Init();
    bool ret2;
    uObject* provider = NULL;
    ::g::Fuse::Node* from = source;

    while (from != NULL)
    {
        if (uIs(from, ::TYPES[32/*Fuse.Drawing.ISurfaceProvider*/]) && (from != source))
            provider = uAs<uObject*>(from, ::TYPES[32/*Fuse.Drawing.ISurfaceProvider*/]);

        if (uIs(from, ::TYPES[28/*Fuse.Drawing.ISurfaceDrawable*/]))
            from = uPtr(from)->Parent();
        else
            break;
    }

    uObject* ind1 = provider;
    uObject* owner = (ind1 != NULL) ? ind1 : source;
    ::g::Fuse::Drawing::Surface* cur;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SurfaceManager::_owners()), owner, (void**)(&cur), &ret2), ret2))
        return cur;

    if (!create && (provider == NULL))
        return NULL;

    cur = SurfaceManager::Create(owner);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(SurfaceManager::_owners()), owner, cur);
    return cur;
}

// public static Fuse.Drawing.Surface FindOrCreate(Fuse.Node source) [static] :3153
::g::Fuse::Drawing::Surface* SurfaceManager::FindOrCreate(::g::Fuse::Node* source)
{
    uStackFrame __("Fuse.Drawing.SurfaceManager", "FindOrCreate(Fuse.Node)");
    SurfaceManager_typeof()->Init();
    return SurfaceManager::FindImpl(source, true);
}

// public static void Release(object owner, Fuse.Drawing.Surface c) [static] :3187
void SurfaceManager::Release(uObject* owner, ::g::Fuse::Drawing::Surface* c)
{
    uStackFrame __("Fuse.Drawing.SurfaceManager", "Release(object,Fuse.Drawing.Surface)");
    SurfaceManager_typeof()->Init();
    bool ret3;

    if (uPtr(c)->Owner == owner)
    {
        uPtr(c)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(SurfaceManager::_owners()), owner, &ret3);
    }
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public abstract class SurfacePath :2921
// {
static void SurfacePath_build(uType* type)
{
}

uType* SurfacePath_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SurfacePath);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.SurfacePath", options);
    type->fp_build_ = SurfacePath_build;
    return type;
}

// protected generated SurfacePath() :2921
void SurfacePath__ctor__fn(SurfacePath* __this)
{
    __this->ctor_();
}

// protected generated SurfacePath() [instance] :2921
void SurfacePath::ctor_()
{
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// public static class SurfaceUtil :3213
// {
static void SurfaceUtil_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL);
    type->Reflection.SetFunctions(5,
        new uFunction("AngleInRange", NULL, (void*)SurfaceUtil__AngleInRange_fn, 0, true, ::g::Uno::Bool_typeof(), 3, ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("EllipticArcDerivative", NULL, (void*)SurfaceUtil__EllipticArcDerivative_fn, 0, true, ::g::Uno::Float2_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("EllipticArcPoint", NULL, (void*)SurfaceUtil__EllipticArcPoint_fn, 0, true, ::g::Uno::Float2_typeof(), 4, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof()),
        new uFunction("EllipticArcToBezierCurve", NULL, (void*)SurfaceUtil__EllipticArcToBezierCurve_fn, 0, true, uVoid_typeof(), 7, ::g::Uno::Float2_typeof(), ::g::Uno::Float2_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL)),
        new uFunction("EllipticArcToBezierCurve", NULL, (void*)SurfaceUtil__EllipticArcToBezierCurve1_fn, 0, true, uVoid_typeof(), 3, ::g::Uno::Float2_typeof(), ::g::Fuse::Drawing::LineSegment_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), NULL)));
}

uClassType* SurfaceUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.SurfaceUtil", options);
    type->fp_build_ = SurfaceUtil_build;
    return type;
}

// public static bool AngleInRange(float angle, float start, float end) :3386
void SurfaceUtil__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval)
{
    *__retval = SurfaceUtil::AngleInRange(*angle, *start, *end);
}

// public static float2 EllipticArcDerivative(float2 c, float2 r, float xAngle, float t) :3379
void SurfaceUtil__EllipticArcDerivative_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = SurfaceUtil::EllipticArcDerivative(*c, *r, *xAngle, *t);
}

// internal static bool EllipticArcOutOfRange(float2 from, Fuse.Drawing.LineSegment arc) :3243
void SurfaceUtil__EllipticArcOutOfRange_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, bool* __retval)
{
    *__retval = SurfaceUtil::EllipticArcOutOfRange(*from, *arc);
}

// public static float2 EllipticArcPoint(float2 c, float2 r, float xAngle, float t) :3372
void SurfaceUtil__EllipticArcPoint_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = SurfaceUtil::EllipticArcPoint(*c, *r, *xAngle, *t);
}

// public static void EllipticArcToBezierCurve(float2 center, float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) :3257
void SurfaceUtil__EllipticArcToBezierCurve_fn(::g::Uno::Float2* center, ::g::Uno::Float2* radius, float* xAngle, float* startAngle, float* deltaAngle, bool* moveToStart, uObject* curves)
{
    SurfaceUtil::EllipticArcToBezierCurve(*center, *radius, *xAngle, *startAngle, *deltaAngle, *moveToStart, curves);
}

// public static void EllipticArcToBezierCurve(float2 from, Fuse.Drawing.LineSegment arc, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) :3220
void SurfaceUtil__EllipticArcToBezierCurve1_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, uObject* curves)
{
    SurfaceUtil::EllipticArcToBezierCurve1(*from, *arc, curves);
}

// internal static void EndpointToCenterArcParams(float2 p1, float2 p2, float2& r_, float xAngle, bool flagA, bool flagS, float2& c, float2& angles) :3297
void SurfaceUtil__EndpointToCenterArcParams_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* r_, float* xAngle, bool* flagA, bool* flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles)
{
    SurfaceUtil::EndpointToCenterArcParams(*p1, *p2, r_, *xAngle, *flagA, *flagS, c, angles);
}

// private static float svgAngle(double ux, double uy, double vx, double vy) :3353
void SurfaceUtil__svgAngle_fn(double* ux, double* uy, double* vx, double* vy, float* __retval)
{
    *__retval = SurfaceUtil::svgAngle(*ux, *uy, *vx, *vy);
}

// public static bool AngleInRange(float angle, float start, float end) [static] :3386
bool SurfaceUtil::AngleInRange(float angle, float start, float end)
{
    if (end < start)
    {
        float t = end;
        end = start;
        start = t;
    }

    float delta = end - start;

    if (delta >= 6.28318548f)
        return true;

    angle = ::g::Uno::Math::Mod1(angle, 6.28318548f);
    float pStartAngle = ::g::Uno::Math::Mod1(start, 6.28318548f);
    float pEndAngle = pStartAngle + delta;

    if ((angle >= pStartAngle) && (angle <= pEndAngle))
        return true;

    if (angle <= (pEndAngle - 6.28318548f))
        return true;

    return false;
}

// public static float2 EllipticArcDerivative(float2 c, float2 r, float xAngle, float t) [static] :3379
::g::Uno::Float2 SurfaceUtil::EllipticArcDerivative(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t)
{
    return ::g::Uno::Float2__New2(((-r.X * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Sin1(t)) - ((r.Y * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Cos1(t)), ((-r.X * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Sin1(t)) + ((r.Y * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Cos1(t)));
}

// internal static bool EllipticArcOutOfRange(float2 from, Fuse.Drawing.LineSegment arc) [static] :3243
bool SurfaceUtil::EllipticArcOutOfRange(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc)
{
    float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(arc.To, from));

    if (len < 1e-05f)
        return true;

    ::g::Uno::Float2 radius = ::g::Uno::Math::Abs2(arc.A);

    if ((radius.X < 1e-05f) || (radius.Y < 1e-05f))
        return true;

    return false;
}

// public static float2 EllipticArcPoint(float2 c, float2 r, float xAngle, float t) [static] :3372
::g::Uno::Float2 SurfaceUtil::EllipticArcPoint(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t)
{
    return ::g::Uno::Float2__New2((c.X + ((r.X * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Cos1(t))) - ((r.Y * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Sin1(t)), (c.Y + ((r.X * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Cos1(t))) + ((r.Y * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Sin1(t)));
}

// public static void EllipticArcToBezierCurve(float2 center, float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) [static] :3257
void SurfaceUtil::EllipticArcToBezierCurve(::g::Uno::Float2 center, ::g::Uno::Float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, uObject* curves)
{
    uStackFrame __("Fuse.Drawing.SurfaceUtil", "EllipticArcToBezierCurve(float2,float2,float,float,float,bool,Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    ::g::Fuse::Drawing::LineSegment collection2;
    ::g::Fuse::Drawing::LineSegment collection3;
    float s = startAngle;
    float e = s + deltaAngle;
    bool neg = e < s;
    float sign = (float)(neg ? -1 : 1);
    float remain = ::g::Uno::Math::Abs1(e - s);
    ::g::Uno::Float2 prev = SurfaceUtil::EllipticArcPoint(center, radius, xAngle, s);

    if (moveToStart)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection2 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection2.Type = 0, collection2.To = prev, collection2)));

    while (remain > 1e-05f)
    {
        float step = ::g::Uno::Math::Min1(remain, 0.7853982f);
        float signStep = step * sign;
        ::g::Uno::Float2 p1 = prev;
        ::g::Uno::Float2 p2 = SurfaceUtil::EllipticArcPoint(center, radius, xAngle, s + signStep);
        float alphaT = ::g::Uno::Math::Tan1(signStep / 2.0f);
        float alpha = (::g::Uno::Math::Sin1(signStep) * (::g::Uno::Math::Sqrt1(4.0f + ((3.0f * alphaT) * alphaT)) - 1.0f)) / 3.0f;
        ::g::Uno::Float2 q1 = ::g::Uno::Float2__op_Addition2(p1, ::g::Uno::Float2__op_Multiply(alpha, SurfaceUtil::EllipticArcDerivative(center, radius, xAngle, s)));
        ::g::Uno::Float2 q2 = ::g::Uno::Float2__op_Subtraction2(p2, ::g::Uno::Float2__op_Multiply(alpha, SurfaceUtil::EllipticArcDerivative(center, radius, xAngle, s + signStep)));
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection3 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection3.Type = 2, collection3.To = p2, collection3.A = q1, collection3.B = q2, collection3)));
        s = s + signStep;
        remain = remain - step;
        prev = p2;
    }
}

// public static void EllipticArcToBezierCurve(float2 from, Fuse.Drawing.LineSegment arc, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) [static] :3220
void SurfaceUtil::EllipticArcToBezierCurve1(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc, uObject* curves)
{
    uStackFrame __("Fuse.Drawing.SurfaceUtil", "EllipticArcToBezierCurve(float2,Fuse.Drawing.LineSegment,Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    ::g::Fuse::Drawing::LineSegment collection1;

    if (SurfaceUtil::EllipticArcOutOfRange(from, arc))
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection1 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection1.Type = 1, collection1.To = arc.To, collection1)));
        return;
    }

    ::g::Uno::Float2 radius = ::g::Uno::Math::Abs2(arc.A);
    float xAngle = arc.B.X;
    ::g::Uno::Float2 center = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 angles = ::g::Uno::Float2__New1(0.0f);
    SurfaceUtil::EndpointToCenterArcParams(from, arc.To, &radius, xAngle, (arc.Flags & 1) == 1, (arc.Flags & 2) == 2, &center, &angles);
    SurfaceUtil::EllipticArcToBezierCurve(center, radius, xAngle, angles.Item(0), angles.Item(1), false, curves);
}

// internal static void EndpointToCenterArcParams(float2 p1, float2 p2, float2& r_, float xAngle, bool flagA, bool flagS, float2& c, float2& angles) [static] :3297
void SurfaceUtil::EndpointToCenterArcParams(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2* r_, float xAngle, bool flagA, bool flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles)
{
    double rX = (double)::g::Uno::Math::Abs1((*r_).X);
    double rY = (double)::g::Uno::Math::Abs1((*r_).Y);
    double dx2 = (double)(p1.X - p2.X) / 2.0;
    double dy2 = (double)(p1.Y - p2.Y) / 2.0;
    double x1p = ((double)::g::Uno::Math::Cos1(xAngle) * dx2) + ((double)::g::Uno::Math::Sin1(xAngle) * dy2);
    double y1p = ((double)-::g::Uno::Math::Sin1(xAngle) * dx2) + ((double)::g::Uno::Math::Cos1(xAngle) * dy2);
    double rxs = rX * rX;
    double rys = rY * rY;
    double x1ps = x1p * x1p;
    double y1ps = y1p * y1p;
    double cr = (x1ps / rxs) + (y1ps / rys);

    if (cr > 1.0)
    {
        double s = ::g::Uno::Math::Sqrt(cr);
        rX = s * rX;
        rY = s * rY;
        rxs = rX * rX;
        rys = rY * rY;
    }

    double dq = (rxs * y1ps) + (rys * x1ps);
    double pq = ((rxs * rys) - dq) / dq;
    double q = ::g::Uno::Math::Sqrt(::g::Uno::Math::Max(0.0, pq));

    if (flagA == flagS)
        q = -q;

    double cxp = ((q * rX) * y1p) / rY;
    double cyp = ((-q * rY) * x1p) / rX;
    double cx = (((double)::g::Uno::Math::Cos1(xAngle) * cxp) - ((double)::g::Uno::Math::Sin1(xAngle) * cyp)) + (double)((p1.X + p2.X) / 2.0f);
    double cy = (((double)::g::Uno::Math::Sin1(xAngle) * cxp) + ((double)::g::Uno::Math::Cos1(xAngle) * cyp)) + (double)((p1.Y + p2.Y) / 2.0f);
    double theta = (double)SurfaceUtil::svgAngle(1.0, 0.0, (x1p - cxp) / rX, (y1p - cyp) / rY);
    double delta = (double)SurfaceUtil::svgAngle((x1p - cxp) / rX, (y1p - cyp) / rY, (-x1p - cxp) / rX, (-y1p - cyp) / rY);
    delta = ::g::Uno::Math::Mod(delta, 6.2831854820251465);

    if (!flagS)
        delta = delta - 6.2831854820251465;

    *r_ = ::g::Uno::Float2__New2((float)rX, (float)rY);
    *c = ::g::Uno::Float2__New2((float)cx, (float)cy);
    *angles = ::g::Uno::Float2__New2((float)theta, (float)delta);
}

// private static float svgAngle(double ux, double uy, double vx, double vy) [static] :3353
float SurfaceUtil::svgAngle(double ux, double uy, double vx, double vy)
{
    ::g::Uno::Float2 u = ::g::Uno::Float2__New2((float)ux, (float)uy);
    ::g::Uno::Float2 v = ::g::Uno::Float2__New2((float)vx, (float)vy);
    float dot = ::g::Uno::Vector::Dot(u, v);
    float len = ::g::Uno::Vector::Length(u) * ::g::Uno::Vector::Length(v);
    float ang = ::g::Uno::Math::Acos1(::g::Uno::Math::Clamp1(dot / len, -1.0f, 1.0f));

    if (((u.X * v.Y) - (u.Y * v.X)) < 0.0f)
        ang = -ang;

    return ang;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed class SVGPathParser :2456
// {
static void SVGPathParser_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _data), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _hasPrevControlB), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _headToken), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _prevControlB), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _prevToken), 0,
        ::g::Fuse::Drawing::LineSegments_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _segments), 0,
        ::g::Fuse::Drawing::Token_typeof(), offsetof(::g::Fuse::Drawing::SVGPathParser, _token), 0);
}

uType* SVGPathParser_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(SVGPathParser);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.SVGPathParser", options);
    type->fp_build_ = SVGPathParser_build;
    return type;
}

// public SVGPathParser(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2464
void SVGPathParser__ctor__fn(SVGPathParser* __this, uString* data, uObject* segments)
{
    __this->ctor_(data, segments);
}

// private void Execute(char c, char prev) :2547
void SVGPathParser__Execute_fn(SVGPathParser* __this, uChar* c, uChar* prev)
{
    __this->Execute(*c, *prev);
}

// public SVGPathParser New(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) :2464
void SVGPathParser__New1_fn(uString* data, uObject* segments, SVGPathParser** __retval)
{
    *__retval = SVGPathParser::New1(data, segments);
}

// public void Parse() :2470
void SVGPathParser__Parse_fn(SVGPathParser* __this)
{
    __this->Parse();
}

// private float ReadFloat() :2663
void SVGPathParser__ReadFloat_fn(SVGPathParser* __this, float* __retval)
{
    *__retval = __this->ReadFloat();
}

// private float2 ReadFloat2() :2671
void SVGPathParser__ReadFloat2_fn(SVGPathParser* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ReadFloat2();
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) :2656
void SVGPathParser__StartNewToken_fn(SVGPathParser* __this, int* prevLastChar, int* nextFirstChar, bool* hasAction)
{
    __this->StartNewToken(*prevLastChar, *nextFirstChar, *hasAction);
}

// public SVGPathParser(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [instance] :2464
void SVGPathParser::ctor_(uString* data, uObject* segments)
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", ".ctor(string,Uno.Collections.IList<Fuse.Drawing.LineSegment>)");
    _data = data;
    _segments = ::g::Fuse::Drawing::LineSegments::New2(segments);
}

// private void Execute(char c, char prev) [instance] :2547
void SVGPathParser::Execute(uChar c, uChar prev)
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", "Execute(char,char)");

    if ((prev == 'm') || (prev == 'M'))
    {
        if (c == 'm')
            c = 'l';
        else if (c == 'M')
            c = 'L';
    }

    switch (c)
    {
        case 'M':
        {
            uPtr(_segments)->MoveTo(ReadFloat2());
            break;
        }
        case 'C':
        {
            ::g::Uno::Float2 a = ReadFloat2();
            ::g::Uno::Float2 b = ReadFloat2();
            ::g::Uno::Float2 pt = ReadFloat2();
            uPtr(_segments)->BezierCurveTo(pt, a, b);
            break;
        }
        case 'S':
        {
            ::g::Uno::Float2 b1 = ReadFloat2();
            ::g::Uno::Float2 pt1 = ReadFloat2();
            ::g::Uno::Float2 a1 = _hasPrevControlB ? ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(uPtr(_segments)->CurPos(), _prevControlB), uPtr(_segments)->CurPos()) : uPtr(_segments)->CurPos();
            uPtr(_segments)->BezierCurveTo(pt1, a1, b1);
            break;
        }
        case 'Z':
        {
            uPtr(_segments)->ClosePath();
            break;
        }
        case 'L':
        {
            uPtr(_segments)->LineTo(ReadFloat2());
            break;
        }
        case 'H':
        {
            uPtr(_segments)->HorizLineTo(ReadFloat());
            break;
        }
        case 'V':
        {
            uPtr(_segments)->VertLineTo(ReadFloat());
            break;
        }
        case 'A':
        {
            ::g::Uno::Float2 r = ReadFloat2();
            float xAngle = ::g::Uno::Math::DegreesToRadians1(ReadFloat());
            bool large = ReadFloat() != 0.0f;
            bool sweep = ReadFloat() != 0.0f;
            ::g::Uno::Float2 pt2 = ReadFloat2();
            uPtr(_segments)->EllipticArcTo(pt2, r, xAngle, large, sweep);
            break;
        }
        case 'm':
        {
            uPtr(_segments)->MoveToRel(ReadFloat2());
            break;
        }
        case 'c':
        {
            ::g::Uno::Float2 a2 = ReadFloat2();
            ::g::Uno::Float2 b2 = ReadFloat2();
            ::g::Uno::Float2 pt3 = ReadFloat2();
            uPtr(_segments)->BezierCurveToRel(pt3, a2, b2);
            break;
        }
        case 's':
        {
            ::g::Uno::Float2 b3 = ReadFloat2();
            ::g::Uno::Float2 pt4 = ReadFloat2();
            ::g::Uno::Float2 a3 = _hasPrevControlB ? ::g::Uno::Float2__op_UnaryNegation(::g::Uno::Float2__op_Subtraction2(_prevControlB, uPtr(_segments)->CurPos())) : ::g::Uno::Float2__New1(0.0f);
            uPtr(_segments)->BezierCurveTo(pt4, a3, b3);
            break;
        }
        case 'z':
        {
            uPtr(_segments)->ClosePath();
            break;
        }
        case 'l':
        {
            uPtr(_segments)->LineToRel(ReadFloat2());
            break;
        }
        case 'h':
        {
            uPtr(_segments)->HorizLineToRel(ReadFloat());
            break;
        }
        case 'v':
        {
            uPtr(_segments)->VertLineToRel(ReadFloat());
            break;
        }
        case 'a':
        {
            ::g::Uno::Float2 r1 = ReadFloat2();
            float xAngle1 = ::g::Uno::Math::DegreesToRadians1(ReadFloat());
            bool large1 = ReadFloat() != 0.0f;
            bool sweep1 = ReadFloat() != 0.0f;
            ::g::Uno::Float2 pt5 = ReadFloat2();
            uPtr(_segments)->EllipticArcToRel(pt5, r1, xAngle1, large1, sweep1);
            break;
        }
    }

    if ((((c == 's') || (c == 'c')) || (c == 'S')) || (c == 'C'))
    {
        _prevControlB = uPtr(_segments)->Last().B;
        _hasPrevControlB = true;
    }
    else
        _hasPrevControlB = false;
}

// public void Parse() [instance] :2470
void SVGPathParser::Parse()
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", "Parse()");
    _headToken = ::g::Fuse::Drawing::Token::New1(-1, false);
    _prevToken = (uPtr(_headToken)->Next = ::g::Fuse::Drawing::Token::New1(0, false));
    bool wasExponent = false;

    for (int i = 0; i < uPtr(_data)->Length(); i++)
    {
        uChar c = uPtr(_data)->Item(i);

        switch (c)
        {
            case 0:
            case ' ':
            case ',':
            {
                StartNewToken(i - 1, i + 1, false);
                break;
            }
            case '-':
            {
                if (!wasExponent)
                    StartNewToken(i - 1, i, false);

                break;
            }
            case 'M':
            case 'C':
            case 'S':
            case 'Z':
            case 'L':
            case 'H':
            case 'V':
            case 'm':
            case 'c':
            case 's':
            case 'z':
            case 'l':
            case 'h':
            case 'v':
            case 'a':
            case 'A':
            {
                StartNewToken(i - 1, i, true);
                StartNewToken(i, i + 1, false);
                break;
            }
        }

        wasExponent = (c == 'e') || (c == 'E');
    }

    uPtr(_prevToken)->Last = (uPtr(_data)->Length() - 1);

    for (::g::Fuse::Drawing::Token* token = uPtr(_headToken)->Next; token != NULL; )
    {
        ::g::Fuse::Drawing::Token* next = uPtr(token)->Next;

        while ((next != NULL) && ((uPtr(next)->Last - uPtr(next)->First) < 0))
            next = uPtr(next)->Next;

        token = uPtr(token)->Next = next;
    }

    _token = uPtr(_headToken)->Next;
    uChar prevCommand = 'z';

    while (_token != NULL)
    {
        if (!uPtr(_token)->HasAction)
        {
            _token = uPtr(_token)->Next;
            continue;
        }

        uChar currentCommand = uPtr(_data)->Item(uPtr(_token)->First);
        _token = uPtr(_token)->Next;

        do
        {
            Execute(currentCommand, prevCommand);
            prevCommand = currentCommand;
        }
        while ((_token != NULL) && !uPtr(_token)->HasAction);
    }
}

// private float ReadFloat() [instance] :2663
float SVGPathParser::ReadFloat()
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", "ReadFloat()");
    uString* str = ::g::Uno::String::Substring1(uPtr(_data), uPtr(_token)->First, (uPtr(_token)->Last - uPtr(_token)->First) + 1);
    float res = ::g::Uno::Float::Parse(str);
    _token = uPtr(_token)->Next;
    return res;
}

// private float2 ReadFloat2() [instance] :2671
::g::Uno::Float2 SVGPathParser::ReadFloat2()
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", "ReadFloat2()");
    float a = ReadFloat();
    float b = ReadFloat();
    return ::g::Uno::Float2__New2(a, b);
}

// private void StartNewToken(int prevLastChar, int nextFirstChar, [bool hasAction]) [instance] :2656
void SVGPathParser::StartNewToken(int prevLastChar, int nextFirstChar, bool hasAction)
{
    uStackFrame __("Fuse.Drawing.SVGPathParser", "StartNewToken(int,int,[bool])");
    uPtr(_prevToken)->Last = prevLastChar;
    _prevToken = (uPtr(_prevToken)->Next = ::g::Fuse::Drawing::Token::New1(nextFirstChar, hasAction));
}

// public SVGPathParser New(string data, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static] :2464
SVGPathParser* SVGPathParser::New1(uString* data, uObject* segments)
{
    SVGPathParser* obj1 = (SVGPathParser*)uNew(SVGPathParser_typeof());
    obj1->ctor_(data, segments);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing.Surface/1.2.1/$.uno
// --------------------------------------------------------------

// internal sealed class Token :2679
// {
static void Token_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, First), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Drawing::Token, HasAction), 0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Drawing::Token, Last), 0,
        type, offsetof(::g::Fuse::Drawing::Token, Next), 0);
}

uType* Token_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Token);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Token", options);
    type->fp_build_ = Token_build;
    return type;
}

// public Token(int first, bool hasAction) :2688
void Token__ctor__fn(Token* __this, int* first, bool* hasAction)
{
    __this->ctor_(*first, *hasAction);
}

// public Token New(int first, bool hasAction) :2688
void Token__New1_fn(int* first, bool* hasAction, Token** __retval)
{
    *__retval = Token::New1(*first, *hasAction);
}

// public Token(int first, bool hasAction) [instance] :2688
void Token::ctor_(int first, bool hasAction)
{
    First = first;
    HasAction = hasAction;
}

// public Token New(int first, bool hasAction) [static] :2688
Token* Token::New1(int first, bool hasAction)
{
    Token* obj1 = (Token*)uNew(Token_typeof());
    obj1->ctor_(first, hasAction);
    return obj1;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public static class WindingRules :542
// {
static void WindingRules_build(uType* type)
{
    type->Reflection.SetFunctions(5,
        new uFunction("AbsoluteGreaterOrEqualsTwo", NULL, (void*)WindingRules__AbsoluteGreaterOrEqualsTwo_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Negative", NULL, (void*)WindingRules__Negative_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("NonZero", NULL, (void*)WindingRules__NonZero_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Odd", NULL, (void*)WindingRules__Odd_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()),
        new uFunction("Positive", NULL, (void*)WindingRules__Positive_fn, 0, true, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Int_typeof()));
}

uClassType* WindingRules_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.WindingRules", options);
    type->fp_build_ = WindingRules_build;
    return type;
}

// public static bool AbsoluteGreaterOrEqualsTwo(int n) :560
void WindingRules__AbsoluteGreaterOrEqualsTwo_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::AbsoluteGreaterOrEqualsTwo(*n);
}

// public static bool Negative(int n) :556
void WindingRules__Negative_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Negative(*n);
}

// public static bool NonZero(int n) :548
void WindingRules__NonZero_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::NonZero(*n);
}

// public static bool Odd(int n) :544
void WindingRules__Odd_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Odd(*n);
}

// public static bool Positive(int n) :552
void WindingRules__Positive_fn(int* n, bool* __retval)
{
    *__retval = WindingRules::Positive(*n);
}

// public static bool AbsoluteGreaterOrEqualsTwo(int n) [static] :560
bool WindingRules::AbsoluteGreaterOrEqualsTwo(int n)
{
    return (n >= 2) || (n <= -2);
}

// public static bool Negative(int n) [static] :556
bool WindingRules::Negative(int n)
{
    return n < 0;
}

// public static bool NonZero(int n) [static] :548
bool WindingRules::NonZero(int n)
{
    return n != 0;
}

// public static bool Odd(int n) [static] :544
bool WindingRules::Odd(int n)
{
    return (n & 1) != 0;
}

// public static bool Positive(int n) [static] :552
bool WindingRules::Positive(int n)
{
    return n > 0;
}
// }

// /usr/local/share/uno/Packages/Fuse.Drawing/1.2.1/$.uno
// ------------------------------------------------------

// public enum WrapMode :219
uEnumType* WrapMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Drawing.WrapMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Repeat", 0LL,
        "ClampToEdge", 1LL);
    return type;
}

}}} // ::g::Fuse::Drawing
