#ifndef org_hipparchus_geometry_euclidean_threed_RotationConvention_H
#define org_hipparchus_geometry_euclidean_threed_RotationConvention_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class RotationConvention;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          class RotationConvention : public ::java::lang::Enum {
           public:
            enum {
              mid_valueOf_f092df088d0600b1,
              mid_values_ff7f663b6d62aea2,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit RotationConvention(jobject obj) : ::java::lang::Enum(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            RotationConvention(const RotationConvention& obj) : ::java::lang::Enum(obj) {}

            static RotationConvention *FRAME_TRANSFORM;
            static RotationConvention *VECTOR_OPERATOR;

            static RotationConvention valueOf(const ::java::lang::String &);
            static JArray< RotationConvention > values();
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
          extern PyType_Def PY_TYPE_DEF(RotationConvention);
          extern PyTypeObject *PY_TYPE(RotationConvention);

          class t_RotationConvention {
          public:
            PyObject_HEAD
            RotationConvention object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_RotationConvention *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const RotationConvention&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const RotationConvention&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
