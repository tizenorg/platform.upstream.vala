/* valaccodeenumvalue.c generated by valac, the Vala compiler
 * generated from valaccodeenumvalue.vala, do not modify */

/* valaccodeenumvalue.vala
 *
 * Copyright (C) 2007-2008  Jürg Billeter
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


#define VALA_TYPE_CCODE_NODE (vala_ccode_node_get_type ())
#define VALA_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNode))
#define VALA_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))
#define VALA_IS_CCODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_NODE))
#define VALA_IS_CCODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_NODE))
#define VALA_CCODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_NODE, ValaCCodeNodeClass))

typedef struct _ValaCCodeNode ValaCCodeNode;
typedef struct _ValaCCodeNodeClass ValaCCodeNodeClass;
typedef struct _ValaCCodeNodePrivate ValaCCodeNodePrivate;

#define VALA_TYPE_CCODE_WRITER (vala_ccode_writer_get_type ())
#define VALA_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriter))
#define VALA_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))
#define VALA_IS_CCODE_WRITER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_WRITER))
#define VALA_IS_CCODE_WRITER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_WRITER))
#define VALA_CCODE_WRITER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_WRITER, ValaCCodeWriterClass))

typedef struct _ValaCCodeWriter ValaCCodeWriter;
typedef struct _ValaCCodeWriterClass ValaCCodeWriterClass;

#define VALA_TYPE_CCODE_ENUM_VALUE (vala_ccode_enum_value_get_type ())
#define VALA_CCODE_ENUM_VALUE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValue))
#define VALA_CCODE_ENUM_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValueClass))
#define VALA_IS_CCODE_ENUM_VALUE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_ENUM_VALUE))
#define VALA_IS_CCODE_ENUM_VALUE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_ENUM_VALUE))
#define VALA_CCODE_ENUM_VALUE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValueClass))

typedef struct _ValaCCodeEnumValue ValaCCodeEnumValue;
typedef struct _ValaCCodeEnumValueClass ValaCCodeEnumValueClass;
typedef struct _ValaCCodeEnumValuePrivate ValaCCodeEnumValuePrivate;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

struct _ValaCCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCCodeNodePrivate * priv;
};

struct _ValaCCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCCodeNode *self);
	void (*write) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_declaration) (ValaCCodeNode* self, ValaCCodeWriter* writer);
	void (*write_combined) (ValaCCodeNode* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeEnumValue {
	ValaCCodeNode parent_instance;
	ValaCCodeEnumValuePrivate * priv;
};

struct _ValaCCodeEnumValueClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeEnumValuePrivate {
	gchar* _name;
	gboolean _deprecated;
	ValaCCodeExpression* _value;
};


static gpointer vala_ccode_enum_value_parent_class = NULL;

gpointer vala_ccode_node_ref (gpointer instance);
void vala_ccode_node_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_node (GValue* value, gpointer v_object);
void vala_value_take_ccode_node (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_node (const GValue* value);
GType vala_ccode_node_get_type (void) G_GNUC_CONST;
gpointer vala_ccode_writer_ref (gpointer instance);
void vala_ccode_writer_unref (gpointer instance);
GParamSpec* vala_param_spec_ccode_writer (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_ccode_writer (GValue* value, gpointer v_object);
void vala_value_take_ccode_writer (GValue* value, gpointer v_object);
gpointer vala_value_get_ccode_writer (const GValue* value);
GType vala_ccode_writer_get_type (void) G_GNUC_CONST;
GType vala_ccode_enum_value_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_ENUM_VALUE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValuePrivate))
enum  {
	VALA_CCODE_ENUM_VALUE_DUMMY_PROPERTY
};
ValaCCodeEnumValue* vala_ccode_enum_value_new (const gchar* name, ValaCCodeExpression* value);
ValaCCodeEnumValue* vala_ccode_enum_value_construct (GType object_type, const gchar* name, ValaCCodeExpression* value);
ValaCCodeNode* vala_ccode_node_construct (GType object_type);
void vala_ccode_enum_value_set_name (ValaCCodeEnumValue* self, const gchar* value);
void vala_ccode_enum_value_set_value (ValaCCodeEnumValue* self, ValaCCodeExpression* value);
static void vala_ccode_enum_value_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_enum_value_get_name (ValaCCodeEnumValue* self);
ValaCCodeExpression* vala_ccode_enum_value_get_value (ValaCCodeEnumValue* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
gboolean vala_ccode_enum_value_get_deprecated (ValaCCodeEnumValue* self);
void vala_ccode_enum_value_set_deprecated (ValaCCodeEnumValue* self, gboolean value);
static void vala_ccode_enum_value_finalize (ValaCCodeNode* obj);


ValaCCodeEnumValue* vala_ccode_enum_value_construct (GType object_type, const gchar* name, ValaCCodeExpression* value) {
	ValaCCodeEnumValue* self = NULL;
	const gchar* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaCCodeEnumValue*) vala_ccode_node_construct (object_type);
	_tmp0_ = name;
	vala_ccode_enum_value_set_name (self, _tmp0_);
	_tmp1_ = value;
	vala_ccode_enum_value_set_value (self, _tmp1_);
	return self;
}


ValaCCodeEnumValue* vala_ccode_enum_value_new (const gchar* name, ValaCCodeExpression* value) {
	return vala_ccode_enum_value_construct (VALA_TYPE_CCODE_ENUM_VALUE, name, value);
}


static void vala_ccode_enum_value_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeEnumValue * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	ValaCCodeExpression* _tmp2_ = NULL;
	self = (ValaCCodeEnumValue*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = self->priv->_name;
	vala_ccode_writer_write_string (_tmp0_, _tmp1_);
	_tmp2_ = self->priv->_value;
	if (_tmp2_ != NULL) {
		ValaCCodeWriter* _tmp3_ = NULL;
		ValaCCodeExpression* _tmp4_ = NULL;
		ValaCCodeWriter* _tmp5_ = NULL;
		_tmp3_ = writer;
		vala_ccode_writer_write_string (_tmp3_, " = ");
		_tmp4_ = self->priv->_value;
		_tmp5_ = writer;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp4_, _tmp5_);
	}
}


const gchar* vala_ccode_enum_value_get_name (ValaCCodeEnumValue* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_enum_value_set_name (ValaCCodeEnumValue* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


gboolean vala_ccode_enum_value_get_deprecated (ValaCCodeEnumValue* self) {
	gboolean result;
	gboolean _tmp0_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	_tmp0_ = self->priv->_deprecated;
	result = _tmp0_;
	return result;
}


void vala_ccode_enum_value_set_deprecated (ValaCCodeEnumValue* self, gboolean value) {
	gboolean _tmp0_ = FALSE;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_deprecated = _tmp0_;
}


ValaCCodeExpression* vala_ccode_enum_value_get_value (ValaCCodeEnumValue* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_value;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_enum_value_set_value (ValaCCodeEnumValue* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_value);
	self->priv->_value = _tmp1_;
}


static void vala_ccode_enum_value_class_init (ValaCCodeEnumValueClass * klass) {
	vala_ccode_enum_value_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_enum_value_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeEnumValuePrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_enum_value_real_write;
}


static void vala_ccode_enum_value_instance_init (ValaCCodeEnumValue * self) {
	self->priv = VALA_CCODE_ENUM_VALUE_GET_PRIVATE (self);
	self->priv->_deprecated = FALSE;
}


static void vala_ccode_enum_value_finalize (ValaCCodeNode* obj) {
	ValaCCodeEnumValue * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_ENUM_VALUE, ValaCCodeEnumValue);
	_g_free0 (self->priv->_name);
	_vala_ccode_node_unref0 (self->priv->_value);
	VALA_CCODE_NODE_CLASS (vala_ccode_enum_value_parent_class)->finalize (obj);
}


/**
 * Represents an enum value in the C code.
 */
GType vala_ccode_enum_value_get_type (void) {
	static volatile gsize vala_ccode_enum_value_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_enum_value_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeEnumValueClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_enum_value_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeEnumValue), 0, (GInstanceInitFunc) vala_ccode_enum_value_instance_init, NULL };
		GType vala_ccode_enum_value_type_id;
		vala_ccode_enum_value_type_id = g_type_register_static (VALA_TYPE_CCODE_NODE, "ValaCCodeEnumValue", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_enum_value_type_id__volatile, vala_ccode_enum_value_type_id);
	}
	return vala_ccode_enum_value_type_id__volatile;
}



