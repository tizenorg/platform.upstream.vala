/* gstreamer-pbutils-0.10.vapi generated by vapigen, do not modify. */

[CCode (cprefix = "Gst", lower_case_cprefix = "gst_")]
namespace Gst {
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class Discoverer : GLib.Object {
		[CCode (has_construct_function = false)]
		public Discoverer (Gst.ClockTime timeout) throws GLib.Error;
		public Gst.DiscovererInfo discover_uri (string uri) throws GLib.Error;
		public bool discover_uri_async (string uri);
		public void start ();
		public void stop ();
		[NoAccessorMethod]
		public uint64 timeout { get; set construct; }
		public virtual signal void discovered (Gst.DiscovererInfo info, GLib.Error err);
		public virtual signal void finished ();
		public virtual signal void starting ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererAudioInfo : Gst.DiscovererStreamInfo {
		public uint get_bitrate ();
		public uint get_channels ();
		public uint get_depth ();
		public uint get_max_bitrate ();
		public uint get_sample_rate ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererContainerInfo : Gst.DiscovererStreamInfo {
		public GLib.List<Gst.MiniObject> get_streams ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererInfo : Gst.MiniObject {
		public GLib.List<Gst.DiscovererAudioInfo> get_audio_streams ();
		public GLib.List<Gst.DiscovererVideoInfo> get_container_streams ();
		public Gst.ClockTime get_duration ();
		public unowned Gst.Structure get_misc ();
		public Gst.DiscovererResult get_result ();
		public Gst.DiscovererStreamInfo get_stream_info ();
		public GLib.List<Gst.DiscovererStreamInfo> get_stream_list ();
		public GLib.List<Gst.MiniObject> get_streams (GLib.Type streamtype);
		public unowned Gst.TagList get_tags ();
		public unowned string get_uri ();
		public GLib.List<Gst.DiscovererVideoInfo> get_video_streams ();
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererStreamInfo : Gst.MiniObject {
		public Gst.Caps get_caps ();
		public unowned Gst.Structure get_misc ();
		public Gst.DiscovererStreamInfo get_next ();
		public Gst.DiscovererStreamInfo get_previous ();
		public unowned string get_stream_type_nick ();
		public unowned Gst.TagList get_tags ();
		public static void list_free (GLib.List infos);
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public class DiscovererVideoInfo : Gst.DiscovererStreamInfo {
		public uint get_bitrate ();
		public uint get_depth ();
		public uint get_framerate_denom ();
		public uint get_framerate_num ();
		public uint get_height ();
		public uint get_max_bitrate ();
		public uint get_par_denom ();
		public uint get_par_num ();
		public uint get_width ();
		public bool is_image ();
		public bool is_interlaced ();
	}
	[Compact]
	[CCode (type_id = "GST_TYPE_INSTALL_PLUGINS_CONTEXT", cheader_filename = "gst/pbutils/pbutils.h")]
	public class InstallPluginsContext {
		[CCode (has_construct_function = false)]
		public InstallPluginsContext ();
		public void set_xid (uint xid);
	}
	[CCode (cprefix = "GST_DISCOVERER_", cheader_filename = "gst/pbutils/pbutils.h")]
	public enum DiscovererResult {
		OK,
		URI_INVALID,
		ERROR,
		TIMEOUT,
		BUSY,
		MISSING_PLUGINS
	}
	[CCode (cprefix = "GST_INSTALL_PLUGINS_", cheader_filename = "gst/pbutils/pbutils.h")]
	public enum InstallPluginsReturn {
		SUCCESS,
		NOT_FOUND,
		ERROR,
		PARTIAL_SUCCESS,
		USER_ABORT,
		CRASHED,
		INVALID,
		STARTED_OK,
		INTERNAL_FAILURE,
		HELPER_MISSING,
		INSTALL_IN_PROGRESS
	}
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public delegate void InstallPluginsResultFunc (Gst.InstallPluginsReturn result);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MAJOR;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MICRO;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_MINOR;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public const int PLUGINS_BASE_VERSION_NANO;
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_aac_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_aac_get_level ([CCode (array_length_pos = 1.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_aac_get_profile ([CCode (array_length_pos = 1.9)] uchar[] audio_config);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static uint codec_utils_aac_get_sample_rate_from_index (uint sr_idx);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_h264_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_h264_get_level ([CCode (array_length_pos = 1.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_h264_get_profile ([CCode (array_length_pos = 1.9)] uchar[] sps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool codec_utils_mpeg4video_caps_set_level_and_profile (Gst.Caps caps, [CCode (array_length_pos = 2.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_mpeg4video_get_level ([CCode (array_length_pos = 1.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string codec_utils_mpeg4video_get_profile ([CCode (array_length_pos = 1.9)] uchar[] vis_obj_seq);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.InstallPluginsReturn install_plugins_async ([CCode (array_length = false)] string[] details, Gst.InstallPluginsContext? ctx, Gst.InstallPluginsResultFunc func);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool install_plugins_installation_in_progress ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string install_plugins_return_get_name (Gst.InstallPluginsReturn ret);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool install_plugins_supported ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.InstallPluginsReturn install_plugins_sync (string details, Gst.InstallPluginsContext ctx);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool is_missing_plugin_message (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_decoder_installer_detail_new (Gst.Caps decode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_decoder_message_new (Gst.Element element, Gst.Caps decode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_element_installer_detail_new (string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_element_message_new (Gst.Element element, string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_encoder_installer_detail_new (Gst.Caps encode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_encoder_message_new (Gst.Element element, Gst.Caps encode_caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_plugin_message_get_description (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_plugin_message_get_installer_detail (Gst.Message msg);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_uri_sink_installer_detail_new (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_uri_sink_message_new (Gst.Element element, string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static string missing_uri_source_installer_detail_new (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static Gst.Message missing_uri_source_message_new (Gst.Element element, string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static bool pb_utils_add_codec_description_to_tag_list (Gst.TagList taglist, string codec_tag, Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_codec_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_decoder_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_element_description (string factory_name);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_encoder_description (Gst.Caps caps);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_sink_description (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string pb_utils_get_source_description (string protocol);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static void pb_utils_init ();
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static void plugins_base_version (uint major, uint minor, uint micro, uint nano);
	[CCode (cheader_filename = "gst/pbutils/pbutils.h")]
	public static unowned string plugins_base_version_string ();
}
