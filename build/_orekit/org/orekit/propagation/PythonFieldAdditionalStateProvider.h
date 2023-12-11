#ifndef org_orekit_propagation_PythonFieldAdditionalStateProvider_H
#define org_orekit_propagation_PythonFieldAdditionalStateProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class FieldAdditionalStateProvider;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
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

      class PythonFieldAdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_init$_0640e6acf969ed28,
          mid_finalize_0640e6acf969ed28,
          mid_getAdditionalState_00d4758be4cee3ce,
          mid_getName_3cffd47377eca18a,
          mid_init_811e49dad2467b67,
          mid_pythonDecRef_0640e6acf969ed28,
          mid_pythonExtension_9e26256fb0d384a2,
          mid_pythonExtension_3cd6a6b354c6aa22,
          mid_yield_4fda3059ab91dbfe,
          mid_yield__4fda3059ab91dbfe,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PythonFieldAdditionalStateProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PythonFieldAdditionalStateProvider(const PythonFieldAdditionalStateProvider& obj) : ::java::lang::Object(obj) {}

        PythonFieldAdditionalStateProvider();

        void finalize() const;
        JArray< ::org::hipparchus::CalculusFieldElement > getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::java::lang::String getName() const;
        void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        void pythonDecRef() const;
        jlong pythonExtension() const;
        void pythonExtension(jlong) const;
        jboolean yield(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        jboolean yield_(const ::org::orekit::propagation::FieldSpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(PythonFieldAdditionalStateProvider);
      extern PyTypeObject *PY_TYPE(PythonFieldAdditionalStateProvider);

      class t_PythonFieldAdditionalStateProvider {
      public:
        PyObject_HEAD
        PythonFieldAdditionalStateProvider object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_PythonFieldAdditionalStateProvider *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const PythonFieldAdditionalStateProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const PythonFieldAdditionalStateProvider&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
