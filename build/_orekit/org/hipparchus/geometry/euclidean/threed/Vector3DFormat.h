#ifndef org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H
#define org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H

#include "org/hipparchus/geometry/VectorFormat.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      class Vector;
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class Vector3DFormat;
          class Euclidean3D;
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
        namespace threed {

          class Vector3DFormat : public ::org::hipparchus::geometry::VectorFormat {
           public:
            enum {
              mid_init$_0fa09c18fee449d5,
              mid_init$_256f36a22c0d0f55,
              mid_init$_3c57e287341c9288,
              mid_init$_4ed7d7dd28d1bddd,
              mid_format_84b38396c796d436,
              mid_getVector3DFormat_4b05d07dafeb1828,
              mid_getVector3DFormat_979518c04a8595fe,
              mid_parse_c1d9e64bdfba8d93,
              mid_parse_f78788fea04fcfc2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Vector3DFormat(jobject obj) : ::org::hipparchus::geometry::VectorFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Vector3DFormat(const Vector3DFormat& obj) : ::org::hipparchus::geometry::VectorFormat(obj) {}

            Vector3DFormat();
            Vector3DFormat(const ::java::text::NumberFormat &);
            Vector3DFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &);
            Vector3DFormat(const ::java::lang::String &, const ::java::lang::String &, const ::java::lang::String &, const ::java::text::NumberFormat &);

            ::java::lang::StringBuffer format(const ::org::hipparchus::geometry::Vector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
            static Vector3DFormat getVector3DFormat();
            static Vector3DFormat getVector3DFormat(const ::java::util::Locale &);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D parse(const ::java::lang::String &) const;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
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
        namespace threed {
          extern PyType_Def PY_TYPE_DEF(Vector3DFormat);
          extern PyTypeObject *PY_TYPE(Vector3DFormat);

          class t_Vector3DFormat {
          public:
            PyObject_HEAD
            Vector3DFormat object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_Vector3DFormat *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Vector3DFormat&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Vector3DFormat&, PyTypeObject *, PyTypeObject *);
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
