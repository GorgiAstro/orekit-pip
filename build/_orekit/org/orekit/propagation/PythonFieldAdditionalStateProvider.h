#ifndef org_orekit_propagation_PythonFieldAdditionalStateProvider_H
#define org_orekit_propagation_PythonFieldAdditionalStateProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class FieldAdditionalStateProvider;
      class FieldSpacecraftState;
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
          mid_init$_ff7cb6c242604316,
          mid_finalize_ff7cb6c242604316,
          mid_getAdditionalState_d4f2e3295d4ac943,
          mid_getName_d2c8eb4129821f0e,
          mid_init_357211ab77703f3f,
          mid_pythonDecRef_ff7cb6c242604316,
          mid_pythonExtension_42c72b98e3c2e08a,
          mid_pythonExtension_f5bbab7e97879358,
          mid_yield_712e981f67f3ccbe,
          mid_yield__712e981f67f3ccbe,
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
