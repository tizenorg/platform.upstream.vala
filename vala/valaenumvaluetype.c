/* valaenumvaluetype.c generated by valac, the Vala compiler
 * generated from valaenumvaluetype.vala, do not modify */

/* valaenumvaluetype.vala
 *
 * Copyright (C) 2009-2011  Jürg Billeter
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
typedef struct _ValaDataTypePrivate ValaDataTypePrivate;

#define VALA_TYPE_SCOPE (vala_scope_get_type ())
#define VALA_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SCOPE, ValaScope))
#define VALA_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SCOPE, ValaScopeClass))
#define VALA_IS_SCOPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SCOPE))
#define VALA_IS_SCOPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SCOPE))
#define VALA_SCOPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SCOPE, ValaScopeClass))

typedef struct _ValaScope ValaScope;
typedef struct _ValaScopeClass ValaScopeClass;

#define VALA_TYPE_PARAMETER (vala_parameter_get_type ())
#define VALA_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_PARAMETER, ValaParameter))
#define VALA_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_PARAMETER, ValaParameterClass))
#define VALA_IS_PARAMETER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_PARAMETER))
#define VALA_IS_PARAMETER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_PARAMETER))
#define VALA_PARAMETER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_PARAMETER, ValaParameterClass))

typedef struct _ValaParameter ValaParameter;
typedef struct _ValaParameterClass ValaParameterClass;

#define VALA_TYPE_MEMBER_ACCESS (vala_member_access_get_type ())
#define VALA_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccess))
#define VALA_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))
#define VALA_IS_MEMBER_ACCESS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_MEMBER_ACCESS))
#define VALA_IS_MEMBER_ACCESS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_MEMBER_ACCESS))
#define VALA_MEMBER_ACCESS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_MEMBER_ACCESS, ValaMemberAccessClass))

typedef struct _ValaMemberAccess ValaMemberAccess;
typedef struct _ValaMemberAccessClass ValaMemberAccessClass;

#define VALA_TYPE_VALUE_TYPE (vala_value_type_get_type ())
#define VALA_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_VALUE_TYPE, ValaValueType))
#define VALA_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))
#define VALA_IS_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_VALUE_TYPE))
#define VALA_IS_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_VALUE_TYPE))
#define VALA_VALUE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_VALUE_TYPE, ValaValueTypeClass))

typedef struct _ValaValueType ValaValueType;
typedef struct _ValaValueTypeClass ValaValueTypeClass;
typedef struct _ValaValueTypePrivate ValaValueTypePrivate;

#define VALA_TYPE_ENUM_VALUE_TYPE (vala_enum_value_type_get_type ())
#define VALA_ENUM_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueType))
#define VALA_ENUM_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueTypeClass))
#define VALA_IS_ENUM_VALUE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM_VALUE_TYPE))
#define VALA_IS_ENUM_VALUE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM_VALUE_TYPE))
#define VALA_ENUM_VALUE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueTypeClass))

typedef struct _ValaEnumValueType ValaEnumValueType;
typedef struct _ValaEnumValueTypeClass ValaEnumValueTypeClass;
typedef struct _ValaEnumValueTypePrivate ValaEnumValueTypePrivate;

#define VALA_TYPE_SUBROUTINE (vala_subroutine_get_type ())
#define VALA_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutine))
#define VALA_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))
#define VALA_IS_SUBROUTINE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SUBROUTINE))
#define VALA_IS_SUBROUTINE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SUBROUTINE))
#define VALA_SUBROUTINE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SUBROUTINE, ValaSubroutineClass))

typedef struct _ValaSubroutine ValaSubroutine;
typedef struct _ValaSubroutineClass ValaSubroutineClass;

#define VALA_TYPE_METHOD (vala_method_get_type ())
#define VALA_METHOD(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_METHOD, ValaMethod))
#define VALA_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_METHOD, ValaMethodClass))
#define VALA_IS_METHOD(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_METHOD))
#define VALA_IS_METHOD_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_METHOD))
#define VALA_METHOD_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_METHOD, ValaMethodClass))

typedef struct _ValaMethod ValaMethod;
typedef struct _ValaMethodClass ValaMethodClass;
#define _vala_code_node_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_node_unref (var), NULL)))

#define VALA_TYPE_TYPESYMBOL (vala_typesymbol_get_type ())
#define VALA_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbol))
#define VALA_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))
#define VALA_IS_TYPESYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_TYPESYMBOL))
#define VALA_IS_TYPESYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_TYPESYMBOL))
#define VALA_TYPESYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_TYPESYMBOL, ValaTypeSymbolClass))

typedef struct _ValaTypeSymbol ValaTypeSymbol;
typedef struct _ValaTypeSymbolClass ValaTypeSymbolClass;

#define VALA_TYPE_ENUM (vala_enum_get_type ())
#define VALA_ENUM(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_ENUM, ValaEnum))
#define VALA_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_ENUM, ValaEnumClass))
#define VALA_IS_ENUM(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_ENUM))
#define VALA_IS_ENUM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_ENUM))
#define VALA_ENUM_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_ENUM, ValaEnumClass))

typedef struct _ValaEnum ValaEnum;
typedef struct _ValaEnumClass ValaEnumClass;

#define VALA_TYPE_SOURCE_REFERENCE (vala_source_reference_get_type ())
#define VALA_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReference))
#define VALA_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))
#define VALA_IS_SOURCE_REFERENCE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_IS_SOURCE_REFERENCE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_SOURCE_REFERENCE))
#define VALA_SOURCE_REFERENCE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_SOURCE_REFERENCE, ValaSourceReferenceClass))

typedef struct _ValaSourceReference ValaSourceReference;
typedef struct _ValaSourceReferenceClass ValaSourceReferenceClass;

#define VALA_TYPE_REFERENCE_TYPE (vala_reference_type_get_type ())
#define VALA_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceType))
#define VALA_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))
#define VALA_IS_REFERENCE_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_REFERENCE_TYPE))
#define VALA_IS_REFERENCE_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_REFERENCE_TYPE))
#define VALA_REFERENCE_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_REFERENCE_TYPE, ValaReferenceTypeClass))

typedef struct _ValaReferenceType ValaReferenceType;
typedef struct _ValaReferenceTypeClass ValaReferenceTypeClass;

#define VALA_TYPE_OBJECT_TYPE (vala_object_type_get_type ())
#define VALA_OBJECT_TYPE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE, ValaObjectType))
#define VALA_OBJECT_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE, ValaObjectTypeClass))
#define VALA_IS_OBJECT_TYPE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE))
#define VALA_IS_OBJECT_TYPE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE))
#define VALA_OBJECT_TYPE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE, ValaObjectTypeClass))

typedef struct _ValaObjectType ValaObjectType;
typedef struct _ValaObjectTypeClass ValaObjectTypeClass;

#define VALA_TYPE_NAMESPACE (vala_namespace_get_type ())
#define VALA_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_NAMESPACE, ValaNamespace))
#define VALA_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_NAMESPACE, ValaNamespaceClass))
#define VALA_IS_NAMESPACE(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_NAMESPACE))
#define VALA_IS_NAMESPACE_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_NAMESPACE))
#define VALA_NAMESPACE_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_NAMESPACE, ValaNamespaceClass))

typedef struct _ValaNamespace ValaNamespace;
typedef struct _ValaNamespaceClass ValaNamespaceClass;

#define VALA_TYPE_OBJECT_TYPE_SYMBOL (vala_object_type_symbol_get_type ())
#define VALA_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbol))
#define VALA_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))
#define VALA_IS_OBJECT_TYPE_SYMBOL(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_IS_OBJECT_TYPE_SYMBOL_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_OBJECT_TYPE_SYMBOL))
#define VALA_OBJECT_TYPE_SYMBOL_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_OBJECT_TYPE_SYMBOL, ValaObjectTypeSymbolClass))

typedef struct _ValaObjectTypeSymbol ValaObjectTypeSymbol;
typedef struct _ValaObjectTypeSymbolClass ValaObjectTypeSymbolClass;

#define VALA_TYPE_CLASS (vala_class_get_type ())
#define VALA_CLASS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CLASS, ValaClass))
#define VALA_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CLASS, ValaClassClass))
#define VALA_IS_CLASS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CLASS))
#define VALA_IS_CLASS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CLASS))
#define VALA_CLASS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CLASS, ValaClassClass))

typedef struct _ValaClass ValaClass;
typedef struct _ValaClassClass ValaClassClass;
#define _vala_code_context_unref0(var) ((var == NULL) ? NULL : (var = (vala_code_context_unref (var), NULL)))

#define VALA_TYPE_COMMENT (vala_comment_get_type ())
#define VALA_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_COMMENT, ValaComment))
#define VALA_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_COMMENT, ValaCommentClass))
#define VALA_IS_COMMENT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_COMMENT))
#define VALA_IS_COMMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_COMMENT))
#define VALA_COMMENT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_COMMENT, ValaCommentClass))

typedef struct _ValaComment ValaComment;
typedef struct _ValaCommentClass ValaCommentClass;

#define VALA_TYPE_SYMBOL_ACCESSIBILITY (vala_symbol_accessibility_get_type ())

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

struct _ValaDataType {
	ValaCodeNode parent_instance;
	ValaDataTypePrivate * priv;
};

struct _ValaDataTypeClass {
	ValaCodeNodeClass parent_class;
	gchar* (*to_qualified_string) (ValaDataType* self, ValaScope* scope);
	ValaDataType* (*copy) (ValaDataType* self);
	gboolean (*equals) (ValaDataType* self, ValaDataType* type2);
	gboolean (*stricter) (ValaDataType* self, ValaDataType* type2);
	gboolean (*compatible) (ValaDataType* self, ValaDataType* target_type);
	gboolean (*is_invokable) (ValaDataType* self);
	ValaDataType* (*get_return_type) (ValaDataType* self);
	ValaList* (*get_parameters) (ValaDataType* self);
	gboolean (*is_reference_type_or_type_parameter) (ValaDataType* self);
	gboolean (*is_array) (ValaDataType* self);
	gboolean (*is_accessible) (ValaDataType* self, ValaSymbol* sym);
	ValaSymbol* (*get_member) (ValaDataType* self, const gchar* member_name);
	ValaSymbol* (*get_pointer_member) (ValaDataType* self, const gchar* member_name);
	gboolean (*is_real_struct_type) (ValaDataType* self);
	gboolean (*is_disposable) (ValaDataType* self);
	ValaDataType* (*get_actual_type) (ValaDataType* self, ValaDataType* derived_instance_type, ValaMemberAccess* method_access, ValaCodeNode* node_reference);
};

struct _ValaValueType {
	ValaDataType parent_instance;
	ValaValueTypePrivate * priv;
};

struct _ValaValueTypeClass {
	ValaDataTypeClass parent_class;
};

struct _ValaEnumValueType {
	ValaValueType parent_instance;
	ValaEnumValueTypePrivate * priv;
};

struct _ValaEnumValueTypeClass {
	ValaValueTypeClass parent_class;
};

struct _ValaEnumValueTypePrivate {
	ValaMethod* to_string_method;
};

typedef enum  {
	VALA_SYMBOL_ACCESSIBILITY_PRIVATE,
	VALA_SYMBOL_ACCESSIBILITY_INTERNAL,
	VALA_SYMBOL_ACCESSIBILITY_PROTECTED,
	VALA_SYMBOL_ACCESSIBILITY_PUBLIC
} ValaSymbolAccessibility;


static gpointer vala_enum_value_type_parent_class = NULL;

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
gpointer vala_scope_ref (gpointer instance);
void vala_scope_unref (gpointer instance);
GParamSpec* vala_param_spec_scope (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_scope (GValue* value, gpointer v_object);
void vala_value_take_scope (GValue* value, gpointer v_object);
gpointer vala_value_get_scope (const GValue* value);
GType vala_scope_get_type (void) G_GNUC_CONST;
GType vala_parameter_get_type (void) G_GNUC_CONST;
GType vala_member_access_get_type (void) G_GNUC_CONST;
GType vala_value_type_get_type (void) G_GNUC_CONST;
GType vala_enum_value_type_get_type (void) G_GNUC_CONST;
GType vala_subroutine_get_type (void) G_GNUC_CONST;
GType vala_method_get_type (void) G_GNUC_CONST;
#define VALA_ENUM_VALUE_TYPE_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueTypePrivate))
enum  {
	VALA_ENUM_VALUE_TYPE_DUMMY_PROPERTY
};
GType vala_typesymbol_get_type (void) G_GNUC_CONST;
GType vala_enum_get_type (void) G_GNUC_CONST;
ValaEnumValueType* vala_enum_value_type_new (ValaEnum* type_symbol);
ValaEnumValueType* vala_enum_value_type_construct (GType object_type, ValaEnum* type_symbol);
ValaValueType* vala_value_type_construct (GType object_type, ValaTypeSymbol* type_symbol);
static ValaDataType* vala_enum_value_type_real_copy (ValaDataType* base);
ValaTypeSymbol* vala_value_type_get_type_symbol (ValaValueType* self);
gpointer vala_source_reference_ref (gpointer instance);
void vala_source_reference_unref (gpointer instance);
GParamSpec* vala_param_spec_source_reference (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_source_reference (GValue* value, gpointer v_object);
void vala_value_take_source_reference (GValue* value, gpointer v_object);
gpointer vala_value_get_source_reference (const GValue* value);
GType vala_source_reference_get_type (void) G_GNUC_CONST;
ValaSourceReference* vala_code_node_get_source_reference (ValaCodeNode* self);
void vala_code_node_set_source_reference (ValaCodeNode* self, ValaSourceReference* value);
gboolean vala_data_type_get_value_owned (ValaDataType* self);
void vala_data_type_set_value_owned (ValaDataType* self, gboolean value);
gboolean vala_data_type_get_nullable (ValaDataType* self);
void vala_data_type_set_nullable (ValaDataType* self, gboolean value);
ValaMethod* vala_enum_value_type_get_to_string_method (ValaEnumValueType* self);
GType vala_reference_type_get_type (void) G_GNUC_CONST;
GType vala_object_type_get_type (void) G_GNUC_CONST;
ValaCodeContext* vala_code_context_get (void);
GType vala_namespace_get_type (void) G_GNUC_CONST;
ValaNamespace* vala_code_context_get_root (ValaCodeContext* self);
ValaScope* vala_symbol_get_scope (ValaSymbol* self);
ValaSymbol* vala_scope_lookup (ValaScope* self, const gchar* name);
GType vala_object_type_symbol_get_type (void) G_GNUC_CONST;
GType vala_class_get_type (void) G_GNUC_CONST;
ValaObjectType* vala_object_type_new (ValaObjectTypeSymbol* type_symbol);
ValaObjectType* vala_object_type_construct (GType object_type, ValaObjectTypeSymbol* type_symbol);
gpointer vala_comment_ref (gpointer instance);
void vala_comment_unref (gpointer instance);
GParamSpec* vala_param_spec_comment (const gchar* name, const gchar* nick, const gchar* blurb, GType object_type, GParamFlags flags);
void vala_value_set_comment (GValue* value, gpointer v_object);
void vala_value_take_comment (GValue* value, gpointer v_object);
gpointer vala_value_get_comment (const GValue* value);
GType vala_comment_get_type (void) G_GNUC_CONST;
ValaMethod* vala_method_new (const gchar* name, ValaDataType* return_type, ValaSourceReference* source_reference, ValaComment* comment);
ValaMethod* vala_method_construct (GType object_type, const gchar* name, ValaDataType* return_type, ValaSourceReference* source_reference, ValaComment* comment);
GType vala_symbol_accessibility_get_type (void) G_GNUC_CONST;
void vala_symbol_set_access (ValaSymbol* self, ValaSymbolAccessibility value);
void vala_symbol_set_external (ValaSymbol* self, gboolean value);
void vala_symbol_set_owner (ValaSymbol* self, ValaScope* value);
ValaParameter* vala_parameter_new (const gchar* name, ValaDataType* variable_type, ValaSourceReference* source_reference);
ValaParameter* vala_parameter_construct (GType object_type, const gchar* name, ValaDataType* variable_type, ValaSourceReference* source_reference);
void vala_method_set_this_parameter (ValaMethod* self, ValaParameter* value);
void vala_scope_add (ValaScope* self, const gchar* name, ValaSymbol* sym);
ValaParameter* vala_method_get_this_parameter (ValaMethod* self);
const gchar* vala_symbol_get_name (ValaSymbol* self);
static ValaSymbol* vala_enum_value_type_real_get_member (ValaDataType* base, const gchar* member_name);
ValaSymbol* vala_data_type_get_member (ValaDataType* self, const gchar* member_name);
static void vala_enum_value_type_finalize (ValaCodeNode* obj);


ValaEnumValueType* vala_enum_value_type_construct (GType object_type, ValaEnum* type_symbol) {
	ValaEnumValueType* self = NULL;
	ValaEnum* _tmp0_ = NULL;
	g_return_val_if_fail (type_symbol != NULL, NULL);
	_tmp0_ = type_symbol;
	self = (ValaEnumValueType*) vala_value_type_construct (object_type, (ValaTypeSymbol*) _tmp0_);
	return self;
}


ValaEnumValueType* vala_enum_value_type_new (ValaEnum* type_symbol) {
	return vala_enum_value_type_construct (VALA_TYPE_ENUM_VALUE_TYPE, type_symbol);
}


static ValaDataType* vala_enum_value_type_real_copy (ValaDataType* base) {
	ValaEnumValueType * self;
	ValaDataType* result = NULL;
	ValaEnumValueType* _result_ = NULL;
	ValaTypeSymbol* _tmp0_ = NULL;
	ValaTypeSymbol* _tmp1_ = NULL;
	ValaEnumValueType* _tmp2_ = NULL;
	ValaSourceReference* _tmp3_ = NULL;
	ValaSourceReference* _tmp4_ = NULL;
	gboolean _tmp5_ = FALSE;
	gboolean _tmp6_ = FALSE;
	gboolean _tmp7_ = FALSE;
	gboolean _tmp8_ = FALSE;
	self = (ValaEnumValueType*) base;
	_tmp0_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
	_tmp1_ = _tmp0_;
	_tmp2_ = vala_enum_value_type_new (G_TYPE_CHECK_INSTANCE_CAST (_tmp1_, VALA_TYPE_ENUM, ValaEnum));
	_result_ = _tmp2_;
	_tmp3_ = vala_code_node_get_source_reference ((ValaCodeNode*) self);
	_tmp4_ = _tmp3_;
	vala_code_node_set_source_reference ((ValaCodeNode*) _result_, _tmp4_);
	_tmp5_ = vala_data_type_get_value_owned ((ValaDataType*) self);
	_tmp6_ = _tmp5_;
	vala_data_type_set_value_owned ((ValaDataType*) _result_, _tmp6_);
	_tmp7_ = vala_data_type_get_nullable ((ValaDataType*) self);
	_tmp8_ = _tmp7_;
	vala_data_type_set_nullable ((ValaDataType*) _result_, _tmp8_);
	result = (ValaDataType*) _result_;
	return result;
}


static gpointer _vala_code_node_ref0 (gpointer self) {
	return self ? vala_code_node_ref (self) : NULL;
}


ValaMethod* vala_enum_value_type_get_to_string_method (ValaEnumValueType* self) {
	ValaMethod* result = NULL;
	ValaMethod* _tmp0_ = NULL;
	ValaMethod* _tmp35_ = NULL;
	ValaMethod* _tmp36_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->to_string_method;
	if (_tmp0_ == NULL) {
		ValaObjectType* string_type = NULL;
		ValaCodeContext* _tmp1_ = NULL;
		ValaCodeContext* _tmp2_ = NULL;
		ValaNamespace* _tmp3_ = NULL;
		ValaNamespace* _tmp4_ = NULL;
		ValaScope* _tmp5_ = NULL;
		ValaScope* _tmp6_ = NULL;
		ValaSymbol* _tmp7_ = NULL;
		ValaClass* _tmp8_ = NULL;
		ValaObjectType* _tmp9_ = NULL;
		ValaObjectType* _tmp10_ = NULL;
		ValaObjectType* _tmp11_ = NULL;
		ValaObjectType* _tmp12_ = NULL;
		ValaMethod* _tmp13_ = NULL;
		ValaMethod* _tmp14_ = NULL;
		ValaMethod* _tmp15_ = NULL;
		ValaMethod* _tmp16_ = NULL;
		ValaTypeSymbol* _tmp17_ = NULL;
		ValaTypeSymbol* _tmp18_ = NULL;
		ValaScope* _tmp19_ = NULL;
		ValaScope* _tmp20_ = NULL;
		ValaMethod* _tmp21_ = NULL;
		ValaParameter* _tmp22_ = NULL;
		ValaParameter* _tmp23_ = NULL;
		ValaMethod* _tmp24_ = NULL;
		ValaScope* _tmp25_ = NULL;
		ValaScope* _tmp26_ = NULL;
		ValaMethod* _tmp27_ = NULL;
		ValaParameter* _tmp28_ = NULL;
		ValaParameter* _tmp29_ = NULL;
		const gchar* _tmp30_ = NULL;
		const gchar* _tmp31_ = NULL;
		ValaMethod* _tmp32_ = NULL;
		ValaParameter* _tmp33_ = NULL;
		ValaParameter* _tmp34_ = NULL;
		_tmp1_ = vala_code_context_get ();
		_tmp2_ = _tmp1_;
		_tmp3_ = vala_code_context_get_root (_tmp2_);
		_tmp4_ = _tmp3_;
		_tmp5_ = vala_symbol_get_scope ((ValaSymbol*) _tmp4_);
		_tmp6_ = _tmp5_;
		_tmp7_ = vala_scope_lookup (_tmp6_, "string");
		_tmp8_ = G_TYPE_CHECK_INSTANCE_CAST (_tmp7_, VALA_TYPE_CLASS, ValaClass);
		_tmp9_ = vala_object_type_new ((ValaObjectTypeSymbol*) _tmp8_);
		_tmp10_ = _tmp9_;
		_vala_code_node_unref0 (_tmp8_);
		_vala_code_context_unref0 (_tmp2_);
		string_type = _tmp10_;
		_tmp11_ = string_type;
		vala_data_type_set_value_owned ((ValaDataType*) _tmp11_, FALSE);
		_tmp12_ = string_type;
		_tmp13_ = vala_method_new ("to_string", (ValaDataType*) _tmp12_, NULL, NULL);
		_vala_code_node_unref0 (self->priv->to_string_method);
		self->priv->to_string_method = _tmp13_;
		_tmp14_ = self->priv->to_string_method;
		vala_symbol_set_access ((ValaSymbol*) _tmp14_, VALA_SYMBOL_ACCESSIBILITY_PUBLIC);
		_tmp15_ = self->priv->to_string_method;
		vala_symbol_set_external ((ValaSymbol*) _tmp15_, TRUE);
		_tmp16_ = self->priv->to_string_method;
		_tmp17_ = vala_value_type_get_type_symbol ((ValaValueType*) self);
		_tmp18_ = _tmp17_;
		_tmp19_ = vala_symbol_get_scope ((ValaSymbol*) _tmp18_);
		_tmp20_ = _tmp19_;
		vala_symbol_set_owner ((ValaSymbol*) _tmp16_, _tmp20_);
		_tmp21_ = self->priv->to_string_method;
		_tmp22_ = vala_parameter_new ("this", (ValaDataType*) self, NULL);
		_tmp23_ = _tmp22_;
		vala_method_set_this_parameter (_tmp21_, _tmp23_);
		_vala_code_node_unref0 (_tmp23_);
		_tmp24_ = self->priv->to_string_method;
		_tmp25_ = vala_symbol_get_scope ((ValaSymbol*) _tmp24_);
		_tmp26_ = _tmp25_;
		_tmp27_ = self->priv->to_string_method;
		_tmp28_ = vala_method_get_this_parameter (_tmp27_);
		_tmp29_ = _tmp28_;
		_tmp30_ = vala_symbol_get_name ((ValaSymbol*) _tmp29_);
		_tmp31_ = _tmp30_;
		_tmp32_ = self->priv->to_string_method;
		_tmp33_ = vala_method_get_this_parameter (_tmp32_);
		_tmp34_ = _tmp33_;
		vala_scope_add (_tmp26_, _tmp31_, (ValaSymbol*) _tmp34_);
		_vala_code_node_unref0 (string_type);
	}
	_tmp35_ = self->priv->to_string_method;
	_tmp36_ = _vala_code_node_ref0 (_tmp35_);
	result = _tmp36_;
	return result;
}


static ValaSymbol* vala_enum_value_type_real_get_member (ValaDataType* base, const gchar* member_name) {
	ValaEnumValueType * self;
	ValaSymbol* result = NULL;
	ValaSymbol* _result_ = NULL;
	const gchar* _tmp0_ = NULL;
	ValaSymbol* _tmp1_ = NULL;
	gboolean _tmp2_ = FALSE;
	ValaSymbol* _tmp3_ = NULL;
	self = (ValaEnumValueType*) base;
	g_return_val_if_fail (member_name != NULL, NULL);
	_tmp0_ = member_name;
	_tmp1_ = VALA_DATA_TYPE_CLASS (vala_enum_value_type_parent_class)->get_member ((ValaDataType*) G_TYPE_CHECK_INSTANCE_CAST (self, VALA_TYPE_VALUE_TYPE, ValaValueType), _tmp0_);
	_result_ = _tmp1_;
	_tmp3_ = _result_;
	if (_tmp3_ == NULL) {
		const gchar* _tmp4_ = NULL;
		_tmp4_ = member_name;
		_tmp2_ = g_strcmp0 (_tmp4_, "to_string") == 0;
	} else {
		_tmp2_ = FALSE;
	}
	if (_tmp2_) {
		ValaMethod* _tmp5_ = NULL;
		_tmp5_ = vala_enum_value_type_get_to_string_method (self);
		result = (ValaSymbol*) _tmp5_;
		_vala_code_node_unref0 (_result_);
		return result;
	}
	result = _result_;
	return result;
}


static void vala_enum_value_type_class_init (ValaEnumValueTypeClass * klass) {
	vala_enum_value_type_parent_class = g_type_class_peek_parent (klass);
	((ValaCodeNodeClass *) klass)->finalize = vala_enum_value_type_finalize;
	g_type_class_add_private (klass, sizeof (ValaEnumValueTypePrivate));
	((ValaDataTypeClass *) klass)->copy = vala_enum_value_type_real_copy;
	((ValaDataTypeClass *) klass)->get_member = vala_enum_value_type_real_get_member;
}


static void vala_enum_value_type_instance_init (ValaEnumValueType * self) {
	self->priv = VALA_ENUM_VALUE_TYPE_GET_PRIVATE (self);
}


static void vala_enum_value_type_finalize (ValaCodeNode* obj) {
	ValaEnumValueType * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_ENUM_VALUE_TYPE, ValaEnumValueType);
	_vala_code_node_unref0 (self->priv->to_string_method);
	VALA_CODE_NODE_CLASS (vala_enum_value_type_parent_class)->finalize (obj);
}


/**
 * An enum value type.
 */
GType vala_enum_value_type_get_type (void) {
	static volatile gsize vala_enum_value_type_type_id__volatile = 0;
	if (g_once_init_enter (&vala_enum_value_type_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaEnumValueTypeClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_enum_value_type_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaEnumValueType), 0, (GInstanceInitFunc) vala_enum_value_type_instance_init, NULL };
		GType vala_enum_value_type_type_id;
		vala_enum_value_type_type_id = g_type_register_static (VALA_TYPE_VALUE_TYPE, "ValaEnumValueType", &g_define_type_info, 0);
		g_once_init_leave (&vala_enum_value_type_type_id__volatile, vala_enum_value_type_type_id);
	}
	return vala_enum_value_type_type_id__volatile;
}



