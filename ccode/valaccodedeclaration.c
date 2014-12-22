/* valaccodedeclaration.c generated by valac, the Vala compiler
 * generated from valaccodedeclaration.vala, do not modify */

/* valaccodedeclaration.vala
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
#include <valagee.h>


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

#define VALA_TYPE_CCODE_DECLARATION (vala_ccode_declaration_get_type ())
#define VALA_CCODE_DECLARATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclaration))
#define VALA_CCODE_DECLARATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationClass))
#define VALA_IS_CCODE_DECLARATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATION))
#define VALA_IS_CCODE_DECLARATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATION))
#define VALA_CCODE_DECLARATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationClass))

typedef struct _ValaCCodeDeclaration ValaCCodeDeclaration;
typedef struct _ValaCCodeDeclarationClass ValaCCodeDeclarationClass;
typedef struct _ValaCCodeDeclarationPrivate ValaCCodeDeclarationPrivate;

#define VALA_TYPE_CCODE_MODIFIERS (vala_ccode_modifiers_get_type ())

#define VALA_TYPE_CCODE_DECLARATOR (vala_ccode_declarator_get_type ())
#define VALA_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclarator))
#define VALA_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))
#define VALA_IS_CCODE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_IS_CCODE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_DECLARATOR))
#define VALA_CCODE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_DECLARATOR, ValaCCodeDeclaratorClass))

typedef struct _ValaCCodeDeclarator ValaCCodeDeclarator;
typedef struct _ValaCCodeDeclaratorClass ValaCCodeDeclaratorClass;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_iterable_unref0(var) ((var == NULL) ? NULL : (var = (vala_iterable_unref (var), NULL)))
#define _vala_ccode_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_ccode_node_unref (var), NULL)))

#define VALA_TYPE_CCODE_VARIABLE_DECLARATOR (vala_ccode_variable_declarator_get_type ())
#define VALA_CCODE_VARIABLE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclarator))
#define VALA_CCODE_VARIABLE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclaratorClass))
#define VALA_IS_CCODE_VARIABLE_DECLARATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR))
#define VALA_IS_CCODE_VARIABLE_DECLARATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_VARIABLE_DECLARATOR))
#define VALA_CCODE_VARIABLE_DECLARATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_VARIABLE_DECLARATOR, ValaCCodeVariableDeclaratorClass))

typedef struct _ValaCCodeVariableDeclarator ValaCCodeVariableDeclarator;
typedef struct _ValaCCodeVariableDeclaratorClass ValaCCodeVariableDeclaratorClass;

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;

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

struct _ValaCCodeDeclaration {
	ValaCCodeStatement parent_instance;
	ValaCCodeDeclarationPrivate * priv;
};

struct _ValaCCodeDeclarationClass {
	ValaCCodeStatementClass parent_class;
};

typedef enum  {
	VALA_CCODE_MODIFIERS_NONE = 0,
	VALA_CCODE_MODIFIERS_STATIC = 1 << 0,
	VALA_CCODE_MODIFIERS_REGISTER = 1 << 1,
	VALA_CCODE_MODIFIERS_EXTERN = 1 << 2,
	VALA_CCODE_MODIFIERS_INLINE = 1 << 3,
	VALA_CCODE_MODIFIERS_VOLATILE = 1 << 4,
	VALA_CCODE_MODIFIERS_DEPRECATED = 1 << 5,
	VALA_CCODE_MODIFIERS_THREAD_LOCAL = 1 << 6,
	VALA_CCODE_MODIFIERS_INTERNAL = 1 << 7
} ValaCCodeModifiers;

struct _ValaCCodeDeclarationPrivate {
	gchar* _type_name;
	ValaCCodeModifiers _modifiers;
	ValaList* declarators;
};


static gpointer vala_ccode_declaration_parent_class = NULL;

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
GType vala_ccode_declaration_get_type (void) G_GNUC_CONST;
GType vala_ccode_modifiers_get_type (void) G_GNUC_CONST;
GType vala_ccode_declarator_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_DECLARATION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclarationPrivate))
enum  {
	VALA_CCODE_DECLARATION_DUMMY_PROPERTY
};
ValaCCodeDeclaration* vala_ccode_declaration_new (const gchar* type_name);
ValaCCodeDeclaration* vala_ccode_declaration_construct (GType object_type, const gchar* type_name);
ValaCCodeStatement* vala_ccode_statement_construct (GType object_type);
void vala_ccode_declaration_set_type_name (ValaCCodeDeclaration* self, const gchar* value);
void vala_ccode_declaration_add_declarator (ValaCCodeDeclaration* self, ValaCCodeDeclarator* decl);
static void vala_ccode_declaration_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeModifiers vala_ccode_declaration_get_modifiers (ValaCCodeDeclaration* self);
void vala_ccode_declarator_write_initialization (ValaCCodeDeclarator* self, ValaCCodeWriter* writer);
static gboolean vala_ccode_declaration_has_initializer (ValaCCodeDeclaration* self);
GType vala_ccode_variable_declarator_get_type (void) G_GNUC_CONST;
GType vala_ccode_expression_get_type (void) G_GNUC_CONST;
ValaCCodeExpression* vala_ccode_variable_declarator_get_initializer (ValaCCodeVariableDeclarator* self);
static void vala_ccode_declaration_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer);
GType vala_ccode_line_directive_get_type (void) G_GNUC_CONST;
void vala_ccode_writer_write_indent (ValaCCodeWriter* self, ValaCCodeLineDirective* line);
ValaCCodeLineDirective* vala_ccode_node_get_line (ValaCCodeNode* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_declaration_get_type_name (ValaCCodeDeclaration* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_newline (ValaCCodeWriter* self);
void vala_ccode_node_write_declaration (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_declaration_set_modifiers (ValaCCodeDeclaration* self, ValaCCodeModifiers value);
static void vala_ccode_declaration_finalize (ValaCCodeNode* obj);


ValaCCodeDeclaration* vala_ccode_declaration_construct (GType object_type, const gchar* type_name) {
	ValaCCodeDeclaration* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (type_name != NULL, NULL);
	self = (ValaCCodeDeclaration*) vala_ccode_statement_construct (object_type);
	_tmp0_ = type_name;
	vala_ccode_declaration_set_type_name (self, _tmp0_);
	return self;
}


ValaCCodeDeclaration* vala_ccode_declaration_new (const gchar* type_name) {
	return vala_ccode_declaration_construct (VALA_TYPE_CCODE_DECLARATION, type_name);
}


/**
 * Adds the specified declarator to this declaration.
 *
 * @param decl a declarator
 */
