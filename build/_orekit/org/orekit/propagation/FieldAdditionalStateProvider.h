#ifndef org_orekit_propagation_FieldAdditionalStateProvider_H
#define org_orekit_propagation_FieldAdditionalStateProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace time {
      class FieldAbsoluteDate;
    }
    namespace propagation {
      class FieldSpacecraftState;
    }
  }
  namespace hipparchus {
    class CalculusFieldElement;
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace propagation {

      class FieldAdditionalStateProvider : public ::java::lang::Object {
       public:
        enum {
          mid_getAdditionalState_d4f2e3295d4ac943,
          mid_getName_d2c8eb4129821f0e,
          mid_init_357211ab77703f3f,
          mid_yields_712e981f67f3ccbe,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FieldAdditionalStateProvider(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FieldAdditionalStateProvider(const FieldAdditionalStateProvider& obj) : ::java::lang::Object(obj) {}

        JArray< ::org::hipparchus::CalculusFieldElement > getAdditionalState(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::java::lang::String getName() const;
        void init(const ::org::orekit::propagation::FieldSpacecraftState &, const ::org::orekit::time::FieldAbsoluteDate &) const;
        jboolean yields(const ::org::orekit::propagation::FieldSpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace propagation {
      extern PyType_Def PY_TYPE_DEF(FieldAdditionalStateProvider);
      extern PyTypeObject *PY_TYPE(FieldAdditionalStateProvider);

      class t_FieldAdditionalStateProvider {
      public:
        PyObject_HEAD
        FieldAdditionalStateProvider object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_FieldAdditionalStateProvider *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const FieldAdditionalStateProvider&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const FieldAdditionalStateProvider&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif
