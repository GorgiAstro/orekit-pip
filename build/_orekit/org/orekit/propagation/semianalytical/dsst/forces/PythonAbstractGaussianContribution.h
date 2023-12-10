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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class FieldAuxiliaryElements;
            class AuxiliaryElements;
          }
        }
      }
      class SpacecraftState;
      class FieldSpacecraftState;
    }
    namespace forces {
      class ForceModel;
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
                mid_init$_90bfc53454f91805,
                mid_finalize_7ae3461a92a43152,
                mid_getLLimits_4ece4b82b4394674,
                mid_getLLimits_f53f254b7878e0dd,
                mid_getParametersDriversWithoutMu_a6156df500549a58,
                mid_pythonDecRef_7ae3461a92a43152,
                mid_pythonExtension_a27fc9afd27e559d,
                mid_pythonExtension_fefb08975c10f0a1,
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
              JArray< ::org::hipparchus::CalculusFieldElement > getLLimits(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::FieldAuxiliaryElements &) const;
              JArray< jdouble > getLLimits(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::propagation::semianalytical::dsst::utilities::AuxiliaryElements &) const;
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
