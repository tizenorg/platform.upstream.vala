/* valaccodeconstant.c generated by valac, the Vala compiler
 * generated from valaccodeconstant.vala, do not modify */

/* valaccodeconstant.vala
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

#define VALA_TYPE_CCODE_CONSTANT (vala_ccode_constant_get_type ())
#define VALA_CCODE_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), VALA_TYPE_CCODE_CONSTANT, ValaCCodeConstant))
#define VALA_CCODE_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), VALA_TYPE_CCODE_CONSTANT, ValaCCodeConstantClass))
#define VALA_IS_CCODE_CONSTANT(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), VALA_TYPE_CCODE_CONSTANT))
#define VALA_IS_CCODE_CONSTANT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), VALA_TYPE_CCODE_CONSTANT))
#define VALA_CCODE_CONSTANT_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), VALA_TYPE_CCODE_CONSTANT, ValaCCodeConstantClass))

typedef struct _ValaCCodeConstant ValaCCodeConstant;
typedef struct _ValaCCodeConstantClass ValaCCodeConstantClass;
typedef struct _ValaCCodeConstantPrivate ValaCCodeConstantPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_string_free0(var) ((var == NULL) ? NULL : (var = (g_string_free (var, TRUE), NULL)))
#define _vala_assert(expr, msg) if G_LIKELY (expr) ; else g_assertion_message_expr (G_LOG_DOMAIN, __FILE__, __LINE__, G_STRFUNC, msg);

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

struct _ValaCCodeConstant {
	ValaCCodeExpression parent_instance;
	ValaCCodeConstantPrivate * priv;
};

struct _ValaCCodeConstantClass {
	ValaCCodeExpressionClass parent_class;
};

struct _ValaCCodeConstantPrivate {
	gchar* _name;
};


static gpointer vala_ccode_constant_parent_class = NULL;

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
GType vala_ccode_constant_get_type (void) G_GNUC_CONST;
#define VALA_CCODE_CONSTANT_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), VALA_TYPE_CCODE_CONSTANT, ValaCCodeConstantPrivate))
enum  {
	VALA_CCODE_CONSTANT_DUMMY_PROPERTY
};
#define VALA_CCODE_CONSTANT_LINE_LENGTH 70
ValaCCodeConstant* vala_ccode_constant_new (const gchar* _name);
ValaCCodeConstant* vala_ccode_constant_construct (GType object_type, const gchar* _name);
ValaCCodeExpression* vala_ccode_expression_construct (GType object_type);
void vala_ccode_constant_set_name (ValaCCodeConstant* self, const gchar* value);
ValaCCodeConstant* vala_ccode_constant_new_string (const gchar* _name);
ValaCCodeConstant* vala_ccode_constant_construct_string (GType object_type, const gchar* _name);
static void vala_ccode_constant_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer);
void vala_ccode_writer_write_string (ValaCCodeWriter* self, const gchar* s);
const gchar* vala_ccode_constant_get_name (ValaCCodeConstant* self);
static void vala_ccode_constant_finalize (ValaCCodeNode* obj);


ValaCCodeConstant* vala_ccode_constant_construct (GType object_type, const gchar* _name) {
	ValaCCodeConstant* self = NULL;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (_name != NULL, NULL);
	self = (ValaCCodeConstant*) vala_ccode_expression_construct (object_type);
	_tmp0_ = _name;
	vala_ccode_constant_set_name (self, _tmp0_);
	return self;
}


ValaCCodeConstant* vala_ccode_constant_new (const gchar* _name) {
	return vala_ccode_constant_construct (VALA_TYPE_CCODE_CONSTANT, _name);
}


static gchar string_get (const gchar* self, glong index) {
	gchar result = '\0';
	glong _tmp0_ = 0L;
	gchar _tmp1_ = '\0';
	g_return_val_if_fail (self != NULL, '\0');
	_tmp0_ = index;
	_tmp1_ = ((gchar*) self)[_tmp0_];
	result = _tmp1_;
	return result;
}


static gunichar string_get_char (const gchar* self, glong index) {
	gunichar result = 0U;
	glong _tmp0_ = 0L;
	gunichar _tmp1_ = 0U;
	g_return_val_if_fail (self != NULL, 0U);
	_tmp0_ = index;
	_tmp1_ = g_utf8_get_char (((gchar*) self) + _tmp0_);
	result = _tmp1_;
	return result;
}


ValaCCodeConstant* vala_ccode_constant_construct_string (GType object_type, const gchar* _name) {
	ValaCCodeConstant* self = NULL;
	const gchar* _tmp0_ = NULL;
	gchar _tmp1_ = '\0';
	const gchar* _tmp2_ = NULL;
	gint _tmp3_ = 0;
	gint _tmp4_ = 0;
	GString* builder = NULL;
	GString* _tmp6_ = NULL;
	gchar* p = NULL;
	const gchar* _tmp7_ = NULL;
	gchar* end = NULL;
	gchar* _tmp8_ = NULL;
	const gchar* _tmp9_ = NULL;
	gint _tmp10_ = 0;
	gint _tmp11_ = 0;
	gchar* _tmp12_ = NULL;
	gchar* _tmp13_ = NULL;
	gint col = 0;
	GString* _tmp60_ = NULL;
	GString* _tmp61_ = NULL;
	const gchar* _tmp62_ = NULL;
	g_return_val_if_fail (_name != NULL, NULL);
	self = (ValaCCodeConstant*) vala_ccode_expression_construct (object_type);
	_tmp0_ = _name;
	_tmp1_ = string_get (_tmp0_, (glong) 0);
	_vala_assert (_tmp1_ == '\"', "_name[0] == '\\\"'");
	_tmp2_ = _name;
	_tmp3_ = strlen (_tmp2_);
	_tmp4_ = _tmp3_;
	if (_tmp4_ <= VALA_CCODE_CONSTANT_LINE_LENGTH) {
		const gchar* _tmp5_ = NULL;
		_tmp5_ = _name;
		vala_ccode_constant_set_name (self, _tmp5_);
		return self;
	}
	_tmp6_ = g_string_new ("\"");
	builder = _tmp6_;
	_tmp7_ = _name;
	p = _tmp7_;
	_tmp8_ = p;
	_tmp9_ = _name;
	_tmp10_ = strlen (_tmp9_);
	_tmp11_ = _tmp10_;
	end = _tmp8_ + _tmp11_;
	_tmp12_ = p;
	p = _tmp12_ + 1;
	_tmp13_ = end;
	end = _tmp13_ - 1;
	col = 0;
	while (TRUE) {
		gchar* _tmp14_ = NULL;
		gchar* _tmp15_ = NULL;
		gint _tmp16_ = 0;
		gchar* _tmp18_ = NULL;
		_tmp14_ = p;
		_tmp15_ = end;
		if (!(_tmp14_ < _tmp15_)) {
			break;
		}
		_tmp16_ = col;
		if (_tmp16_ >= VALA_CCODE_CONSTANT_LINE_LENGTH) {
			GString* _tmp17_ = NULL;
			_tmp17_ = builder;
			g_string_append (_tmp17_, "\" \\\n\"");
			col = 0;
		}
		_tmp18_ = p;
		if ((*_tmp18_) == '\\') {
			gchar* begin_of_char = NULL;
			gchar* _tmp19_ = NULL;
			GString* _tmp20_ = NULL;
			gchar* _tmp21_ = NULL;
			gchar _tmp22_ = '\0';
			GString* _tmp23_ = NULL;
			gchar* _tmp24_ = NULL;
			gchar _tmp25_ = '\0';
			gchar* _tmp26_ = NULL;
			gchar* _tmp27_ = NULL;
			gchar _tmp28_ = '\0';
			gint _tmp49_ = 0;
			gchar* _tmp50_ = NULL;
			gchar* _tmp51_ = NULL;
			_tmp19_ = p;
			begin_of_char = _tmp19_;
			_tmp20_ = builder;
			_tmp21_ = p;
			_tmp22_ = _tmp21_[0];
			g_string_append_c (_tmp20_, _tmp22_);
			_tmp23_ = builder;
			_tmp24_ = p;
			_tmp25_ = _tmp24_[1];
			g_string_append_c (_tmp23_, _tmp25_);
			_tmp26_ = p;
			p = _tmp26_ + 2;
			_tmp27_ = p;
			_tmp28_ = _tmp27_[-1];
			switch (_tmp28_) {
				case 'x':
				{
					while (TRUE) {
						gboolean _tmp29_ = FALSE;
						gchar* _tmp30_ = NULL;
						gchar* _tmp31_ = NULL;
						GString* _tmp34_ = NULL;
						gchar* _tmp35_ = NULL;
						gchar* _tmp36_ = NULL;
						_tmp30_ = p;
						_tmp31_ = end;
						if (_tmp30_ < _tmp31_) {
							gchar* _tmp32_ = NULL;
							gboolean _tmp33_ = FALSE;
							_tmp32_ = p;
							_tmp33_ = g_ascii_isxdigit (*_tmp32_);
							_tmp29_ = _tmp33_;
						} else {
							_tmp29_ = FALSE;
						}
						if (!_tmp29_) {
							break;
						}
						_tmp34_ = builder;
						_tmp35_ = p;
						g_string_append_c (_tmp34_, *_tmp35_);
						_tmp36_ = p;
						p = _tmp36_ + 1;
					}
					break;
				}
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				{
					while (TRUE) {
						gboolean _tmp37_ = FALSE;
						gboolean _tmp38_ = FALSE;
						gboolean _tmp39_ = FALSE;
						gchar* _tmp40_ = NULL;
						gchar* _tmp41_ = NULL;
						GString* _tmp46_ = NULL;
						gchar* _tmp47_ = NULL;
						gchar* _tmp48_ = NULL;
						_tmp40_ = p;
						_tmp41_ = end;
						if (_tmp40_ < _tmp41_) {
							gchar* _tmp42_ = NULL;
							gchar* _tmp43_ = NULL;
							_tmp42_ = p;
							_tmp43_ = begin_of_char;
							_tmp39_ = (_tmp42_ - _tmp43_) <= ((gsize) 3);
						} else {
							_tmp39_ = FALSE;
						}
						if (_tmp39_) {
							gchar* _tmp44_ = NULL;
							_tmp44_ = p;
							_tmp38_ = (*_tmp44_) >= '0';
						} else {
							_tmp38_ = FALSE;
						}
						if (_tmp38_) {
							gchar* _tmp45_ = NULL;
							_tmp45_ = p;
							_tmp37_ = (*_tmp45_) <= '7';
						} else {
							_tmp37_ = FALSE;
						}
						if (!_tmp37_) {
							break;
						}
						_tmp46_ = builder;
						_tmp47_ = p;
						g_string_append_c (_tmp46_, *_tmp47_);
						_tmp48_ = p;
						p = _tmp48_ + 1;
					}
					break;
				}
				case 'n':
				{
					col = VALA_CCODE_CONSTANT_LINE_LENGTH;
					break;
				}
				default:
				break;
			}
			_tmp49_ = col;
			_tmp50_ = p;
			_tmp51_ = begin_of_char;
			col = _tmp49_ + ((gint) (_tmp50_ - _tmp51_));
		} else {
			GString* _tmp52_ = NULL;
			gchar* _tmp53_ = NULL;
			gunichar _tmp54_ = 0U;
			gchar* _tmp55_ = NULL;
			gchar* _tmp56_ = NULL;
			const gchar* _tmp57_ = NULL;
			gchar* _tmp58_ = NULL;
			gint _tmp59_ = 0;
			_tmp52_ = builder;
			_tmp53_ = p;
			_tmp54_ = string_get_char ((const gchar*) _tmp53_, (glong) 0);
			g_string_append_unichar (_tmp52_, _tmp54_);
			_tmp55_ = p;
			_tmp56_ = p;
			_tmp57_ = g_utf8_next_char ((const gchar*) _tmp56_);
			_tmp58_ = p;
			p = _tmp55_ + (((gchar*) _tmp57_) - _tmp58_);
			_tmp59_ = col;
			col = _tmp59_ + 1;
		}
	}
	_tmp60_ = builder;
	g_string_append_c (_tmp60_, '"');
	_tmp61_ = builder;
	_tmp62_ = _tmp61_->str;
	vala_ccode_constant_set_name (self, _tmp62_);
	_g_string_free0 (builder);
	return self;
}


ValaCCodeConstant* vala_ccode_constant_new_string (const gchar* _name) {
	return vala_ccode_constant_construct_string (VALA_TYPE_CCODE_CONSTANT, _name);
}


static void vala_ccode_constant_real_write (ValaCCodeNode* base, ValaCCodeWriter* writer) {
	ValaCCodeConstant * self;
	ValaCCodeWriter* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	self = (ValaCCodeConstant*) base;
	g_return_if_fail (writer != NULL);
	_tmp0_ = writer;
	_tmp1_ = self->priv->_name;
	vala_ccode_writer_write_string (_tmp0_, _tmp1_);
}


const gchar* vala_ccode_constant_get_name (ValaCCodeConstant* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
	g_return_val_if_fail (self != NULL, NULL);
	_tmp0_ = self->priv->_name;
	result = _tmp0_;
	return result;
}


void vala_ccode_constant_set_name (ValaCCodeConstant* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
	g_return_if_fail (self != NULL);
	_tmp0_ = value;
	_tmp1_ = g_strdup (_tmp0_);
	_g_free0 (self->priv->_name);
	self->priv->_name = _tmp1_;
}


static void vala_ccode_constant_class_init (ValaCCodeConstantClass * klass) {
	vala_ccode_constant_parent_class = g_type_class_peek_parent (klass);
	((ValaCCodeNodeClass *) klass)->finalize = vala_ccode_constant_finalize;
	g_type_class_add_private (klass, sizeof (ValaCCodeConstantPrivate));
	((ValaCCodeNodeClass *) klass)->write = vala_ccode_constant_real_write;
}


static void vala_ccode_constant_instance_init (ValaCCodeConstant * self) {
	self->priv = VALA_CCODE_CONSTANT_GET_PRIVATE (self);
}


static void vala_ccode_constant_finalize (ValaCCodeNode* obj) {
	ValaCCodeConstant * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, VALA_TYPE_CCODE_CONSTANT, ValaCCodeConstant);
	_g_free0 (self->priv->_name);
	VALA_CCODE_NODE_CLASS (vala_ccode_constant_parent_class)->finalize (obj);
}


/**
 * A constant C expression.
 */
GType vala_ccode_constant_get_type (void) {
	static volatile gsize vala_ccode_constant_type_id__volatile = 0;
	if (g_once_init_enter (&vala_ccode_constant_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (ValaCCodeConstantClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) vala_ccode_constant_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (ValaCCodeConstant), 0, (GInstanceInitFunc) vala_ccode_constant_instance_init, NULL };
		GType vala_ccode_constant_type_id;
		vala_ccode_constant_type_id = g_type_register_static (VALA_TYPE_CCODE_EXPRESSION, "ValaCCodeConstant", &g_define_type_info, 0);
		g_once_init_leave (&vala_ccode_constant_type_id__volatile, vala_ccode_constant_type_id);
	}
	return vala_ccode_constant_type_id__volatile;
}



