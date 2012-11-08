/* valaccodebinaryexpression.c generated by valac, the Vala compiler
 * generated from valaccodebinaryexpression.vala, do not modify */

/* valaccodebinaryexpression.vala
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

#define VALA_TYPE_CCODE_BINARY_EXPRESSION (vala_ccode_binary_expression_get_type ())
#define VALA_CCODE_BINARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_BINARY_EXPRESSION, ValaCCodeBinaryExpression))
#define VALA_CCODE_BINARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_BINARY_EXPRESSION, ValaCCodeBinaryExpressionClass))
#define VALA_IS_CCODE_BINARY_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_BINARY_EXPRESSION))
#define VALA_IS_CCODE_BINARY_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_BINARY_EXPRESSION))
#define VALA_CCODE_BINARY_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_BINARY_EXPRESSION, ValaCCodeBinaryExpressionClass))

typedef struct _ValaCCodeBinaryExpression ValaCCodeBinaryExpression;
typedef struct _ValaCCodeBinaryExpressionClass ValaCCodeBinaryExpressionClass;
typedef struct _ValaCCodeBinaryExpressionPrivate ValaCCodeBinaryExpressionPrivate;

#define VALA_TYPE_CCODE_BINARY_OPERATOR (vala_ccode_binary_operator_get_type ())
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

struct _ValaCCodeBinaryExpression {
	ValaCCodeExpression parent_instance;
	ValaCCodeBinaryExpressionPrivate * priv;
};

struct _ValaCCodeBinaryExpressionClass {
	ValaCCodeExpressionClass parent_class;
};

typedef enum  {
	VALA_CCODE_BINARY_OPERATOR_PLUS,
	VALA_CCODE_BINARY_OPERATOR_MINUS,
	VALA_CCODE_BINARY_OPERATOR_MUL,
	VALA_CCODE_BINARY_OPERATOR_DIV,
	VALA_CCODE_BINARY_OPERATOR_MOD,
	VALA_CCODE_BINARY_OPERATOR_SHIFT_LEFT,
	VALA_CCODE_BINARY_OPERATOR_SHIFT_RIGHT,
	VALA_CCODE_BINARY_OPERATOR_LESS_THAN,
	VALA_CCODE_BINARY_OPERATOR_GREATER_THAN,
	VALA_CCODE_BINARY_OPERATOR_LESS_THAN_OR_EQUAL,
	VALA_CCODE_BINARY_OPERATOR_GREATER_THAN_OR_EQUAL,
	VALA_CCODE_BINARY_OPERATOR_EQUALITY,
	VALA_CCODE_BINARY_OPERATOR_INEQUALITY,
	VALA_CCODE_BINARY_OPERATOR_BITWISE_AND,
	VALA_CCODE_BINARY_OPERATOR_BITWISE_OR,
	VALA_CCODE_BINARY_OPERATOR_BITWISE_XOR,
	VALA_CCODE_BINARY_OPERATOR_AND,
	VALA_CCODE_BINARY_OPERATOR_OR
} ValaCCodeBinaryOperator;

struct _ValaCCodeBinaryExpressionPrivate {
	ValaCCodeBinaryOperator _operator;
	ValaCCodeExpression* _left;
	ValaCCodeExpression* _right;
};


static gpointer vala_ccode_binary_expression_parent_class = NULL;

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
GType vala_ccode_binary_expression_get_type (void) G_GNUC_CONST;
GType vala_ccode_binary_operator_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_BINARY_EXPRESSION_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_BINARY_EXPRESSION, ValaCCodeBinaryExpressionPrivate))
enum  {
	VALA_CCODE_BINARY_EXPRESSION_DUMMY_PROPERTY
};
ValaCCodeBinaryExpression* vala_ccode_binary_expression_new (ValaCCodeBinaryOperator op, ValaCCodeExpression* l, ValaCCodeExpression* r);
ValaCCodeBinaryExpression* vala_ccode_binary_expression_construct (GType object_type, ValaCCodeBinaryOperator op, ValaCCodeExpression* l, ValaCCodeExpression* r);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_binary_expression_set_operator (ValaCCodeBinaryExpression* self, ValaCCodeBinaryOperator value);
void vala_ccode_binary_expression_set_left (ValaCCodeBinaryExpression* self, ValaCCodeExpression* value);
void vala_ccode_binary_expression_set_right (ValaCCodeBinaryExpression* self, ValaCCodeExpression* value);
static void vala_ccode_binary_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
ValaCCodeExpression* vala_ccode_binary_expression_get_left (ValaCCodeBinaryExpression* self);
void vala_ccode_expression_write_inner (ValaCCodeExpression* self, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
ValaCCodeBinaryOperator vala_ccode_binary_expression_get_operator (ValaCCodeBinaryExpression* self);
ValaCCodeExpression* vala_ccode_binary_expression_get_right (ValaCCodeBinaryExpression* self);
static void vala_ccode_binary_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer);
void vala_ccode_node_write (ValaCCodeNode* self, ValaCCodeWriter* writer);
static void vala_ccode_binary_expression_finalize (ValaCCodeNode* obj);


ValaCCodeBinaryExpression* vala_ccode_binary_expression_construct (GType object_type, ValaCCodeBinaryOperator op, ValaCCodeExpression* l, ValaCCodeExpression* r) {
	ValaCCodeBinaryExpression* self = NULL;
	ValaCCodeBinaryOperator _tmp0_;
	ValaCCodeExpression* _tmp1_;
	ValaCCodeExpression* _tmp2_;
	g_return_val_if_fail (l != NULL, NULL);
	g_return_val_if_fail (r != NULL, NULL);
	self = (ValaCCodeBinaryExpression*) vala_ccode_expression_construct (object_type);
	_tmp0_ = op;
	vala_ccode_binary_expression_set_operator (self, _tmp0_);
	_tmp1_ = l;
	vala_ccode_binary_expression_set_left (self, _tmp1_);
	_tmp2_ = r;
	vala_ccode_binary_expression_set_right (self, _tmp2_);
	return self;
}


ValaCCodeBinaryExpression* vala_ccode_binary_expression_new (ValaCCodeBinaryOperator op, ValaCCodeExpression* l, ValaCCodeExpression* r) {
	return vala_ccode_binary_expression_construct (VALA_TYPE_CCODE_BINARY_EXPRESSION, op, l, r);
}


static void vala_ccode_binary_expression_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeBinaryExpression * self;
	ValaCCodeExpression* _tmp0_;
	ValaCCodeWriter* _tmp1_;
	ValaCCodeWriter* _tmp2_;
	ValaCCodeBinaryOperator _tmp3_;
	ValaCCodeWriter* _tmp39_;
	ValaCCodeExpression* _tmp40_;
	ValaCCodeWriter* _tmp41_;
	self = (ValaCCodeBinaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = self->priv->_left;
	_tmp1_ = writer;
	vala_ccode_expression_write_inner (_tmp0_, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, " ");
	_tmp3_ = self->priv->_operator;
	if (_tmp3_ == VALA_CCODE_BINARY_OPERATOR_PLUS) {
		ValaCCodeWriter* _tmp4_;
		_tmp4_ = writer;
		vala_ccode_writer_write_string (_tmp4_, "+");
	} else {
		ValaCCodeBinaryOperator _tmp5_;
		_tmp5_ = self->priv->_operator;
		if (_tmp5_ == VALA_CCODE_BINARY_OPERATOR_MINUS) {
			ValaCCodeWriter* _tmp6_;
			_tmp6_ = writer;
			vala_ccode_writer_write_string (_tmp6_, "-");
		} else {
			ValaCCodeBinaryOperator _tmp7_;
			_tmp7_ = self->priv->_operator;
			if (_tmp7_ == VALA_CCODE_BINARY_OPERATOR_MUL) {
				ValaCCodeWriter* _tmp8_;
				_tmp8_ = writer;
				vala_ccode_writer_write_string (_tmp8_, "*");
			} else {
				ValaCCodeBinaryOperator _tmp9_;
				_tmp9_ = self->priv->_operator;
				if (_tmp9_ == VALA_CCODE_BINARY_OPERATOR_DIV) {
					ValaCCodeWriter* _tmp10_;
					_tmp10_ = writer;
					vala_ccode_writer_write_string (_tmp10_, "/");
				} else {
					ValaCCodeBinaryOperator _tmp11_;
					_tmp11_ = self->priv->_operator;
					if (_tmp11_ == VALA_CCODE_BINARY_OPERATOR_MOD) {
						ValaCCodeWriter* _tmp12_;
						_tmp12_ = writer;
						vala_ccode_writer_write_string (_tmp12_, "%");
					} else {
						ValaCCodeBinaryOperator _tmp13_;
						_tmp13_ = self->priv->_operator;
						if (_tmp13_ == VALA_CCODE_BINARY_OPERATOR_SHIFT_LEFT) {
							ValaCCodeWriter* _tmp14_;
							_tmp14_ = writer;
							vala_ccode_writer_write_string (_tmp14_, "<<");
						} else {
							ValaCCodeBinaryOperator _tmp15_;
							_tmp15_ = self->priv->_operator;
							if (_tmp15_ == VALA_CCODE_BINARY_OPERATOR_SHIFT_RIGHT) {
								ValaCCodeWriter* _tmp16_;
								_tmp16_ = writer;
								vala_ccode_writer_write_string (_tmp16_, ">>");
							} else {
								ValaCCodeBinaryOperator _tmp17_;
								_tmp17_ = self->priv->_operator;
								if (_tmp17_ == VALA_CCODE_BINARY_OPERATOR_LESS_THAN) {
									ValaCCodeWriter* _tmp18_;
									_tmp18_ = writer;
									vala_ccode_writer_write_string (_tmp18_, "<");
								} else {
									ValaCCodeBinaryOperator _tmp19_;
									_tmp19_ = self->priv->_operator;
									if (_tmp19_ == VALA_CCODE_BINARY_OPERATOR_GREATER_THAN) {
										ValaCCodeWriter* _tmp20_;
										_tmp20_ = writer;
										vala_ccode_writer_write_string (_tmp20_, ">");
									} else {
										ValaCCodeBinaryOperator _tmp21_;
										_tmp21_ = self->priv->_operator;
										if (_tmp21_ == VALA_CCODE_BINARY_OPERATOR_LESS_THAN_OR_EQUAL) {
											ValaCCodeWriter* _tmp22_;
											_tmp22_ = writer;
											vala_ccode_writer_write_string (_tmp22_, "<=");
										} else {
											ValaCCodeBinaryOperator _tmp23_;
											_tmp23_ = self->priv->_operator;
											if (_tmp23_ == VALA_CCODE_BINARY_OPERATOR_GREATER_THAN_OR_EQUAL) {
												ValaCCodeWriter* _tmp24_;
												_tmp24_ = writer;
												vala_ccode_writer_write_string (_tmp24_, ">=");
											} else {
												ValaCCodeBinaryOperator _tmp25_;
												_tmp25_ = self->priv->_operator;
												if (_tmp25_ == VALA_CCODE_BINARY_OPERATOR_EQUALITY) {
													ValaCCodeWriter* _tmp26_;
													_tmp26_ = writer;
													vala_ccode_writer_write_string (_tmp26_, "==");
												} else {
													ValaCCodeBinaryOperator _tmp27_;
													_tmp27_ = self->priv->_operator;
													if (_tmp27_ == VALA_CCODE_BINARY_OPERATOR_INEQUALITY) {
														ValaCCodeWriter* _tmp28_;
														_tmp28_ = writer;
														vala_ccode_writer_write_string (_tmp28_, "!=");
													} else {
														ValaCCodeBinaryOperator _tmp29_;
														_tmp29_ = self->priv->_operator;
														if (_tmp29_ == VALA_CCODE_BINARY_OPERATOR_BITWISE_AND) {
															ValaCCodeWriter* _tmp30_;
															_tmp30_ = writer;
															vala_ccode_writer_write_string (_tmp30_, "&");
														} else {
															ValaCCodeBinaryOperator _tmp31_;
															_tmp31_ = self->priv->_operator;
															if (_tmp31_ == VALA_CCODE_BINARY_OPERATOR_BITWISE_OR) {
																ValaCCodeWriter* _tmp32_;
																_tmp32_ = writer;
																vala_ccode_writer_write_string (_tmp32_, "|");
															} else {
																ValaCCodeBinaryOperator _tmp33_;
																_tmp33_ = self->priv->_operator;
																if (_tmp33_ == VALA_CCODE_BINARY_OPERATOR_BITWISE_XOR) {
																	ValaCCodeWriter* _tmp34_;
																	_tmp34_ = writer;
																	vala_ccode_writer_write_string (_tmp34_, "^");
																} else {
																	ValaCCodeBinaryOperator _tmp35_;
																	_tmp35_ = self->priv->_operator;
																	if (_tmp35_ == VALA_CCODE_BINARY_OPERATOR_AND) {
																		ValaCCodeWriter* _tmp36_;
																		_tmp36_ = writer;
																		vala_ccode_writer_write_string (_tmp36_, "&&");
																	} else {
																		ValaCCodeBinaryOperator _tmp37_;
																		_tmp37_ = self->priv->_operator;
																		if (_tmp37_ == VALA_CCODE_BINARY_OPERATOR_OR) {
																			ValaCCodeWriter* _tmp38_;
																			_tmp38_ = writer;
																			vala_ccode_writer_write_string (_tmp38_, "||");
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	_tmp39_ = writer;
	vala_ccode_writer_write_string (_tmp39_, " ");
	_tmp40_ = self->priv->_right;
	_tmp41_ = writer;
	vala_ccode_expression_write_inner (_tmp40_, _tmp41_);
}


static void vala_ccode_binary_expression_real_write_inner (ValaCCodeExpression* base, ValaCCodeWriter* writer) {
	ValaCCodeBinaryExpression * self;
	ValaCCodeWriter* _tmp0_;
	ValaCCodeWriter* _tmp1_;
	ValaCCodeWriter* _tmp2_;
	self = (ValaCCodeBinaryExpression*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	vala_ccode_writer_write_string (_tmp0_, "(");
	_tmp1_ = writer;
	vala_ccode_node_write ((ValaCCodeNode*) self, _tmp1_);
	_tmp2_ = writer;
	vala_ccode_writer_write_string (_tmp2_, ")");
}


ValaCCodeBinaryOperator vala_ccode_binary_expression_get_operator (ValaCCodeBinaryExpression* self) {
	ValaCCodeBinaryOperator result;
	ValaCCodeBinaryOperator _tmp0_;
	g_return_val_if_fail (self != NULL, 0);
	_tmp0_ = self->priv->_operator;
	result = _tmp0_;
	return result;
}


void vala_ccode_binary_expression_set_operator (ValaCCodeBinaryExpression* self, ValaCCodeBinaryOperator value) {
	ValaCCodeBinaryOperator _tmp0_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	self->priv->_operator = _tmp0_;
}


ValaCCodeExpression* vala_ccode_binary_expression_get_left (ValaCCodeBinaryExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_left;
	result = _tmp0_;
	return result;
}


static gpointer _vala_ccode_node_ref0 (gpointer self) {
	return self ? vala_ccode_node_ref (self) : NULL;
}


void vala_ccode_binary_expression_set_left (ValaCCodeBinaryExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_left);
	self->priv->_left = _tmp1_;
}


ValaCCodeExpression* vala_ccode_binary_expression_get_right (ValaCCodeBinaryExpression* self) {
	ValaCCodeExpression* result;
	ValaCCodeExpression* _tmp0_;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_right;
	result = _tmp0_;
	return result;
}


void vala_ccode_binary_expression_set_right (ValaCCodeBinaryExpression* self, ValaCCodeExpression* value) {
	ValaCCodeExpression* _tmp0_;
	ValaCCodeExpression* _tmp1_;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = _vala_ccode_node_ref0 (_tmp0_);
	_vala_ccode_node_unref0 (self->priv->_right);
	self->priv->_right = _tmp1_;
}


static void vala_ccode_binary_expression_class_init (ValaCCodeBinaryExpressionClass * klass) {
	vala_ccode_binary_expression_parent_class = g_type_class_peek_parent (klass);
	VALA_CCODE_NODE_CLASS (klass)->finalize = vala_ccode_binary_expression_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeBinaryExpressionPrivate));
	VALA_CCODE_NODE_CLASS (klass)->write = vala_ccode_binary_expression_real_write;
	VALA_CCODE_EXPRESSION_CLASS (klass)->write_inner = vala_ccode_binary_expression_real_write_inner;
}


static void vala_ccode_binary_expression_instance_init (ValaCCodeBinaryExpression * self) {
	self->priv = VALA_CCODE_BINARY_EXPRESSION_GET_PRIVATE (self);
}


static void vala_ccode_binary_expression_finalize (ValaCCodeNode* obj) {
	ValaCCodeBinaryExpression * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_BINARY_EXPRESSION, ValaCCodeBinaryExpression);
	_vala_ccode_node_unref0 (self->priv->_left);
	_vala_ccode_node_unref0 (self->priv->_right);
	VALA_CCODE_NODE_CLASS (vala_ccode_binary_expression_parent_class)->finalize (obj);
}


/**
 * Represents an expression with two operands in C code.
 */
