/* valacomment.c generated by valac, the Vala compiler
 * generated from valacomment.vala, do not modify */

/* valacomment.vala
 *
 * Copyright (C) 2008-2009  Florian Brosch
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA
 *
 * Author:
 * 	Florian Brosch <flo.brosch@gmail.com>
 */

#include <glib.h>
#include <glib-object.h>
#include <stdlib.h>
#include <string.h>
#include <gobject/gvaluecollector.h>


#define VALA_TYPE_COMMENT (vala_comment_get_type ())
#define VALA_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COMMENT, ValaComment))
#define VALA_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COMMENT, ValaCommentClass))
#define VALA_IS_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COMMENT))
#define VALA_IS_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COMMENT))
#define VALA_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COMMENT, ValaCommentClass))

typedef struct _ValaComment ValaComment;
typedef struct _ValaCommentClass ValaCommentClass;
typedef struct _ValaCommentPrivate ValaCommentPrivate;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_source_reference_unref0(var) ((var == NULL) ? NULL : (var = (vala_source_reference_unref (var), NULL)))
typedef struct _ValaParamSpecComment ValaParamSpecComment;

struct _ValaComment {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCommentPrivate * priv;
};

struct _ValaCommentClass {
	GTypeClass parent_class;
	void (*finalize) (ValaComment *self);
};

struct _ValaCommentPrivate {
	gchar* _content;
	ValaSourceReference* _source_reference;
};

struct _ValaParamSpecComment {
	GParamSpec parent_instance;
};


static gpointer vala_comment_parent_class = NULL;

gpointer vala_comment_ref (gpointer instance);
void vala_comment_unref (gpointer instance);
GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_comment (GValue* value, gpointer v_object);
void vala_value_take_comment (GValue* value, gpointer v_object);
gpointer vala_value_get_comment (const GValue* value);
GType vala_comment_get_type (void) G_GNUC_CONST;
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
#define VALA_COMMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_COMMENT, ValaCommentPrivate))
enum  {
	VALA_COMMENT_DUMMY_PROPERTY
};
ValaComment* vala_comment_new (const gchar* comment, ValaSourceReference* _source_reference);
ValaComment* vala_comment_construct (GType object_type, const gchar* comment, ValaSourceReference* _source_reference);
void vala_comment_set_source_reference (ValaComment* self, ValaSourceReference* value);
void vala_comment_set_content (ValaComment* self, const gchar* value);
const gchar* vala_comment_get_content (ValaComment* self);
ValaSourceReference* vala_comment_get_source_reference (ValaComment* self);
static void vala_comment_finalize (ValaComment* obj);


ValaComment* vala_comment_construct (GType object_type, const gchar* comment, ValaSourceReference* _source_reference) {
	ValaComment* self = NULL;
	ValaSourceReference* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	g_return_val_if_fail (comment != NULL, NULL);
	g_return_val_if_fail (_source_reference != NULL, NULL);
	self = (ValaComment*) g_type_create_instance (object_type);
	_tmp0_ = _source_reference;
	vala_comment_set_source_reference (self, _tmp0_);
	_tmp1_ = comment;
	vala_comment_set_content (self, _tmp1_);
	return self;
}


ValaComment* vala_comment_new (const gchar* comment, ValaSourceReference* _source_reference) {
	return vala_comment_construct (VALA_TYPE_COMMENT, comment, _source_reference);
}


const gchar* vala_comment_get_content (ValaComment* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_content;
	result = _tmp0_;
	return result;
}


void vala_comment_set_content (ValaComment* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_content);
	self->priv->_content = _tmp1_;
}


ValaSourceReference* vala_comment_get_source_reference (ValaComment* self) {
	ValaSourceReference* result;
	ValaSourceReference* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_source_reference;
	result = _tmp0_;
	return result;
}


static gpointer _vala_source_reference_ref0 (gpointer self) {
	return self ? vala_source_reference_ref (self) : NULL;
}


void vala_comment_set_source_reference (ValaComment* self, ValaSourceReference* value) {
	ValaSourceReference* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_source_reference_ref0 (_tmp0_);
	_vala_source_reference_unref0 (self->priv->_source_reference);
	self->priv->_source_reference = _tmp1_;
}


static void vala_value_comment_init (GValue* value) {
	value->data[0].v_pointer = NULL;
}


static void vala_value_comment_free_value (GValue* value) {
	if (value->data[0].v_pointer) {
		vala_comment_unref (value->data[0].v_pointer);
	}
}


static void vala_value_comment_copy_value (const GValue* src_value, GValue* dest_value) {
	if (src_value->data[0].v_pointer) {
		dest_value->data[0].v_pointer = vala_comment_ref (src_value->data[0].v_pointer);
	} else {
		dest_value->data[0].v_pointer = NULL;
	}
}


static gpointer vala_value_comment_peek_pointer (const GValue* value) {
	return value->data[0].v_pointer;
}