void vala_ccode_declaration_add_declarator (ValaCCodeDeclaration* self, ValaCCodeDeclarator* decl) {
	ValaList* _tmp0_ = NULL;
	ValaCCodeDeclarator* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (decl != NULL);
	_tmp0_ = self->priv->declarators;
	_tmp1_ = decl;
	vala_collection_add ((ValaCollection*) _tmp0_, _tmp1_);
}


static gpointer _vala_iterable_ref0 (gpointer self) {
	return self ? vala_iterable_ref (self) : NULL;
}


static void vala_ccode_declaration_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeDeclaration * self;
	ValaCCodeModifiers _tmp0_ = 0;
	self = (ValaCCodeDeclaration*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_modifiers;
	if ((_tmp0_ & ((VALA_CCODE_MODIFIERS_STATIC | VALA_CCODE_MODIFIERS_INTERNAL) | VALA_CCODE_MODIFIERS_EXTERN)) == 0) {
		{
			ValaList* _decl_list = NULL;
			ValaList* _tmp1_ = NULL;
			ValaList* _tmp2_ = NULL;
			gint _decl_size = 0;
			ValaList* _tmp3_ = NULL;
			gint _tmp4_ = 0;
			gint _tmp5_ = 0;
			gint _decl_index = 0;
			_tmp1_ = self->priv->declarators;
			_tmp2_ = _vala_iterable_ref0 (_tmp1_);
			_decl_list = _tmp2_;
			_tmp3_ = _decl_list;
			_tmp4_ = vala_collection_get_size ((ValaCollection*) _tmp3_);
			_tmp5_ = _tmp4_;
			_decl_size = _tmp5_;
			_decl_index = -1;
			while (TRUE) {
				gint _tmp6_ = 0;
				gint _tmp7_ = 0;
				gint _tmp8_ = 0;
				ValaCCodeDeclarator* decl = NULL;
				ValaList* _tmp9_ = NULL;
				gint _tmp10_ = 0;
				gpointer _tmp11_ = NULL;
				ValaCCodeDeclarator* _tmp12_ = NULL;
				ValaCCodeWriter* _tmp13_ = NULL;
				_tmp6_ = _decl_index;
				_decl_index = _tmp6_ + 1;
				_tmp7_ = _decl_index;
				_tmp8_ = _decl_size;
				if (!(_tmp7_ < _tmp8_)) {
					break;
				}
				_tmp9_ = _decl_list;
				_tmp10_ = _decl_index;
				_tmp11_ = vala_list_get (_tmp9_, _tmp10_);
				decl = (ValaCCodeDeclarator*) _tmp11_;
				_tmp12_ = decl;
				_tmp13_ = writer;
				vala_ccode_declarator_write_initialization (_tmp12_, _tmp13_);
				_vala_ccode_node_unref0 (decl);
			}
			_vala_iterable_unref0 (_decl_list);
		}
	}
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


static gboolean vala_ccode_declaration_has_initializer (ValaCCodeDeclaration* self) {
	gboolean result = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	{
		ValaList* _decl_list = NULL;
		ValaList* _tmp0_ = NULL;
		ValaList* _tmp1_ = NULL;
		gint _decl_size = 0;
		ValaList* _tmp2_ = NULL;
		gint _tmp3_ = 0;
		gint _tmp4_ = 0;
		gint _decl_index = 0;
		_tmp0_ = self->priv->declarators;
		_tmp1_ = _vala_iterable_ref0 (_tmp0_);
		_decl_list = _tmp1_;
		_tmp2_ = _decl_list;
		_tmp3_ = vala_collection_get_size ((ValaCollection*) _tmp2_);
		_tmp4_ = _tmp3_;
		_decl_size = _tmp4_;
		_decl_index = -1;
		while (TRUE) {
			gint _tmp5_ = 0;
			gint _tmp6_ = 0;
			gint _tmp7_ = 0;
			ValaCCodeDeclarator* decl = NULL;
			ValaList* _tmp8_ = NULL;
			gint _tmp9_ = 0;
			gpointer _tmp10_ = NULL;
			ValaCCodeVariableDeclarator* var_decl = NULL;
			ValaCCodeDeclarator* _tmp11_ = NULL;
			ValaCCodeVariableDeclarator* _tmp12_ = NULL;
			gboolean _tmp13_ = FALSE;
			ValaCCodeVariableDeclarator* _tmp14_ = NULL;
			_tmp5_ = _decl_index;
			_decl_index = _tmp5_ + 1;
			_tmp6_ = _decl_index;
			_tmp7_ = _decl_size;
			if (!(_tmp6_ < _tmp7_)) {
				break;
			}
			_tmp8_ = _decl_list;
			_tmp9_ = _decl_index;
			_tmp10_ = vala_list_get (_tmp8_, _tmp9_);
			decl = (ValaCCodeDeclarator*) _tmp10_;
			_tmp11_ = decl;
			_tmp12_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp11_, VALA_TYPE_CCODE_VARIABLE_DECLARATOR) ? ((ValaCCodeVariableDeclarator*) _tmp11_) : NULL);
			var_decl = _tmp12_;
			_tmp14_ = var_decl;
			if (_tmp14_ != NULL) {
				ValaCCodeVariableDeclarator* _tmp15_ = NULL;
				ValaCCodeExpression* _tmp16_ = NULL;
				ValaCCodeExpression* _tmp17_ = NULL;
				_tmp15_ = var_decl;
				_tmp16_ = vala_ccode_variable_declarator_get_initializer (_tmp15_);
				_tmp17_ = _tmp16_;
				_tmp13_ = _tmp17_ == NULL;
			} else {
				_tmp13_ = FALSE;
			}
			if (_tmp13_) {
				result = FALSE;
				_vala_ccode_node_unref0 (var_decl);
				_vala_ccode_node_unref0 (decl);
				_vala_iterable_unref0 (_decl_list);
				return result;
			}
			_vala_ccode_node_unref0 (var_decl);
			_vala_ccode_node_unref0 (decl);
		}
		_vala_iterable_unref0 (_decl_list);
	}
	result = TRUE;
	return result;
}


