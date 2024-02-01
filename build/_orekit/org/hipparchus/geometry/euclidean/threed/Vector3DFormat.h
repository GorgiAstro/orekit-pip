#ifndef org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H
#define org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H

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
      namespace euclidean {
        namespace threed {
          class Vector3DFormat;
          class Euclidean3D;
          class Vector3D;
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
              mid_init$_ff7cb6c242604316,
              mid_init$_327b6d3ae10b544b,
              mid_init$_56b987237c71cdbb,
              mid_init$_21a024496acf58f0,
              mid_format_dbd94d7f7c5c0aa8,
              mid_getVector3DFormat_f033d7c67942c06b,
              mid_getVector3DFormat_22cf7c08b192af51,
              mid_parse_e4728cd839ec795a,
              mid_parse_d99e3f3b7dc9d7dc,
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
