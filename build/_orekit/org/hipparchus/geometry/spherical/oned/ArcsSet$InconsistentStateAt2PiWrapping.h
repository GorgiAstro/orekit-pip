#ifndef org_hipparchus_geometry_spherical_oned_ArcsSet$InconsistentStateAt2PiWrapping_H
#define org_hipparchus_geometry_spherical_oned_ArcsSet$InconsistentStateAt2PiWrapping_H

#include "org/hipparchus/exception/MathIllegalArgumentException.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {
          class Sphere1D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          class ArcsSet$InconsistentStateAt2PiWrapping : public ::org::hipparchus::exception::MathIllegalArgumentException {
           public:
            enum {
              mid_init$_ff7cb6c242604316,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit ArcsSet$InconsistentStateAt2PiWrapping(jobject obj) : ::org::hipparchus::exception::MathIllegalArgumentException(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            ArcsSet$InconsistentStateAt2PiWrapping(const ArcsSet$InconsistentStateAt2PiWrapping& obj) : ::org::hipparchus::exception::MathIllegalArgumentException(obj) {}

            ArcsSet$InconsistentStateAt2PiWrapping();
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
      namespace spherical {
        namespace oned {
          extern PyType_Def PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping);
          extern PyTypeObject *PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping);

          class t_ArcsSet$InconsistentStateAt2PiWrapping {
          public:
            PyObject_HEAD
            ArcsSet$InconsistentStateAt2PiWrapping object;
            PyTypeObject *parameters[2];
            static PyTypeObject **parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping&, PyTypeObject *, PyTypeObject *);
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
