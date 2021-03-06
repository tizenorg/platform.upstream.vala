/* valaattribute.c generated by valac, the Vala compiler
 * generated from valaattribute.vala, do not modify */

/* valaattribute.vala
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
#include <valagee.h>
#include <float.h>
#include <math.h>


#define VALA_TYPE_CODE_NODE (vala_code_node_get_type ())
#define VALA_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_NODE, ValaCodeNode))
#define VALA_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))
#define VALA_IS_CODE_NODE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_NODE))
#define VALA_IS_CODE_NODE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_NODE))
#define VALA_CODE_NODE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_NODE, ValaCodeNodeClass))

typedef struct _ValaCodeNode ValaCodeNode;
typedef struct _ValaCodeNodeClass ValaCodeNodeClass;
typedef struct _ValaCodeNodePrivate ValaCodeNodePrivate;

#define VALA_TYPE_CODE_VISITOR (vala_code_visitor_get_type ())
#define VALA_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitor))
#define VALA_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))
#define VALA_IS_CODE_VISITOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_VISITOR))
#define VALA_IS_CODE_VISITOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_VISITOR))
#define VALA_CODE_VISITOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_VISITOR, ValaCodeVisitorClass))

typedef struct _ValaCodeVisitor ValaCodeVisitor;
typedef struct _ValaCodeVisitorClass ValaCodeVisitorClass;

#define VALA_TYPE_CODE_CONTEXT (vala_code_context_get_type ())
#define VALA_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContext))
#define VALA_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))
#define VALA_IS_CODE_CONTEXT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_CONTEXT))
#define VALA_IS_CODE_CONTEXT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_CONTEXT))
#define VALA_CODE_CONTEXT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_CONTEXT, ValaCodeContextClass))

typedef struct _ValaCodeContext ValaCodeContext;
typedef struct _ValaCodeContextClass ValaCodeContextClass;

#define VALA_TYPE_CODE_GENERATOR (vala_code_generator_get_type ())
#define VALA_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGenerator))
#define VALA_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))
#define VALA_IS_CODE_GENERATOR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CODE_GENERATOR))
#define VALA_IS_CODE_GENERATOR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CODE_GENERATOR))
#define VALA_CODE_GENERATOR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CODE_GENERATOR, ValaCodeGeneratorClass))

typedef struct _ValaCodeGenerator ValaCodeGenerator;
typedef struct _ValaCodeGeneratorClass ValaCodeGeneratorClass;

#define VALA_TYPE_DATA_TYPE (vala_data_type_get_type ())
#define VALA_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_DATA_TYPE, ValaDataType))
#define VALA_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))
#define VALA_IS_DATA_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_DATA_TYPE))
#define VALA_IS_DATA_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_DATA_TYPE))
#define VALA_DATA_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_DATA_TYPE, ValaDataTypeClass))

typedef struct _ValaDataType ValaDataType;
typedef struct _ValaDataTypeClass ValaDataTypeClass;

#define VALA_TYPE_EXPRESSION (vala_expression_get_type ())
#define VALA_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_EXPRESSION, ValaExpression))
#define VALA_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_EXPRESSION, ValaExpressionClass))
#define VALA_IS_EXPRESSION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_EXPRESSION))
#define VALA_IS_EXPRESSION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_EXPRESSION))
#define VALA_EXPRESSION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_EXPRESSION, ValaExpressionClass))

typedef struct _ValaExpression ValaExpression;
typedef struct _ValaExpressionClass ValaExpressionClass;

#define VALA_TYPE_SYMBOL (vala_symbol_get_type ())
#define VALA_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SYMBOL, ValaSymbol))
#define VALA_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SYMBOL, ValaSymbolClass))
#define VALA_IS_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SYMBOL))
#define VALA_IS_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SYMBOL))
#define VALA_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SYMBOL, ValaSymbolClass))

typedef struct _ValaSymbol ValaSymbol;
typedef struct _ValaSymbolClass ValaSymbolClass;

#define VALA_TYPE_VARIABLE (vala_variable_get_type ())
#define VALA_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VARIABLE, ValaVariable))
#define VALA_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VARIABLE, ValaVariableClass))
#define VALA_IS_VARIABLE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VARIABLE))
#define VALA_IS_VARIABLE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VARIABLE))
#define VALA_VARIABLE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VARIABLE, ValaVariableClass))

typedef struct _ValaVariable ValaVariable;
typedef struct _ValaVariableClass ValaVariableClass;

#define VALA_TYPE_ATTRIBUTE (vala_attribute_get_type ())
#define VALA_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ATTRIBUTE, ValaAttribute))
#define VALA_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))
#define VALA_IS_ATTRIBUTE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ATTRIBUTE))
#define VALA_IS_ATTRIBUTE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ATTRIBUTE))
#define VALA_ATTRIBUTE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ATTRIBUTE, ValaAttributeClass))

typedef struct _ValaAttribute ValaAttribute;
typedef struct _ValaAttributeClass ValaAttributeClass;
typedef struct _ValaAttributePrivate ValaAttributePrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _vala_map_unref0(var) ((var == NULL) ? NULL : (var = (vala_map_unref (var), NULL)))

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

struct _ValaCodeNode {
	GTypeInstance parent_instance;
	volatile int ref_count;
	ValaCodeNodePrivate * priv;
	GList* attributes;
};

struct _ValaCodeNodeClass {
	GTypeClass parent_class;
	void (*finalize) (ValaCodeNode *self);
	void (*accept) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	void (*accept_children) (ValaCodeNode* self, ValaCodeVisitor* visitor);
	gboolean (*check) (ValaCodeNode* self, ValaCodeContext* context);
	void (*emit) (ValaCodeNode* self, ValaCodeGenerator* codegen);
	void (*replace_type) (ValaCodeNode* self, ValaDataType* old_type, ValaDataType* new_type);
	void (*replace_expression) (ValaCodeNode* self, ValaExpression* old_node, ValaExpression* new_node);
	gchar* (*to_string) (ValaCodeNode* self);
	void (*get_defined_variables) (ValaCodeNode* self, ValaCollection* collection);
	void (*get_used_variables) (ValaCodeNode* self, ValaCollection* collection);
};

struct _ValaAttribute {
	ValaCodeNode parent_instance;
	ValaAttributePrivate * priv;
	ValaMap* args;
};

struct _ValaAttributeClass {
	ValaCodeNodeClass parent_class;
};

struct _ValaAttributePrivate {
	gchar* _name;
};


static gpointer vala_attribute_parent_class = NULL;

gpointer vala_code_node_ref (gpointer instance);
void vala_code_node_unref (gpointer instance);
GParamSpec* vala_param_spec_code_node (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_node (GValue* value, gpointer v_object);
void vala_value_take_code_node (GValue* value, gpointer v_object);
gpointer vala_value_get_code_node (const GValue* value);
GType vala_code_node_get_type (void) G_GNUC_CONST;
gpointer vala_code_visitor_ref (gpointer instance);
void vala_code_visitor_unref (gpointer instance);
GParamSpec* vala_param_spec_code_visitor (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_visitor (GValue* value, gpointer v_object);
void vala_value_take_code_visitor (GValue* value, gpointer v_object);
gpointer vala_value_get_code_visitor (const GValue* value);
GType vala_code_visitor_get_type (void) G_GNUC_CONST;
gpointer vala_code_context_ref (gpointer instance);
void vala_code_context_unref (gpointer instance);
GParamSpec* vala_param_spec_code_context (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_code_context (GValue* value, gpointer v_object);
void vala_value_take_code_context (GValue* value, gpointer v_object);
gpointer vala_value_get_code_context (const GValue* value);
GType vala_code_context_get_type (void) G_GNUC_CONST;
GType vala_code_generator_get_type (void) G_GNUC_CONST;
GType vala_data_type_get_type (void) G_GNUC_CONST;
GType vala_expression_get_type (void) G_GNUC_CONST;
GType vala_symbol_get_type (void) G_GNUC_CONST;
GType vala_variable_get_type (void) G_GNUC_CONST;
GType vala_attribute_get_type (void) G_GNUC_CONST;
#define VALA_ATTRIBUTE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_ATTRIBUTE, ValaAttributePrivate))
enum  {
	VALA_ATTRIBUTE_DUMMY_PROPERTY
};
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaAttribute* vala_attribute_new (const gchar* name, ValaSourceReference* source_reference);
ValaAttribute* vala_attribute_construct (GType object_type, const gchar* name, ValaSourceReference* source_reference);
ValaCodeNode* vala_code_node_construct (GType object_type);
void vala_attribute_set_name (ValaAttribute* self, const gchar* value);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
void vala_attribute_add_argument (ValaAttribute* self, const gchar* key, const gchar* value);
gboolean vala_attribute_has_argument (ValaAttribute* self, const gchar* name);
gchar* vala_attribute_get_string (ValaAttribute* self, const gchar* name, const gchar* default_value);
gint vala_attribute_get_integer (ValaAttribute* self, const gchar* name, gint default_value);
gdouble vala_attribute_get_double (ValaAttribute* self, const gchar* name, gdouble default_value);
gboolean vala_attribute_get_bool (ValaAttribute* self, const gchar* name, gboolean default_value);
const gchar* vala_attribute_get_name (ValaAttribute* self);
static void vala_attribute_finalize (ValaCodeNode* obj);


/**
 * Creates a new attribute.
 *
 * @param name             attribute type name
 * @param source_reference reference to source code
 * @return                 newly created attribute
 */
ValaAttribute* vala_attribute_construct (GType object_type, const gchar* name, ValaSourceReference* source_reference) {
	ValaAttribute* self = NULL;
	const gchar* _tmp0_ = NULL;
	ValaSourceReference* _tmp1_ = NULL;
	g_return_val_if_fail (name != NULL, NULL);
	self = (ValaAttribute*) vala_code_node_construct (object_type);
	_tmp0_ = name;
	vala_attribute_set_name (self, _tmp0_);
	_tmp1_ = source_reference;
	vala_code_node_set_source_reference ((ValaCodeNode*) self, _tmp1_);
	return self;
}


ValaAttribute* vala_attribute_new (const gchar* name, ValaSourceReference* source_reference) {
	return vala_attribute_construct (VALA_TYPE_ATTRIBUTE, name, source_reference);
}


/**
 * Adds an attribute argument.
 *
 * @param arg named argument
 */
void vala_attribute_add_argument (ValaAttribute* self, const gchar* key, const gchar* value) {
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
	g_return_if_fail (self != NULL);
	g_return_if_fail (key != NULL);
	g_return_if_fail (value != NULL);
	_tmp0_ = self->args;
	_tmp1_ = key;
	_tmp2_ = value;
	vala_map_set (_tmp0_, _tmp1_, _tmp2_);
}


