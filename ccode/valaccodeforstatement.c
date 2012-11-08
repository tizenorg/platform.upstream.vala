/* valaccodeforstatement.c generated by valac, the Vala compiler
 * generated from valaccodeforstatement.vala, do not modify */

/* valaccodeforstatement.vala
 *
 * Copyright (C) 2006-2008  Jürg Billeter
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

#define VALA_TYPE_CCODE_STATEMENT (vala_ccode_statement_get_type ())
#define VALA_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatement))
#define VALA_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))
#define VALA_IS_CCODE_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_STATEMENT))
#define VALA_IS_CCODE_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_STATEMENT))
#define VALA_CCODE_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_STATEMENT, ValaCCodeStatementClass))

typedef struct _ValaCCodeStatement ValaCCodeStatement;
typedef struct _ValaCCodeStatementClass ValaCCodeStatementClass;
typedef struct _ValaCCodeStatementPrivate ValaCCodeStatementPrivate;

#define VALA_TYPE_CCODE_FOR_STATEMENT (vala_ccode_for_statement_get_type ())
#define VALA_CCODE_FOR_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_FOR_STATEMENT, ValaCCodeForStatement))
#define VALA_CCODE_FOR_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_FOR_STATEMENT, ValaCCodeForStatementClass))
#define VALA_IS_CCODE_FOR_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_FOR_STATEMENT))
#define VALA_IS_CCODE_FOR_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_FOR_STATEMENT))
#define VALA_CCODE_FOR_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_FOR_STATEMENT, ValaCCodeForStatementClass))

typedef struct _ValaCCodeForStatement ValaCCodeForStatement;
typedef struct _ValaCCodeForStatementClass ValaCCodeForStatementClass;
typedef struct _ValaCCodeForStatementPrivate ValaCCodeForStatementPrivate;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))

#define VALA_TYPE_CCODE_LINE_DIRECTIVE (vala_ccode_line_directive_get_type ())
#define VALA_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirective))
#define VALA_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))
#define VALA_IS_CCODE_LINE_DIRECTIVE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_IS_CCODE_LINE_DIRECTIVE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_LINE_DIRECTIVE))
#define VALA_CCODE_LINE_DIRECTIVE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_LINE_DIRECTIVE, ValaCCodeLineDirectiveClass))

typedef struct _ValaCCodeLineDirective ValaCCodeLineDirective;
typedef struct _ValaCCodeLineDirectiveClass ValaCCodeLineDirectiveClass;

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

struct _ValaCCodeStatement {
	ValaCCodeNode parent_instance;
	ValaCCodeStatementPrivate * priv;
};

struct _ValaCCodeStatementClass {
	ValaCCodeNodeClass parent_class;
};

struct _ValaCCodeForStatement {
	ValaCCodeStatement parent_instance;
	ValaCCodeForStatementPrivate * priv;
};

struct _ValaCCodeForStatementClass {
	ValaCCodeStatementClass parent_class;
};

struct _ValaCCodeForStatementPrivate {
	ValaCCodeExpression* _condition;
	ValaCCodeStatement* _body;
	ValaList* initializer;
	ValaList* iterator;
};


static gpointer vala_ccode_for_statement_parent_class = NULL;

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
GType vala_ccode_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_for_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_FOR_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_FOR_STATEMENT, ValaCCodeForStatementPrivate))
enum  {
	VALA_CCODE_FOR_STATEMENT_DUMMY_PROPERTY
};
ValaCCodeForStatement* vala_ccode_for_statement_new (ValaCCodeExpression* condition, ValaCCodeStatement* body);
ValaCCodeForStatement* vala_ccode_for_statement_construct (GType object_type, ValaCCodeExpression* condition, ValaCCodeStatement* body);
ValaCCodeStatement* vala_ccode_statement_construct (GType object_type);
void vala_ccode_for_statement_set_condition (ValaCCodeForStatement* self, ValaCCodeExpression* value);
void vala_ccode_for_statement_set_body (ValaCCodeForStatement* self, ValaCCodeStatement* value);
void vala_ccode_for_statement_add_initializer (ValaCCodeForStatement* self, ValaCCodeExpression* expr);
void vala_ccode_for_statement_add_iterator (ValaCCodeForStatement* self, ValaCCodeExpression* expr);
static void vala_ccode_for_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_for_statement_get_condition (ValaCCodeForStatement* self);
ValaCCodeStatement* vala_ccode_for_statement_get_body (ValaCCodeForStatement* self);
static void vala_ccode_for_statement_finalize (ValaCCodeNode* obj);


ValaCCodeForStatement* vala_ccode_for_statement_construct (GType object_type, ValaCCodeExpression* condition, ValaCCodeStatement* body) {
	ValaCCodeForStatement* self = NULL;
	ValaCCodeExpression* _tmp0_;
	ValaCCodeStatement* _tmp1_;
	self = (ValaCCodeForStatement*) vala_ccode_statement_construct (object_type);
	_tmp0_ = condition;
	vala_ccode_for_statement_set_condition (self, _tmp0_);
	_tmp1_ = body;
	vala_ccode_for_statement_set_body (self, _tmp1_);
	return self;
}


ValaCCodeForStatement* vala_ccode_for_statement_new (ValaCCodeExpression* condition, ValaCCodeStatement* body) {
	return vala_ccode_for_statement_construct (VALA_TYPE_CCODE_FOR_STATEMENT, condition, body);
}


/**
 * Appends the specified expression to the list of initializers.
 *
 * @param expr an initializer expression
 */
