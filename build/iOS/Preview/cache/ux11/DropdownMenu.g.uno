[Uno.Compiler.UxGenerated]
public partial class DropdownMenu: Fuse.Controls.Panel
{
    object _field_ListItems;
    [global::Uno.UX.UXOriginSetter("SetListItems")]
    public object ListItems
    {
        get { return _field_ListItems; }
        set { SetListItems(value, null); }
    }
    public void SetListItems(object value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_ListItems)
        {
            _field_ListItems = value;
            OnPropertyChanged("ListItems", origin);
        }
    }
    string _field_Selected;
    [global::Uno.UX.UXOriginSetter("SetSelected")]
    public string Selected
    {
        get { return _field_Selected; }
        set { SetSelected(value, null); }
    }
    public void SetSelected(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Selected)
        {
            _field_Selected = value;
            OnPropertyChanged("Selected", origin);
        }
    }
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
    float4 _field_TextColor;
    [global::Uno.UX.UXOriginSetter("SetTextColor")]
    public float4 TextColor
    {
        get { return _field_TextColor; }
        set { SetTextColor(value, null); }
    }
    public void SetTextColor(float4 value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_TextColor)
        {
            _field_TextColor = value;
            OnPropertyChanged("TextColor", origin);
        }
    }
    Fuse.Drawing.Brush _field_BackgroundColor;
    [global::Uno.UX.UXOriginSetter("SetBackgroundColor")]
    public Fuse.Drawing.Brush BackgroundColor
    {
        get { return _field_BackgroundColor; }
        set { SetBackgroundColor(value, null); }
    }
    public void SetBackgroundColor(Fuse.Drawing.Brush value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_BackgroundColor)
        {
            _field_BackgroundColor = value;
            OnPropertyChanged("BackgroundColor", origin);
        }
    }
    Fuse.Drawing.Brush _field_BorderColor;
    [global::Uno.UX.UXOriginSetter("SetBorderColor")]
    public Fuse.Drawing.Brush BorderColor
    {
        get { return _field_BorderColor; }
        set { SetBorderColor(value, null); }
    }
    public void SetBorderColor(Fuse.Drawing.Brush value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_BorderColor)
        {
            _field_BorderColor = value;
            OnPropertyChanged("BorderColor", origin);
        }
    }
    float _field_FontSize;
    [global::Uno.UX.UXOriginSetter("SetFontSize")]
    public float FontSize
    {
        get { return _field_FontSize; }
        set { SetFontSize(value, null); }
    }
    public void SetFontSize(float value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_FontSize)
        {
            _field_FontSize = value;
            OnPropertyChanged("FontSize", origin);
        }
    }
    [Uno.Compiler.UxGenerated]
    public partial class Template: Uno.UX.Template
    {
        [Uno.WeakReference] internal readonly DropdownMenu __parent;
        [Uno.WeakReference] internal readonly DropdownMenu __parentInstance;
        public Template(DropdownMenu parent, DropdownMenu parentInstance): base(null, false)
        {
            __parent = parent;
            __parentInstance = parentInstance;
        }
        global::Uno.UX.Property<float> __self_FontSize_inst;
        global::Uno.UX.Property<float4> __self_TextColor_inst;
        global::Uno.UX.Property<string> __self_Text_inst;
        global::Uno.UX.Property<Fuse.Drawing.Brush> __self_BackgroundColor_inst;
        global::Uno.UX.Property<Fuse.Drawing.Brush> __self_BorderColor_inst;
        internal global::Fuse.Reactive.EventBinding temp_eb1;
        global::Uno.UX.NameTable __g_nametable;
        static string[] __g_static_nametable = new string[] {
            "temp_eb1"
        };
        static Template()
        {
        }
        public override object New()
        {
            var __self = new global::DropdownOption();
            var temp = new global::Fuse.Reactive.Constant(__parent);
            __self_FontSize_inst = new dynamictabbar_DropdownOption_FontSize_Property(__self, __selector0);
            var temp1 = new global::Fuse.Reactive.Property(temp, dynamictabbar_accessor_DropdownMenu_FontSize.Singleton);
            __g_nametable = new global::Uno.UX.NameTable(__parent.__g_nametable, __g_static_nametable);
            var temp2 = new global::Fuse.Reactive.Constant(__parent);
            __self_TextColor_inst = new dynamictabbar_DropdownOption_TextColor_Property(__self, __selector1);
            var temp3 = new global::Fuse.Reactive.Property(temp2, dynamictabbar_accessor_DropdownMenu_TextColor.Singleton);
            __self_Text_inst = new dynamictabbar_DropdownOption_Text_Property(__self, __selector2);
            var temp4 = new global::Fuse.Reactive.Data("name");
            var temp5 = new global::Fuse.Reactive.Constant(__parent);
            __self_BackgroundColor_inst = new dynamictabbar_DropdownOption_BackgroundColor_Property(__self, __selector3);
            var temp6 = new global::Fuse.Reactive.Property(temp5, dynamictabbar_accessor_DropdownMenu_BackgroundColor.Singleton);
            var temp7 = new global::Fuse.Reactive.Data("onSelected");
            var temp8 = new global::Fuse.Reactive.Constant(__parent);
            __self_BorderColor_inst = new dynamictabbar_DropdownOption_BorderColor_Property(__self, __selector4);
            var temp9 = new global::Fuse.Reactive.Property(temp8, dynamictabbar_accessor_DropdownMenu_BorderColor.Singleton);
            var temp10 = new global::Fuse.Reactive.DataBinding(__self_FontSize_inst, temp1, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp11 = new global::Fuse.Reactive.DataBinding(__self_TextColor_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp12 = new global::Fuse.Reactive.DataBinding(__self_Text_inst, temp4, __g_nametable, Fuse.Reactive.BindingMode.Default);
            var temp13 = new global::Fuse.Reactive.DataBinding(__self_BackgroundColor_inst, temp6, __g_nametable, Fuse.Reactive.BindingMode.Read);
            var temp_eb1 = new global::Fuse.Reactive.EventBinding(temp7, __g_nametable);
            var temp14 = new global::Fuse.Reactive.DataBinding(__self_BorderColor_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Read);
            global::Fuse.Gestures.Clicked.AddHandler(__self, temp_eb1.OnEvent);
            __g_nametable.Objects.Add(temp_eb1);
            __self.Bindings.Add(temp10);
            __self.Bindings.Add(temp11);
            __self.Bindings.Add(temp12);
            __self.Bindings.Add(temp13);
            __self.Bindings.Add(temp_eb1);
            __self.Bindings.Add(temp14);
            return __self;
        }
        static global::Uno.UX.Selector __selector0 = "FontSize";
        static global::Uno.UX.Selector __selector1 = "TextColor";
        static global::Uno.UX.Selector __selector2 = "Text";
        static global::Uno.UX.Selector __selector3 = "BackgroundColor";
        static global::Uno.UX.Selector __selector4 = "BorderColor";
    }
    global::Uno.UX.Property<string> this_Selected_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp_Brush_inst;
    global::Uno.UX.Property<float4> temp1_TextColor_inst;
    global::Uno.UX.Property<float> temp1_FontSize_inst;
    global::Uno.UX.Property<string> temp1_Text_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp1_BackgroundColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> temp1_BorderColor_inst;
    global::Uno.UX.Property<object> temp2_Items_inst;
    global::Uno.UX.Property<object> this_ListItems_inst;
    global::Uno.UX.Property<string> this_Text_inst;
    global::Uno.UX.Property<float4> this_TextColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> this_BackgroundColor_inst;
    global::Uno.UX.Property<Fuse.Drawing.Brush> this_BorderColor_inst;
    global::Uno.UX.Property<float> this_FontSize_inst;
    internal global::Fuse.Triggers.WhileTrue expandDropdown;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "expandDropdown"
    };
    static DropdownMenu()
    {
    }
    [global::Uno.UX.UXConstructor]
    public DropdownMenu()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this_ListItems_inst = new dynamictabbar_DropdownMenu_ListItems_Property(this, __selector0);
        this_Selected_inst = new dynamictabbar_DropdownMenu_Selected_Property(this, __selector1);
        this_Text_inst = new dynamictabbar_DropdownMenu_Text_Property(this, __selector2);
        this_TextColor_inst = new dynamictabbar_DropdownMenu_TextColor_Property(this, __selector3);
        this_BackgroundColor_inst = new dynamictabbar_DropdownMenu_BackgroundColor_Property(this, __selector4);
        this_BorderColor_inst = new dynamictabbar_DropdownMenu_BorderColor_Property(this, __selector5);
        this_FontSize_inst = new dynamictabbar_DropdownMenu_FontSize_Property(this, __selector6);
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp3 = new global::Fuse.Reactive.Data("selected");
        var temp4 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Drawing.Stroke();
        temp_Brush_inst = new dynamictabbar_FuseDrawingStroke_Brush_Property(temp, __selector7);
        var temp5 = new global::Fuse.Reactive.Property(temp4, dynamictabbar_accessor_DropdownMenu_BorderColor.Singleton);
        var temp6 = new global::Fuse.Reactive.Constant(this);
        var temp1 = new global::DropdownSelectedItem();
        temp1_TextColor_inst = new dynamictabbar_DropdownSelectedItem_TextColor_Property(temp1, __selector3);
        var temp7 = new global::Fuse.Reactive.Property(temp6, dynamictabbar_accessor_DropdownMenu_TextColor.Singleton);
        var temp8 = new global::Fuse.Reactive.Constant(this);
        temp1_FontSize_inst = new dynamictabbar_DropdownSelectedItem_FontSize_Property(temp1, __selector6);
        var temp9 = new global::Fuse.Reactive.Property(temp8, dynamictabbar_accessor_DropdownMenu_FontSize.Singleton);
        temp1_Text_inst = new dynamictabbar_DropdownSelectedItem_Text_Property(temp1, __selector2);
        var temp10 = new global::Fuse.Reactive.Data("selected");
        var temp11 = new global::Fuse.Reactive.Constant(this);
        temp1_BackgroundColor_inst = new dynamictabbar_DropdownSelectedItem_BackgroundColor_Property(temp1, __selector4);
        var temp12 = new global::Fuse.Reactive.Property(temp11, dynamictabbar_accessor_DropdownMenu_BackgroundColor.Singleton);
        var temp13 = new global::Fuse.Reactive.Constant(this);
        temp1_BorderColor_inst = new dynamictabbar_DropdownSelectedItem_BorderColor_Property(temp1, __selector5);
        var temp14 = new global::Fuse.Reactive.Property(temp13, dynamictabbar_accessor_DropdownMenu_BorderColor.Singleton);
        var temp15 = new global::Fuse.Reactive.Constant(this);
        var temp2 = new global::Fuse.Reactive.Each();
        temp2_Items_inst = new dynamictabbar_FuseReactiveEach_Items_Property(temp2, __selector8);
        var temp16 = new global::Fuse.Reactive.Property(temp15, dynamictabbar_accessor_DropdownMenu_ListItems.Singleton);
        var temp17 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp18 = new global::Fuse.Controls.Panel();
        var temp19 = new global::Fuse.Reactive.DataBinding(this_Selected_inst, temp3, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp20 = new global::Fuse.Controls.Rectangle();
        var temp21 = new global::Fuse.Reactive.DataBinding(temp_Brush_inst, temp5, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp22 = new global::Fuse.Reactive.DataBinding(temp1_TextColor_inst, temp7, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp23 = new global::Fuse.Reactive.DataBinding(temp1_FontSize_inst, temp9, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp24 = new global::Fuse.Reactive.DataBinding(temp1_Text_inst, temp10, __g_nametable, Fuse.Reactive.BindingMode.Default);
        var temp25 = new global::Fuse.Reactive.DataBinding(temp1_BackgroundColor_inst, temp12, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp26 = new global::Fuse.Reactive.DataBinding(temp1_BorderColor_inst, temp14, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp27 = new global::Fuse.Gestures.Clicked();
        var temp28 = new global::Fuse.Triggers.Actions.Toggle();
        expandDropdown = new global::Fuse.Triggers.WhileTrue();
        var temp29 = new global::Fuse.Controls.StackPanel();
        var temp30 = new Template(this, this);
        var temp31 = new global::Fuse.Reactive.DataBinding(temp2_Items_inst, temp16, __g_nametable, Fuse.Reactive.BindingMode.Read);
        var temp32 = new global::Fuse.Drawing.StaticSolidColor(float4(1f, 1f, 1f, 1f));
        var temp33 = new global::Fuse.Drawing.StaticSolidColor(float4(0.7333333f, 0.7333333f, 0.7333333f, 1f));
        this.Name = __selector9;
        this.TextColor = float4(0.2f, 0.2f, 0.2f, 1f);
        this.FontSize = 14f;
        temp17.Code = "\n\t\t\t\t\t\tvar Observable = require('FuseJS/Observable');\n\n\t\t\t\t\t\tvar selected = Observable();\n\n\t\t\t\t\t\tfunction onSelected(arg) {\n\t\t\t\t\t\t\tselected.value = arg.data.name;\n\t\t\t\t    //console.log(menu.Selected);\n\t\t\t\t}\n\n\t\t\t\tmodule.exports = {\n\t\t\t\t\tselected: selected,\n\t\t\t\t\tonSelected: onSelected\n\t\t\t\t}\n\t\t\t\t";
        temp17.LineNumber = 392;
        temp17.FileName = "MainView.ux";
        temp18.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp18.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp18.Children.Add(temp20);
        temp18.Children.Add(temp1);
        temp18.Children.Add(temp27);
        temp18.Children.Add(expandDropdown);
        temp18.Bindings.Add(temp19);
        temp20.Strokes.Add(temp);
        temp20.Bindings.Add(temp21);
        temp.Width = 1f;
        temp1.Bindings.Add(temp22);
        temp1.Bindings.Add(temp23);
        temp1.Bindings.Add(temp24);
        temp1.Bindings.Add(temp25);
        temp1.Bindings.Add(temp26);
        temp27.Actions.Add(temp28);
        temp28.Target = expandDropdown;
        expandDropdown.Name = __selector10;
        expandDropdown.Nodes.Add(temp29);
        temp29.Offset = new Uno.UX.Size2(new Uno.UX.Size(0f, Uno.UX.Unit.Unspecified), new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified));
        temp29.Children.Add(temp2);
        temp2.Templates.Add(temp30);
        temp2.Bindings.Add(temp31);
        __g_nametable.This = this;
        __g_nametable.Objects.Add(expandDropdown);
        __g_nametable.Properties.Add(this_ListItems_inst);
        __g_nametable.Properties.Add(this_Selected_inst);
        __g_nametable.Properties.Add(this_Text_inst);
        __g_nametable.Properties.Add(this_TextColor_inst);
        __g_nametable.Properties.Add(this_BackgroundColor_inst);
        __g_nametable.Properties.Add(this_BorderColor_inst);
        __g_nametable.Properties.Add(this_FontSize_inst);
        this.BackgroundColor = temp32;
        this.BorderColor = temp33;
        this.Children.Add(temp17);
        this.Children.Add(temp18);
    }
    static global::Uno.UX.Selector __selector0 = "ListItems";
    static global::Uno.UX.Selector __selector1 = "Selected";
    static global::Uno.UX.Selector __selector2 = "Text";
    static global::Uno.UX.Selector __selector3 = "TextColor";
    static global::Uno.UX.Selector __selector4 = "BackgroundColor";
    static global::Uno.UX.Selector __selector5 = "BorderColor";
    static global::Uno.UX.Selector __selector6 = "FontSize";
    static global::Uno.UX.Selector __selector7 = "Brush";
    static global::Uno.UX.Selector __selector8 = "Items";
    static global::Uno.UX.Selector __selector9 = "menu";
    static global::Uno.UX.Selector __selector10 = "expandDropdown";
}
