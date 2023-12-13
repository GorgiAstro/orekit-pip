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
        class OrekitStepInterpolator;
        class MultiSatFixedStepHandler;
        class MultiSatStepHandler;
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
            mid_init$_02c043bb1395e1f8,
            mid_finish_0e7c3032c7c93ed3,
            mid_getFixedStepHandler_d37df4d2f5d5d6ce,
            mid_getFixedTimeStep_b74f83833fdad017,
            mid_handleStep_0e7c3032c7c93ed3,
            mid_init_0365da66b6e36325,
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
