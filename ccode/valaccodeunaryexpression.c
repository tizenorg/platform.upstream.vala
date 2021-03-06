/* valaccodeunaryexpression.c generated by valac, the Vala compiler
 * generated from valaccodeunaryexpression.vala, do not modify */

/* valaccodeunaryexpression.vala
 *
 * Copyright (C) 2006-2009  Jürg Billeter
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

#define VALA_TYPE_CCODE_EXPRESSION (vala_ccode_expression_get_type ())
#define VALA_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpression))
#define VALA_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))
#define VALA_IS_CCODE_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_IS_CCODE_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_EXPRESSION))
#define VALA_CCODE_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_EXPRESSION, ValaCCodeExpressionClass))

typedef struct _ValaCCodeExpression ValaCCodeExpression;
typedef struct _ValaCCodeExpressionClass ValaCCodeExpressionClass;
typedef struct _ValaCCodeExpressionPrivate ValaCCodeExpressionPrivate;

#define VALA_TYPE_CCODE_UNARY_EXPRESSION (vala_ccode_unary_expression_get_type ())
#define VALA_CCODE_UNARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpression))
#define VALA_CCODE_UNARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpressionClass))
#define VALA_IS_CCODE_UNARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_UNARY_EXPRESSION))
#define VALA_IS_CCODE_UNARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_UNARY_EXPRESSION))
#define VALA_CCODE_UNARY_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpressionClass))

typedef struct _ValaCCodeUnaryExpression ValaCCodeUnaryExpression;
typedef struct _ValaCCodeUnaryExpressionClass ValaCCodeUnaryExpressionClass;
typedef struct _ValaCCodeUnaryExpressionPrivate ValaCCodeUnaryExpressionPrivate;

#define VALA_TYPE_CCODE_UNARY_OPERATOR (vala_ccode_unary_operator_get_type ())
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

struct _ValaCCodeUnaryExpression {
	ValaCCodeExpression parent_instance;
	ValaCCodeUnaryExpressionPrivate * priv;
};

struct _ValaCCodeUnaryExpressionClass {
	ValaCCodeExpressionClass parent_class;
};

typedef enum  {
	VALA_CCODE_UNARY_OPERATOR_PLUS,
	VALA_CCODE_UNARY_OPERATOR_MINUS,
	VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION,
	VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT,
	VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION,
	VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF,
	VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT,
	VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT,
	VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT,
	VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT
} ValaCCodeUnaryOperator;

struct _ValaCCodeUnaryExpressionPrivate {
	ValaCCodeUnaryOperator _operator;
	ValaCCodeExpression* _inner;
};


static gpointer vala_ccode_unary_expression_parent_class = NULL;

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
GType vala_ccode_unary_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_unary_operator_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_UNARY_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpressionPrivate))
enum  {
	VALA_CCODE_UNARY_EXPRESSION_DUMMY_PROPERTY
};
ValaCCodeUnaryExpression* vala_ccode_unary_expression_new (ValaCCodeUnaryOperator op, ValaCCodeExpression* expr);
ValaCCodeUnaryExpression* vala_ccode_unary_expression_construct (GType object_type, ValaCCodeUnaryOperator op, ValaCCodeExpression* expr);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_unary_expression_set_operator (ValaCCodeUnaryExpression* self, ValaCCodeUnaryOperator value);
void vala_ccode_unary_expression_set_inner (ValaCCodeUnaryExpression* self, ValaCCodeExpression* value);
static void vala_ccode_unary_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeUnaryOperator vala_ccode_unary_expression_get_operator (ValaCCodeUnaryExpression* self);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
ValaCCodeExpression* vala_ccode_unary_expression_get_inner (ValaCCodeUnaryExpression* self);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
void vala_ccode_expression_write_inner (ValaCCodeExpression* self, ValaCCodeWriter* writer);
static void vala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer);
static void vala_ccode_unary_expression_finalize (ValaCCodeNode* obj);


ValaCCodeUnaryExpression* vala_ccode_unary_expression_construct (GType object_type, ValaCCodeUnaryOperator op, ValaCCodeExpression* expr) {
	ValaCCodeUnaryExpression* self = NULL;
	ValaCCodeUnaryOperator _tmp0_ = 0;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_val_if_fail (expr != NULL, NULL);
	self = (ValaCCodeUnaryExpression*) vala_ccode_expression_construct (object_type);
	_tmp0_ = op;
	vala_ccode_unary_expression_set_operator (self, _tmp0_);
	_tmp1_ = expr;
	vala_ccode_unary_expression_set_inner (self, _tmp1_);
	return self;
}


ValaCCodeUnaryExpression* vala_ccode_unary_expression_new (ValaCCodeUnaryOperator op, ValaCCodeExpression* expr) {
	return vala_ccode_unary_expression_construct (VALA_TYPE_CCODE_UNARY_EXPRESSION, op, expr);
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


static void vala_ccode_unary_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeUnaryExpression * self;
	ValaCCodeUnaryOperator _tmp0_ = 0;
	ValaCCodeExpression* _tmp34_ = NULL;
	ValaCCodeWriter* _tmp35_ = NULL;
	ValaCCodeUnaryOperator _tmp36_ = 0;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_operator;
	if (_tmp0_ == VALA_CCODE_UNARY_OPERATOR_PLUS) {
		ValaCCodeWriter* _tmp1_ = NULL;
		_tmp1_ = writer;
		vala_ccode_writer_write_string (_tmp1_, "+");
	} else {
		ValaCCodeUnaryOperator _tmp2_ = 0;
		_tmp2_ = self->priv->_operator;
		if (_tmp2_ == VALA_CCODE_UNARY_OPERATOR_MINUS) {
			ValaCCodeWriter* _tmp3_ = NULL;
			_tmp3_ = writer;
			vala_ccode_writer_write_string (_tmp3_, "-");
		} else {
			ValaCCodeUnaryOperator _tmp4_ = 0;
			_tmp4_ = self->priv->_operator;
			if (_tmp4_ == VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION) {
				ValaCCodeWriter* _tmp5_ = NULL;
				_tmp5_ = writer;
				vala_ccode_writer_write_string (_tmp5_, "!");
			} else {
				ValaCCodeUnaryOperator _tmp6_ = 0;
				_tmp6_ = self->priv->_operator;
				if (_tmp6_ == VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT) {
					ValaCCodeWriter* _tmp7_ = NULL;
					_tmp7_ = writer;
					vala_ccode_writer_write_string (_tmp7_, "~");
				} else {
					ValaCCodeUnaryOperator _tmp8_ = 0;
					_tmp8_ = self->priv->_operator;
					if (_tmp8_ == VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION) {
						ValaCCodeUnaryExpression* inner_unary = NULL;
						ValaCCodeExpression* _tmp9_ = NULL;
						ValaCCodeUnaryExpression* _tmp10_ = NULL;
						gboolean _tmp11_ = FALSE;
						ValaCCodeUnaryExpression* _tmp12_ = NULL;
						ValaCCodeWriter* _tmp18_ = NULL;
						_tmp9_ = self->priv->_inner;
						_tmp10_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp9_, VALA_TYPE_CCODE_UNARY_EXPRESSION) ? ((ValaCCodeUnaryExpression*) _tmp9_) : NULL);
						inner_unary = _tmp10_;
						_tmp12_ = inner_unary;
						if (_tmp12_ != NULL) {
							ValaCCodeUnaryExpression* _tmp13_ = NULL;
							ValaCCodeUnaryOperator _tmp14_ = 0;
							_tmp13_ = inner_unary;
							_tmp14_ = _tmp13_->priv->_operator;
							_tmp11_ = _tmp14_ == VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF;
						} else {
							_tmp11_ = FALSE;
						}
						if (_tmp11_) {
							ValaCCodeUnaryExpression* _tmp15_ = NULL;
							ValaCCodeExpression* _tmp16_ = NULL;
							ValaCCodeWriter* _tmp17_ = NULL;
							_tmp15_ = inner_unary;
							_tmp16_ = _tmp15_->priv->_inner;
							_tmp17_ = writer;
							vala_ccode_node_write ((ValaCCodeNode*) _tmp16_, _tmp17_);
							_vala_ccode_node_unref0 (inner_unary);
							return;
						}
						_tmp18_ = writer;
						vala_ccode_writer_write_string (_tmp18_, "*");
						_vala_ccode_node_unref0 (inner_unary);
					} else {
						ValaCCodeUnaryOperator _tmp19_ = 0;
						_tmp19_ = self->priv->_operator;
						if (_tmp19_ == VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF) {
							ValaCCodeUnaryExpression* inner_unary = NULL;
							ValaCCodeExpression* _tmp20_ = NULL;
							ValaCCodeUnaryExpression* _tmp21_ = NULL;
							gboolean _tmp22_ = FALSE;
							ValaCCodeUnaryExpression* _tmp23_ = NULL;
							ValaCCodeWriter* _tmp29_ = NULL;
							_tmp20_ = self->priv->_inner;
							_tmp21_ = _vala_ccode_node_ref0 (G_TYPE_CHECK_INSTANCE_TYPE (_tmp20_, VALA_TYPE_CCODE_UNARY_EXPRESSION) ? ((ValaCCodeUnaryExpression*) _tmp20_) : NULL);
							inner_unary = _tmp21_;
							_tmp23_ = inner_unary;
							if (_tmp23_ != NULL) {
								ValaCCodeUnaryExpression* _tmp24_ = NULL;
								ValaCCodeUnaryOperator _tmp25_ = 0;
								_tmp24_ = inner_unary;
								_tmp25_ = _tmp24_->priv->_operator;
								_tmp22_ = _tmp25_ == VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION;
							} else {
								_tmp22_ = FALSE;
							}
							if (_tmp22_) {
								ValaCCodeUnaryExpression* _tmp26_ = NULL;
								ValaCCodeExpression* _tmp27_ = NULL;
								ValaCCodeWriter* _tmp28_ = NULL;
								_tmp26_ = inner_unary;
								_tmp27_ = _tmp26_->priv->_inner;
								_tmp28_ = writer;
								vala_ccode_node_write ((ValaCCodeNode*) _tmp27_, _tmp28_);
								_vala_ccode_node_unref0 (inner_unary);
								return;
							}
							_tmp29_ = writer;
							vala_ccode_writer_write_string (_tmp29_, "&");
							_vala_ccode_node_unref0 (inner_unary);
						} else {
							ValaCCodeUnaryOperator _tmp30_ = 0;
							_tmp30_ = self->priv->_operator;
							if (_tmp30_ == VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT) {
								ValaCCodeWriter* _tmp31_ = NULL;
								_tmp31_ = writer;
								vala_ccode_writer_write_string (_tmp31_, "++");
							} else {
								ValaCCodeUnaryOperator _tmp32_ = 0;
								_tmp32_ = self->priv->_operator;
								if (_tmp32_ == VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT) {
									ValaCCodeWriter* _tmp33_ = NULL;
									_tmp33_ = writer;
									vala_ccode_writer_write_string (_tmp33_, "--");
								}
							}
						}
					}
				}
			}
		}
	}
	_tmp34_ = self->priv->_inner;
	_tmp35_ = writer;
	vala_ccode_expression_write_inner (_tmp34_, _tmp35_);
	_tmp36_ = self->priv->_operator;
	if (_tmp36_ == VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT) {
		ValaCCodeWriter* _tmp37_ = NULL;
		_tmp37_ = writer;
		vala_ccode_writer_write_string (_tmp37_, "++");
	} else {
		ValaCCodeUnaryOperator _tmp38_ = 0;
		_tmp38_ = self->priv->_operator;
		if (_tmp38_ == VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT) {
			ValaCCodeWriter* _tmp39_ = NULL;
			_tmp39_ = writer;
			vala_ccode_writer_write_string (_tmp39_, "--");
		}
	}
}


static void vala_ccode_unary_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer) {
	ValaCCodeUnaryExpression * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	ValaCCodeWriter* _tmp1_ = NULL;
	ValaCCodeWriter* _tmp2_ = NULL;
	self = (ValaCCodeUnaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "(");
	_tmp1_ = writer;
	vala_ccode_node_write ((ValaCCodeNode*) self, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, ")");
}


ValaCCodeUnaryOperator vala_ccode_unary_expression_get_operator (ValaCCodeUnaryExpression* self) {
	ValaCCodeUnaryOperator result;
	ValaCCodeUnaryOperator _tmp0_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_operator;
	result = _tmp0_;
	return result;
}


void vala_ccode_unary_expression_set_operator (ValaCCodeUnaryExpression* self, ValaCCodeUnaryOperator value) {
	ValaCCodeUnaryOperator _tmp0_ = 0;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_operator = _tmp0_;
}


ValaCCodeExpression* vala_ccode_unary_expression_get_inner (ValaCCodeUnaryExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_inner;
	result = _tmp0_;
	return result;
}


void vala_ccode_unary_expression_set_inner (ValaCCodeUnaryExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_ = NULL;
	ValaCCodeExpression* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_inner);
	self->priv->_inner = _tmp1_;
}


static void vala_ccode_unary_expression_class_init (ValaCCodeUnaryExpressionClass * klass) {
	vala_ccode_unary_expression_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_unary_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeUnaryExpressionPrivate));
	((ValaCCodeNodeClass *) klass)->write = vala_ccode_unary_expression_real_write;
	((ValaCCodeExpressionClass *) klass)->write_inner = vala_ccode_unary_expression_real_write_inner;
}


static void vala_ccode_unary_expression_instance_init (ValaCCodeUnaryExpression * self) {
	self->priv = VALA_CCODE_UNARY_EXPRESSION_GET_PRIVATE (self);
}


static void vala_ccode_unary_expression_finalize (ValaCCodeNode* obj) {
	ValaCCodeUnaryExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_UNARY_EXPRESSION, ValaCCodeUnaryExpression);
	_vala_ccode_node_unref0 (self->priv->_inner);
	VALA_CCODE_NODE_CLASS (vala_ccode_unary_expression_parent_class)->finalize (obj);
}


/**
 * Represents an expression with one operand in the C code.
 */
