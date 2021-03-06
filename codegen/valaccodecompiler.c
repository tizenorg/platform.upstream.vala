/* valaccodecompiler.c generated by valac, the Vala compiler
 * generated from valaccodecompiler.vala, do not modify */

/* valaccodecompiler.vala
 *
 * Copyright (C) 2007-2009  Jürg Billeter
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.

 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Jürg Billeter <j@bitron.ch>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <vala.h>
#include <valagee.h>
#include <stdio.h>
#include <glib/gstdio.h>
#include <gobject/gvaluecollector.h>


#define VALA_TYPE_CCODE_COMPILER (vala_ccode_compiler_get_type ())
#define VALA_CCODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompiler))
#define VALA_CCODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompilerClass))
#define VALA_IS_CCODE_COMPILER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_COMPILER))
#define VALA_IS_CCODE_COMPILER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_COMPILER))
#define VALA_CCODE_COMPILER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_COMPILER, ValaCCodeCompilerClass))

typedef struct _ValaCCodeCompiler ValaCCodeCompiler;
typedef struct _ValaCCodeCompilerClass ValaCCodeCompilerClass;
typedef struct _ValaCCodeCompilerPrivate ValaCCodeCompilerPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_error_free0(var) ((var == NULL) ? NULL : (var = (g_error_free (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_source_file_unref0(var) ((var == NULL) ? NULL : (var = (vala_source_file_unref (var), NULL)))
typedef struct _ValaParamSpecCCodeCompiler ValaParamSpecCCodeCompiler;

struct _ValaCCodeCompiler {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeCompilerPrivate * priv;
};

struct _ValaCCodeCompilerClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeCompiler *self);
};

struct _ValaParamSpecCCodeCompiler {
	GParamSpec parent_instance;
};


static gpointer vala_ccode_compiler_parent_class = NULL;

gpointer vala_ccode_compiler_ref (gpointer instance);
void vala_ccode_compiler_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_compiler (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_compiler (GValue* value, gpointer v_object);
void vala_value_take_ccode_compiler (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_compiler (const GValue* value);
GType vala_ccode_compiler_get_type (void) G_GNUC_CONST;
enum  {
	VALA_CCODE_COMPILER_DUMMY_PROPERTY
};
ValaCCodeCompiler* vala_ccode_compiler_new (void);
ValaCCodeCompiler* vala_ccode_compiler_construct (GType object_type);
static gboolean vala_ccode_compiler_package_exists (const gchar* package_name, const gchar* pkg_config_command);
void vala_ccode_compiler_compile (ValaCCodeCompiler* self, ValaCodeContext* context, const gchar* cc_command, gchar** cc_options, int cc_options_length1, const gchar* pkg_config_command);
static void vala_ccode_compiler_finalize (ValaCCodeCompiler* obj);


ValaCCodeCompiler* vala_ccode_compiler_construct (GType object_type) {
	ValaCCodeCompiler* self = NULL;
	self = (ValaCCodeCompiler*) g_type_create_instance (object_type);
	return self;
}


ValaCCodeCompiler* vala_ccode_compiler_new (void) {
	return vala_ccode_compiler_construct (VALA_TYPE_CCODE_COMPILER);
}


static gboolean vala_ccode_compiler_package_exists (const gchar* package_name, const gchar* pkg_config_command) {
	gboolean result = FALSE;
	gchar* pc = NULL;
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* _tmp4_ = NULL;
	gchar* _tmp5_ = NULL;
	gint exit_status = 0;
	GError * _inner_error_ = NULL;
	g_return_val_if_fail (package_name != NULL, FALSE);
	_tmp0_ = pkg_config_command;
	_tmp1_ = g_strconcat (_tmp0_, " --exists ", NULL);
	_tmp2_ = _tmp1_;
	_tmp3_ = package_name;
	_tmp4_ = g_strconcat (_tmp2_, _tmp3_, NULL);
	_tmp5_ = _tmp4_;
	_g_free0 (_tmp2_);
	pc = _tmp5_;
	{
		gint _tmp6_ = 0;
		g_spawn_command_line_sync (pc, NULL, NULL, &_tmp6_, &_inner_error_);
		exit_status = _tmp6_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_SPAWN_ERROR) {
				goto __catch1_g_spawn_error;
			}
			_g_free0 (pc);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return FALSE;
		}
		result = 0 == exit_status;
		_g_free0 (pc);
		return result;
	}
	goto __finally1;
	__catch1_g_spawn_error:
	{
		GError* e = NULL;
		GError* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp7_ = e;
		_tmp8_ = _tmp7_->message;
		vala_report_error (NULL, _tmp8_);
		result = FALSE;
		_g_error_free0 (e);
		_g_free0 (pc);
		return result;
	}
	__finally1:
	_g_free0 (pc);
	g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
	g_clear_error (&_inner_error_);
	return FALSE;
}


/**
 * Compile generated C code to object code and optionally link object
 * files.
 *
 * @param context a code context
 */
