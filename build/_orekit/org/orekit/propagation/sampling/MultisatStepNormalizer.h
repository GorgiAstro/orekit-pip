#ifndef org_orekit_propagation_sampling_MultisatStepNormalizer_H
#define org_orekit_propagation_sampling_MultisatStepNormalizer_H

#include "java/lang/Object.h"

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
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
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
            mid_init$_26b8003b7e15d197,
            mid_finish_4ccaedadb068bdeb,
            mid_getFixedStepHandler_3a1aa72f37e261e7,
            mid_getFixedTimeStep_557b8123390d8d0c,
            mid_handleStep_4ccaedadb068bdeb,
            mid_init_98fa7d48d3b7f88a,
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
