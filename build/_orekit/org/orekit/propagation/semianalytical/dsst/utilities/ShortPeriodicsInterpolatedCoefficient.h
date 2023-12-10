#ifndef org_orekit_propagation_semianalytical_dsst_utilities_ShortPeriodicsInterpolatedCoefficient_H
#define org_orekit_propagation_semianalytical_dsst_utilities_ShortPeriodicsInterpolatedCoefficient_H

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
    }
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
                mid_init$_0a2a1ac2721c0336,
                mid_addGridPoint_9787c4eff1570d3f,
                mid_clearHistory_7ae3461a92a43152,
                mid_value_e586dea4c0bad69b,
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