static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static gchar* string_strip (const gchar* self) {
	gchar* result = NULL;
	gchar* _result_ = NULL;
	gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = g_strdup (self);
	_result_ = _tmp0_;
	_tmp1_ = _result_;
	g_strstrip (_tmp1_);
	result = _result_;
	return result;
}


void vala_ccode_compiler_compile (ValaCCodeCompiler* self, ValaCodeContext* context, const gchar* cc_command, gchar** cc_options, int cc_options_length1, const gchar* pkg_config_command) {
	gboolean use_pkgconfig = FALSE;
	const gchar* _tmp0_ = NULL;
	gchar* pc = NULL;
	const gchar* _tmp1_ = NULL;
	gchar* _tmp2_ = NULL;
	ValaCodeContext* _tmp3_ = NULL;
	gboolean _tmp4_ = FALSE;
	gboolean _tmp5_ = FALSE;
	const gchar* _tmp8_ = NULL;
	gchar* _tmp9_ = NULL;
	ValaCodeContext* _tmp10_ = NULL;
	gboolean _tmp11_ = FALSE;
	gboolean _tmp12_ = FALSE;
	gchar* pkgflags = NULL;
	gchar* _tmp34_ = NULL;
	gboolean _tmp35_ = FALSE;
	const gchar* _tmp45_ = NULL;
	gchar* cmdline = NULL;
	const gchar* _tmp46_ = NULL;
	gchar* _tmp47_ = NULL;
	ValaCodeContext* _tmp48_ = NULL;
	gboolean _tmp49_ = FALSE;
	gboolean _tmp50_ = FALSE;
	ValaCodeContext* _tmp53_ = NULL;
	gboolean _tmp54_ = FALSE;
	gboolean _tmp55_ = FALSE;
	ValaList* source_files = NULL;
	ValaCodeContext* _tmp91_ = NULL;
	ValaList* _tmp92_ = NULL;
	ValaList* c_source_files = NULL;
	ValaCodeContext* _tmp116_ = NULL;
	ValaList* _tmp117_ = NULL;
	const gchar* _tmp136_ = NULL;
	const gchar* _tmp137_ = NULL;
	gchar* _tmp138_ = NULL;
	gchar* _tmp139_ = NULL;
	gchar* _tmp140_ = NULL;
	gchar* _tmp141_ = NULL;
	gchar* _tmp142_ = NULL;
	gchar** _tmp143_ = NULL;
	gint _tmp143__length1 = 0;
	ValaCodeContext* _tmp152_ = NULL;
	gboolean _tmp153_ = FALSE;
	gboolean _tmp154_ = FALSE;
	GError * _inner_error_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (context != NULL);
	use_pkgconfig = FALSE;
	_tmp0_ = pkg_config_command;
	if (_tmp0_ == NULL) {
		pkg_config_command = "pkg-config";
	}
	_tmp1_ = pkg_config_command;
	_tmp2_ = g_strconcat (_tmp1_, " --cflags", NULL);
	pc = _tmp2_;
	_tmp3_ = context;
	_tmp4_ = vala_code_context_get_compile_only (_tmp3_);
	_tmp5_ = _tmp4_;
	if (!_tmp5_) {
		const gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		_tmp6_ = pc;
		_tmp7_ = g_strconcat (_tmp6_, " --libs", NULL);
		_g_free0 (pc);
		pc = _tmp7_;
	}
	use_pkgconfig = TRUE;
	_tmp8_ = pc;
	_tmp9_ = g_strconcat (_tmp8_, " gobject-2.0", NULL);
	_g_free0 (pc);
	pc = _tmp9_;
	_tmp10_ = context;
	_tmp11_ = vala_code_context_get_thread (_tmp10_);
	_tmp12_ = _tmp11_;
	if (_tmp12_) {
		const gchar* _tmp13_ = NULL;
		gchar* _tmp14_ = NULL;
		_tmp13_ = pc;
		_tmp14_ = g_strconcat (_tmp13_, " gthread-2.0", NULL);
		_g_free0 (pc);
		pc = _tmp14_;
	}
	{
		ValaList* _pkg_list = NULL;
		ValaCodeContext* _tmp15_ = NULL;
		ValaList* _tmp16_ = NULL;
		gint _pkg_size = 0;
		ValaList* _tmp17_ = NULL;
		gint _tmp18_ = 0;
		gint _tmp19_ = 0;
		gint _pkg_index = 0;
		_tmp15_ = context;
		_tmp16_ = vala_code_context_get_packages (_tmp15_);
		_pkg_list = _tmp16_;
		_tmp17_ = _pkg_list;
		_tmp18_ = vala_collection_get_size ((ValaCollection*) _tmp17_);
		_tmp19_ = _tmp18_;
		_pkg_size = _tmp19_;
		_pkg_index = -1;
		while (TRUE) {
			gint _tmp20_ = 0;
			gint _tmp21_ = 0;
			gint _tmp22_ = 0;
			gchar* pkg = NULL;
			ValaList* _tmp23_ = NULL;
			gint _tmp24_ = 0;
			gpointer _tmp25_ = NULL;
			const gchar* _tmp26_ = NULL;
			const gchar* _tmp27_ = NULL;
			gboolean _tmp28_ = FALSE;
			_tmp20_ = _pkg_index;
			_pkg_index = _tmp20_ + 1;
			_tmp21_ = _pkg_index;
			_tmp22_ = _pkg_size;
			if (!(_tmp21_ < _tmp22_)) {
				break;
			}
			_tmp23_ = _pkg_list;
			_tmp24_ = _pkg_index;
			_tmp25_ = vala_list_get (_tmp23_, _tmp24_);
			pkg = (gchar*) _tmp25_;
			_tmp26_ = pkg;
			_tmp27_ = pkg_config_command;
			_tmp28_ = vala_ccode_compiler_package_exists (_tmp26_, _tmp27_);
			if (_tmp28_) {
				const gchar* _tmp29_ = NULL;
				const gchar* _tmp30_ = NULL;
				gchar* _tmp31_ = NULL;
				gchar* _tmp32_ = NULL;
				gchar* _tmp33_ = NULL;
				use_pkgconfig = TRUE;
				_tmp29_ = pc;
				_tmp30_ = pkg;
				_tmp31_ = g_strconcat (" ", _tmp30_, NULL);
				_tmp32_ = _tmp31_;
				_tmp33_ = g_strconcat (_tmp29_, _tmp32_, NULL);
				_g_free0 (pc);
				pc = _tmp33_;
				_g_free0 (_tmp32_);
			}
			_g_free0 (pkg);
		}
		_vala_iterable_unref0 (_pkg_list);
	}
	_tmp34_ = g_strdup ("");
	pkgflags = _tmp34_;
	_tmp35_ = use_pkgconfig;
	if (_tmp35_) {
		{
			gint exit_status = 0;
			const gchar* _tmp36_ = NULL;
			gchar* _tmp37_ = NULL;
			gint _tmp38_ = 0;
			gint _tmp39_ = 0;
			_tmp36_ = pc;
			g_spawn_command_line_sync (_tmp36_, &_tmp37_, NULL, &_tmp38_, &_inner_error_);
			_g_free0 (pkgflags);
			pkgflags = _tmp37_;
			exit_status = _tmp38_;
			if (G_UNLIKELY (_inner_error_ != NULL)) {
				if (_inner_error_->domain == G_SPAWN_ERROR) {
					goto __catch2_g_spawn_error;
				}
				_g_free0 (pkgflags);
				_g_free0 (pc);
				g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
				g_clear_error (&_inner_error_);
				return;
			}
			_tmp39_ = exit_status;
			if (_tmp39_ != 0) {
				gint _tmp40_ = 0;
				gchar* _tmp41_ = NULL;
				gchar* _tmp42_ = NULL;
				_tmp40_ = exit_status;
				_tmp41_ = g_strdup_printf ("pkg-config exited with status %d", _tmp40_);
				_tmp42_ = _tmp41_;
				vala_report_error (NULL, _tmp42_);
				_g_free0 (_tmp42_);
				_g_free0 (pkgflags);
				_g_free0 (pc);
				return;
			}
		}
		goto __finally2;
		__catch2_g_spawn_error:
		{
			GError* e = NULL;
			GError* _tmp43_ = NULL;
			const gchar* _tmp44_ = NULL;
			e = _inner_error_;
			_inner_error_ = NULL;
			_tmp43_ = e;
			_tmp44_ = _tmp43_->message;
			vala_report_error (NULL, _tmp44_);
			_g_error_free0 (e);
			_g_free0 (pkgflags);
			_g_free0 (pc);
			return;
		}
		__finally2:
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			_g_free0 (pkgflags);
			_g_free0 (pc);
			g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
	}
	_tmp45_ = cc_command;
	if (_tmp45_ == NULL) {
		cc_command = "cc";
	}
	_tmp46_ = cc_command;
	_tmp47_ = g_strdup (_tmp46_);
	cmdline = _tmp47_;
	_tmp48_ = context;
	_tmp49_ = vala_code_context_get_debug (_tmp48_);
	_tmp50_ = _tmp49_;
	if (_tmp50_) {
		const gchar* _tmp51_ = NULL;
		gchar* _tmp52_ = NULL;
		_tmp51_ = cmdline;
		_tmp52_ = g_strconcat (_tmp51_, " -g", NULL);
		_g_free0 (cmdline);
		cmdline = _tmp52_;
	}
	_tmp53_ = context;
	_tmp54_ = vala_code_context_get_compile_only (_tmp53_);
	_tmp55_ = _tmp54_;
	if (_tmp55_) {
		const gchar* _tmp56_ = NULL;
		gchar* _tmp57_ = NULL;
		_tmp56_ = cmdline;
		_tmp57_ = g_strconcat (_tmp56_, " -c", NULL);
		_g_free0 (cmdline);
		cmdline = _tmp57_;
	} else {
		ValaCodeContext* _tmp58_ = NULL;
		const gchar* _tmp59_ = NULL;
		const gchar* _tmp60_ = NULL;
		_tmp58_ = context;
		_tmp59_ = vala_code_context_get_output (_tmp58_);
		_tmp60_ = _tmp59_;
		if (_tmp60_ != NULL) {
			gchar* output = NULL;
			ValaCodeContext* _tmp61_ = NULL;
			const gchar* _tmp62_ = NULL;
			const gchar* _tmp63_ = NULL;
			gchar* _tmp64_ = NULL;
			gboolean _tmp65_ = FALSE;
			gboolean _tmp66_ = FALSE;
			ValaCodeContext* _tmp67_ = NULL;
			const gchar* _tmp68_ = NULL;
			const gchar* _tmp69_ = NULL;
			const gchar* _tmp84_ = NULL;
			const gchar* _tmp85_ = NULL;
			gchar* _tmp86_ = NULL;
			gchar* _tmp87_ = NULL;
			gchar* _tmp88_ = NULL;
			gchar* _tmp89_ = NULL;
			gchar* _tmp90_ = NULL;
			_tmp61_ = context;
			_tmp62_ = vala_code_context_get_output (_tmp61_);
			_tmp63_ = _tmp62_;
			_tmp64_ = g_strdup (_tmp63_);
			output = _tmp64_;
			_tmp67_ = context;
			_tmp68_ = vala_code_context_get_directory (_tmp67_);
			_tmp69_ = _tmp68_;
			if (_tmp69_ != NULL) {
				ValaCodeContext* _tmp70_ = NULL;
				const gchar* _tmp71_ = NULL;
				const gchar* _tmp72_ = NULL;
				_tmp70_ = context;
				_tmp71_ = vala_code_context_get_directory (_tmp70_);
				_tmp72_ = _tmp71_;
				_tmp66_ = g_strcmp0 (_tmp72_, "") != 0;
			} else {
				_tmp66_ = FALSE;
			}
			if (_tmp66_) {
				ValaCodeContext* _tmp73_ = NULL;
				const gchar* _tmp74_ = NULL;
				const gchar* _tmp75_ = NULL;
				gboolean _tmp76_ = FALSE;
				_tmp73_ = context;
				_tmp74_ = vala_code_context_get_output (_tmp73_);
				_tmp75_ = _tmp74_;
				_tmp76_ = g_path_is_absolute (_tmp75_);
				_tmp65_ = !_tmp76_;
			} else {
				_tmp65_ = FALSE;
			}
			if (_tmp65_) {
				ValaCodeContext* _tmp77_ = NULL;
				const gchar* _tmp78_ = NULL;
				const gchar* _tmp79_ = NULL;
				ValaCodeContext* _tmp80_ = NULL;
				const gchar* _tmp81_ = NULL;
				const gchar* _tmp82_ = NULL;
				gchar* _tmp83_ = NULL;
				_tmp77_ = context;
				_tmp78_ = vala_code_context_get_directory (_tmp77_);
				_tmp79_ = _tmp78_;
				_tmp80_ = context;
				_tmp81_ = vala_code_context_get_output (_tmp80_);
				_tmp82_ = _tmp81_;
				_tmp83_ = g_strdup_printf ("%s%c%s", _tmp79_, (gint) G_DIR_SEPARATOR, _tmp82_);
				_g_free0 (output);
				output = _tmp83_;
			}
			_tmp84_ = cmdline;
			_tmp85_ = output;
			_tmp86_ = g_shell_quote (_tmp85_);
			_tmp87_ = _tmp86_;
			_tmp88_ = g_strconcat (" -o ", _tmp87_, NULL);
			_tmp89_ = _tmp88_;
			_tmp90_ = g_strconcat (_tmp84_, _tmp89_, NULL);
			_g_free0 (cmdline);
			cmdline = _tmp90_;
			_g_free0 (_tmp89_);
			_g_free0 (_tmp87_);
			_g_free0 (output);
		}
	}
	_tmp91_ = context;
	_tmp92_ = vala_code_context_get_source_files (_tmp91_);
	source_files = _tmp92_;
	{
		ValaList* _file_list = NULL;
		ValaList* _tmp93_ = NULL;
		ValaList* _tmp94_ = NULL;
		gint _file_size = 0;
		ValaList* _tmp95_ = NULL;
		gint _tmp96_ = 0;
		gint _tmp97_ = 0;
		gint _file_index = 0;
		_tmp93_ = source_files;
		_tmp94_ = _vala_iterable_ref0 (_tmp93_);
		_file_list = _tmp94_;
		_tmp95_ = _file_list;
		_tmp96_ = vala_collection_get_size ((ValaCollection*) _tmp95_);
		_tmp97_ = _tmp96_;
		_file_size = _tmp97_;
		_file_index = -1;
		while (TRUE) {
			gint _tmp98_ = 0;
			gint _tmp99_ = 0;
			gint _tmp100_ = 0;
			ValaSourceFile* file = NULL;
			ValaList* _tmp101_ = NULL;
			gint _tmp102_ = 0;
			gpointer _tmp103_ = NULL;
			ValaSourceFile* _tmp104_ = NULL;
			ValaSourceFileType _tmp105_ = 0;
			ValaSourceFileType _tmp106_ = 0;
			_tmp98_ = _file_index;
			_file_index = _tmp98_ + 1;
			_tmp99_ = _file_index;
			_tmp100_ = _file_size;
			if (!(_tmp99_ < _tmp100_)) {
				break;
			}
			_tmp101_ = _file_list;
			_tmp102_ = _file_index;
			_tmp103_ = vala_list_get (_tmp101_, _tmp102_);
			file = (ValaSourceFile*) _tmp103_;
			_tmp104_ = file;
			_tmp105_ = vala_source_file_get_file_type (_tmp104_);
			_tmp106_ = _tmp105_;
			if (_tmp106_ == VALA_SOURCE_FILE_TYPE_SOURCE) {
				const gchar* _tmp107_ = NULL;
				ValaSourceFile* _tmp108_ = NULL;
				gchar* _tmp109_ = NULL;
				gchar* _tmp110_ = NULL;
				gchar* _tmp111_ = NULL;
				gchar* _tmp112_ = NULL;
				gchar* _tmp113_ = NULL;
				gchar* _tmp114_ = NULL;
				gchar* _tmp115_ = NULL;
				_tmp107_ = cmdline;
				_tmp108_ = file;
				_tmp109_ = vala_source_file_get_csource_filename (_tmp108_);
				_tmp110_ = _tmp109_;
				_tmp111_ = g_shell_quote (_tmp110_);
				_tmp112_ = _tmp111_;
				_tmp113_ = g_strconcat (" ", _tmp112_, NULL);
				_tmp114_ = _tmp113_;
				_tmp115_ = g_strconcat (_tmp107_, _tmp114_, NULL);
				_g_free0 (cmdline);
				cmdline = _tmp115_;
				_g_free0 (_tmp114_);
				_g_free0 (_tmp112_);
				_g_free0 (_tmp110_);
			}
			_vala_source_file_unref0 (file);
		}
		_vala_iterable_unref0 (_file_list);
	}
	_tmp116_ = context;
	_tmp117_ = vala_code_context_get_c_source_files (_tmp116_);
	c_source_files = _tmp117_;
	{
		ValaList* _file_list = NULL;
		ValaList* _tmp118_ = NULL;
		ValaList* _tmp119_ = NULL;
		gint _file_size = 0;
		ValaList* _tmp120_ = NULL;
		gint _tmp121_ = 0;
		gint _tmp122_ = 0;
		gint _file_index = 0;
		_tmp118_ = c_source_files;
		_tmp119_ = _vala_iterable_ref0 (_tmp118_);
		_file_list = _tmp119_;
		_tmp120_ = _file_list;
		_tmp121_ = vala_collection_get_size ((ValaCollection*) _tmp120_);
		_tmp122_ = _tmp121_;
		_file_size = _tmp122_;
		_file_index = -1;
		while (TRUE) {
			gint _tmp123_ = 0;
			gint _tmp124_ = 0;
			gint _tmp125_ = 0;
			gchar* file = NULL;
			ValaList* _tmp126_ = NULL;
			gint _tmp127_ = 0;
			gpointer _tmp128_ = NULL;
			const gchar* _tmp129_ = NULL;
			const gchar* _tmp130_ = NULL;
			gchar* _tmp131_ = NULL;
			gchar* _tmp132_ = NULL;
			gchar* _tmp133_ = NULL;
			gchar* _tmp134_ = NULL;
			gchar* _tmp135_ = NULL;
			_tmp123_ = _file_index;
			_file_index = _tmp123_ + 1;
			_tmp124_ = _file_index;
			_tmp125_ = _file_size;
			if (!(_tmp124_ < _tmp125_)) {
				break;
			}
			_tmp126_ = _file_list;
			_tmp127_ = _file_index;
			_tmp128_ = vala_list_get (_tmp126_, _tmp127_);
			file = (gchar*) _tmp128_;
			_tmp129_ = cmdline;
			_tmp130_ = file;
			_tmp131_ = g_shell_quote (_tmp130_);
			_tmp132_ = _tmp131_;
			_tmp133_ = g_strconcat (" ", _tmp132_, NULL);
			_tmp134_ = _tmp133_;
			_tmp135_ = g_strconcat (_tmp129_, _tmp134_, NULL);
			_g_free0 (cmdline);
			cmdline = _tmp135_;
			_g_free0 (_tmp134_);
			_g_free0 (_tmp132_);
			_g_free0 (file);
		}
		_vala_iterable_unref0 (_file_list);
	}
	_tmp136_ = cmdline;
	_tmp137_ = pkgflags;
	_tmp138_ = string_strip (_tmp137_);
	_tmp139_ = _tmp138_;
	_tmp140_ = g_strconcat (" ", _tmp139_, NULL);
	_tmp141_ = _tmp140_;
	_tmp142_ = g_strconcat (_tmp136_, _tmp141_, NULL);
	_g_free0 (cmdline);
	cmdline = _tmp142_;
	_g_free0 (_tmp141_);
	_g_free0 (_tmp139_);
	_tmp143_ = cc_options;
	_tmp143__length1 = cc_options_length1;
	{
		gchar** cc_option_collection = NULL;
		gint cc_option_collection_length1 = 0;
		gint _cc_option_collection_size_ = 0;
		gint cc_option_it = 0;
		cc_option_collection = _tmp143_;
		cc_option_collection_length1 = _tmp143__length1;
		for (cc_option_it = 0; cc_option_it < _tmp143__length1; cc_option_it = cc_option_it + 1) {
			gchar* _tmp144_ = NULL;
			gchar* cc_option = NULL;
			_tmp144_ = g_strdup (cc_option_collection[cc_option_it]);
			cc_option = _tmp144_;
			{
				const gchar* _tmp145_ = NULL;
				const gchar* _tmp146_ = NULL;
				gchar* _tmp147_ = NULL;
				gchar* _tmp148_ = NULL;
				gchar* _tmp149_ = NULL;
				gchar* _tmp150_ = NULL;
				gchar* _tmp151_ = NULL;
				_tmp145_ = cmdline;
				_tmp146_ = cc_option;
				_tmp147_ = g_shell_quote (_tmp146_);
				_tmp148_ = _tmp147_;
				_tmp149_ = g_strconcat (" ", _tmp148_, NULL);
				_tmp150_ = _tmp149_;
				_tmp151_ = g_strconcat (_tmp145_, _tmp150_, NULL);
				_g_free0 (cmdline);
				cmdline = _tmp151_;
				_g_free0 (_tmp150_);
				_g_free0 (_tmp148_);
				_g_free0 (cc_option);
			}
		}
	}
	_tmp152_ = context;
	_tmp153_ = vala_code_context_get_verbose_mode (_tmp152_);
	_tmp154_ = _tmp153_;
	if (_tmp154_) {
		FILE* _tmp155_ = NULL;
		const gchar* _tmp156_ = NULL;
		_tmp155_ = stdout;
		_tmp156_ = cmdline;
		fprintf (_tmp155_, "%s\n", _tmp156_);
	}
	{
		gint exit_status = 0;
		const gchar* _tmp157_ = NULL;
		gint _tmp158_ = 0;
		gint _tmp159_ = 0;
		_tmp157_ = cmdline;
		g_spawn_command_line_sync (_tmp157_, NULL, NULL, &_tmp158_, &_inner_error_);
		exit_status = _tmp158_;
		if (G_UNLIKELY (_inner_error_ != NULL)) {
			if (_inner_error_->domain == G_SPAWN_ERROR) {
				goto __catch3_g_spawn_error;
			}
			_vala_iterable_unref0 (c_source_files);
			_vala_iterable_unref0 (source_files);
			_g_free0 (cmdline);
			_g_free0 (pkgflags);
			_g_free0 (pc);
			g_critical ("file %s: line %d: unexpected error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
			g_clear_error (&_inner_error_);
			return;
		}
		_tmp159_ = exit_status;
		if (_tmp159_ != 0) {
			gint _tmp160_ = 0;
			gchar* _tmp161_ = NULL;
			gchar* _tmp162_ = NULL;
			_tmp160_ = exit_status;
			_tmp161_ = g_strdup_printf ("cc exited with status %d", _tmp160_);
			_tmp162_ = _tmp161_;
			vala_report_error (NULL, _tmp162_);
			_g_free0 (_tmp162_);
		}
	}
	goto __finally3;
	__catch3_g_spawn_error:
	{
		GError* e = NULL;
		GError* _tmp163_ = NULL;
		const gchar* _tmp164_ = NULL;
		e = _inner_error_;
		_inner_error_ = NULL;
		_tmp163_ = e;
		_tmp164_ = _tmp163_->message;
		vala_report_error (NULL, _tmp164_);
		_g_error_free0 (e);
	}
	__finally3:
	if (G_UNLIKELY (_inner_error_ != NULL)) {
		_vala_iterable_unref0 (c_source_files);
		_vala_iterable_unref0 (source_files);
		_g_free0 (cmdline);
		_g_free0 (pkgflags);
		_g_free0 (pc);
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error_->message, g_quark_to_string (_inner_error_->domain), _inner_error_->code);
		g_clear_error (&_inner_error_);
		return;
	}
	{
		ValaList* _file_list = NULL;
		ValaList* _tmp165_ = NULL;
		ValaList* _tmp166_ = NULL;
		gint _file_size = 0;
		ValaList* _tmp167_ = NULL;
		gint _tmp168_ = 0;
		gint _tmp169_ = 0;
		gint _file_index = 0;
		_tmp165_ = source_files;
		_tmp166_ = _vala_iterable_ref0 (_tmp165_);
		_file_list = _tmp166_;
		_tmp167_ = _file_list;
		_tmp168_ = vala_collection_get_size ((ValaCollection*) _tmp167_);
		_tmp169_ = _tmp168_;
		_file_size = _tmp169_;
		_file_index = -1;
		while (TRUE) {
			gint _tmp170_ = 0;
			gint _tmp171_ = 0;
			gint _tmp172_ = 0;
			ValaSourceFile* file = NULL;
			ValaList* _tmp173_ = NULL;
			gint _tmp174_ = 0;
			gpointer _tmp175_ = NULL;
			ValaSourceFile* _tmp176_ = NULL;
			ValaSourceFileType _tmp177_ = 0;
			ValaSourceFileType _tmp178_ = 0;
			_tmp170_ = _file_index;
			_file_index = _tmp170_ + 1;
			_tmp171_ = _file_index;
			_tmp172_ = _file_size;
			if (!(_tmp171_ < _tmp172_)) {
				break;
			}
			_tmp173_ = _file_list;
			_tmp174_ = _file_index;
			_tmp175_ = vala_list_get (_tmp173_, _tmp174_);
			file = (ValaSourceFile*) _tmp175_;
			_tmp176_ = file;
			_tmp177_ = vala_source_file_get_file_type (_tmp176_);
			_tmp178_ = _tmp177_;
			if (_tmp178_ == VALA_SOURCE_FILE_TYPE_SOURCE) {
				ValaCodeContext* _tmp179_ = NULL;
				gboolean _tmp180_ = FALSE;
				gboolean _tmp181_ = FALSE;
				_tmp179_ = context;
				_tmp180_ = vala_code_context_get_save_csources (_tmp179_);
				_tmp181_ = _tmp180_;
				if (!_tmp181_) {
					ValaSourceFile* _tmp182_ = NULL;
					gchar* _tmp183_ = NULL;
					gchar* _tmp184_ = NULL;
					_tmp182_ = file;
					_tmp183_ = vala_source_file_get_csource_filename (_tmp182_);
					_tmp184_ = _tmp183_;
					g_unlink (_tmp184_);
					_g_free0 (_tmp184_);
				}
			}
			_vala_source_file_unref0 (file);
		}
		_vala_iterable_unref0 (_file_list);
	}
	_vala_iterable_unref0 (c_source_files);
	_vala_iterable_unref0 (source_files);
	_g_free0 (cmdline);
	_g_free0 (pkgflags);
	_g_free0 (pc);
}


