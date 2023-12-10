#ifndef org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H
#define org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H

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
        namespace threed {
          class Euclidean3D;
          class Vector3D;
          class Vector3DFormat;
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
        namespace threed {

          class Vector3DFormat : public ::org::hipparchus::geometry::VectorFormat {
           public:
            enum {
              mid_init$_7ae3461a92a43152,
              mid_init$_695a782f9c7823f6,
              mid_init$_de8316969b81209c,
              mid_init$_3420ce131d6f9e7d,
              mid_format_d63c028b54a2ec6c,
              mid_getVector3DFormat_5e25d9301c64418c,
              mid_getVector3DFormat_dbbf33444e6d3efe,
              mid_parse_251b0ea3618bb805,
              mid_parse_c62f08069cf90afe,
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