/**
 * Returns whether this attribute has the specified named argument.
 *
 * @param name argument name
 * @return     true if the argument has been found, false otherwise
 */
gboolean vala_attribute_has_argument (ValaAttribute* self, const gchar* name) {
	gboolean result = FALSE;
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	_tmp0_ = self->args;
	_tmp1_ = name;
	_tmp2_ = vala_map_contains (_tmp0_, _tmp1_);
	result = _tmp2_;
	return result;
}


/**
 * Returns the string value of the specified named argument.
 *
 * @param name argument name
 * @return     string value
 */
static glong string_strnlen (gchar* str, glong maxlen) {
	glong result = 0L;
	gchar* end = NULL;
	gchar* _tmp0_ = NULL;
	glong _tmp1_ = 0L;
	gchar* _tmp2_ = NULL;
	gchar* _tmp3_ = NULL;
	_tmp0_ = str;
	_tmp1_ = maxlen;
	_tmp2_ = memchr (_tmp0_, 0, (gsize) _tmp1_);
	end = _tmp2_;
	_tmp3_ = end;
	if (_tmp3_ == NULL) {
		glong _tmp4_ = 0L;
		_tmp4_ = maxlen;
		result = _tmp4_;
		return result;
	} else {
		gchar* _tmp5_ = NULL;
		gchar* _tmp6_ = NULL;
		_tmp5_ = end;
		_tmp6_ = str;
		result = (glong) (_tmp5_ - _tmp6_);
		return result;
	}
}