static gchar* vala_value_comment_collect_value (GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	if (collect_values[0].v_pointer) {
		ValaComment* object;
		object = collect_values[0].v_pointer;
		if (object->parent_instance.g_class == NULL) {
			return g_strconcat ("invalid unclassed object pointer for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		} else if (!g_value_type_compatible (G_TYPE_FROM_INSTANCE (object), G_VALUE_TYPE (value))) {
			return g_strconcat ("invalid object type `", g_type_name (G_TYPE_FROM_INSTANCE (object)), "' for value type `", G_VALUE_TYPE_NAME (value), "'", NULL);
		}
		value->data[0].v_pointer = vala_comment_ref (object);
	} else {
		value->data[0].v_pointer = NULL;
	}
	return NULL;
}


static gchar* vala_value_comment_lcopy_value (const GValue* value, guint n_collect_values, GTypeCValue* collect_values, guint collect_flags) {
	ValaComment** object_p;
	object_p = collect_values[0].v_pointer;
	if (!object_p) {
		return g_strdup_printf ("value location for `%s' passed as NULL", G_VALUE_TYPE_NAME (value));
	}
	if (!value->data[0].v_pointer) {
		*object_p = NULL;
	} else if (collect_flags & G_VALUE_NOCOPY_CONTENTS) {
		*object_p = value->data[0].v_pointer;
	} else {
		*object_p = vala_comment_ref (value->data[0].v_pointer);
	}
	return NULL;
}


GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags) {
	ValaParamSpecComment* spec;
	g_return_val_if_fail (g_type_is_a (object_type, VALA_TYPE_COMMENT), NULL);
	spec = g_param_spec_internal (G_TYPE_PARAM_OBJECT, name, nick, blurb, flags);
	G_PARAM_SPEC (spec)->value_type = object_type;
	return G_PARAM_SPEC (spec);
}


gpointer vala_value_get_comment (const GValue* value) {
	g_return_val_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_COMMENT), NULL);
	return value->data[0].v_pointer;
}


void vala_value_set_comment (GValue* value, gpointer v_object) {
	ValaComment* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_COMMENT));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_COMMENT));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
		vala_comment_ref (value->data[0].v_pointer);
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_comment_unref (old);
	}
}


void vala_value_take_comment (GValue* value, gpointer v_object) {
	ValaComment* old;
	g_return_if_fail (G_TYPE_CHECK_VALUE_TYPE (value, VALA_TYPE_COMMENT));
	old = value->data[0].v_pointer;
	if (v_object) {
		g_return_if_fail (G_TYPE_CHECK_INSTANCE_TYPE (v_object, VALA_TYPE_COMMENT));
		g_return_if_fail (g_value_type_compatible (G_TYPE_FROM_INSTANCE (v_object), G_VALUE_TYPE (value)));
		value->data[0].v_pointer = v_object;
	} else {
		value->data[0].v_pointer = NULL;
	}
	if (old) {
		vala_comment_unref (old);
	}
}


static void vala_comment_class_init (ValaCommentClass * klass) {
	vala_comment_parent_class = g_type_class_peek_parent (klass);
	((ValaCommentClass *) klass)->finalize = vala_comment_finalize;
	g_type_class_add_private (klass, sizeof (ValaCommentPrivate));
}


static void vala_comment_instance_init (ValaComment * self) {
	self->priv = VALA_COMMENT_GET_PRIVATE (self);
	self->ref_count = 1;
}


static void vala_comment_finalize (ValaComment* obj) {
	ValaComment * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_COMMENT, ValaComment);
	g_signal_handlers_destroy (self);
	_g_free0 (self->priv->_content);
	_vala_source_reference_unref0 (self->priv->_source_reference);
}


/**
 * A documentation comment used by valadoc
 */
GType vala_comment_get_type (void) {
	static volatile gsize vala_comment_type_id__volatile = 0;
	if (g_once_init_enter (&vala_comment_type_id__volatile)) {
		static const GTypeValueTable g_define_type_value_table = { vala_value_comment_init, vala_value_comment_free_value, vala_value_comment_copy_value, vala_value_comment_peek_pointer, "p", vala_value_comment_collect_value, "p", vala_value_comment_lcopy_value };
		static const GTypeInfo g_define_type_info = { sizeof (ValaCommentClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_comment_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaComment), 0, (GInstanceInitFunc) vala_comment_instance_init, &g_define_type_value_table };
		static const GTypeFundamentalInfo g_define_type_fundamental_info = { (G_TYPE_FLAG_CLASSED | G_TYPE_FLAG_INSTANTIATABLE | G_TYPE_FLAG_DERIVABLE | G_TYPE_FLAG_DEEP_DERIVABLE) };
		GType vala_comment_type_id;
		vala_comment_type_id = g_type_register_fundamental (g_type_fundamental_next (), "ValaComment", &g_define_type_info, &g_define_type_fundamental_info, 0);
		g_once_init_leave (&vala_comment_type_id__volatile, vala_comment_type_id);
	}
	return vala_comment_type_id__volatile;
}


gpointer vala_comment_ref (gpointer instance) {
	ValaComment* self;
	self = instance;
	g_atomic_int_inc (&self->ref_count);
	return instance;
}


void vala_comment_unref (gpointer instance) {
	ValaComment* self;
	self = instance;
	if (g_atomic_int_dec_and_test (&self->ref_count)) {
		VALA_COMMENT_GET_CLASS (self)->finalize (self);
		g_type_free_instance ((GTypeInstance *) self);
	}
}



