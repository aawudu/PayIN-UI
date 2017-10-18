[Uno.Compiler.UxGenerated]
public partial class MyButton: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static MyButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public MyButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.This();
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new dynamictabbar_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, dynamictabbar_accessor_MyButton_Text.Singleton);
        this_Text_inst = new dynamictabbar_MyButton_Text_Property(this, __selector1);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        this_Color_inst = new dynamictabbar_FuseControlsPanel_Color_Property(this, __selector2);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp4 = new global::Fuse.Gestures.WhilePressed();
        var temp5 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        this.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Margin = float4(4f, 4f, 4f, 4f);
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.Bindings.Add(temp3);
        temp4.Animators.Add(temp5);
        temp5.Value = float4(0.06666667f, 0.2f, 0.5333334f, 1f);
        temp5.Duration = 0.05;
        temp5.DurationBack = 0.2;
        __g_nametable.This = this;
        __g_nametable.Properties.Add(this_Text_inst);
        this.Children.Add(temp);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Text";
    static global::Uno.UX.Selector __selector2 = "Color";
}
