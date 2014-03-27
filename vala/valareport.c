/* valareport.c generated by valac, the Vala compiler
 * generated from valareport.vala, do not modify */

/* valareport.vala
 *
 * Copyright (C) 2006-2010  Jürg Billeter
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
#include <stdio.h>


#define VALA_TYPE_REPORT (vala_report_get_type ())
#define VALA_REPORT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REPORT, ValaReport))
#define VALA_REPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REPORT, ValaReportClass))
#define VALA_IS_REPORT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REPORT))
#define VALA_IS_REPORT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REPORT))
#define VALA_REPORT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REPORT, ValaReportClass))

typedef struct _ValaReport ValaReport;
typedef struct _ValaReportClass ValaReportClass;
typedef struct _ValaReportPrivate ValaReportPrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_SOURCE_LOCATION (vala_source_location_get_type ())
typedef struct _ValaSourceLocation ValaSourceLocation;

#define VALA_TYPE_SOURCE_FILE (vala_source_file_get_type ())
#define VALA_SOURCE_FILE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_FILE, ValaSourceFile))
#define VALA_SOURCE_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_FILE, ValaSourceFileClass))
#define VALA_IS_SOURCE_FILE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_FILE))
#define VALA_IS_SOURCE_FILE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_FILE))
#define VALA_SOURCE_FILE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_FILE, ValaSourceFileClass))

typedef struct _ValaSourceFile ValaSourceFile;
typedef struct _ValaSourceFileClass ValaSourceFileClass;
#define _g_free0(var) (var = (g_free (var), NULL))

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

struct _ValaReport {
	GObject parent_instance;
	ValaReportPrivate * priv;
	gint warnings;
	gint errors;
};

struct _ValaReportClass {
	GObjectClass parent_class;
	void (*note) (ValaReport* self, ValaSourceReference* source, const gchar* message);
	void (*depr) (ValaReport* self, ValaSourceReference* source, const gchar* message);
	void (*warn) (ValaReport* self, ValaSourceReference* source, const gchar* message);
	void (*err) (ValaReport* self, ValaSourceReference* source, const gchar* message);
};

struct _ValaReportPrivate {
	gboolean verbose_errors;
	gboolean _enable_warnings;
};

struct _ValaSourceLocation {
	gchar* pos;
	gint line;
	gint column;
};


static gpointer vala_report_parent_class = NULL;

GType vala_report_get_type (void) G_GNUC_CONST;
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
#define VALA_REPORT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_REPORT, ValaReportPrivate))
enum  {
	VALA_REPORT_DUMMY_PROPERTY,
	VALA_REPORT_ENABLE_WARNINGS
};
void vala_report_set_verbose_errors (ValaReport* self, gboolean verbose);
gint vala_report_get_warnings (ValaReport* self);
gint vala_report_get_errors (ValaReport* self);
static void vala_report_report_source (ValaSourceReference* source);
GType vala_source_location_get_type (void) G_GNUC_CONST;
ValaSourceLocation* vala_source_location_dup (const ValaSourceLocation* self);
void vala_source_location_free (ValaSourceLocation* self);
void vala_source_reference_get_begin (ValaSourceReference* self, ValaSourceLocation* result);
void vala_source_reference_get_end (ValaSourceReference* self, ValaSourceLocation* result);
gpointer vala_source_file_ref (gpointer instance);
void vala_source_file_unref (gpointer instance);
GParamSpec* vala_param_spec_source_file (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_file (GValue* value, gpointer v_object);
void vala_value_take_source_file (GValue* value, gpointer v_object);
gpointer vala_value_get_source_file (const GValue* value);
GType vala_source_file_get_type (void) G_GNUC_CONST;
ValaSourceFile* vala_source_reference_get_file (ValaSourceReference* self);
gchar* vala_source_file_get_source_line (ValaSourceFile* self, gint lineno);
void vala_report_note (ValaReport* self, ValaSourceReference* source, const gchar* message);
static void vala_report_real_note (ValaReport* self, ValaSourceReference* source, const gchar* message);
gboolean vala_report_get_enable_warnings (ValaReport* self);
gchar* vala_source_reference_to_string (ValaSourceReference* self);
void vala_report_depr (ValaReport* self, ValaSourceReference* source, const gchar* message);
static void vala_report_real_depr (ValaReport* self, ValaSourceReference* source, const gchar* message);
void vala_report_warn (ValaReport* self, ValaSourceReference* source, const gchar* message);
static void vala_report_real_warn (ValaReport* self, ValaSourceReference* source, const gchar* message);
void vala_report_err (ValaReport* self, ValaSourceReference* source, const gchar* message);
static void vala_report_real_err (ValaReport* self, ValaSourceReference* source, const gchar* message);
void vala_report_notice (ValaSourceReference* source, const gchar* message);
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
ValaCodeContext* vala_code_context_get (void);
ValaReport* vala_code_context_get_report (ValaCodeContext* self);
void vala_report_deprecated (ValaSourceReference* source, const gchar* message);
void vala_report_experimental (ValaSourceReference* source, const gchar* message);
void vala_report_warning (ValaSourceReference* source, const gchar* message);
void vala_report_error (ValaSourceReference* source, const gchar* message);
ValaReport* vala_report_new (void);
ValaReport* vala_report_construct (GType object_type);
void vala_report_set_enable_warnings (ValaReport* self, gboolean value);
static void vala_report_finalize (GObject* obj);
static void _vala_vala_report_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_vala_report_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


/**
 * Set the error verbosity.
 */
