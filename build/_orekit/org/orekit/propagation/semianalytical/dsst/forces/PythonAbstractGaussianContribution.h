#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

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
namespace org {
  namespace orekit {
    namespace forces {
      class ForceModel;
    }
    namespace propagation {
      class SpacecraftState;
      class FieldSpacecraftState;
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
        }
      }
    }
    namespace utils {
      class ParameterDriver;
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

            class PythonAbstractGaussianContribution : public ::org::orekit::propagation::semianalytical::dsst::forces::AbstractGaussianContribution {
             public:
              enum {
                mid_init$_d5ff3cc52c55df24,
                mid_finalize_a1fa5dae97ea5ed2,
                mid_getLLimits_9b6fd6b3a2b07f62,
                mid_getLLimits_1abf2eee80dffc68,
                mid_getParametersDriversWithoutMu_e62d3bb06d56d7e3,
                mid_pythonDecRef_a1fa5dae97ea5ed2,
                mid_pythonExtension_6c0ce7e438e5ded4,
                mid_pythonExtension_3d7dd2314a0dd456,
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
