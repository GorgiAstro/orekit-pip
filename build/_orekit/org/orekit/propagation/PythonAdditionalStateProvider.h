#ifndef org_orekit_propagation_PythonAdditionalStateProvider_H
#define org_orekit_propagation_PythonAdditionalStateProvider_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Throwable;
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace time {
      class AbsoluteDate;
    }
    namespace propagation {
      class SpacecraftState;
      class AdditionalStateProvider;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class PythonAdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getAdditionalState_2a145999b8c9a41d,
          mid_getName_3cffd47377eca18a,
          mid_init_0472264ad6f40bc2,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_yield_abdf3beb789bbd4e,
          mid_yield__abdf3beb789bbd4e,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonAdditionalStateProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonAdditionalStateProvider(const PythonAdditionalStateProvider& obj) : ::java::lang::Object(obj) {}

        PythonAdditionalStateProvider();

        void finalize() const;
        JArray< jdouble > getAdditionalState(const ::org::orekit::propagation::SpacecraftState &) const;
        ::java::lang::String getName() const;
        void init(const ::org::orekit::propagation::SpacecraftState &, const ::org::orekit::time::AbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        jboolean yield(const ::org::orekit::propagation::SpacecraftState &) const;
        jboolean yield_(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonAdditionalStateProvider);
      extern PyTypeObject *PY_TYPE(PythonAdditionalStateProvider);

      class t_PythonAdditionalStateProvider {
      public:
        PyObject_HEAD
        PythonAdditionalStateProvider object;
        static PyObject *wrap_Object(const PythonAdditionalStateProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