void vala_report_set_verbose_errors (ValaReport* self, gboolean verbose) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = verbose;
	self->priv->verbose_errors = _tmp0_;
}


/**
 * Returns the total number of warnings reported.
 */
gint vala_report_get_warnings (ValaReport* self) {
	gint result = 0;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->warnings;
	result = _tmp0_;
	return result;
}


/**
 * Returns the total number of errors reported.
 */
gint vala_report_get_errors (ValaReport* self) {
	gint result = 0;
	gint _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->errors;
	result = _tmp0_;
	return result;
}


/**
 * Pretty-print the actual line of offending code if possible.
 */
static gchar string_get (const gchar* self, glong index) {
	gchar result = '\0';
	glong _tmp0_ = 0L;
	gchar _tmp1_ = '\0';
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = index;
	_tmp1_ = ((gchar*) self)[_tmp0_];
	result = _tmp1_;
	return result;
}


static void vala_report_report_source (ValaSourceReference* source) {
	ValaSourceReference* _tmp0_ = NULL;
	ValaSourceLocation _tmp1_ = {0};
	ValaSourceLocation _tmp2_ = {0};
	gint _tmp3_ = 0;
	ValaSourceReference* _tmp4_ = NULL;
	ValaSourceLocation _tmp5_ = {0};
	ValaSourceLocation _tmp6_ = {0};
	gint _tmp7_ = 0;
	gchar* offending_line = NULL;
	ValaSourceReference* _tmp8_ = NULL;
	ValaSourceFile* _tmp9_ = NULL;
	ValaSourceFile* _tmp10_ = NULL;
	ValaSourceReference* _tmp11_ = NULL;
	ValaSourceLocation _tmp12_ = {0};
	ValaSourceLocation _tmp13_ = {0};
	gint _tmp14_ = 0;
	gchar* _tmp15_ = NULL;
	const gchar* _tmp16_ = NULL;
	g_return_if_fail (source != NULL);
	_tmp0_ = source;
	vala_source_reference_get_begin (_tmp0_, &_tmp1_);
	_tmp2_ = _tmp1_;
	_tmp3_ = _tmp2_.line;
	_tmp4_ = source;
	vala_source_reference_get_end (_tmp4_, &_tmp5_);
	_tmp6_ = _tmp5_;
	_tmp7_ = _tmp6_.line;
	if (_tmp3_ != _tmp7_) {
		return;
	}
	_tmp8_ = source;
	_tmp9_ = vala_source_reference_get_file (_tmp8_);
	_tmp10_ = _tmp9_;
	_tmp11_ = source;
	vala_source_reference_get_begin (_tmp11_, &_tmp12_);
	_tmp13_ = _tmp12_;
	_tmp14_ = _tmp13_.line;
	_tmp15_ = vala_source_file_get_source_line (_tmp10_, _tmp14_);
	offending_line = _tmp15_;
	_tmp16_ = offending_line;
	if (_tmp16_ != NULL) {
		FILE* _tmp17_ = NULL;
		const gchar* _tmp18_ = NULL;
		gint idx = 0;
		FILE* _tmp47_ = NULL;
		_tmp17_ = stderr;
		_tmp18_ = offending_line;
		fprintf (_tmp17_, "%s\n", _tmp18_);
		{
			gboolean _tmp19_ = FALSE;
			idx = 1;
			_tmp19_ = TRUE;
			while (TRUE) {
				gint _tmp21_ = 0;
				ValaSourceReference* _tmp22_ = NULL;
				ValaSourceLocation _tmp23_ = {0};
				ValaSourceLocation _tmp24_ = {0};
				gint _tmp25_ = 0;
				const gchar* _tmp26_ = NULL;
				gint _tmp27_ = 0;
				gchar _tmp28_ = '\0';
				if (!_tmp19_) {
					gint _tmp20_ = 0;
					_tmp20_ = idx;
					idx = _tmp20_ + 1;
				}
				_tmp19_ = FALSE;
				_tmp21_ = idx;
				_tmp22_ = source;
				vala_source_reference_get_begin (_tmp22_, &_tmp23_);
				_tmp24_ = _tmp23_;
				_tmp25_ = _tmp24_.column;
				if (!(_tmp21_ < _tmp25_)) {
					break;
				}
				_tmp26_ = offending_line;
				_tmp27_ = idx;
				_tmp28_ = string_get (_tmp26_, (glong) (_tmp27_ - 1));
				if (_tmp28_ == '\t') {
					FILE* _tmp29_ = NULL;
					_tmp29_ = stderr;
					fprintf (_tmp29_, "\t");
				} else {
					FILE* _tmp30_ = NULL;
					_tmp30_ = stderr;
					fprintf (_tmp30_, " ");
				}
			}
		}
		{
			ValaSourceReference* _tmp31_ = NULL;
			ValaSourceLocation _tmp32_ = {0};
			ValaSourceLocation _tmp33_ = {0};
			gint _tmp34_ = 0;
			gboolean _tmp35_ = FALSE;
			_tmp31_ = source;
			vala_source_reference_get_begin (_tmp31_, &_tmp32_);
			_tmp33_ = _tmp32_;
			_tmp34_ = _tmp33_.column;
			idx = _tmp34_;
			_tmp35_ = TRUE;
			while (TRUE) {
				gint _tmp37_ = 0;
				ValaSourceReference* _tmp38_ = NULL;
				ValaSourceLocation _tmp39_ = {0};
				ValaSourceLocation _tmp40_ = {0};
				gint _tmp41_ = 0;
				const gchar* _tmp42_ = NULL;
				gint _tmp43_ = 0;
				gchar _tmp44_ = '\0';
				if (!_tmp35_) {
					gint _tmp36_ = 0;
					_tmp36_ = idx;
					idx = _tmp36_ + 1;
				}
				_tmp35_ = FALSE;
				_tmp37_ = idx;
				_tmp38_ = source;
				vala_source_reference_get_end (_tmp38_, &_tmp39_);
				_tmp40_ = _tmp39_;
				_tmp41_ = _tmp40_.column;
				if (!(_tmp37_ <= _tmp41_)) {
					break;
				}
				_tmp42_ = offending_line;
				_tmp43_ = idx;
				_tmp44_ = string_get (_tmp42_, (glong) (_tmp43_ - 1));
				if (_tmp44_ == '\t') {
					FILE* _tmp45_ = NULL;
					_tmp45_ = stderr;
					fprintf (_tmp45_, "\t");
				} else {
					FILE* _tmp46_ = NULL;
					_tmp46_ = stderr;
					fprintf (_tmp46_, "^");
				}
			}
		}
		_tmp47_ = stderr;
		fprintf (_tmp47_, "\n");
	}
	_g_free0 (offending_line);
}


