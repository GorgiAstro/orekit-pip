#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonFieldShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonFieldShortPeriodTerms_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace orbits {
      class FieldOrbit;
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
  }
}
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
                mid_init$_0fa09c18fee449d5,
                mid_finalize_0fa09c18fee449d5,
                mid_getCoefficients_8ceaa814d240672e,
                mid_getCoefficientsKeyPrefix_11b109bd155ca898,
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
                mid_value_32514bc2dbb6aee5,
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
