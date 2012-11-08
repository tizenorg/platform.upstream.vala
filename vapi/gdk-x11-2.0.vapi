/* gdk-x11-2.0.vapi generated by vapigen, do not modify. */

[Deprecated (replacement = "gdk-x11-3.0")]
namespace Gdk {
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Atom x11_atom_to_xatom (Gdk.Atom atom);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Atom x11_atom_to_xatom_for_display (Gdk.Display display, Gdk.Atom atom);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned Gdk.Colormap x11_colormap_foreign_new (Gdk.Visual visual, X.Colormap xcolormap);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Colormap x11_colormap_get_xcolormap (Gdk.Colormap colormap);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_colormap_get_xdisplay (Gdk.Colormap colormap);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Cursor x11_cursor_get_xcursor (Gdk.Cursor cursor);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_cursor_get_xdisplay (Gdk.Cursor cursor);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_display_broadcast_startup_message (Gdk.Display display, string message_type, ...);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned string x11_display_get_startup_notification_id (Gdk.Display display);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static uint32 x11_display_get_user_time (Gdk.Display display);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_display_get_xdisplay (Gdk.Display display);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_display_grab (Gdk.Display display);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_display_set_cursor_theme (Gdk.Display display, string theme, int size);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_display_ungrab (Gdk.Display display);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_drawable_get_xdisplay (Gdk.Drawable drawable);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.ID x11_drawable_get_xid (Gdk.Drawable drawable);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_gc_get_xdisplay (Gdk.GC gc);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.GC x11_gc_get_xgc (Gdk.GC gc);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Window x11_get_default_root_xwindow ();
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static int x11_get_default_screen ();
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_get_default_xdisplay ();
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static uint32 x11_get_server_time (Gdk.Window window);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Atom x11_get_xatom_by_name (string atom_name);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.Atom x11_get_xatom_by_name_for_display (Gdk.Display display, string atom_name);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned string x11_get_xatom_name (X.Atom xatom);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned string x11_get_xatom_name_for_display (Gdk.Display display, X.Atom xatom);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_grab_server ();
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Display x11_image_get_xdisplay (Gdk.Image image);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void* x11_image_get_ximage (Gdk.Image image);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned Gdk.Display x11_lookup_xdisplay (X.Display xdisplay);
	[CCode (cheader_filename = "gdk/gdkx.h", cname = "gdk_net_wm_supports")]
	public static bool x11_net_wm_supports (Gdk.Atom property);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned Gdk.Drawable x11_pixmap_get_drawable_impl (Gdk.Pixmap pixmap);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_register_standard_event_type (Gdk.Display display, int event_base, int n_events);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static X.ID x11_screen_get_monitor_output (Gdk.Screen screen, int monitor_num);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static int x11_screen_get_screen_number (Gdk.Screen screen);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned string x11_screen_get_window_manager_name (Gdk.Screen screen);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Screen x11_screen_get_xscreen (Gdk.Screen screen);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned Gdk.Visual x11_screen_lookup_visual (Gdk.Screen screen, X.VisualID xvisualid);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static bool x11_screen_supports_net_wm_hint (Gdk.Screen screen, Gdk.Atom property);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_ungrab_server ();
	[CCode (cheader_filename = "gdk/gdkx.h", cname = "gdkx_visual_get")]
	public static unowned Gdk.Visual x11_visual_get (X.VisualID xvisualid);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned X.Visual x11_visual_get_xvisual (Gdk.Visual visual);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static unowned Gdk.Drawable x11_window_get_drawable_impl (Gdk.Window window);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_window_move_to_current_desktop (Gdk.Window window);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static void x11_window_set_user_time (Gdk.Window window, uint32 timestamp);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static Gdk.Atom x11_xatom_to_atom (X.Atom xatom);
	[CCode (cheader_filename = "gdk/gdkx.h")]
	public static Gdk.Atom x11_xatom_to_atom_for_display (Gdk.Display display, X.Atom xatom);
	[CCode (cheader_filename = "gdk/gdkx.h", cname = "gdk_xid_table_lookup")]
	public static void* x11_xid_table_lookup (X.ID xid);
	[CCode (cheader_filename = "gdk/gdkx.h", cname = "gdk_xid_table_lookup_for_display")]
	public static void* x11_xid_table_lookup_for_display (Gdk.Display display, X.ID xid);
}