void vala_ccode_for_statement_add_initializer (ValaCCodeForStatement* self, ValaCCodeExpression* expr) {
	ValaList* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->initializer;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


/**
 * Appends the specified expression to the iterator.
 *
 * @param expr an iterator expression
 */
void vala_ccode_for_statement_add_iterator (ValaCCodeForStatement* self, ValaCCodeExpression* expr) {
	ValaList* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	g_return_if_fail (expr != NULL);
	_tmp0_ = self->priv->iterator;
	_tmp1_ = expr;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_ccode_for_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeForStatement * self;
	gboolean first = FALSE;
	ValaCCodeWriter* _tmp0_;
	ValaCCodeLineDirective* _tmp1_;
	ValaCCodeLineDirective* _tmp2_;
	ValaCCodeWriter* _tmp3_;
	ValaCCodeWriter* _tmp20_;
	ValaCCodeExpression* _tmp21_;
	ValaCCodeWriter* _tmp24_;
	ValaCCodeWriter* _tmp41_;
	ValaCCodeStatement* _tmp42_;
	ValaCCodeWriter* _tmp43_;
	self = (ValaCCodeForStatement*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp2_ = _tmp1_;
	vala_ccode_writer_write_indent (_tmp0_, _tmp2_);
	_tmp3_ = writer;
	vala_ccode_writer_write_string (_tmp3_, "for (");
	first = TRUE;
	{
		ValaList* _tmp4_;
		ValaList* _tmp5_;
		ValaList* _init_expr_list;
		ValaList* _tmp6_;
		gint _tmp7_;
		gint _tmp8_;
		gint _init_expr_size;
		gint _init_expr_index;
		_tmp4_ = self->priv->initializer;
		_tmp5_ = _vala_iterable_ref0 (_tmp4_);
		_init_expr_list = _tmp5_;
		_tmp6_ = _init_expr_list;
		_tmp7_ = vala_collection_get_size ((ValaCollection*) _tmp6_);
		_tmp8_ = _tmp7_;
		_init_expr_size = _tmp8_;
		_init_expr_index = -1;
		while (TRUE) {
			gint _tmp9_;
			gint _tmp10_;
			gint _tmp11_;
			ValaList* _tmp12_;
			gint _tmp13_;
			gpointer _tmp14_ = NULL;
			ValaCCodeExpression* init_expr;
			gboolean _tmp15_;
			ValaCCodeExpression* _tmp17_;
			_tmp9_ = _init_expr_index;
			_init_expr_index = _tmp9_ + 1;
			_tmp10_ = _init_expr_index;
			_tmp11_ = _init_expr_size;
			if (!(_tmp10_ < _tmp11_)) {
				break;
			}
			_tmp12_ = _init_expr_list;
			_tmp13_ = _init_expr_index;
			_tmp14_ = vala_list_get (_tmp12_, _tmp13_);
			init_expr = (ValaCCodeExpression*) _tmp14_;
			_tmp15_ = first;
			if (!_tmp15_) {
				ValaCCodeWriter* _tmp16_;
				_tmp16_ = writer;
				vala_ccode_writer_write_string (_tmp16_, ", ");
			} else {
				first = FALSE;
			}
			_tmp17_ = init_expr;
			if (_tmp17_ != NULL) {
				ValaCCodeExpression* _tmp18_;
				ValaCCodeWriter* _tmp19_;
				_tmp18_ = init_expr;
				_tmp19_ = writer;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp18_, _tmp19_);
			}
			_vala_ccode_node_unref0 (init_expr);
		}
		_vala_iterable_unref0 (_init_expr_list);
	}
	_tmp20_ = writer;
	vala_ccode_writer_write_string (_tmp20_, "; ");
	_tmp21_ = self->priv->_condition;
	if (_tmp21_ != NULL) {
		ValaCCodeExpression* _tmp22_;
		ValaCCodeWriter* _tmp23_;
		_tmp22_ = self->priv->_condition;
		_tmp23_ = writer;
		vala_ccode_node_write ((ValaCCodeNode*) _tmp22_, _tmp23_);
	}
	_tmp24_ = writer;
	vala_ccode_writer_write_string (_tmp24_, "; ");
	first = TRUE;
	{
		ValaList* _tmp25_;
		ValaList* _tmp26_;
		ValaList* _it_expr_list;
		ValaList* _tmp27_;
		gint _tmp28_;
		gint _tmp29_;
		gint _it_expr_size;
		gint _it_expr_index;
		_tmp25_ = self->priv->iterator;
		_tmp26_ = _vala_iterable_ref0 (_tmp25_);
		_it_expr_list = _tmp26_;
		_tmp27_ = _it_expr_list;
		_tmp28_ = vala_collection_get_size ((ValaCollection*) _tmp27_);
		_tmp29_ = _tmp28_;
		_it_expr_size = _tmp29_;
		_it_expr_index = -1;
		while (TRUE) {
			gint _tmp30_;
			gint _tmp31_;
			gint _tmp32_;
			ValaList* _tmp33_;
			gint _tmp34_;
			gpointer _tmp35_ = NULL;
			ValaCCodeExpression* it_expr;
			gboolean _tmp36_;
			ValaCCodeExpression* _tmp38_;
			_tmp30_ = _it_expr_index;
			_it_expr_index = _tmp30_ + 1;
			_tmp31_ = _it_expr_index;
			_tmp32_ = _it_expr_size;
			if (!(_tmp31_ < _tmp32_)) {
				break;
			}
			_tmp33_ = _it_expr_list;
			_tmp34_ = _it_expr_index;
			_tmp35_ = vala_list_get (_tmp33_, _tmp34_);
			it_expr = (ValaCCodeExpression*) _tmp35_;
			_tmp36_ = first;
			if (!_tmp36_) {
				ValaCCodeWriter* _tmp37_;
				_tmp37_ = writer;
				vala_ccode_writer_write_string (_tmp37_, ", ");
			} else {
				first = FALSE;
			}
			_tmp38_ = it_expr;
			if (_tmp38_ != NULL) {
				ValaCCodeExpression* _tmp39_;
				ValaCCodeWriter* _tmp40_;
				_tmp39_ = it_expr;
				_tmp40_ = writer;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp39_, _tmp40_);
			}
			_vala_ccode_node_unref0 (it_expr);
		}
		_vala_iterable_unref0 (_it_expr_list);
	}
	_tmp41_ = writer;
	vala_ccode_writer_write_string (_tmp41_, ")");
	_tmp42_ = self->priv->_body;
	_tmp43_ = writer;
	vala_ccode_node_write ((ValaCCodeNode*) _tmp42_, _tmp43_);
}