static void vala_value_ccode_compiler_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void vala_value_ccode_compiler_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		vala_ccode_compiler_unref (value->data[0].v_pointer);
	}
}


static void vala_value_ccode_compiler_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_ccode_compiler_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer vala_value_ccode_compiler_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* vala_value_ccode_compiler_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ValaCCodeCompiler* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_ccode_compiler_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* vala_value_ccode_compiler_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ValaCCodeCompiler** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_ccode_compiler_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* vala_param_spec_ccode_compiler (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ValaParamSpecCCodeCompiler* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_CCODE_COMPILER), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer vala_value_get_ccode_compiler (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER), NULL);
	return value->data[0].v_pointer;
}


void vala_value_set_ccode_compiler (GValue* value, gpointer v_object) {
	ValaCCodeCompiler* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_COMPILER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_ccode_compiler_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_compiler_unref (old);
	}
}


void vala_value_take_ccode_compiler (GValue* value, gpointer v_object) {
	ValaCCodeCompiler* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_CCODE_COMPILER));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_CCODE_COMPILER));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_ccode_compiler_unref (old);
	}
}


static void vala_ccode_compiler_class_init (ValaCCodeCompilerClass * klass) {
	vala_ccode_compiler_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeCompilerClass *) klass)->finalize = vala_ccode_compiler_finalize;
}


