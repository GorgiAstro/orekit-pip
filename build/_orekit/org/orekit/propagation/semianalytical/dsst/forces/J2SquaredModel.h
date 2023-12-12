#ifndef org_orekit_propagation_semianalytical_dsst_forces_J2SquaredModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_J2SquaredModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class FieldDSSTJ2SquaredClosedFormContext;
            class DSSTJ2SquaredClosedFormContext;
          }
        }
      }
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
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
          namespace forces {

            class J2SquaredModel : public ::java::lang::Object {
             public:
              enum {
                mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88,
                mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit J2SquaredModel(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              J2SquaredModel(const J2SquaredModel& obj) : ::java::lang::Object(obj) {}

              JArray< jdouble > computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > computeMeanEquinoctialSecondOrderTerms(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(J2SquaredModel);
            extern PyTypeObject *PY_TYPE(J2SquaredModel);

            class t_J2SquaredModel {
            public:
              PyObject_HEAD
              J2SquaredModel object;
              static PyObject *wrap_Object(const J2SquaredModel&);
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
