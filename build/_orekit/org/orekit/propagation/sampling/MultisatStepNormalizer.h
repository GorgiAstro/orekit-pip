#ifndef org_orekit_propagation_sampling_MultisatStepNormalizer_H
#define org_orekit_propagation_sampling_MultisatStepNormalizer_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class MultiSatFixedStepHandler;
        class MultiSatStepHandler;
        class OrekitStepInterpolator;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        class MultisatStepNormalizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f9ccce40f0a0ea38,
            mid_finish_de3e021e7266b71e,
            mid_getFixedStepHandler_b7499f537ca23947,
            mid_getFixedTimeStep_dff5885c2c873297,
            mid_handleStep_de3e021e7266b71e,
            mid_init_741f4d97cd6d356c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultisatStepNormalizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultisatStepNormalizer(const MultisatStepNormalizer& obj) : ::java::lang::Object(obj) {}

          MultisatStepNormalizer(jdouble, const ::org::orekit::propagation::sampling::MultiSatFixedStepHandler &);

          void finish(const ::java::util::List &) const;
          ::org::orekit::propagation::sampling::MultiSatFixedStepHandler getFixedStepHandler() const;
          jdouble getFixedTimeStep() const;
          void handleStep(const ::java::util::List &) const;
          void init(const ::java::util::List &, const ::org::orekit::time::AbsoluteDate &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        extern PyType_Def PY_TYPE_DEF(MultisatStepNormalizer);
        extern PyTypeObject *PY_TYPE(MultisatStepNormalizer);

        class t_MultisatStepNormalizer {
        public:
          PyObject_HEAD
          MultisatStepNormalizer object;
          static PyObject *wrap_Object(const MultisatStepNormalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
