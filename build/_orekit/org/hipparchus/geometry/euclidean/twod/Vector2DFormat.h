#ifndef org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H
#define org_hipparchus_geometry_euclidean_twod_Vector2DFormat_H

#include "org/hipparchus/geometry/VectorFormat.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
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
namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          class Vector2D;
          class Vector2DFormat;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_b7f3d50b51ef7518,
              mid_init$_ee9345b4af8c40df,
              mid_init$_d047b7641facca84,
              mid_format_4b712c2465e37e54,
              mid_getVector2DFormat_53d6f65ab25b62f6,
              mid_getVector2DFormat_f748524f52c2d863,
              mid_parse_eceeaafaeb29e1fb,
              mid_parse_94ca86ca2bd5c76d,
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
