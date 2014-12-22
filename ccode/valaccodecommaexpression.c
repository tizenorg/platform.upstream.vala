/* valaccodecommaexpression.c generated by valac, the Vala compiler
 * generated from valaccodecommaexpression.vala, do not modify */

/* valaccodecommaexpression.vala
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
#include <valagee.h>
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

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_COMMA_EXPRESSION (vala_ccode_comma_expression_get_type ())
#define VALA_CCODE_COMMA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpression))
#define VALA_CCODE_COMMA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpressionClass))
#define VALA_IS_CCODE_COMMA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION))
#define VALA_IS_CCODE_COMMA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_COMMA_EXPRESSION))
#define VALA_CCODE_COMMA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpressionClass))

typedef struct _ValaCCodeCommaExpression ValaCCodeCommaExpression;
typedef struct _ValaCCodeCommaExpressionClass ValaCCodeCommaExpressionClass;
typedef struct _ValaCCodeCommaExpressionPrivate ValaCCodeCommaExpressionPrivate;
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
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

struct _ValaCCodeExpression {
	ValaCCodeNode parent_instance;
	ValaCCodeExpressionPrivate * priv;
};

struct _ValaCCodeExpressionClass {
	ValaCCodeNodeClass parent_class;
	void (*write_inner) (ValaCCodeExpression* self, ValaCCodeWriter* writer);
};

struct _ValaCCodeCommaExpression {
	ValaCCodeExpression parent_instance;
	ValaCCodeCommaExpressionPrivate * priv;
};

struct _ValaCCodeCommaExpressionClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeCommaExpressionPrivate {
	ValaList* inner;
};


static gpointer vala_ccode_comma_expression_parent_class = NULL;

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
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_comma_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_COMMA_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpressionPrivate))
enum  {
	VALA_CCODE_COMMA_EXPRESSION_DUMMY_PROPERTY
};
void vala_ccode_comma_expression_append_expression (ValaCCodeCommaExpression* self, ValaCCodeExpression* expr);
void vala_ccode_comma_expression_set_expression (ValaCCodeCommaExpression* self, gint index, ValaCCodeExpression* expr);
ValaList* vala_ccode_comma_expression_get_inner (ValaCCodeCommaExpression* self);
static void vala_ccode_comma_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
ValaCCodeCommaExpression* vala_ccode_comma_expression_new (void);
ValaCCodeCommaExpression* vala_ccode_comma_expression_construct (GType object_type);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
static void vala_ccode_comma_expression_finalize (ValaCCodeNode* obj);


/**
 * Appends the specified expression to the expression list.
 *
 * @param expr a C code expression
 */
