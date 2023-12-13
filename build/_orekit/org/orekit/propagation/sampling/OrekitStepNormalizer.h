#ifndef org_orekit_propagation_sampling_OrekitStepNormalizer_H
#define org_orekit_propagation_sampling_OrekitStepNormalizer_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {
        class OrekitFixedStepHandler;
        class OrekitStepInterpolator;
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
            mid_init$_6e0fc70b103d8967,
            mid_finish_280c3390961e0a50,
            mid_getFixedStepHandler_a92bd23f1397a8a9,
            mid_getFixedTimeStep_b74f83833fdad017,
            mid_handleStep_13c351c10f00bcd7,
            mid_init_2d7f9a496c7e9781,
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
