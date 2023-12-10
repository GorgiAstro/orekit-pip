#ifndef org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H
#define org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H

#include "org/hipparchus/geometry/VectorFormat.h"

namespace java {
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
  namespace util {
    class Locale;
  }
  namespace text {
    class ParsePosition;
    class FieldPosition;
    class NumberFormat;
  }
}
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2DFormat;
          class Vector2D;
          class Euclidean2D;
        }
      }
      class Vector;
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
              mid_init$_7ae3461a92a43152,
              mid_init$_695a782f9c7823f6,
              mid_init$_de8316969b81209c,
              mid_init$_3420ce131d6f9e7d,
              mid_format_d63c028b54a2ec6c,
              mid_getVector2DFormat_ccb08435455f7a35,
              mid_getVector2DFormat_6bf2e0b65b9c1779,
              mid_parse_0494dc1a6378cd42,
              mid_parse_1fed149f6d69ecad,
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
