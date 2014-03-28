/* valaccodeswitchstatement.c generated by valac, the Vala compiler
 * generated from valaccodeswitchstatement.vala, do not modify */

/* valaccodeswitchstatement.vala
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

#define VALA_TYPE_CCODE_BLOCK (vala_ccode_block_get_type ())
#define VALA_CCODE_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_BLOCK, ValaCCodeBlock))
#define VALA_CCODE_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_BLOCK, ValaCCodeBlockClass))
#define VALA_IS_CCODE_BLOCK(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_BLOCK))
#define VALA_IS_CCODE_BLOCK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_BLOCK))
#define VALA_CCODE_BLOCK_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_BLOCK, ValaCCodeBlockClass))

typedef struct _ValaCCodeBlock ValaCCodeBlock;
typedef struct _ValaCCodeBlockClass ValaCCodeBlockClass;
typedef struct _ValaCCodeBlockPrivate ValaCCodeBlockPrivate;

#define VALA_TYPE_CCODE_SWITCH_STATEMENT (vala_ccode_switch_statement_get_type ())
#define VALA_CCODE_SWITCH_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_SWITCH_STATEMENT, ValaCCodeSwitchStatement))
#define VALA_CCODE_SWITCH_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_SWITCH_STATEMENT, ValaCCodeSwitchStatementClass))
#define VALA_IS_CCODE_SWITCH_STATEMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_SWITCH_STATEMENT))
#define VALA_IS_CCODE_SWITCH_STATEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_SWITCH_STATEMENT))
#define VALA_CCODE_SWITCH_STATEMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_SWITCH_STATEMENT, ValaCCodeSwitchStatementClass))

typedef struct _ValaCCodeSwitchStatement ValaCCodeSwitchStatement;
typedef struct _ValaCCodeSwitchStatementClass ValaCCodeSwitchStatementClass;
typedef struct _ValaCCodeSwitchStatementPrivate ValaCCodeSwitchStatementPrivate;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

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

struct _ValaCCodeBlock {
	ValaCCodeStatement parent_instance;
	ValaCCodeBlockPrivate * priv;
};

struct _ValaCCodeBlockClass {
	ValaCCodeStatementClass parent_class;
};

struct _ValaCCodeSwitchStatement {
	ValaCCodeBlock parent_instance;
	ValaCCodeSwitchStatementPrivate * priv;
};

struct _ValaCCodeSwitchStatementClass {
	ValaCCodeBlockClass parent_class;
};

struct _ValaCCodeSwitchStatementPrivate {
	ValaCCodeExpression* _expression;
};


static gpointer vala_ccode_switch_statement_parent_class = NULL;

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
GType vala_ccode_block_get_type (void) G_GNUC_CONST;
GType vala_ccode_switch_statement_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_SWITCH_STATEMENT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_SWITCH_STATEMENT, ValaCCodeSwitchStatementPrivate))
enum  {
	VALA_CCODE_SWITCH_STATEMENT_DUMMY_PROPERTY
};
ValaCCodeSwitchStatement* vala_ccode_switch_statement_new (ValaCCodeExpression* expression);
ValaCCodeSwitchStatement* vala_ccode_switch_statement_construct (GType object_type, ValaCCodeExpression* expression);
ValaCCodeBlock* vala_ccode_block_new (void);
ValaCCodeBlock* vala_ccode_block_construct (GType object_type);
void vala_ccode_switch_statement_set_expression (ValaCCodeSwitchStatement* self, ValaCCodeExpression* value);
static void vala_ccode_switch_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
ValaCCodeExpression* vala_ccode_switch_statement_get_expression (ValaCCodeSwitchStatement* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_switch_statement_finalize (ValaCCodeNode* obj);


ValaCCodeSwitchStatement* vala_ccode_switch_statement_construct (GType object_type, ValaCCodeExpression* expression) {
	ValaCCodeSwitchStatement* self = NULL;
	ValaCCodeExpression* _tmp0_ = NULL;
	g_return_val_if_fail (expression != NULL, NULL);
	self = (ValaCCodeSwitchStatement*) vala_ccode_block_construct (object_type);
	_tmp0_ = expression;
	vala_ccode_switch_statement_set_expression (self, _tmp0_);
	return self;
}


ValaCCodeSwitchStatement* vala_ccode_switch_statement_new (ValaCCodeExpression* expression) {
	return vala_ccode_switch_statement_construct (VALA_TYPE_CCODE_SWITCH_STATEMENT, expression);
}


static void vala_ccode_switch_statement_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeSwitchStatement * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeLineDirective* _tmp1_ = NULL;
	ValaCCodeLineDirective* _tmp2_ = NULL;
	ValaCCodeWriter* _tmp3_ = NULL;
	ValaCCodeExpression* _tmp4_ = NULL;
	ValaCCodeWriter* _tmp5_ = NULL;
	ValaCCodeWriter* _tmp6_ = NULL;
	ValaCCodeWriter* _tmp7_ = NULL;
	self = (ValaCCodeSwitchStatement*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
	_tmp2_ = _tmp1_;
	vala_ccode_writer_write_indent (_tmp0_, _tmp2_);
	_tmp3_ = writer;
	vala_ccode_writer_write_string (_tmp3_, "switch (");
	_tmp4_ = self->priv->_expression;
	_tmp5_ = writer;
	vala_ccode_node_write ((ValaCCodeNode*) _tmp4_, _tmp5_);
	_tmp6_ = writer;
	vala_ccode_writer_write_string (_tmp6_, ")");
	_tmp7_ = writer;
	VALA_CCODE_NODE_CLASS (vala_ccode_switch_statement_parent_class)->write ((ValaCCodeNode*) G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_CCODE_BLOCK, ValaCCodeBlock), _tmp7_);
}


ValaCCodeExpression* vala_ccode_switch_statement_get_expression (ValaCCodeSwitchStatement* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_expression;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_switch_statement_set_expression (ValaCCodeSwitchStatement* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_expression);
	self->priv->_expression = _tmp1_;
}


static void vala_ccode_switch_statement_class_init (ValaCCodeSwitchStatementClass * klass) {
	vala_ccode_switch_statement_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_switch_statement_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeSwitchStatementPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_switch_statement_real_write;
}


static void vala_ccode_switch_statement_instance_init (ValaCCodeSwitchStatement * self) {
	self->priv = VALA_CCODE_SWITCH_STATEMENT_GET_PRIVATE (self);
}


static void vala_ccode_switch_statement_finalize (ValaCCodeNode* obj) {
	ValaCCodeSwitchStatement * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_SWITCH_STATEMENT, ValaCCodeSwitchStatement);
	_vala_ccode_node_unref0 (self->priv->_expression);
	VALA_CCODE_NODE_CLASS (vala_ccode_switch_statement_parent_class)->finalize (obj);
}


/**
 * Represents a switch selection statement in the C code.
 */
GType vala_ccode_switch_statement_get_type (void) {
	static volatile gsize vala_ccode_switch_statement_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_switch_statement_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeSwitchStatementClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_switch_statement_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeSwitchStatement), 0, (GInstanceInitFunc) vala_ccode_switch_statement_instance_init, NULL };
		GType vala_ccode_switch_statement_type_id;
		vala_ccode_switch_statement_type_id = g_type_register_static (VALA_TYPE_CCODE_BLOCK, "ValaCCodeSwitchStatement", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_switch_statement_type_id__volatile, vala_ccode_switch_statement_type_id);
	}
	return vala_ccode_switch_statement_type_id__volatile;
}