ValaCCodeExpression* vala_ccode_for_statement_get_condition (ValaCCodeForStatement* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_condition;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_for_statement_set_condition (ValaCCodeForStatement* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_condition);
	self->priv->_condition = _tmp1_;
}


ValaCCodeStatement* vala_ccode_for_statement_get_body (ValaCCodeForStatement* self) {
	ValaCCodeStatement* result;
	ValaCCodeStatement* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_body;
	result = _tmp0_;
	return result;
}


void vala_ccode_for_statement_set_body (ValaCCodeForStatement* self, ValaCCodeStatement* value) {
	ValaCCodeStatement* _tmp0_;
	ValaCCodeStatement* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_body);
	self->priv->_body = _tmp1_;
}


static void vala_ccode_for_statement_class_init (ValaCCodeForStatementClass * klass) {
	vala_ccode_for_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_for_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeForStatementPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_for_statement_real_write;
}


static void vala_ccode_for_statement_instance_init (ValaCCodeForStatement * self) {
	GEqualFunc _tmp0_;
	ValaArrayList* _tmp1_;
	GEqualFunc _tmp2_;
	ValaArrayList* _tmp3_;
	self->priv = VALA_CCODE_FOR_STATEMENT_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp0_);
	self->priv->initializer = (ValaList*) _tmp1_;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_array_list_new (VALA_TYPE_CCODE_EXPRESSION, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp2_);
	self->priv->iterator = (ValaList*) _tmp3_;
}


static void vala_ccode_for_statement_finalize (ValaCCodeNode* obj) {
	ValaCCodeForStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_FOR_STATEMENT, ValaCCodeForStatement);
	_vala_ccode_node_unref0 (self->priv->_condition);
	_vala_ccode_node_unref0 (self->priv->_body);
	_vala_iterable_unref0 (self->priv->initializer);
	_vala_iterable_unref0 (self->priv->iterator);
	VALA_CCODE_NODE_CLASS (vala_ccode_for_statement_parent_class)->finalize (obj);
}


/**
 * Represents a for iteration statement in the C code.
 */
GType vala_ccode_for_statement_get_type (void) {
	static volatile gsize vala_ccode_for_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_for_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeForStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_for_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeForStatement), 0, (GInstanceInitFunc) vala_ccode_for_statement_instance_init, NULL };
		GType vala_ccode_for_statement_type_id;
		vala_ccode_for_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeForStatement", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_for_statement_type_id__volatile, vala_ccode_for_statement_type_id);
	}
	return vala_ccode_for_statement_type_id__volatile;
}



