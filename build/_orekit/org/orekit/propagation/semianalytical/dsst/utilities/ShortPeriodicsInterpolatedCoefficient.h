#ifndef org_orekit_propagation_semianalytical_dsst_utilities_ShortPeriodicsInterpolatedCoefficient_H
#define org_orekit_propagation_semianalytical_dsst_utilities_ShortPeriodicsInterpolatedCoefficient_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
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
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            class ShortPeriodicsInterpolatedCoefficient : public ::java::lang::Object {
             public:
              enum {
                mid_init$_8fd427ab23829bf5,
                mid_addGridPoint_03daf63e1af251cd,
                mid_clearHistory_ff7cb6c242604316,
                mid_value_9b63d19c31941c0f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ShortPeriodicsInterpolatedCoefficient(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ShortPeriodicsInterpolatedCoefficient(const ShortPeriodicsInterpolatedCoefficient& obj) : ::java::lang::Object(obj) {}

              ShortPeriodicsInterpolatedCoefficient(jint);

              void addGridPoint(const ::org::orekit::time::AbsoluteDate &, const JArray< jdouble > &) const;
              void clearHistory() const;
              JArray< jdouble > value(const ::org::orekit::time::AbsoluteDate &) const;
            };
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            extern PyType_Def PY_TYPE_DEF(ShortPeriodicsInterpolatedCoefficient);
            extern PyTypeObject *PY_TYPE(ShortPeriodicsInterpolatedCoefficient);

            class t_ShortPeriodicsInterpolatedCoefficient {
            public:
              PyObject_HEAD
              ShortPeriodicsInterpolatedCoefficient object;
              static PyObject *wrap_Object(const ShortPeriodicsInterpolatedCoefficient&);
              static PyObject *wrap_jobject(const jobject&);
              static void install(PyObject *module);
              static void initialize(PyObject *module);
            };
          }
        }
      }
    }
  }
}

#endif