static void vala_ccode_declaration_real_write_declaration (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeDeclaration * self;
	ValaCCodeModifiers _tmp0_ = 0;
	ValaCCodeWriter* _tmp38_ = NULL;
	ValaCCodeModifiers _tmp39_ = 0;
	ValaCCodeWriter* _tmp41_ = NULL;
	const gchar* _tmp42_ = NULL;
	ValaCCodeWriter* _tmp43_ = NULL;
	gboolean first = FALSE;
	ValaCCodeWriter* _tmp59_ = NULL;
	ValaCCodeWriter* _tmp60_ = NULL;
	self = (ValaCCodeDeclaration*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_modifiers;
	if ((_tmp0_ & ((VALA_CCODE_MODIFIERS_STATIC | VALA_CCODE_MODIFIERS_INTERNAL) | VALA_CCODE_MODIFIERS_EXTERN)) != 0) {
		ValaCCodeWriter* _tmp1_ = NULL;
		ValaCCodeLineDirective* _tmp2_ = NULL;
		ValaCCodeLineDirective* _tmp3_ = NULL;
		ValaCCodeModifiers _tmp4_ = 0;
		ValaCCodeModifiers _tmp6_ = 0;
		ValaCCodeModifiers _tmp8_ = 0;
		gboolean _tmp10_ = FALSE;
		ValaCCodeModifiers _tmp11_ = 0;
		ValaCCodeModifiers _tmp14_ = 0;
		ValaCCodeWriter* _tmp16_ = NULL;
		const gchar* _tmp17_ = NULL;
		ValaCCodeWriter* _tmp18_ = NULL;
		gboolean first = FALSE;
		ValaCCodeModifiers _tmp34_ = 0;
		ValaCCodeWriter* _tmp36_ = NULL;
		ValaCCodeWriter* _tmp37_ = NULL;
		_tmp1_ = writer;
		_tmp2_ = vala_ccode_node_get_line ((ValaCCodeNode*) self);
		_tmp3_ = _tmp2_;
		vala_ccode_writer_write_indent (_tmp1_, _tmp3_);
		_tmp4_ = self->priv->_modifiers;
		if ((_tmp4_ & VALA_CCODE_MODIFIERS_INTERNAL) != 0) {
			ValaCCodeWriter* _tmp5_ = NULL;
			_tmp5_ = writer;
			vala_ccode_writer_write_string (_tmp5_, "G_GNUC_INTERNAL ");
		}
		_tmp6_ = self->priv->_modifiers;
		if ((_tmp6_ & VALA_CCODE_MODIFIERS_STATIC) != 0) {
			ValaCCodeWriter* _tmp7_ = NULL;
			_tmp7_ = writer;
			vala_ccode_writer_write_string (_tmp7_, "static ");
		}
		_tmp8_ = self->priv->_modifiers;
		if ((_tmp8_ & VALA_CCODE_MODIFIERS_VOLATILE) != 0) {
			ValaCCodeWriter* _tmp9_ = NULL;
			_tmp9_ = writer;
			vala_ccode_writer_write_string (_tmp9_, "volatile ");
		}
		_tmp11_ = self->priv->_modifiers;
		if ((_tmp11_ & VALA_CCODE_MODIFIERS_EXTERN) != 0) {
			gboolean _tmp12_ = FALSE;
			_tmp12_ = vala_ccode_declaration_has_initializer (self);
			_tmp10_ = !_tmp12_;
		} else {
			_tmp10_ = FALSE;
		}
		if (_tmp10_) {
			ValaCCodeWriter* _tmp13_ = NULL;
			_tmp13_ = writer;
			vala_ccode_writer_write_string (_tmp13_, "extern ");
		}
		_tmp14_ = self->priv->_modifiers;
		if ((_tmp14_ & VALA_CCODE_MODIFIERS_THREAD_LOCAL) != 0) {
			ValaCCodeWriter* _tmp15_ = NULL;
			_tmp15_ = writer;
			vala_ccode_writer_write_string (_tmp15_, "thread_local ");
		}
		_tmp16_ = writer;
		_tmp17_ = self->priv->_type_name;
		vala_ccode_writer_write_string (_tmp16_, _tmp17_);
		_tmp18_ = writer;
		vala_ccode_writer_write_string (_tmp18_, " ");
		first = TRUE;
		{
			ValaList* _decl_list = NULL;
			ValaList* _tmp19_ = NULL;
			ValaList* _tmp20_ = NULL;
			gint _decl_size = 0;
			ValaList* _tmp21_ = NULL;
			gint _tmp22_ = 0;
			gint _tmp23_ = 0;
			gint _decl_index = 0;
			_tmp19_ = self->priv->declarators;
			_tmp20_ = _vala_iterable_ref0 (_tmp19_);
			_decl_list = _tmp20_;
			_tmp21_ = _decl_list;
			_tmp22_ = vala_collection_get_size ((ValaCollection*) _tmp21_);
			_tmp23_ = _tmp22_;
			_decl_size = _tmp23_;
			_decl_index = -1;
			while (TRUE) {
				gint _tmp24_ = 0;
				gint _tmp25_ = 0;
				gint _tmp26_ = 0;
				ValaCCodeDeclarator* decl = NULL;
				ValaList* _tmp27_ = NULL;
				gint _tmp28_ = 0;
				gpointer _tmp29_ = NULL;
				gboolean _tmp30_ = FALSE;
				ValaCCodeDeclarator* _tmp32_ = NULL;
				ValaCCodeWriter* _tmp33_ = NULL;
				_tmp24_ = _decl_index;
				_decl_index = _tmp24_ + 1;
				_tmp25_ = _decl_index;
				_tmp26_ = _decl_size;
				if (!(_tmp25_ < _tmp26_)) {
					break;
				}
				_tmp27_ = _decl_list;
				_tmp28_ = _decl_index;
				_tmp29_ = vala_list_get (_tmp27_, _tmp28_);
				decl = (ValaCCodeDeclarator*) _tmp29_;
				_tmp30_ = first;
				if (!_tmp30_) {
					ValaCCodeWriter* _tmp31_ = NULL;
					_tmp31_ = writer;
					vala_ccode_writer_write_string (_tmp31_, ", ");
				} else {
					first = FALSE;
				}
				_tmp32_ = decl;
				_tmp33_ = writer;
				vala_ccode_node_write ((ValaCCodeNode*) _tmp32_, _tmp33_);
				_vala_ccode_node_unref0 (decl);
			}
			_vala_iterable_unref0 (_decl_list);
		}
		_tmp34_ = self->priv->_modifiers;
		if ((_tmp34_ & VALA_CCODE_MODIFIERS_DEPRECATED) == VALA_CCODE_MODIFIERS_DEPRECATED) {
			ValaCCodeWriter* _tmp35_ = NULL;
			_tmp35_ = writer;
			vala_ccode_writer_write_string (_tmp35_, " G_GNUC_DEPRECATED");
		}
		_tmp36_ = writer;
		vala_ccode_writer_write_string (_tmp36_, ";");
		_tmp37_ = writer;
		vala_ccode_writer_write_newline (_tmp37_);
		return;
	}
	_tmp38_ = writer;
	vala_ccode_writer_write_indent (_tmp38_, NULL);
	_tmp39_ = self->priv->_modifiers;
	if ((_tmp39_ & VALA_CCODE_MODIFIERS_REGISTER) == VALA_CCODE_MODIFIERS_REGISTER) {
		ValaCCodeWriter* _tmp40_ = NULL;
		_tmp40_ = writer;
		vala_ccode_writer_write_string (_tmp40_, "register ");
	}
	_tmp41_ = writer;
	_tmp42_ = self->priv->_type_name;
	vala_ccode_writer_write_string (_tmp41_, _tmp42_);
	_tmp43_ = writer;
	vala_ccode_writer_write_string (_tmp43_, " ");
	first = TRUE;
	{
		ValaList* _decl_list = NULL;
		ValaList* _tmp44_ = NULL;
		ValaList* _tmp45_ = NULL;
		gint _decl_size = 0;
		ValaList* _tmp46_ = NULL;
		gint _tmp47_ = 0;
		gint _tmp48_ = 0;
		gint _decl_index = 0;
		_tmp44_ = self->priv->declarators;
		_tmp45_ = _vala_iterable_ref0 (_tmp44_);
		_decl_list = _tmp45_;
		_tmp46_ = _decl_list;
		_tmp47_ = vala_collection_get_size ((ValaCollection*) _tmp46_);
		_tmp48_ = _tmp47_;
		_decl_size = _tmp48_;
		_decl_index = -1;
		while (TRUE) {
			gint _tmp49_ = 0;
			gint _tmp50_ = 0;
			gint _tmp51_ = 0;
			ValaCCodeDeclarator* decl = NULL;
			ValaList* _tmp52_ = NULL;
			gint _tmp53_ = 0;
			gpointer _tmp54_ = NULL;
			gboolean _tmp55_ = FALSE;
			ValaCCodeDeclarator* _tmp57_ = NULL;
			ValaCCodeWriter* _tmp58_ = NULL;
			_tmp49_ = _decl_index;
			_decl_index = _tmp49_ + 1;
			_tmp50_ = _decl_index;
			_tmp51_ = _decl_size;
			if (!(_tmp50_ < _tmp51_)) {
				break;
			}
			_tmp52_ = _decl_list;
			_tmp53_ = _decl_index;
			_tmp54_ = vala_list_get (_tmp52_, _tmp53_);
			decl = (ValaCCodeDeclarator*) _tmp54_;
			_tmp55_ = first;
			if (!_tmp55_) {
				ValaCCodeWriter* _tmp56_ = NULL;
				_tmp56_ = writer;
				vala_ccode_writer_write_string (_tmp56_, ", ");
			} else {
				first = FALSE;
			}
			_tmp57_ = decl;
			_tmp58_ = writer;
			vala_ccode_node_write_declaration ((ValaCCodeNode*) _tmp57_, _tmp58_);
			_vala_ccode_node_unref0 (decl);
		}
		_vala_iterable_unref0 (_decl_list);
	}
	_tmp59_ = writer;
	vala_ccode_writer_write_string (_tmp59_, ";");
	_tmp60_ = writer;
	vala_ccode_writer_write_newline (_tmp60_);
}


const gchar* vala_ccode_declaration_get_type_name (ValaCCodeDeclaration* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_type_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_declaration_set_type_name (ValaCCodeDeclaration* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_type_name);
	self->priv->_type_name = _tmp1_;
}


ValaCCodeModifiers vala_ccode_declaration_get_modifiers (ValaCCodeDeclaration* self) {
	ValaCCodeModifiers result;
	ValaCCodeModifiers _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_modifiers;
	result = _tmp0_;
	return result;
}


void vala_ccode_declaration_set_modifiers (ValaCCodeDeclaration* self, ValaCCodeModifiers value) {
	ValaCCodeModifiers _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_modifiers = _tmp0_;
}


static void vala_ccode_declaration_class_init (ValaCCodeDeclarationClass * klass) {
	vala_ccode_declaration_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_declaration_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeDeclarationPrivate));
	((ValaCCodeNodeClass *) klass)->write = vala_ccode_declaration_real_write;
	((ValaCCodeNodeClass *) klass)->write_declaration = vala_ccode_declaration_real_write_declaration;
}