GType vala_ccode_unary_expression_get_type (void) {
	static volatile gsize vala_ccode_unary_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_unary_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeUnaryExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_unary_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeUnaryExpression), 0, (GInstanceInitFunc) vala_ccode_unary_expression_instance_init, NULL };
		GType vala_ccode_unary_expression_type_id;
		vala_ccode_unary_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeUnaryExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_unary_expression_type_id__volatile, vala_ccode_unary_expression_type_id);
	}
	return vala_ccode_unary_expression_type_id__volatile;
}


GType vala_ccode_unary_operator_get_type (void) {
	static volatile gsize vala_ccode_unary_operator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_unary_operator_type_id__volatile)) {
		static const GEnumValue values[] = {{VALA_CCODE_UNARY_OPERATOR_PLUS, "VALA_CCODE_UNARY_OPERATOR_PLUS", "plus"}, {VALA_CCODE_UNARY_OPERATOR_MINUS, "VALA_CCODE_UNARY_OPERATOR_MINUS", "minus"}, {VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION, "VALA_CCODE_UNARY_OPERATOR_LOGICAL_NEGATION", "logical-negation"}, {VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT, "VALA_CCODE_UNARY_OPERATOR_BITWISE_COMPLEMENT", "bitwise-complement"}, {VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION, "VALA_CCODE_UNARY_OPERATOR_POINTER_INDIRECTION", "pointer-indirection"}, {VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF, "VALA_CCODE_UNARY_OPERATOR_ADDRESS_OF", "address-of"}, {VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT, "VALA_CCODE_UNARY_OPERATOR_PREFIX_INCREMENT", "prefix-increment"}, {VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT, "VALA_CCODE_UNARY_OPERATOR_PREFIX_DECREMENT", "prefix-decrement"}, {VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT, "VALA_CCODE_UNARY_OPERATOR_POSTFIX_INCREMENT", "postfix-increment"}, {VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT, "VALA_CCODE_UNARY_OPERATOR_POSTFIX_DECREMENT", "postfix-decrement"}, {0, NULL, NULL}};
		GType vala_ccode_unary_operator_type_id;
		vala_ccode_unary_operator_type_id = g_enum_register_static ("ValaCCodeUnaryOperator", values);
		g_once_init_leave (&vala_ccode_unary_operator_type_id__volatile, vala_ccode_unary_operator_type_id);
	}
	return vala_ccode_unary_operator_type_id__volatile;
}