GType vala_ccode_binary_expression_get_type (void) {
	static volatile gsize vala_ccode_binary_expression_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_binary_expression_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeBinaryExpressionClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_binary_expression_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeBinaryExpression), 0, (GInstanceInitFunc) vala_ccode_binary_expression_instance_init, NULL };
		GType vala_ccode_binary_expression_type_id;
		vala_ccode_binary_expression_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeBinaryExpression", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_binary_expression_type_id__volatile, vala_ccode_binary_expression_type_id);
	}
	return vala_ccode_binary_expression_type_id__volatile;
}


GType vala_ccode_binary_operator_get_type (void) {
	static volatile gsize vala_ccode_binary_operator_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_binary_operator_type_id__volatile)) {
		static const GEnumValue values[] = {{VALA_CCODE_BINARY_OPERATOR_PLUS, "VALA_CCODE_BINARY_OPERATOR_PLUS", "plus"}, {VALA_CCODE_BINARY_OPERATOR_MINUS, "VALA_CCODE_BINARY_OPERATOR_MINUS", "minus"}, {VALA_CCODE_BINARY_OPERATOR_MUL, "VALA_CCODE_BINARY_OPERATOR_MUL", "mul"}, {VALA_CCODE_BINARY_OPERATOR_DIV, "VALA_CCODE_BINARY_OPERATOR_DIV", "div"}, {VALA_CCODE_BINARY_OPERATOR_MOD, "VALA_CCODE_BINARY_OPERATOR_MOD", "mod"}, {VALA_CCODE_BINARY_OPERATOR_SHIFT_LEFT, "VALA_CCODE_BINARY_OPERATOR_SHIFT_LEFT", "shift-left"}, {VALA_CCODE_BINARY_OPERATOR_SHIFT_RIGHT, "VALA_CCODE_BINARY_OPERATOR_SHIFT_RIGHT", "shift-right"}, {VALA_CCODE_BINARY_OPERATOR_LESS_THAN, "VALA_CCODE_BINARY_OPERATOR_LESS_THAN", "less-than"}, {VALA_CCODE_BINARY_OPERATOR_GREATER_THAN, "VALA_CCODE_BINARY_OPERATOR_GREATER_THAN", "greater-than"}, {VALA_CCODE_BINARY_OPERATOR_LESS_THAN_OR_EQUAL, "VALA_CCODE_BINARY_OPERATOR_LESS_THAN_OR_EQUAL", "less-than-or-equal"}, {VALA_CCODE_BINARY_OPERATOR_GREATER_THAN_OR_EQUAL, "VALA_CCODE_BINARY_OPERATOR_GREATER_THAN_OR_EQUAL", "greater-than-or-equal"}, {VALA_CCODE_BINARY_OPERATOR_EQUALITY, "VALA_CCODE_BINARY_OPERATOR_EQUALITY", "equality"}, {VALA_CCODE_BINARY_OPERATOR_INEQUALITY, "VALA_CCODE_BINARY_OPERATOR_INEQUALITY", "inequality"}, {VALA_CCODE_BINARY_OPERATOR_BITWISE_AND, "VALA_CCODE_BINARY_OPERATOR_BITWISE_AND", "bitwise-and"}, {VALA_CCODE_BINARY_OPERATOR_BITWISE_OR, "VALA_CCODE_BINARY_OPERATOR_BITWISE_OR", "bitwise-or"}, {VALA_CCODE_BINARY_OPERATOR_BITWISE_XOR, "VALA_CCODE_BINARY_OPERATOR_BITWISE_XOR", "bitwise-xor"}, {VALA_CCODE_BINARY_OPERATOR_AND, "VALA_CCODE_BINARY_OPERATOR_AND", "and"}, {VALA_CCODE_BINARY_OPERATOR_OR, "VALA_CCODE_BINARY_OPERATOR_OR", "or"}, {0, NULL, NULL}};
		GType vala_ccode_binary_operator_type_id;
		vala_ccode_binary_operator_type_id = g_enum_register_static ("ValaCCodeBinaryOperator", values);
		g_once_init_leave (&vala_ccode_binary_operator_type_id__volatile, vala_ccode_binary_operator_type_id);
	}
	return vala_ccode_binary_operator_type_id__volatile;
}



