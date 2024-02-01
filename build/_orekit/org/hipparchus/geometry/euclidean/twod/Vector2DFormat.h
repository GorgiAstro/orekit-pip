#ifndef org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H
#define org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H

#include "org/hipparchus/geometry/VectorFormat.h"

namespace java {
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
  namespace text {
    class FieldPosition;
    class NumberFormat;
    class ParsePosition;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Euclidean2D;
          class Vector2DFormat;
        }
      }
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {

          class Vector2DFormat : public ::org::hipparchus::geometry::VectorFormat {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              mid_init$_327b6d3ae10b544b,
              mid_init$_56b987237c71cdbb,
              mid_init$_21a024496acf58f0,
              mid_format_dbd94d7f7c5c0aa8,
              mid_getVector2DFormat_059363d576d41933,
              mid_getVector2DFormat_b650ca28b8d669cc,
              mid_parse_8b7f998a5e2e454a,
              mid_parse_1801d7b769af6728,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector2DFormat(jobject obj) : ::org::hipparchus::geometry::VectorFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector2DFormat(const Vector2DFormat& obj) : ::org::hipparchus::geometry::VectorFormat(obj) {}

            Vector2DFormat();
            Vector2DFormat(const ::java::text::NumberFormat &);
            Vector2DFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            Vector2DFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::text::NumberFormat &);

            ::java::lang::StringBuffer format(const ::org::hipparchus::geometry::Vector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
            static Vector2DFormat getVector2DFormat();
            static Vector2DFormat getVector2DFormat(const ::java::util::Locale &);
            ::org::hipparchus::geometry::euclidean::twod::Vector2D parse(const ::java::lang::String &) const;
            ::org::hipparchus::geometry::euclidean::twod::Vector2D parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          extern PyType_Def PY_TYPE_DEF(Vector2DFormat);
          extern PyTypeObject *PY_TYPE(Vector2DFormat);

          class t_Vector2DFormat {
          public:
            PyObject_HEAD
            Vector2DFormat object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Vector2DFormat *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Vector2DFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Vector2DFormat&, PyTypeObject *, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
