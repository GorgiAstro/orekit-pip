#ifndef org_orekit_propagation_numerical_cr3bp_CR3BPConstants_H
#define org_orekit_propagation_numerical_cr3bp_CR3BPConstants_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
      class TimeScale;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {

          class CR3BPConstants : public ::java::lang::Object {
           public:
            enum {
              mid_getEarthMoonBarycenterSemiMajorAxis_dffb854ad9e23e35,
              mid_getJupiterSemiMajorAxis_dffb854ad9e23e35,
              mid_getMoonSemiMajorAxis_b74f83833fdad017,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CR3BPConstants(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CR3BPConstants(const CR3BPConstants& obj) : ::java::lang::Object(obj) {}

            static jdouble getEarthMoonBarycenterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &);
            static jdouble getJupiterSemiMajorAxis(const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::time::TimeScale &);
            static jdouble getMoonSemiMajorAxis();
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace numerical {
        namespace cr3bp {
          extern PyType_Def PY_TYPE_DEF(CR3BPConstants);
          extern PyTypeObject *PY_TYPE(CR3BPConstants);

          class t_CR3BPConstants {
          public:
            PyObject_HEAD
            CR3BPConstants object;
            static PyObject *wrap_Object(const CR3BPConstants&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
