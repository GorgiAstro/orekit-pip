#ifndef org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H
#define org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H

#include "org/hipparchus/geometry/VectorFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace euclidean {
        namespace twod {
          class Vector2DFormat;
          class Euclidean2D;
          class Vector2D;
        }
      }
    }
    namespace exception {
      class MathIllegalStateException;
    }
  }
}
namespace java {
  namespace text {
    class NumberFormat;
    class ParsePosition;
    class FieldPosition;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
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
              mid_init$_0fa09c18fee449d5,
              mid_init$_256f36a22c0d0f55,
              mid_init$_3c57e287341c9288,
              mid_init$_4ed7d7dd28d1bddd,
              mid_format_84b38396c796d436,
              mid_getVector2DFormat_1f9518acb9b68e05,
              mid_getVector2DFormat_7fa127a67e45ef7a,
              mid_parse_f1dbee0de937ae53,
              mid_parse_99419362d0089fc6,
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
