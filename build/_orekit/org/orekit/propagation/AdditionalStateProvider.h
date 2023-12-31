#ifndef org_orekit_propagation_AdditionalStateProvider_H
#define org_orekit_propagation_AdditionalStateProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace propagation {
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

      class AdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getAdditionalState_f227e5f48720b798,
          mid_getName_1c1fa1e935d6cdcf,
          mid_init_2d7f9a496c7e9781,
          mid_yields_97df9017614a1945,
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
