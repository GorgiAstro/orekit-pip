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
    namespace propagation {
      class AdditionalStateProvider;
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

      class PythonAdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0fa09c18fee449d5,
          mid_finalize_0fa09c18fee449d5,
          mid_getAdditionalState_cb44069ef445f941,
          mid_getName_11b109bd155ca898,
          mid_init_826b4eda94da4e78,
          mid_pythonDecRef_0fa09c18fee449d5,
          mid_pythonExtension_492808a339bfa35f,
          mid_pythonExtension_3a8e7649f31fdb20,
          mid_yield_680f8463a473c3cb,
          mid_yield__680f8463a473c3cb,
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
