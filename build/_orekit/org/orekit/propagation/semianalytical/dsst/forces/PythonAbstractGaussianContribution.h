#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
            class FieldAuxiliaryElements;
          }
        }
      }
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
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
                mid_init$_9fd79603d9e48fb7,
                mid_finalize_0640e6acf969ed28,
                mid_getLLimits_8babb6fb34d6b24d,
                mid_getLLimits_233f032b171b49d2,
                mid_getParametersDriversWithoutMu_0d9551367f7ecdef,
                mid_pythonDecRef_0640e6acf969ed28,
                mid_pythonExtension_9e26256fb0d384a2,
                mid_pythonExtension_3cd6a6b354c6aa22,
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
