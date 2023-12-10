#ifndef org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H
#define org_orekit_propagation_semianalytical_dsst_forces_PythonAbstractGaussianContribution_H

#include "org/orekit/propagation/semianalytical/dsst/forces/AbstractGaussianContribution.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            class AuxiliaryElements;
            class FieldAuxiliaryElements;
          }
        }
      }
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ParameterDriver;
    }
    namespace forces {
      class ForceModel;
    }
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
                mid_init$_678a339a3ee778c2,
                mid_finalize_0fa09c18fee449d5,
                mid_getLLimits_04690aaa2b6db52c,
                mid_getLLimits_7442885516ff2293,
                mid_getParametersDriversWithoutMu_2afa36052df4765d,
                mid_pythonDecRef_0fa09c18fee449d5,
                mid_pythonExtension_492808a339bfa35f,
                mid_pythonExtension_3a8e7649f31fdb20,
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
