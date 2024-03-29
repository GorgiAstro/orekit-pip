#ifndef org_orekit_propagation_semianalytical_dsst_utilities_FieldShortPeriodicsInterpolatedCoefficient_H
#define org_orekit_propagation_semianalytical_dsst_utilities_FieldShortPeriodicsInterpolatedCoefficient_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
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

            class FieldShortPeriodicsInterpolatedCoefficient : public ::java::lang::Object {
             public:
              enum {
                mid_init$_8fd427ab23829bf5,
                mid_addGridPoint_8810238087e40b6c,
                mid_clearHistory_ff7cb6c242604316,
                mid_value_977531d905f4ab3f,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldShortPeriodicsInterpolatedCoefficient(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldShortPeriodicsInterpolatedCoefficient(const FieldShortPeriodicsInterpolatedCoefficient& obj) : ::java::lang::Object(obj) {}

              FieldShortPeriodicsInterpolatedCoefficient(jint);

              void addGridPoint(const ::org::orekit::time::FieldAbsoluteDate &, const JArray< ::org::hipparchus::CalculusFieldElement > &) const;
              void clearHistory() const;
              JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::orekit::time::FieldAbsoluteDate &) const;
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
            extern PyType_Def PY_TYPE_DEF(FieldShortPeriodicsInterpolatedCoefficient);
            extern PyTypeObject *PY_TYPE(FieldShortPeriodicsInterpolatedCoefficient);

            class t_FieldShortPeriodicsInterpolatedCoefficient {
            public:
              PyObject_HEAD
              FieldShortPeriodicsInterpolatedCoefficient object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldShortPeriodicsInterpolatedCoefficient *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldShortPeriodicsInterpolatedCoefficient&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldShortPeriodicsInterpolatedCoefficient&, PyTypeObject *);
              static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
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
