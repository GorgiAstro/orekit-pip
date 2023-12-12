#ifndef org_orekit_propagation_sampling_OrekitStepNormalizer_H
#define org_orekit_propagation_sampling_OrekitStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitStepInterpolator;
        class OrekitFixedStepHandler;
        class OrekitStepHandler;
      }
      class SpacecraftState;
    }
    namespace time {
      class AbsoluteDate;
    }
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
      namespace sampling {

        class OrekitStepNormalizer : public ::java::lang::Object {
         public:
          enum {
            mid_init$_53f2c5a5fdcdc0f4,
            mid_finish_8655761ebf04b503,
            mid_getFixedStepHandler_85fd2e202487430e,
            mid_getFixedTimeStep_557b8123390d8d0c,
            mid_handleStep_729a66b1e94503de,
            mid_init_0472264ad6f40bc2,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitStepNormalizer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitStepNormalizer(const OrekitStepNormalizer& obj) : ::java::lang::Object(obj) {}

          OrekitStepNormalizer(jdouble, const ::org::orekit::propagation::sampling::OrekitFixedStepHandler &);

          void finish(const ::org::orekit::propagation::SpacecraftState &) const;
          ::org::orekit::propagation::sampling::OrekitFixedStepHandler getFixedStepHandler() const;
          jdouble getFixedTimeStep() const;
          void handleStep(const ::org::orekit::propagation::sampling::OrekitStepInterpolator &) const;
          void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
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
        extern PyType_Def PY_TYPE_DEF(OrekitStepNormalizer);
        extern PyTypeObject *PY_TYPE(OrekitStepNormalizer);

        class t_OrekitStepNormalizer {
        public:
          PyObject_HEAD
          OrekitStepNormalizer object;
          static PyObject *wrap_Object(const OrekitStepNormalizer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
