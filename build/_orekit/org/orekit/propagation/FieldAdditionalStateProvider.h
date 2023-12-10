#ifndef org_orekit_propagation_FieldAdditionalStateProvider_H
#define org_orekit_propagation_FieldAdditionalStateProvider_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    class CalculusFieldElement;
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
    }
    namespace time {
      class FieldAbsoluteDate;
    }
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
          mid_getAdditionalState_567ea49d447f98c8,
          mid_getName_11b109bd155ca898,
          mid_init_8e8de2be1664674a,
          mid_yields_1b0abd4f90ebd0eb,
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
