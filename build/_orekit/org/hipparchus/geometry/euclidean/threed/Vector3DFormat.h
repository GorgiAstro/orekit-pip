#ifndef org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H
#define org_hipparchus_geometry_euclidean_threed_Vector3DFormat_H

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
        namespace threed {
          class Vector3D;
          class Euclidean3D;
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
              mid_init$_a1fa5dae97ea5ed2,
              mid_init$_b7f3d50b51ef7518,
              mid_init$_ee9345b4af8c40df,
              mid_init$_d047b7641facca84,
              mid_format_4b712c2465e37e54,
              mid_getVector3DFormat_43a16a8b4506fabe,
              mid_getVector3DFormat_1ae216ab37378c98,
              mid_parse_7a448fc80928d881,
              mid_parse_1be531ac6832f604,
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
