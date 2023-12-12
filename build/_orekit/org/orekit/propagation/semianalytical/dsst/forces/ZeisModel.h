#ifndef org_orekit_propagation_semianalytical_dsst_forces_ZeisModel_H
#define org_orekit_propagation_semianalytical_dsst_forces_ZeisModel_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace forces {
            class J2SquaredModel;
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

            class ZeisModel : public ::java::lang::Object {
             public:
              enum {
                mid_init$_0640e6acf969ed28,
                mid_computeC2Z_a95be6a864781ae1,
                mid_computeC2Z_e0c6c5b6e976ac94,
                mid_computeMeanEquinoctialSecondOrderTerms_3cadce1f0ff01a88,
                mid_computeMeanEquinoctialSecondOrderTerms_b35994dcdbf40b4e,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit ZeisModel(jobject obj) : ::java::lang::Object(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              ZeisModel(const ZeisModel& obj) : ::java::lang::Object(obj) {}

              ZeisModel();

              jdouble computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::DSSTJ2SquaredClosedFormContext &) const;
              ::org::hipparchus::CalculusFieldElement computeC2Z(const ::org::orekit::propagation::semianalytical::dsst::forces::FieldDSSTJ2SquaredClosedFormContext &) const;
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
            extern PyType_Def PY_TYPE_DEF(ZeisModel);
            extern PyTypeObject *PY_TYPE(ZeisModel);

            class t_ZeisModel {
            public:
              PyObject_HEAD
              ZeisModel object;
              static PyObject *wrap_Object(const ZeisModel&);
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