/**
 * Reports the specified message as note.
 *
 * @param source  reference to source code
 * @param message note message
 */
static void vala_report_real_note (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	gboolean _tmp0_ = FALSE;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = self->priv->_enable_warnings;
	if (!_tmp0_) {
		return;
	}
	_tmp1_ = source;
	if (_tmp1_ == NULL) {
		FILE* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		_tmp2_ = stderr;
		_tmp3_ = message;
		fprintf (_tmp2_, "note: %s\n", _tmp3_);
	} else {
		FILE* _tmp4_ = NULL;
		ValaSourceReference* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		gboolean _tmp9_ = FALSE;
		_tmp4_ = stderr;
		_tmp5_ = source;
		_tmp6_ = vala_source_reference_to_string (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = message;
		fprintf (_tmp4_, "%s: note: %s\n", _tmp7_, _tmp8_);
		_g_free0 (_tmp7_);
		_tmp9_ = self->priv->verbose_errors;
		if (_tmp9_) {
			ValaSourceReference* _tmp10_ = NULL;
			_tmp10_ = source;
			vala_report_report_source (_tmp10_);
		}
	}
}


void vala_report_note (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	g_return_if_fail (self != NULL);
	VALA_REPORT_GET_CLASS (self)->note (self, source, message);
}


/**
 * Reports the specified message as deprecation warning.
 *
 * @param source  reference to source code
 * @param message warning message
 */
static void vala_report_real_depr (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	ValaSourceReference* _tmp2_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = self->priv->_enable_warnings;
	if (!_tmp0_) {
		return;
	}
	_tmp1_ = self->warnings;
	self->warnings = _tmp1_ + 1;
	_tmp2_ = source;
	if (_tmp2_ == NULL) {
		FILE* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		_tmp3_ = stderr;
		_tmp4_ = message;
		fprintf (_tmp3_, "warning: %s\n", _tmp4_);
	} else {
		FILE* _tmp5_ = NULL;
		ValaSourceReference* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		_tmp5_ = stderr;
		_tmp6_ = source;
		_tmp7_ = vala_source_reference_to_string (_tmp6_);
		_tmp8_ = _tmp7_;
		_tmp9_ = message;
		fprintf (_tmp5_, "%s: warning: %s\n", _tmp8_, _tmp9_);
		_g_free0 (_tmp8_);
	}
}


void vala_report_depr (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	g_return_if_fail (self != NULL);
	VALA_REPORT_GET_CLASS (self)->depr (self, source, message);
}


/**
 * Reports the specified message as warning.
 *
 * @param source  reference to source code
 * @param message warning message
 */
static void vala_report_real_warn (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	gboolean _tmp0_ = FALSE;
	gint _tmp1_ = 0;
	ValaSourceReference* _tmp2_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = self->priv->_enable_warnings;
	if (!_tmp0_) {
		return;
	}
	_tmp1_ = self->warnings;
	self->warnings = _tmp1_ + 1;
	_tmp2_ = source;
	if (_tmp2_ == NULL) {
		FILE* _tmp3_ = NULL;
		const gchar* _tmp4_ = NULL;
		_tmp3_ = stderr;
		_tmp4_ = message;
		fprintf (_tmp3_, "warning: %s\n", _tmp4_);
	} else {
		FILE* _tmp5_ = NULL;
		ValaSourceReference* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		gchar* _tmp8_ = NULL;
		const gchar* _tmp9_ = NULL;
		gboolean _tmp10_ = FALSE;
		_tmp5_ = stderr;
		_tmp6_ = source;
		_tmp7_ = vala_source_reference_to_string (_tmp6_);
		_tmp8_ = _tmp7_;
		_tmp9_ = message;
		fprintf (_tmp5_, "%s: warning: %s\n", _tmp8_, _tmp9_);
		_g_free0 (_tmp8_);
		_tmp10_ = self->priv->verbose_errors;
		if (_tmp10_) {
			ValaSourceReference* _tmp11_ = NULL;
			_tmp11_ = source;
			vala_report_report_source (_tmp11_);
		}
	}
}


void vala_report_warn (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	g_return_if_fail (self != NULL);
	VALA_REPORT_GET_CLASS (self)->warn (self, source, message);
}


/**
 * Reports the specified message as error.
 *
 * @param source  reference to source code
 * @param message error message
 */
static void vala_report_real_err (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	gint _tmp0_ = 0;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = self->errors;
	self->errors = _tmp0_ + 1;
	_tmp1_ = source;
	if (_tmp1_ == NULL) {
		FILE* _tmp2_ = NULL;
		const gchar* _tmp3_ = NULL;
		_tmp2_ = stderr;
		_tmp3_ = message;
		fprintf (_tmp2_, "error: %s\n", _tmp3_);
	} else {
		FILE* _tmp4_ = NULL;
		ValaSourceReference* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		gchar* _tmp7_ = NULL;
		const gchar* _tmp8_ = NULL;
		gboolean _tmp9_ = FALSE;
		_tmp4_ = stderr;
		_tmp5_ = source;
		_tmp6_ = vala_source_reference_to_string (_tmp5_);
		_tmp7_ = _tmp6_;
		_tmp8_ = message;
		fprintf (_tmp4_, "%s: error: %s\n", _tmp7_, _tmp8_);
		_g_free0 (_tmp7_);
		_tmp9_ = self->priv->verbose_errors;
		if (_tmp9_) {
			ValaSourceReference* _tmp10_ = NULL;
			_tmp10_ = source;
			vala_report_report_source (_tmp10_);
		}
	}
}


void vala_report_err (ValaReport* self, ValaSourceReference* source, const gchar* message) {
	g_return_if_fail (self != NULL);
	VALA_REPORT_GET_CLASS (self)->err (self, source, message);
}


void vala_report_notice (ValaSourceReference* source, const gchar* message) {
	ValaCodeContext* _tmp0_ = NULL;
	ValaCodeContext* _tmp1_ = NULL;
	ValaReport* _tmp2_ = NULL;
	ValaReport* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_report (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = source;
	_tmp5_ = message;
	vala_report_note (_tmp3_, _tmp4_, _tmp5_);
	_vala_code_context_unref0 (_tmp1_);
}


void vala_report_deprecated (ValaSourceReference* source, const gchar* message) {
	ValaCodeContext* _tmp0_ = NULL;
	ValaCodeContext* _tmp1_ = NULL;
	ValaReport* _tmp2_ = NULL;
	ValaReport* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_report (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = source;
	_tmp5_ = message;
	vala_report_depr (_tmp3_, _tmp4_, _tmp5_);
	_vala_code_context_unref0 (_tmp1_);
}


void vala_report_experimental (ValaSourceReference* source, const gchar* message) {
	ValaCodeContext* _tmp0_ = NULL;
	ValaCodeContext* _tmp1_ = NULL;
	ValaReport* _tmp2_ = NULL;
	ValaReport* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_report (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = source;
	_tmp5_ = message;
	vala_report_depr (_tmp3_, _tmp4_, _tmp5_);
	_vala_code_context_unref0 (_tmp1_);
}


void vala_report_warning (ValaSourceReference* source, const gchar* message) {
	ValaCodeContext* _tmp0_ = NULL;
	ValaCodeContext* _tmp1_ = NULL;
	ValaReport* _tmp2_ = NULL;
	ValaReport* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_report (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = source;
	_tmp5_ = message;
	vala_report_warn (_tmp3_, _tmp4_, _tmp5_);
	_vala_code_context_unref0 (_tmp1_);
}


void vala_report_error (ValaSourceReference* source, const gchar* message) {
	ValaCodeContext* _tmp0_ = NULL;
	ValaCodeContext* _tmp1_ = NULL;
	ValaReport* _tmp2_ = NULL;
	ValaReport* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	const gchar* _tmp5_ = NULL;
	g_return_if_fail (message != NULL);
	_tmp0_ = vala_code_context_get ();
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_code_context_get_report (_tmp1_);
	_tmp3_ = _tmp2_;
	_tmp4_ = source;
	_tmp5_ = message;
	vala_report_err (_tmp3_, _tmp4_, _tmp5_);
	_vala_code_context_unref0 (_tmp1_);
}


ValaReport* vala_report_construct (GType object_type) {
	ValaReport * self = NULL;
	self = (ValaReport*) g_object_new (object_type, NULL);
	return self;
}


ValaReport* vala_report_new (void) {
	return vala_report_construct (VALA_TYPE_REPORT);
}


gboolean vala_report_get_enable_warnings (ValaReport* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_enable_warnings;
	result = _tmp0_;
	return result;
}


void vala_report_set_enable_warnings (ValaReport* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_enable_warnings = _tmp0_;
	g_object_notify ((GObject *) self, "enable-warnings");
}


static void vala_report_class_init (ValaReportClass * klass) {
	vala_report_parent_class = g_type_class_peek_parent (klass);
	g_type_class_add_private (klass, sizeof (ValaReportPrivate));
	VALA_REPORT_CLASS (klass)->note = vala_report_real_note;
	VALA_REPORT_CLASS (klass)->depr = vala_report_real_depr;
	VALA_REPORT_CLASS (klass)->warn = vala_report_real_warn;
	VALA_REPORT_CLASS (klass)->err = vala_report_real_err;
	G_OBJECT_CLASS (klass)->get_property = _vala_vala_report_get_property;
	G_OBJECT_CLASS (klass)->set_property = _vala_vala_report_set_property;
	G_OBJECT_CLASS (klass)->finalize = vala_report_finalize;
	g_object_class_install_property (G_OBJECT_CLASS (klass), VALA_REPORT_ENABLE_WARNINGS, g_param_spec_boolean ("enable-warnings", "enable-warnings", "enable-warnings", TRUE, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE));
}


static void vala_report_instance_init (ValaReport * self) {
	self->priv = VALA_REPORT_GET_PRIVATE (self);
	self->priv->_enable_warnings = TRUE;
}


static void vala_report_finalize (GObject* obj) {
	ValaReport * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_REPORT, ValaReport);
	G_OBJECT_CLASS (vala_report_parent_class)->finalize (obj);
}


/**
 * Namespace to centralize reporting warnings and errors.
 */
GType vala_report_get_type (void) {
	static volatile gsize vala_report_type_id__volatile = 0;
	if (g_once_init_enter (&vala_report_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaReportClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_report_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaReport), 0, (GInstanceInitFunc) vala_report_instance_init, NULL };
		GType vala_report_type_id;
		vala_report_type_id = g_type_register_static (G_TYPE_OBJECT, "ValaReport", &g_define_type_info, 0);
		g_once_init_leave (&vala_report_type_id__volatile, vala_report_type_id);
	}
	return vala_report_type_id__volatile;
}


static void _vala_vala_report_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	ValaReport * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALA_TYPE_REPORT, ValaReport);
	switch (property_id) {
		case VALA_REPORT_ENABLE_WARNINGS:
		g_value_set_boolean (value, vala_report_get_enable_warnings (self));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}


static void _vala_vala_report_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	ValaReport * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, VALA_TYPE_REPORT, ValaReport);
	switch (property_id) {
		case VALA_REPORT_ENABLE_WARNINGS:
		vala_report_set_enable_warnings (self, g_value_get_boolean (value));
		break;
		default:
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
		break;
	}
}



