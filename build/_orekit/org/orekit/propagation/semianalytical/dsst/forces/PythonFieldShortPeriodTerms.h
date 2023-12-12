#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonFieldShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonFieldShortPeriodTerms_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class FieldShortPeriodTerms;
          }
        }
      }
    }
    namespace orbits {
      class FieldOrbit;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {

            class PythonFieldShortPeriodTerms : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_finalize_0640e6acf969ed28,
                mid_getCoefficients_34654a764ba0e833,
                mid_getCoefficientsKeyPrefix_3cffd47377eca18a,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
                mid_value_e1d65e2f6c9d2422,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonFieldShortPeriodTerms(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonFieldShortPeriodTerms(const PythonFieldShortPeriodTerms& obj) : ::java::lang::Object(obj) {}

              PythonFieldShortPeriodTerms();

              void finalize() const;
              ::java::util::Map getCoefficients(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Set &) const;
              ::java::lang::String getCoefficientsKeyPrefix() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
              JArray< ::org::hipparchus::CalculusFieldElement > value(const ::org::orekit::orbits::FieldOrbit &) const;
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
          namespace forces {
            extern PyType_Def PY_TYPE_DEF(PythonFieldShortPeriodTerms);
            extern PyTypeObject *PY_TYPE(PythonFieldShortPeriodTerms);

            class t_PythonFieldShortPeriodTerms {
            public:
              PyObject_HEAD
              PythonFieldShortPeriodTerms object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_PythonFieldShortPeriodTerms *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const PythonFieldShortPeriodTerms&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const PythonFieldShortPeriodTerms&, PyTypeObject *);
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
