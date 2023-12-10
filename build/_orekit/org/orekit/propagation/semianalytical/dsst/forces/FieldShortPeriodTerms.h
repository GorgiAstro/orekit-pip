#ifndef org_orekit_propagation_semianalytical_dsst_forces_FieldShortPeriodTerms_H
#define org_orekit_propagation_semianalytical_dsst_forces_FieldShortPeriodTerms_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace orbits {
      class FieldOrbit;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
}
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
                mid_getCoefficients_8ceaa814d240672e,
                mid_getCoefficientsKeyPrefix_11b109bd155ca898,
                mid_value_32514bc2dbb6aee5,
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