void vala_ccode_comma_expression_append_expression (ValaCCodeCommaExpression* self, ValaCCodeExpression* expr) {
	ValaList* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->inner;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


void vala_ccode_comma_expression_set_expression (ValaCCodeCommaExpression* self, gint index, ValaCCodeExpression* expr) {
	ValaList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	ValaCCodeExpression* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->inner;
	_tmp1_ = index;
	_tmp2_ = expr;
	vala_list_set (_tmp0_, _tmp1_, _tmp2_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList* vala_ccode_comma_expression_get_inner (ValaCCodeCommaExpression* self) {
	ValaList* result = NULL;
	ValaList* _tmp0_ = NULL;
	ValaList* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->inner;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void vala_ccode_comma_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeCommaExpression * self;
	gboolean first = FALSE;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp16_ = NULL;
	self = (ValaCCodeCommaExpression*) base;
	g_return_if_fail (writer != NULL);
	first = TRUE;
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "(");
	{
		ValaList* _expr_list = NULL;
		ValaList* _tmp1_ = NULL;
		ValaList* _tmp2_ = NULL;
		gint _expr_size = 0;
		ValaList* _tmp3_ = NULL;
		gint _tmp4_ = 0;
		gint _tmp5_ = 0;
		gint _expr_index = 0;
		_tmp1_ = self->priv->inner;
		_tmp2_ = _vala_iterable_ref0 (_tmp1_);
		_expr_list = _tmp2_;
		_tmp3_ = _expr_list;
		_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
		_tmp5_ = _tmp4_;
		_expr_size = _tmp5_;
		_expr_index = -1;
		while (TRUE) {
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			gint _tmp8_ = 0;
			ValaCCodeExpression* expr = NULL;
			ValaList* _tmp9_ = NULL;
			gint _tmp10_ = 0;
			gpointer _tmp11_ = NULL;
			gboolean _tmp12_ = FALSE;
			ValaCCodeExpression* _tmp14_ = NULL;
			ValaCCodeWriter* _tmp15_ = NULL;
			_tmp6_ = _expr_index;
			_expr_index = _tmp6_ + 1;
			_tmp7_ = _expr_index;
			_tmp8_ = _expr_size;
			if (!(_tmp7_ < _tmp8_)) {
				break;
			}
			_tmp9_ = _expr_list;
			_tmp10_ = _expr_index;
			_tmp11_ = vala_list_get (_tmp9_, _tmp10_);
			expr = (ValaCCodeExpression*) _tmp11_;
			_tmp12_ = first;
			if (!_tmp12_) {
				ValaCCodeWriter* _tmp13_ = NULL;
				_tmp13_ = writer;
				vala_ccode_writer_write_string (_tmp13_, ", ");
			} else {
				first = FALSE;
			}
			_tmp14_ = expr;
			_tmp15_ = writer;
			vala_ccode_node_write ((ValaCCodeNode*) _tmp14_, _tmp15_);
			_vala_ccode_node_unref0 (expr);
		}
		_vala_iterable_unref0 (_expr_list);
	}
	_tmp16_ = writer;
	vala_ccode_writer_write_string (_tmp16_, ")");
}


ValaCCodeCommaExpression* vala_ccode_comma_expression_construct (GType object_type) {
	ValaCCodeCommaExpression* self = NULL;
	self = (ValaCCodeCommaExpression*) vala_ccode_expression_construct (object_type);
	return self;
}


ValaCCodeCommaExpression* vala_ccode_comma_expression_new (void) {
	return vala_ccode_comma_expression_construct (VALA_TYPE_CCODE_COMMA_EXPRESSION);
}


static void vala_ccode_comma_expression_class_init (ValaCCodeCommaExpressionClass * klass) {
	vala_ccode_comma_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_comma_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeCommaExpressionPrivate));
	((ValaCCodeNodeClass *) klass)->write = vala_ccode_comma_expression_real_write;
}


static void vala_ccode_comma_expression_instance_init (ValaCCodeCommaExpression * self) {
	GEqualFunc _tmp0_ = NULL;
	ValaArrayList* _tmp1_ = NULL;
	self->priv = VALA_CCODE_COMMA_EXPRESSION_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp0_);
	self->priv->inner = (ValaList*) _tmp1_;
}


static void vala_ccode_comma_expression_finalize (ValaCCodeNode* obj) {
	ValaCCodeCommaExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_COMMA_EXPRESSION, ValaCCodeCommaExpression);
	_vala_iterable_unref0 (self->priv->inner);
	VALA_CCODE_NODE_CLASS (vala_ccode_comma_expression_parent_class)->finalize (obj);
}


/**
 * Represents a comma separated expression list in the C code.
 */
GType vala_ccode_comma_expression_get_type (void) {
	static volatile gsize vala_ccode_comma_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_comma_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeCommaExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_comma_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeCommaExpression), 0, (GInstanceInitFunc) vala_ccode_comma_expression_instance_init, NULL };
		GType vala_ccode_comma_expression_type_id;
		vala_ccode_comma_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeCommaExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_comma_expression_type_id__volatile, vala_ccode_comma_expression_type_id);
	}
	return vala_ccode_comma_expression_type_id__volatile;
}