static void vala_ccode_declaration_instance_init (ValaCCodeDeclaration * self) {
	GEqualFunc _tmp0_ = NULL;
	ValaArrayList* _tmp1_ = NULL;
	self->priv = VALA_CCODE_DECLARATION_GET_PRIVATE (self);
	_tmp0_ = g_direct_equal;
	_tmp1_ = vala_array_list_new (VALA_TYPE_CCODE_DECLARATOR, (GBoxedCopyFunc) vala_ccode_node_ref, vala_ccode_node_unref, _tmp0_);
	self->priv->declarators = (ValaList*) _tmp1_;
}


static void vala_ccode_declaration_finalize (ValaCCodeNode* obj) {
	ValaCCodeDeclaration * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_DECLARATION, ValaCCodeDeclaration);
	_g_free0 (self->priv->_type_name);
	_vala_iterable_unref0 (self->priv->declarators);
	VALA_CCODE_NODE_CLASS (vala_ccode_declaration_parent_class)->finalize (obj);
}


/**
 * Represents a local variable declaration in the C code.
 */
GType vala_ccode_declaration_get_type (void) {
	static volatile gsize vala_ccode_declaration_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_declaration_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeDeclarationClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_declaration_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeDeclaration), 0, (GInstanceInitFunc) vala_ccode_declaration_instance_init, NULL };
		GType vala_ccode_declaration_type_id;
		vala_ccode_declaration_type_id = g_type_register_static (VALA_TYPE_CCODE_STATEMENT, "ValaCCodeDeclaration", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_declaration_type_id__volatile, vala_ccode_declaration_type_id);
	}
	return vala_ccode_declaration_type_id__volatile;
}