static gchar* string_substring (const gchar* self, glong offset, glong len) {
	gchar* result = NULL;
	glong string_length = 0L;
	gboolean _tmp0_ = FALSE;
	glong _tmp1_ = 0L;
	glong _tmp8_ = 0L;
	glong _tmp14_ = 0L;
	glong _tmp17_ = 0L;
	glong _tmp18_ = 0L;
	glong _tmp19_ = 0L;
	glong _tmp20_ = 0L;
	glong _tmp21_ = 0L;
	gchar* _tmp22_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp1_ = offset;
	if (_tmp1_ >= ((glong) 0)) {
		glong _tmp2_ = 0L;
		_tmp2_ = len;
		_tmp0_ = _tmp2_ >= ((glong) 0);
	} else {
		_tmp0_ = FALSE;
	}
	if (_tmp0_) {
		glong _tmp3_ = 0L;
		glong _tmp4_ = 0L;
		glong _tmp5_ = 0L;
		_tmp3_ = offset;
		_tmp4_ = len;
		_tmp5_ = string_strnlen ((gchar*) self, _tmp3_ + _tmp4_);
		string_length = _tmp5_;
	} else {
		gint _tmp6_ = 0;
		gint _tmp7_ = 0;
		_tmp6_ = strlen (self);
		_tmp7_ = _tmp6_;
		string_length = (glong) _tmp7_;
	}
	_tmp8_ = offset;
	if (_tmp8_ < ((glong) 0)) {
		glong _tmp9_ = 0L;
		glong _tmp10_ = 0L;
		glong _tmp11_ = 0L;
		_tmp9_ = string_length;
		_tmp10_ = offset;
		offset = _tmp9_ + _tmp10_;
		_tmp11_ = offset;
		g_return_val_if_fail (_tmp11_ >= ((glong) 0), NULL);
	} else {
		glong _tmp12_ = 0L;
		glong _tmp13_ = 0L;
		_tmp12_ = offset;
		_tmp13_ = string_length;
		g_return_val_if_fail (_tmp12_ <= _tmp13_, NULL);
	}
	_tmp14_ = len;
	if (_tmp14_ < ((glong) 0)) {
		glong _tmp15_ = 0L;
		glong _tmp16_ = 0L;
		_tmp15_ = string_length;
		_tmp16_ = offset;
		len = _tmp15_ - _tmp16_;
	}
	_tmp17_ = offset;
	_tmp18_ = len;
	_tmp19_ = string_length;
	g_return_val_if_fail ((_tmp17_ + _tmp18_) <= _tmp19_, NULL);
	_tmp20_ = offset;
	_tmp21_ = len;
	_tmp22_ = g_strndup (((gchar*) self) + _tmp20_, (gsize) _tmp21_);
	result = _tmp22_;
	return result;
}


gchar* vala_attribute_get_string (ValaAttribute* self, const gchar* name, const gchar* default_value) {
	gchar* result = NULL;
	gchar* value = NULL;
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gpointer _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	gchar* noquotes = NULL;
	const gchar* _tmp6_ = NULL;
	const gchar* _tmp7_ = NULL;
	gint _tmp8_ = 0;
	gint _tmp9_ = 0;
	gchar* _tmp10_ = NULL;
	const gchar* _tmp11_ = NULL;
	gchar* _tmp12_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	g_return_val_if_fail (name != NULL, NULL);
	_tmp0_ = self->args;
	_tmp1_ = name;
	_tmp2_ = vala_map_get (_tmp0_, _tmp1_);
	value = (gchar*) _tmp2_;
	_tmp3_ = value;
	if (_tmp3_ == NULL) {
		const gchar* _tmp4_ = NULL;
		gchar* _tmp5_ = NULL;
		_tmp4_ = default_value;
		_tmp5_ = g_strdup (_tmp4_);
		result = _tmp5_;
		_g_free0 (value);
		return result;
	}
	_tmp6_ = value;
	_tmp7_ = value;
	_tmp8_ = strlen (_tmp7_);
	_tmp9_ = _tmp8_;
	_tmp10_ = string_substring (_tmp6_, (glong) 1, (glong) ((guint) (_tmp9_ - 2)));
	noquotes = _tmp10_;
	_tmp11_ = noquotes;
	_tmp12_ = g_strcompress (_tmp11_);
	result = _tmp12_;
	_g_free0 (noquotes);
	_g_free0 (value);
	return result;
}


/**
 * Returns the integer value of the specified named argument.
 *
 * @param name argument name
 * @return     integer value
 */
gint vala_attribute_get_integer (ValaAttribute* self, const gchar* name, gint default_value) {
	gint result = 0;
	gchar* value = NULL;
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gpointer _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp5_ = NULL;
	gint _tmp6_ = 0;
	g_return_val_if_fail (self != NULL, 0);
	g_return_val_if_fail (name != NULL, 0);
	_tmp0_ = self->args;
	_tmp1_ = name;
	_tmp2_ = vala_map_get (_tmp0_, _tmp1_);
	value = (gchar*) _tmp2_;
	_tmp3_ = value;
	if (_tmp3_ == NULL) {
		gint _tmp4_ = 0;
		_tmp4_ = default_value;
		result = _tmp4_;
		_g_free0 (value);
		return result;
	}
	_tmp5_ = value;
	_tmp6_ = atoi (_tmp5_);
	result = _tmp6_;
	_g_free0 (value);
	return result;
}


/**
 * Returns the double value of the specified named argument.
 *
 * @param name argument name
 * @return     double value
 */
static gdouble double_parse (const gchar* str) {
	gdouble result = 0.0;
	const gchar* _tmp0_ = NULL;
	gdouble _tmp1_ = 0.0;
	g_return_val_if_fail (str != NULL, 0.0);
	_tmp0_ = str;
	_tmp1_ = g_ascii_strtod (_tmp0_, NULL);
	result = _tmp1_;
	return result;
}


