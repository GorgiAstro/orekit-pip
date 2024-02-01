#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace utils {
      class ParameterDriver;
    }
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
        }
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace forces {
      class ForceModel;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace util {
    class List;
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

            class PythonAbstractGaussianContribution : public ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution {
             public:
              enum {
                mid_init$_e31d0f82a9451a32,
                mid_finalize_ff7cb6c242604316,
                mid_getLLimits_5bf18b5e9ec57652,
                mid_getLLimits_15451c899b8436e1,
                mid_getParametersDriversWithoutMu_d751c1a57012b438,
                mid_pythonDecRef_ff7cb6c242604316,
                mid_pythonExtension_42c72b98e3c2e08a,
                mid_pythonExtension_f5bbab7e97879358,
                max_mid
              };

              static ::java::lang::Class *class$;
              static jmethodID *mids$;
              static bool live$;
              static jclass initializeClass(bool);

              explicit PythonAbstractGaussianContribution(jobject obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {
                if (obj != NULL && mids$ == NULL)
                  env->getClass(initializeClass);
              }
              PythonAbstractGaussianContribution(const PythonAbstractGaussianContribution& obj) : ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution(obj) {}

              PythonAbstractGaussianContribution(const ::java::lang::String &, jdouble, const ::org::orekit::forces::ForceModel &, jdouble);

              void finalize() const;
              JArray< jdouble > getLLimits(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &) const;
              JArray< ::org::hipparchus::CalculusFieldElement > getLLimits(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &) const;
              ::java::util::List getParametersDriversWithoutMu() const;
              void pythonDecRef() const;
              jlong pythonExtension() const;
              void pythonExtension(jlong) const;
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
            extern PyType_Def PY_TYPE_DEF(PythonAbstractGaussianContribution);
            extern PyTypeObject *PY_TYPE(PythonAbstractGaussianContribution);

            class t_PythonAbstractGaussianContribution {
            public:
              PyObject_HEAD
              PythonAbstractGaussianContribution object;
              static PyObject *wrap_Object(const PythonAbstractGaussianContribution&);
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
