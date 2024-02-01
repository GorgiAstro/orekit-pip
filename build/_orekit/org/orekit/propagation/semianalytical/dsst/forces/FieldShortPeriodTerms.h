#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldShortPeriodTerms_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
    class Set;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
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

            class FieldShortPeriodTerms : public ::java::lang::Object {
             public:
              enum {
                mid_getCoefficients_832491c80c3ebc6f,
                mid_getCoefficientsKeyPrefix_d2c8eb4129821f0e,
                mid_value_9f757583fee38862,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit FieldShortPeriodTerms(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              FieldShortPeriodTerms(const FieldShortPeriodTerms& obj) : ::java::lang::Object(obj) {}

              ::java::util::Map getCoefficients(const ::org::orekit::time::FieldAbsoluteDate &, const ::java::util::Set &) const;
              ::java::lang::String getCoefficientsKeyPrefix() const;
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
            extern PyType_Def PY_TYPE_DEF(FieldShortPeriodTerms);
            extern PyTypeObject *PY_TYPE(FieldShortPeriodTerms);

            class t_FieldShortPeriodTerms {
            public:
              PyObject_HEAD
              FieldShortPeriodTerms object;
              PyTypeObject *parameters[1];
              static PyTypeObject **parameters_(t_FieldShortPeriodTerms *self)
              {
                return (PyTypeObject **) &(self->parameters);
              }
              static PyObject *wrap_Object(const FieldShortPeriodTerms&);
              static PyObject *wrap_jobject(const jobject&);
              static PyObject *wrap_Object(const FieldShortPeriodTerms&, PyTypeObject *);
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
