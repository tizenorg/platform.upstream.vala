/* valaccodefunctioncall.c generated by valac, the Vala compiler
 * generated from valaccodefunctioncall.vala, do not modify */

/* valaccodefunctioncall.vala
 *
 * Copyright (C) 2006-2007  Jürg Billeter
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

#define VALA_TYPE_CCODE_FUNCTION_CALL (vala_ccode_function_call_get_type ())
#define VALA_CCODE_FUNCTION_CALL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCall))
#define VALA_CCODE_FUNCTION_CALL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallClass))
#define VALA_IS_CCODE_FUNCTION_CALL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_FUNCTION_CALL))
#define VALA_IS_CCODE_FUNCTION_CALL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_FUNCTION_CALL))
#define VALA_CCODE_FUNCTION_CALL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallClass))

typedef struct _ValaCCodeFunctionCall ValaCCodeFunctionCall;
typedef struct _ValaCCodeFunctionCallClass ValaCCodeFunctionCallClass;
typedef struct _ValaCCodeFunctionCallPrivate ValaCCodeFunctionCallPrivate;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

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

struct _ValaCCodeFunctionCall {
	ValaCCodeExpression parent_instance;
	ValaCCodeFunctionCallPrivate * priv;
};

struct _ValaCCodeFunctionCallClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeFunctionCallPrivate {
	ValaCCodeExpression* _call;
	ValaList* arguments;
};


static gpointer vala_ccode_function_call_parent_class = NULL;

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
GType vala_ccode_function_call_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_FUNCTION_CALL_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCallPrivate))
enum  {
	VALA_CCODE_FUNCTION_CALL_DUMMY_PROPERTY
};
ValaCCodeFunctionCall* vala_ccode_function_call_new (ValaCCodeExpression* call);
ValaCCodeFunctionCall* vala_ccode_function_call_construct (GType object_type, ValaCCodeExpression* call);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_function_call_set_call (ValaCCodeFunctionCall* self, ValaCCodeExpression* value);
void vala_ccode_function_call_add_argument (ValaCCodeFunctionCall* self, ValaCCodeExpression* expr);
void vala_ccode_function_call_insert_argument (ValaCCodeFunctionCall* self, gint index, ValaCCodeExpression* expr);
ValaList* vala_ccode_function_call_get_arguments (ValaCCodeFunctionCall* self);
static void vala_ccode_function_call_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_function_call_get_call (ValaCCodeFunctionCall* self);
void vala_ccode_expression_write_inner (ValaCCodeExpression* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_function_call_finalize (ValaCCodeNode* obj);


ValaCCodeFunctionCall* vala_ccode_function_call_construct (GType object_type, ValaCCodeExpression* call) {
	ValaCCodeFunctionCall* self = NULL;
	ValaCCodeExpression* _tmp0_ = NULL;
	self = (ValaCCodeFunctionCall*) vala_ccode_expression_construct (object_type);
	_tmp0_ = call;
	vala_ccode_function_call_set_call (self, _tmp0_);
	return self;
}


ValaCCodeFunctionCall* vala_ccode_function_call_new (ValaCCodeExpression* call) {
	return vala_ccode_function_call_construct (VALA_TYPE_CCODE_FUNCTION_CALL, call);
}


/**
 * Appends the specified expression to the list of arguments.
 *
 * @param expr a C code expression
 */
