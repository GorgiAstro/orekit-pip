#ifndef org_orekit_propagation_AdditionalStateProvider_H
#define org_orekit_propagation_AdditionalStateProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class AdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getAdditionalState_e8a4ac02afc72623,
          mid_getName_d2c8eb4129821f0e,
          mid_init_14deaae988292d42,
          mid_yields_34f098c1d43e614c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit AdditionalStateProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        AdditionalStateProvider(const AdditionalStateProvider& obj) : ::java::lang::Object(obj) {}

        JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
        ::java::lang::String getName() const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        jboolean yields(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(AdditionalStateProvider);
      extern PyTypeObject *PY_TYPE(AdditionalStateProvider);

      class t_AdditionalStateProvider {
      public:
        PyObject_HEAD
        AdditionalStateProvider object;
        static PyObject *wrap_Object(const AdditionalStateProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