gdouble vala_attribute_get_double (ValaAttribute* self, const gchar* name, gdouble default_value) {
	gdouble result = 0.0;
	gchar* value = NULL;
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gpointer _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp5_ = NULL;
	gdouble _tmp6_ = 0.0;
	g_return_val_if_fail (self != NULL, 0.0);
	g_return_val_if_fail (name != NULL, 0.0);
	_tmp0_ = self->args;
	_tmp1_ = name;
	_tmp2_ = vala_map_get (_tmp0_, _tmp1_);
	value = (gchar*) _tmp2_;
	_tmp3_ = value;
	if (_tmp3_ == NULL) {
		gdouble _tmp4_ = 0.0;
		_tmp4_ = default_value;
		result = _tmp4_;
		_g_free0 (value);
		return result;
	}
	_tmp5_ = value;
	_tmp6_ = double_parse (_tmp5_);
	result = _tmp6_;
	_g_free0 (value);
	return result;
}


/**
 * Returns the boolean value of the specified named argument.
 *
 * @param name argument name
 * @return     boolean value
 */
static gboolean bool_parse (const gchar* str) {
	gboolean result = FALSE;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (str != NULL, FALSE);
	_tmp0_ = str;
	if (g_strcmp0 (_tmp0_, "true") == 0) {
		result = TRUE;
		return result;
	} else {
		result = FALSE;
		return result;
	}
}


gboolean vala_attribute_get_bool (ValaAttribute* self, const gchar* name, gboolean default_value) {
	gboolean result = FALSE;
	gchar* value = NULL;
	ValaMap* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	gpointer _tmp2_ = NULL;
	const gchar* _tmp3_ = NULL;
	const gchar* _tmp5_ = NULL;
	gboolean _tmp6_ = FALSE;
	g_return_val_if_fail (self != NULL, FALSE);
	g_return_val_if_fail (name != NULL, FALSE);
	_tmp0_ = self->args;
	_tmp1_ = name;
	_tmp2_ = vala_map_get (_tmp0_, _tmp1_);
	value = (gchar*) _tmp2_;
	_tmp3_ = value;
	if (_tmp3_ == NULL) {
		gboolean _tmp4_ = FALSE;
		_tmp4_ = default_value;
		result = _tmp4_;
		_g_free0 (value);
		return result;
	}
	_tmp5_ = value;
	_tmp6_ = bool_parse (_tmp5_);
	result = _tmp6_;
	_g_free0 (value);
	return result;
}


const gchar* vala_attribute_get_name (ValaAttribute* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_attribute_set_name (ValaAttribute* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


static void vala_attribute_class_init (ValaAttributeClass * klass) {
	vala_attribute_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_attribute_finalize;
	g_type_class_add_private (klass, sizeof (ValaAttributePrivate));
}


static void vala_attribute_instance_init (ValaAttribute * self) {
	GHashFunc _tmp0_ = NULL;
	GEqualFunc _tmp1_ = NULL;
	GEqualFunc _tmp2_ = NULL;
	ValaHashMap* _tmp3_ = NULL;
	self->priv = VALA_ATTRIBUTE_GET_PRIVATE (self);
	_tmp0_ = g_str_hash;
	_tmp1_ = g_str_equal;
	_tmp2_ = g_direct_equal;
	_tmp3_ = vala_hash_map_new (G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, G_TYPE_STRING, (GBoxedCopyFunc) g_strdup, g_free, _tmp0_, _tmp1_, _tmp2_);
	self->args = (ValaMap*) _tmp3_;
}


static void vala_attribute_finalize (ValaCodeNode* obj) {
	ValaAttribute * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ATTRIBUTE, ValaAttribute);
	_g_free0 (self->priv->_name);
	_vala_map_unref0 (self->args);
	VALA_CODE_NODE_CLASS (vala_attribute_parent_class)->finalize (obj);
}


/**
 * Represents an attribute specified in the source code.
 */
GType vala_attribute_get_type (void) {
	static volatile gsize vala_attribute_type_id__volatile = 0;
	if (g_once_init_enter (&vala_attribute_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaAttributeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_attribute_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaAttribute), 0, (GInstanceInitFunc) vala_attribute_instance_init, NULL };
		GType vala_attribute_type_id;
		vala_attribute_type_id = g_type_register_static (VALA_TYPE_CODE_NODE, "ValaAttribute", &g_define_type_info, 0);
		g_once_init_leave (&vala_attribute_type_id__volatile, vala_attribute_type_id);
	}
	return vala_attribute_type_id__volatile;
}