void vala_ccode_function_call_add_argument (ValaCCodeFunctionCall* self, ValaCCodeExpression* expr) {
	ValaList* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->arguments;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


void vala_ccode_function_call_insert_argument (ValaCCodeFunctionCall* self, gint index, ValaCCodeExpression* expr) {
	ValaList* _tmp0_ = NULL;
	gint _tmp1_ = 0;
	ValaCCodeExpression* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->arguments;
	_tmp1_ = index;
	_tmp2_ = expr;
	vala_list_insert (_tmp0_, _tmp1_, _tmp2_);
}


/**
 * Returns a copy of the list of arguments.
 *
 * @return list of arguments
 */
static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


ValaList* vala_ccode_function_call_get_arguments (ValaCCodeFunctionCall* self) {
	ValaList* result = NULL;
	ValaList* _tmp0_ = NULL;
	ValaList* _tmp1_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->arguments;
	_tmp1_ = _vala_iterable_ref0 (_tmp0_);
	result = _tmp1_;
	return result;
}


static void vala_ccode_function_call_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeFunctionCall * self;
	ValaCCodeExpression* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp1_ = NULL;
	ValaCCodeWriter* _tmp2_ = NULL;
	gboolean first = FALSE;
	ValaCCodeWriter* _tmp19_ = NULL;
	self = (ValaCCodeFunctionCall*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_call;
	_tmp1_ = writer;
	vala_ccode_expression_write_inner (_tmp0_, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, " (");
	first = TRUE;
	{
		ValaList* _expr_list = NULL;
		ValaList* _tmp3_ = NULL;
		ValaList* _tmp4_ = NULL;
		gint _expr_size = 0;
		ValaList* _tmp5_ = NULL;
		gint _tmp6_ = 0;
		gint _tmp7_ = 0;
		gint _expr_index = 0;
		_tmp3_ = self->priv->arguments;
		_tmp4_ = _vala_iterable_ref0 (_tmp3_);
		_expr_list = _tmp4_;
		_tmp5_ = _expr_list;
		_tmp6_ = vala_collection_get_size ((ValaCollection*) _tmp5_);
		_tmp7_ = _tmp6_;
		_expr_size = _tmp7_;
		_expr_index = -1;
		while (TRUE) {
			gint _tmp8_ = 0;
			gint _tmp9_ = 0;
			gint _tmp10_ = 0;
			ValaCCodeExpression* expr = NULL;
			ValaList* _tmp11_ = NULL;
			gint _tmp12_ = 0;
			gpointer _tmp13_ = NULL;
			gboolean _tmp14_ = FALSE;
			ValaCCodeExpression* _tmp16_ = NULL;
			_tmp8_ = _expr_index;
			_expr_index = _tmp8_ + 1;
			_tmp9_ = _expr_index;
			_tmp10_ = _expr_size;
			if (!(_tmp9_ < _tmp10_)) {
				break;
			}
			_tmp11_ = _expr_list;
			_tmp12_ = _expr_index;
			_tmp13_ = vala_list_get (_tmp11_, _tmp12_);
			expr = (ValaCCodeExpression*) _tmp13_;
			_tmp14_ = first;
			if (!_tmp14_) {
				ValaCCodeWriter* _tmp15_ = NULL;
				_tmp15_ = writer;
				vala_ccode_writer_write_string (_tmp15_, ", ");
			} else {
				first = FALSE;
			}
			_tmp16_ = expr;
			if (_tmp16_ != NULL) {
				ValaCCodeExpression* _tmp17_ = NULL;
				ValaCCodeWriter* _tmp18_ = NULL;
				_tmp17_ = expr;
				_tmp18_ = writer;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp17_, _tmp18_);
			}
			_vala_ccode_node_unref0 (expr);
		}
		_vala_iterable_unref0 (_expr_list);
	}
	_tmp19_ = writer;
	vala_ccode_writer_write_string (_tmp19_, ")");
}


ValaCCodeExpression* vala_ccode_function_call_get_call (ValaCCodeFunctionCall* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_call;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_function_call_set_call (ValaCCodeFunctionCall* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_call);
	self->priv->_call = _tmp1_;
}


static void vala_ccode_function_call_class_init (ValaCCodeFunctionCallClass * klass) {
	vala_ccode_function_call_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_function_call_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeFunctionCallPrivate));
	((ValaCCodeNodeClass *) klass)->write = vala_ccode_function_call_real_write;
}


static void vala_ccode_function_call_instance_init (ValaCCodeFunctionCall * self) {
	GEqualFunc _tmp0_ = NULL;
	ValaArrayList* _tmp1_ = NULL;
	self->priv = VALA_CCODE_FUNCTION_CALL_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp0_);
	self->priv->arguments = (ValaList*) _tmp1_;
}


static void vala_ccode_function_call_finalize (ValaCCodeNode* obj) {
	ValaCCodeFunctionCall * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FUNCTION_CALL, ValaCCodeFunctionCall);
	_vala_ccode_node_unref0 (self->priv->_call);
	_vala_iterable_unref0 (self->priv->arguments);
	VALA_CCODE_NODE_CLASS (vala_ccode_function_call_parent_class)->finalize (obj);
}


/**
 * Represents a function call in the C code.
 */
GType vala_ccode_function_call_get_type (void) {
	static volatile gsize vala_ccode_function_call_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_function_call_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeFunctionCallClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_function_call_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeFunctionCall), 0, (GInstanceInitFunc) vala_ccode_function_call_instance_init, NULL };
		GType vala_ccode_function_call_type_id;
		vala_ccode_function_call_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeFunctionCall", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_function_call_type_id__volatile, vala_ccode_function_call_type_id);
	}
	return vala_ccode_function_call_type_id__volatile;
}



