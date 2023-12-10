#ifndef org_orekit_files_sp3_SP3CoordinateHermiteInterpolator_H
#define org_orekit_files_sp3_SP3CoordinateHermiteInterpolator_H

#include "org/orekit/time/AbstractTimeInterpolator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Coordinate;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3CoordinateHermiteInterpolator : public ::org::orekit::time::AbstractTimeInterpolator {
         public:
          enum {
            mid_init$_d84bd519b18260a3,
            mid_interpolate_b09fb640eedbc33f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3CoordinateHermiteInterpolator(jobject obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3CoordinateHermiteInterpolator(const SP3CoordinateHermiteInterpolator& obj) : ::org::orekit::time::AbstractTimeInterpolator(obj) {}

          SP3CoordinateHermiteInterpolator(jint, jdouble, jboolean);
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3CoordinateHermiteInterpolator);
        extern PyTypeObject *PY_TYPE(SP3CoordinateHermiteInterpolator);

        class t_SP3CoordinateHermiteInterpolator {
        public:
          PyObject_HEAD
          SP3CoordinateHermiteInterpolator object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SP3CoordinateHermiteInterpolator *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SP3CoordinateHermiteInterpolator&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SP3CoordinateHermiteInterpolator&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