static void vala_ccode_compiler_instance_init (ValaCCodeCompiler * self) {
	self->ref_count = 1;
}


static void vala_ccode_compiler_finalize (ValaCCodeCompiler* obj) {
	ValaCCodeCompiler * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_COMPILER, ValaCCodeCompiler);
	g_signal_handlers_destroy (self);
}


/**
 * Interface to the C compiler.
 */
GType vala_ccode_compiler_get_type (void) {
	static volatile gsize vala_ccode_compiler_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_compiler_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_ccode_compiler_init, vala_value_ccode_compiler_free_value, vala_value_ccode_compiler_copy_value, vala_value_ccode_compiler_peek_pointer, "p", vala_value_ccode_compiler_collect_value, "p", vala_value_ccode_compiler_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCompilerClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_compiler_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeCompiler), 0, (GInstanceInitFunc) vala_ccode_compiler_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_ccode_compiler_type_id;
		vala_ccode_compiler_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaCCodeCompiler", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&vala_ccode_compiler_type_id__volatile, vala_ccode_compiler_type_id);
	}
	return vala_ccode_compiler_type_id__volatile;
}


gpointer vala_ccode_compiler_ref (gpointer instance) {
	ValaCCodeCompiler* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void vala_ccode_compiler_unref (gpointer instance) {
	ValaCCodeCompiler* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_CCODE_COMPILER_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



